from distutils.core import setup
import py2exe


setup(
    console=['calc2xref.py'],
    options={
        'py2exe':
            {
                'bundle_files': 1,
                'compressed': True,
                'includes': ['lxml.etree', 'lxml.etree','lxml._elementpath','argparse','antlr4','gzip','util','xml_helper','preprocess_helper','antrl_helper'],
                }
    }
)
