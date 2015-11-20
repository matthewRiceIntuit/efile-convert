import sys
import argparse
import os
import lxml.etree as etree
import re
from subprocess import check_output
from antlr4.InputStream import InputStream
import json

from schema import get_schema_file
from util import pretty_print, xslt, ppr
from antrl_helper import antrl_parse, tree2xml
from xml_helper import resolve_vars, fix_self_referencing_assigns, create_or_blocks, set_pritool_descriptions, remove_duplicate_gotolines
from preprocess_helper import preprocess_calc_file
from converter_helper import process_converter
from header import get_header
from verify import verify

outfile = None
settings = None
output = None
fields = set()
namespaces = {'xsd': 'http://www.w3.org/2001/XMLSchema'}


def write_row(error, tps, mef, func, cid, the_type, field_on_value=None, ref_name=None):
    field = etree.SubElement(output, "Field")
    if ref_name:
        field.set("RefName", ref_name[0])

    field.set("Source", cid)
    if not error:
        error = "Mapped"
    field.set("SourceType", error)
    field.set("TargetPath", mef)
    field.set("TargetType", the_type.replace("xsd:",'') or "ERROR")

    if func:
        field.set("func", func)
    if field_on_value:
        field.set("field_on_value", field_on_value)
    field.set("tps", tps)


def render_field(form, field, mefform, meffield, func='', meftable='', ref_name=''):
    found = False

    if meftable:
        if not output.xpath("//Field[@Source='%s']" % meftable):
            tablefield = etree.SubElement(output, "Field")
            tablefield.set("Source", meftable.replace("/",''))
            tablefield.set("TargetPath", meftable)
            tablefield.set("SourceType", "TableStart")

    mef = "%s/%s" % ( meftable, meffield) if meftable else "%s" % ( meffield)
    if mef in fields:
        return
    fields.add(mef)

    try:

        if not meftable:
            the_type = schema.findall('//xsd:element[@name="%s"]' % meffield, namespaces)[0]
        else:
            path=""
            for name in meftable.split('/'):
                path +='//xsd:element[@name="%s"]' % name
            the_type = schema.findall(path+'//xsd:element[@name="%s"]' %  meffield, namespaces)[0]
        if the_type.get('type'):
            the_type = the_type.get('type')
        else:
            the_type = the_type.xpath(".//*/@base")[0]

    except Exception:
        try:
            the_type = schema.findall('//xsd:element[@name="%s"]' %  meffield, namespaces)[0].get('type')
        except Exception:
            the_type = "UNKNOWN"

    for ptfield in ptform_xml.xpath('//field[@id="%s"][field_attributes/cid_mapping]' % field):
        found = True
        context = ptfield.xpath('../..')[0].tag + ptfield.get("context", "")
        desc = ptfield.xpath("./field_attributes/main/name_and_descriptions/description/@value")
        formml_form_id = (ptfield.xpath("./field_attributes/cid_mapping/formml_form_id/@value") or [''])[0]
        formml_field_id = (ptfield.xpath("./field_attributes/cid_mapping/formml_field_id/@value") or [''])[0]
        formml_table_id = ( ptfield.xpath("./field_attributes/cid_mapping/formml_table_id/@value") or [''])[0]
        formml_field_on_value = ptfield.xpath("./field_attributes/cid_mapping/formml_field_on_value/@value")
        cid = "%s/%s" % ( formml_table_id, formml_field_id) if formml_table_id else "%s" % ( formml_field_id)

        error = '' if mef.endswith(cid) else "ForReview"
        write_row(
            error,
            "%s.%s" % ( form, field),
            mef,
            '' if func == 'ID' else func,
            cid,
            the_type,
            '' if not formml_field_on_value else   formml_field_on_value[0],
            ref_name=ref_name

        )
        return
    if not found:
        write_row(
            "NO CID",
            "%s.%s" % ( form, field),
            mef,
            '' if func == 'ID' else func,
            mef,
            the_type,
            ref_name=ref_name,
        )


def getOutputValueFieldID(form, node):
    if node.xpath('.//Sub_ID'):
        return node.xpath(".//ID/@val")[0].upper(), node.xpath(".//Sub_ID/@val")[0].upper()

    elif node.xpath('.//ID'):
        return form, node.xpath(".//ID/@val")[0].upper()
    elif len(node.xpath(".//String"))==2:
        return form, node.xpath(".//String[2]/@val")[0].upper()
    else:
        ifstruct = node.xpath('./ancestor::IfStruct')
        try:
            return form, ifstruct[-1].xpath('.//ID/@val')[0].upper()
        except Exception:
            return form, "ERROR"


