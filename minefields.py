from argparse import ArgumentParser
import pickle
import sys
import pprint
from pdfminer.pdfparser import PDFParser
from pdfminer.pdfdocument import PDFDocument
from pdfminer.pdftypes import resolve1, PDFObjRef

def gettext(field):
    try:
        return field.get("T").decode('utf-16').replace("[0]",'')
    except Exception:
        return field.get("T").replace("[0]",'')
def load_form(filename):
    """Load pdf form contents into a nested list of name/value tuples"""
    with open(filename, 'rb') as file:
        parser = PDFParser(file)
        doc = PDFDocument(parser)
        import ipdb;ipdb.set_trace()
        # parser.set_document(doc)
        #doc.set_parser(parser)
        #doc.initialize()
        return [load_fields(resolve1(f)) for f in
                resolve1(doc.catalog['AcroForm'])['Fields']]


def load_fields(field):
    """Recursively load form fields"""
    form = field.get('Kids', None)
    if form:
        f = gettext(field)
        #print 'FORM: #', f,'#'
        if 'Page2' in f:
            return
        return [load_fields(resolve1(f)) for f in form]
    else:
        name, value = field.get('T'), field.get('V')
        # if name=='OrdinaryDividendsAmt[0]':
        #    import ipdb;ipdb.set_trace()
        arect = field.get('Rect')
        print "<div style='background-color:green;position:absolute;left:%spx;top:%spx;width:%spx;height:%spx;'>%s</div>" % ( (arect[0])*2,(1200-arect[1])*2, (arect[2] - arect[0])*2-3,( arect[3] - arect[1])*2-3, gettext(field))
        # Some field types, like signatures, need extra resolving


def main():
    print '''<html>
    <style>
    div{border:solid 1px black;opacity:.5}
    </style>
    <body>'''

    form = load_form(sys.argv[1])

    print "</body></html>"

if __name__ == '__main__':
    main()