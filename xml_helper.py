import sys
import argparse

import lxml.etree as etree
import re
from util import pretty_print
from subprocess import check_output

def resolve_vars(root,use_tke=False):
    locals = []
    for each in  root.xpath("//DeclList/VarDecl"):
        locals.append(str(each.attrib['val']))
    form = root.xpath('/CALC/FORMSET/FORM/@val')[0]

    for each in root.xpath("//ID"):

        sub_id= each.xpath('Sub_ID')
        if sub_id:
            id= str("%s.%s" % (each.attrib['val'].upper(),sub_id[0].attrib['val'])).upper()
            each.attrib['val'] = id

        elif str(each.attrib['val']) in locals:
            each.attrib['val'] = "#"+each.attrib['val']
        elif '.' in each.attrib['val']:
            pass
        else:
            id= str("%s.%s" % (form,each.attrib['val']) ).upper()
            each.attrib['val'] = id




def fix_self_referencing_assigns(root):
    for each in root.xpath("//Assign"):
        id = each.xpath('ID[1]/@val')[0]
        nodes = each.xpath("*[2]//ID[@val='%s']" % id)
        for node in  nodes:
            node.getparent().tag="SELF"
            node.getparent().remove(node)
    for each in root.xpath("//AddSub/SELF"):
        parent = each.getparent()
        parent.remove(each)
        parent.getparent().append(parent.getchildren()[0])
        parent.getparent().remove(parent)


def create_or_blocks(root):
    ids=set()
    for each in root.xpath("//Assign"):
        id= each.xpath('ID/@val')[0]
        if id in ids:
            continue
        ids.add(id)
        each.set('FIELDIDS',id.split('.')[1])
        each.set('FORMID',id.split('.')[0])


        nodes = root.xpath("//Assign[ID/@val='%s']" % id)
        if len(nodes)>1:
            or_node = etree.SubElement(each, "or")
            or_node.append(each.getchildren()[1])
            for dup in nodes[1:]:
                or_node.append(dup.getchildren()[1])
                dup.getparent().remove(dup)

def set_pritool_descriptions(root, pritool_path, fed_pritool_path):
    try:
        protool_xml = check_output(['ctxmlgen.exe', 'formpath=%s' % pritool_path],shell=True)
        pritool=etree.XML(protool_xml)

        if fed_pritool_path:
            protool_xml = check_output(['ctxmlgen.exe', 'formpath=%s' % fed_pritool_path],shell=True)
            fed_pritool=etree.XML(protool_xml)
            if  "/" not in   fed_pritool_path:
                with open('fed_pritool.xml','w') as f:
                    f.write(etree.tostring(fed_pritool, pretty_print=True))


    except Exception, e:
        print "######## ERROR:  "
        print e;
        pritool = etree.parse('pritool.xml')
        fed_pritool = etree.parse('fed_pritool.xml')

    for node in root.xpath("//ID[@val]"):
        each = node.get('val').upper()
        try:
            form = each.split('.')[0]
            field = each.split('.')[1]
            elem = pritool.xpath("/CoreTemplateML/formSet/form[@id='%s']/field[@id='%s']" %( form, field))
            each = "%s %s" % (form.title(), field.title())
            if elem:
                each = elem[0].get('name',each)
                node.set("type", elem[0].get("type",''))
            node.set('desc',each)
        except Exception:
            if not each =='SELF':
                print "####ERROR: " ,each
    for node in root.xpath("//Assign[@fed]/*[2]//ID"):
        each = node.get('val').upper()
        form = each.split('.')[0]
        field = each.split('.')[1]
        elem = fed_pritool.xpath("/CoreTemplateML/formSet/form[@id='%s']/field[@id='%s']" %( form, field))
        if elem:
            each = elem[0].get('name', each)
            node.set('desc', each)
            name = elem[0].getparent().get('shortName', form + "_MISSING_SHORTNAME")
            node.set('formdesc', elem[0].getparent().get('longName', name))


def remove_duplicate_gotolines(root):
    for field in root.xpath('//FIELDS'):
        ids=set()
        for each in field.xpath('GOTOLINE'):
            id =each.get('ADDR')
            if id in ids:
                each.getparent().remove(each)
            else:
                ids.add(id)


