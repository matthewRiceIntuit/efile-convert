import lxml.etree as etree

def pretty_print(node):
    xmlstr= etree.tostring(node, pretty_print = True)
    print "\n\n============================================================"
    print xmlstr
    print "============================================================\n\n"
    return xmlstr

def xslt(root,xsl):
    try:
        xslt = etree.parse(xsl)
        transform = etree.XSLT(xslt)
        dom = etree.ElementTree(root)
        newdom = transform(dom)
    except Exception, e:
        print str(e)
        print e.error_log
        print(transform.error_log)
    newxml = (etree.tostring(newdom))
    return  etree.XML(newxml)
