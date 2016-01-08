import os
import lxml.etree as etree



def verify(settings, form, root, documentName):

    print
    count=0
    errors=0
    mefs=set()
    try:
        filename = "%s%s.xml" %(settings.get("verify_path"),form)
        verify = etree.parse(filename)
    except Exception:
        try:
            filename = "%s%s.xml" %(settings.get("verify_path"),documentName[0])
            verify = etree.parse(filename)
        except Exception:
            try:
                filename=filename.replace("Sch.xml","Schedule.xml").replace("Stmt.xml","Statement.xml")
                verify = etree.parse(filename)
            except Exception:
                print "### ERROR: unable to open ", filename
                print "\n\n"
                print "*************************************************************"
                print "*************************************************************"
                print "\n\n"
                return

    for each in verify.xpath("/Document/Field"):
        if  each.get("TargetPath") in ['softwareId,softwareVersion']:
            continue
        count +=1
        try:
            mefs.add(each.get('TargetPath'))
            field = root.xpath("/Document/Field[@TargetPath='%s']" % each.get('TargetPath'))[0]
            if  field.get("Source").replace('/','') != each.get("Source").replace('/',''):
                print "MISMATCH TAG: Source"
            elif field.get("TargetPath") != each.get("TargetPath"):
                print "MISMATCH TAG: TargetPath"
            elif field.get("TargetType") != each.get("TargetType"):
                print "MISMATCH TAG: TargetType"
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
            print "## MISSING ## - Entry exists in hand done, but was not found in EF calc code"
            print etree.tostring(each, pretty_print = True).replace('xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" ','').strip('\n').strip()
            print

    for each in root.xpath("/Document/Field"):
        if each.get('TargetPath') in mefs:
            continue
        errors+=1
        print "## EXTRA TargetPath - Found in EF calc code, but missing from hand done xml"
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
