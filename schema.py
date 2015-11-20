import os
import lxml.etree as etree
from util import ppr

namespaces = {'xsd': 'http://www.w3.org/2001/XMLSchema'}


def get_schema_file(settings, form):
    return_data = etree.parse(settings.get("schema_folder") + settings.get("return_data"))
    try:
        schema_location = return_data.xpath("//xsd:include[contains(@schemaLocation,'%s.xsd')]/@schemaLocation" % form, namespaces=namespaces)[0]
        return os.path.abspath(settings.get("schema_folder") + schema_location)
    except Exception:
        return None

