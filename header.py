def get_header(formset,form):
    return \
'''<?xml version="1.0" encoding="UTF-8"?>
<?altova_sps ../../../../../editor/mef.sps?>
<Document xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" DocumentId="true" DocumentName="{1}" Form="{1}" Formset="{0}" MefId="{1}" Namespace="http://www.irs.gov/efile" ReferenceDocumentName="IRS1099R IRS2210 IRS2210F IRS6198 IRS8082 IRS8275 IRS8275R IRS8582 IRS8582CR IRS8697 IRS8824 IRS8865 IRS8866 IRS8873 IRS8886 IRS8938 IRSW2 IRSW2G BinaryAttachment GeneralDependency GeneralDependencyMedium GeneralDependencySmall ElectionToTreatContributionsAsPaidInPriorTaxYearStatement FidrcyWvdDedExpnssFrm706Stmt Elect1141110gFlowThruEntStatement" xsi:noNamespaceSchemaLocation="../../../../../../editor/mefML.xsd" Condition="fcs:has-por(@status)">
	<Field Source="softwareId" SourceType="NotUsed" TargetPath="@softwareId" TargetType="SoftwareIdType"/>
	<Field Source="softwareVersionNum" SourceType="NotUsed" TargetPath="@softwareVersionNum" TargetType="SoftwareVersionType"/>
'''.format(formset,form)