if __name__ == '__main__':

    parser = argparse.ArgumentParser()

    parser.add_argument('--pref', action='store', dest='pref_file',
                        help='The preferences file to use.',
                        required=False,
                        default='convert.pref')
    parser.add_argument('--pre', action='store', dest='use_preparsed',
                        help='Use the pre-parsed xml.',
                        required=False,
                        default=False)

    parser.add_argument("--debug", help="Show parsing steps", default=False)
    arg = parser.parse_args()
    debug = arg.debug
    with open(arg.pref_file) as settings_file:
        settings = json.load(settings_file)

    if arg.use_preparsed:
        root = etree.parse("output/preparsed.xml")
    else:
        with open(settings.get("preprocessed")) as f:
            preprocessed = f.read()

        input_stream = InputStream(preprocessed)

        tree = antrl_parse(input_stream, debug)

        root = tree2xml(tree, debug)


        for each in root.xpath('//CONCAT'):
            each.set('val', "__".join(each.xpath("ArgList/*[2]/@val")))
            each.tag = 'String'
            each.remove(each.getchildren()[0])

        with open('output/preparsed.xml', 'w') as f:
            f.write(etree.tostring(root, pretty_print = True))

    if debug:
        print "##ParseTreeWalker##"
        pretty_print(root)

    ptformset_xml = etree.parse(settings['ptformset_xml_path'])

    for section in root.xpath("//Section"):
        output = etree.Element("Document")

        try:
            form = section.xpath("FormDecl//ID[not(name(..)='ArrayIndex')]/@val")[-1].upper()
            print "## TPS FORM: ", form
            form_source = os.path.abspath(settings['form_source'] + ptformset_xml.xpath("/formsetdoc/form_identification_list/form_identification[@form_id='%s']/@form_source" % form)[0].replace("\\", "/"))
            ptform_xml = etree.parse(form_source)

            print "## FORM SOURCE: ", form_source
        except Exception:
            continue
            form = "UNKNOWN"

        try:
            roottag = section.xpath(".//WithNewTag")[0]
        except Exception:
            print "#### NO ROOT WITHNEWTAG ####"
            continue

        mefform = roottag.getchildren()[0].get('val')
        print "## MEF form ##: ", mefform
        roottag.tag = 'RootWithNewTag'

        schema_file = get_schema_file(settings, mefform)
        print "## schema ###: ", schema_file
        if schema_file:
            schema = etree.parse(schema_file)
        else:
            schema  = etree.fromstring("<xml/>")


        for statement in roottag.getchildren():

            test = statement.xpath('.//WithNewTag[.//OUTPUTVALUE]')
            if test:
                for each in test:
                    import ipdb;ipdb.set_trace()
                    meftable = "%s/%s"  %(statement.xpath('./String/@val')[0] , each.getchildren()[0].get('val'))
                    for outputvalue in each.xpath('.//OUTPUTVALUE/ArgList'):
                        meffield = outputvalue.getchildren()[0].get('val')
                        _form, field = getOutputValueFieldID(form, outputvalue)
                        func = outputvalue.getchildren()[1].tag
                        render_field(_form, field, mefform, meffield, meftable=meftable)
            else:
                for each in statement.xpath('.//WithNewTag'):
                    meffield = each.getchildren()[0].get('val')
                    try:
                        field = each.xpath('./ancestor::IfStruct//ID/@val')[0]
                    except Exception:
                        continue
                    render_field(form, field, mefform, meffield, ref_name=each.xpath("./SETATTRIBUTE/ArgList[String[1]/@val='referenceDocumentName']/String[2]/@val"))

                for each in statement.xpath('./descendant-or-self::OUTPUTVALUE/ArgList'):
                    meffield = each.getchildren()[0].get('val')
                    _form, field = getOutputValueFieldID(form, each)
                    func = each.getchildren()[1].tag
                    render_field(_form, field, mefform, meffield, func)

        try:
            os.mkdir('output/%s_tps' % (settings.get('mefformset')))
            os.mkdir('output/%s' % (settings.get('mefformset')))
        except Exception:
            pass

        if debug:
            pretty_print(output)

        with open('output/%s_tps/%s_output.xml' % (settings.get('mefformset'),mefform), 'w') as f:
            f.write(etree.tostring(output,pretty_print=True))

        verify(settings, mefform, output)

        with open('output/%s/%s.xml' %  (settings.get('mefformset'),mefform), 'w') as f:
            f.write(get_header(settings.get("mefformset"), mefform))
            for each in output.getchildren():
                if 'tps' in each.attrib:
                    each.attrib.pop('tps')
                if 'func' in each.attrib:
                    each.attrib.pop('func')
                if 'field_on_value' in each.attrib:
                    each.attrib.pop('field_on_value')
                f.write('\t' + etree.tostring(each) + '\n')
            f.write("</Document>")



