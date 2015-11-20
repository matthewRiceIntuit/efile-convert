import os
import lxml.etree as etree



def verify(settings, form, root):

    print
    count=0
    errors=0
    sources=set()
    filename = "%s%s.xml" %(settings.get("verify_path"),form)
    try:
        verify = etree.parse(filename)
    except Exception:
        print "### ERROR: unable to open ", filename
        print "\n\n"
        print "*************************************************************"
        print "*************************************************************"
        print "\n\n"
        return

    for each in verify.xpath("/Document/Field"):
        if  each.get("Source") in ['softwareId,softwareVersion']:
            continue
        count +=1
        try:
            sources.add(each.get('Source'))
            field = root.xpath("/Document/Field[@Source='%s']" % each.get('Source'))[0]
            if  field.get("Source") != each.get("Source"):
                print "MISMATCH Source"
            elif field.get("TargetPath") != each.get("TargetPath"):
                print "MISMATCH TargetPath"
            elif field.get("TargetType") != each.get("TargetType"):
                print "MISMATCH TargetType"
            elif field.get("RefName") != each.get("RefName"):
                print "MISMATCH RefName"
            else:
                continue
            errors+=1
            print etree.tostring(each, pretty_print = True).replace('xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" ','').strip('\n').strip()
            print etree.tostring(field, pretty_print = True).strip()
            print "\n\n\n"
        except Exception:
            errors+=1
            print "## MISSING ##",etree.tostring(each, pretty_print = True).replace('xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" ','').strip('\n').strip()
            print

    for each in root.xpath("/Document/Field"):
        if each.get('Source') in sources:
            continue
        errors+=1
        print "EXTRA Source"
        print etree.tostring(each, pretty_print = True).strip()
        print

    print "\n\n\n"
    print form+".xml"
    print " count: ", count
    print "errors: ", errors
    print "\n\n"
    print "*************************************************************"
    print "*************************************************************"
    print "\n\n"
