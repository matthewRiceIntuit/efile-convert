import sys
import argparse
import lxml.etree as etree
import re
from subprocess import check_output
from antlr4.InputStream import InputStream
import json

from util import pretty_print, xslt
from antrl_helper import antrl_parse, tree2xml
from xml_helper import resolve_vars, fix_self_referencing_assigns, create_or_blocks, set_pritool_descriptions, remove_duplicate_gotolines
from preprocess_helper import preprocess_calc_file
from converter_helper import process_converter

def write_row(row):
    import ipdb;ipdb.set_trace()
    print '"' + '","'.join(row) + '"'

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



    for each in root.xpath('//OUTPUTVALUE/ArgList'):

        write_row([
            each.getchildren()[0].get('val'),
            each.getchildren()[1].get('val')
        ])


