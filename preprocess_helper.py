import sys
import re
from subprocess import check_output

def preprocess_calc_file( calc_filename, debug, cl_path ):
    with open(calc_filename) as f:
        unpreprocessed = f.read()

    print "\n\n\n"


    pre_first_section  = re.search('\nsection\s+\w+|\nprocedure\s+\w+|\nfunction\s+\w+', unpreprocessed, flags=re.I).group()

    try:
        if not cl_path:
            cl_path='cl.exe'
        preprocessed = check_output([cl_path, '/EP', '-DPRO', '-DWIN', calc_filename],shell=True)
        preprocessed = re.sub('\n\s*\n','\n',preprocessed)
        if debug:
            with open(calc_filename.split('/')[-1],'w') as f:
                f.write(preprocessed)

    except Exception, e:
        print "###### ERROR #####"
        print e

        if "/" not in   calc_filename:
            exit()

        with open(calc_filename.split('/')[-1]) as f:
            preprocessed = f.read()



    first_section  = re.search('\nsection\s+\w+|\nprocedure\s+\w+|\nfunction\s+\w+', preprocessed, flags=re.I)
    text = preprocessed[:first_section.start()+1]
    section = re.search(pre_first_section, preprocessed, flags=re.I)
    text += preprocessed[section.start():]

    if debug:
        print "######## PreProcessor ###########"
        print text
        print "\n\n\n\n"

    return text
