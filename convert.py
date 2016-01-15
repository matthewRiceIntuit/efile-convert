import sys
import argparse
import os
import lxml.etree as etree
from copy import deepcopy
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


def write_row(error, tps, mef, func, cid, the_type='', field_on_value=None, ref_name=None,altid=''):
    field = etree.SubElement(output, "Field")
    if ref_name:
        field.set("RefName", ref_name[0])

    field.set("Source", cid)
    if not error:
        error = "Mapped"
    field.set("SourceType", error)
    field.set("TargetPath", mef)
    try:
        field.set("TargetType", the_type.replace("xsd:",'') or "ERROR")
    except Exception, e:
        field.set("TargetType", "ERROR")

    if func:
        field.set("func", func)
    if field_on_value:
        field.set("field_on_value", field_on_value)
    field.set("tps", tps)
    if altid:
        field.set("alt_tps_id",altid)


def render_field(form, field, mefform, meffield, func='', meftable='', ref_name='', form_source=''):
    found = False

    if meftable:
        if not output.xpath("//Field[@TargetPath='%s']" % meftable):
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
            if meffield == 'Desc':
                the_type="LineExplanationType"
            elif meffield=="Amt":
                the_type="USAmountType"
            else:
                the_type = "UNKNOWN"

    for ptfield in ptform_xml.xpath('//field[@id="%s"][field_attributes/cid_mapping]' % field):
        found = True
        context = ptfield.xpath('../..')[0].tag + ptfield.get("context", "")
        desc = ptfield.xpath("./field_attributes/main/name_and_descriptions/description/@value")
        altid =  (ptfield.xpath("./field_attributes/image/refined_image/alternate_field_id/@value") or  [''])[0]
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
            ref_name=ref_name ,
            altid=altid

        )
        return
    if not found:
        if field=="PARTOFRETURN":
            return
        write_row(
            "NO CID",
            "%s.%s" % ( form, field),
            mef,
            '' if func == 'ID' else func,
            "%s/%s" % ( meftable.replace('/',''), meffield) if meftable else "%s" % ( meffield),
            the_type,
            ref_name=ref_name,
        )
        if "common" in form_source:
            return
        print form_source
        print form,".",field
        print mef
        print the_type
        print ref_name
        import ipdb;ipdb.set_trace()


def getOutputValueFieldID(form, node):
    if node.xpath('.//Sub_ID'):
        return node.xpath(".//ID/@val")[0].upper(), node.xpath(".//Sub_ID/@val")[0].upper()

    elif node.xpath('.//ID'):
        return form, node.xpath(".//ID/@val")[0].upper()
    else:
        try:
            if not node.xpath("*[2]/@val")[0] in ["X","0","false",'true']:
                return form, "STRING(%s)" % node.xpath("*[2]/@val")[0]
            else:
                return form, node.xpath('./ancestor::IfStruct//ID/@val')[0].upper()
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


    ### Clean up procedure calls
    main = root.xpath("/CALC/Section[MainDecl]")[0]
    main.getparent().remove(main)

    for proc in root.xpath("//ProcedureID"):
        node = root.xpath("//%s" % proc.get("val").upper())
        if node:
            print "Shared Procedure: ", proc.get("val")
            proc.getparent().tag = "CALLED_PROCEDURE"
            try:
                proc=proc.xpath("../WithNewTag|../*[.//WithNewTag]")[0]
            except Exception:
                continue
            newbie = deepcopy(proc)
            node[0].append(newbie)


    for section in root.xpath("//Section"):
        output = etree.Element("Document")

        try:
            form = section.xpath("ProcedureID/FormDecl//ID[not(name(..)='ArrayIndex')]/@val")[-1].upper()
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

        documentName = roottag.xpath("./SETATTRIBUTE/ArgList[String[@val='documentName']]/String[2]/@val")

        schema_file = get_schema_file(settings, mefform, documentName )
        print "## schema ###: ", schema_file
        if schema_file:
            schema = etree.parse(schema_file)
        else:
            schema  = etree.fromstring("<xml/>")

        for each in roottag.xpath(".//OUTPUTLITERAL"):
            try:
                meffield = each.xpath('./ancestor::WithNewTag')[-1].xpath('./String/@val')[0]
            except Exception:
                meffield = each.xpath('./ancestor::RootWithNewTag')[-1].xpath('./String/@val')[0]

            try:
                ref_name=each.xpath('./ancestor::WithNewTag')[-1].xpath("./SETATTRIBUTE/ArgList[String[1]/@val='referenceDocumentName']/String[2]/@val")
            except Exception:
                ref_name=each.xpath('./ancestor::RootWithNewTag')[-1].xpath("./SETATTRIBUTE/ArgList[String[1]/@val='referenceDocumentName']/String[2]/@val")

            field =  each.xpath('./ancestor::IfStruct//ID/@val')[0].upper()

            meftable = '/'.join(each.xpath('./ancestor::WithNewTag/String[1]/@val')[:-1])


            render_field(form, field, mefform,meffield, meftable=meftable,ref_name=ref_name,form_source=form_source )

        for each in roottag.xpath(".//OUTPUTVALUE/ArgList"):
            meffield = each.getchildren()[0].get('val')

            _form, field = getOutputValueFieldID(form, each)
            func = each.getchildren()[1].tag

            meftable = '/'.join(each.xpath('./ancestor::WithNewTag/String[1]/@val'))

            render_field(_form, field, mefform,meffield, meftable=meftable , func=func,form_source=form_source)


        if debug:
            pretty_print(output)


        #continue

        try:
            os.mkdir('output/%s_tps' % (settings.get('mefformset')))
            os.mkdir('output/%s' % (settings.get('mefformset')))
        except Exception:
            pass

        alist=[]
        with open('output/%s_tps/%s_output.xml' % (settings.get('mefformset'),mefform), 'w') as f:
            f.write(get_header(settings.get("mefformset"), mefform))
            for each in output.getchildren():
                if 'tps' in each.attrib:
                    alist.append(each.attrib['tps'].split('.')[-1])
                f.write('\t' + etree.tostring(each) + '\n')
            for ptfield in ptform_xml.xpath('//field[field_attributes/cid_mapping]'):
                if ptfield.attrib['id'] in alist:
                    continue
                altid = (ptfield.xpath("./field_attributes/image/refined_image/alternate_field_id/@value") or [''])[0]
                cid =  (ptfield.xpath("./field_attributes/cid_mapping/formml_field_id/@value") or [''])[0]
                f.write("\t<tps id='{0}'  type='{1}' {2} {3}/>\n".format(ptfield.attrib['id'],
                                                                            (ptfield.xpath("./field_attributes/main/type/@value") or [''])[0],
                                                                            "" if not altid else "altid='%s' " % altid.upper(),
                                                                            "" if not cid else "cid='%s' " % cid
                                                                            ))



            f.write("</Document>")

        verify(settings, mefform, output, documentName)

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



