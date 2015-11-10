import sys
import argparse
import os
import lxml.etree as etree
import re
from subprocess import check_output
from antlr4.InputStream import InputStream
import json

from util import pretty_print, xslt,ppr
from antrl_helper import antrl_parse, tree2xml
from xml_helper import resolve_vars, fix_self_referencing_assigns, create_or_blocks, set_pritool_descriptions, remove_duplicate_gotolines
from preprocess_helper import preprocess_calc_file
from converter_helper import process_converter

outfile=None



def write_row(row):
    print '"' + '","'.join(row) + '"'
    outfile.write( '"' + '","'.join(row) + '"')
    outfile.write( '\n')


def render_field(form,field,mefform,meffield,func='',meftable=''):
    for ptfield in ptform_xml.xpath('//field[@id="%s"][field_attributes/cid_mapping]' % field ):
        context =  ptfield.xpath('../..')[0].tag + ptfield.get("context","")
        desc = ptfield.xpath("./field_attributes/main/name_and_descriptions/description/@value")
        formml_form_id = (ptfield.xpath("./field_attributes/cid_mapping/formml_form_id/@value") or [''])[0]
        formml_field_id =(ptfield.xpath("./field_attributes/cid_mapping/formml_field_id/@value") or [''])[0]
        formml_table_id =( ptfield.xpath("./field_attributes/cid_mapping/formml_table_id/@value") or [''])[0]
        formml_field_on_value = ptfield.xpath("./field_attributes/cid_mapping/formml_field_on_value/@value")
        mef = "%s/%s/%s" % (mefform, meftable, meffield) if meftable else "%s/%s" % (mefform, meffield)
        cid =  "%s/%s/%s" % (formml_form_id, formml_table_id, formml_field_id) if formml_table_id else "%s/%s" % (formml_form_id, formml_field_id)

        error = '' if mef == cid else "ERROR"

        write_row([
            error,
            "%s.%s" % ( form,field),
            mef,
            '' if func =='ID' else func,
            context,
            '' if not desc else   desc[0],
            cid,
            '' if not formml_field_on_value else   formml_field_on_value[0],

            ])

def getOutputValueFieldID(node):
    if node.xpath('.//ID'):
        return   node.xpath(".//ID/@val")[0].upper()
    else:
        ifstruct = node.xpath('./ancestor::IfStruct')
        return ifstruct[-1].xpath('.//ID/@val')[0].upper()

if __name__ == '__main__':

    parser = argparse.ArgumentParser()

    parser.add_argument('--pref', action='store', dest='pref_file',
                        help='The preferences file to use.',
                        required=False,
                        default='convert.pref')

    parser.add_argument("--debug", help="Show parsing steps", default=True)
    arg = parser.parse_args()
    debug = arg.debug
    with open(arg.pref_file) as settings_file:
        settings = json.load(settings_file)

    with open('irs1041.inc') as f:
        preprocessed = f.read()

    input_stream = InputStream(preprocessed)

    tree = antrl_parse(input_stream, debug)

    root = tree2xml(tree)

    if debug:
        print "##ParseTreeWalker##"
        pretty_print(root)

    ptformset_xml = etree.parse(settings['ptformset_xml_path'])

    with open('cid.csv','w') as outfile:

        write_row(["ERROR","Form.Field","MEF",'Function','context','PT description','CID','formml_field_on_value'])
        for section in root.xpath("//Section"):
            form = section.xpath("FormDecl//ID[not(name(..)='ArrayIndex')]/@val")[-1].upper()
            form_source = os.path.abspath(settings['form_source'] +  ptformset_xml.xpath("/formsetdoc/form_identification_list/form_identification[@form_id='%s']/@form_source" % form)[0].replace("\\","/"))
            ptform_xml = etree.parse(form_source)

            print "\n\n\n######### FORM SOURCE: " , form_source,"\n\n\n"

            roottag = section.xpath(".//WithNewTag")[0]
            mefform = roottag.get('val')
            roottag.tag = 'RootWithNewTag'

            for statement in roottag.getchildren():
                test =  statement.xpath('.//WithNewTag[//OUTPUTVALUE]')
                if test:
                    for each in test :
                        meftable = each.get('val')
                        for outputvalue in each.xpath('.//OUTPUTVALUE/ArgList'):
                            meffield=outputvalue.getchildren()[0].get('val')
                            field =  getOutputValueFieldID(outputvalue)
                            func = outputvalue.getchildren()[1].tag
                            render_field(form,field,mefform,meffield,meftable=meftable)
                else:
                    for each in statement.xpath('.//WithNewTag'):
                        meffield = each.get('val')
                        field = each.xpath('./ancestor::IfStruct//ID/@val')[0]
                        render_field(form,field,mefform,meffield)

                    for each in statement.xpath('./descendant-or-self::OUTPUTVALUE/ArgList'):
                        meffield = each.getchildren()[0].get('val')
                        field =  getOutputValueFieldID(each)
                        func = each.getchildren()[1].tag
                        render_field(form,field,mefform,meffield,func)




