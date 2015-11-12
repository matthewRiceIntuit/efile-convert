
XMLConverter S2015US1041	EFXML;
PROCEDURE IRS4952Output(docID : FText);


FORM FSCHJ;

VAR
	i,n			: Index;
	HBenTotal   :   Finteger;

BEGIN
		for i:=1 to 5 do
					OUTPUTVALUE( "DistributableNetIncomeAmt", L6[i] );

		for i:=1 to 5 do
			if L6[i] > 0 then
				WITHNEWTAG( "OrdinaryIncmAccumDistriGrp" ) DO
				BEGIN
					OUTPUTVALUE( "DistributableNetIncomeAmt", L6[i] );
					OUTPUTVALUE( "DistributionAmt", L7[i] );
					OUTPUTVALUE( "IncomeLessDistributionsAmt", L8[i] );
					OUTPUTVALUE( "TaxUndistributedNetIncomeAmt", L9[i] );
					OUTPUTVALUE( "UndistributedNetIncomeAmt", L10[i] );
					OUTPUTVALUE( "PriorAccumulationDistriAmt", L11[i] );
					OUTPUTVALUE( "PriorYearUndistriNetAmt", L12[i] );
					OUTPUTVALUE( "AllocatedAccumulationDistriAmt", L13[i] );
					OUTPUTVALUE( "AllocatedResultDistriAmt", L14[i] );
					OUTPUTVALUE( "TotalAccumDistriAllocatedAmt", L15[i] );
					OUTPUTVALUE( "TaxExemptInterestAmt", L16[i] );
					OUTPUTVALUE( "AccumulationDistributionAmt", L17[i] );
				END;
		OUTPUTVALUE( "EIN", FormatXMLEIN(BSSN) );
		for i:=1 to 5 do
			if (L18[i] > 0) or (L26[i] > 0) then
				WITHNEWTAG( "UndistriNetIncomeTaxesGrp" ) DO
				BEGIN
					OUTPUTVALUE( "RegularTaxAmt", L18[i] );
					OUTPUTVALUE( "NetShortTermGainAmt", L19[i] );
					OUTPUTVALUE( "NetLongTermGainAmt", L20[i] );
					OUTPUTVALUE( "TotalNetGainAmt", L21[i] );
					OUTPUTVALUE( "TaxableIncomeAmt", L22[i] );
					OUTPUTVALUE( "TaxableIncomePct", FormatXMLRatio(L23[i]) );
					OUTPUTVALUE( "IncomeSubjectToTaxAmt", L24[i] );
					OUTPUTVALUE( "TaxAmt", L25[i] );
					OUTPUTVALUE( "AlternativeTaxOnOtherIncomeAmt", L26[i] );
					OUTPUTVALUE( "AltTaxNetShortTermGainAmt", L27[i] );
					OUTPUTVALUE( "TrustTxblIncomeNotExcldSBAmt", L28[i] );
					OUTPUTVALUE( "AlternativeTaxTaxableIncomePct", FormatXMLRatio(L29[i]) );
					OUTPUTVALUE( "AltTaxIncomeSubjectToTaxAmt", L30[i] );
					OUTPUTVALUE( "AlternativeTaxAmt", L31[i] );
				END;
        OUTPUTVALUE( "EIN", FormatXMLEIN(BSSN) );
END;


PROCEDURE IRS1041ScheduleK1Output(copy:FInteger; docid:ftext);
FORM FSCHK1[copy];

VAR
	DLTCt	: Index;
	i		: Integer;
	bInd	: boolean;

BEGIN
  if (TestFormIs( PartOfReturn, FSCHK1[copy] )) then
  BEGIN
	WITHNEWTAG( "IRS1041ScheduleK1" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		IF IsChecked( BX2 ) THEN
		  OUTPUTVALUE( "FinalK1Ind", "X" );
		IF IsChecked( BX1 ) THEN
		  OUTPUTVALUE( "AmendedK1Ind", "X" );
		IF IsChecked( DBOX ) THEN
		  OUTPUTVALUE( "Form1041TFiledInd", "X" );
		IF IsChecked( DBOX ) THEN
		  OUTPUTVALUE( "Form1041TFiledDt", FormatXMLDate(DDATE) );
		IF IsChecked( EBOX ) THEN
		  OUTPUTVALUE( "FutureFilingNotRequiredInd", "X" );

		WITHNEWTAG( "BeneficiaryDetail" ) DO
		BEGIN

			if ValidXMLEIN ( BSSN )THEN
			Begin
				OUTPUTVALUE( "EIN", FormatXMLEIN(BSSN) );
			End Else
			if ValidXMLSSN ( BSSN )THEN
			Begin
				OUTPUTVALUE( "SSN", FormatXMLSSN(BSSN) );
				bind := true;
			End Else
			if ( Uppercase ( BSSN ) = "APPLD FOR" ) or ( Uppercase ( BSSN ) = "FOREIGNUS" ) Then
			Begin
				OUTPUTVALUE( "MissingSSNEINReasonCd", FormatXMLEnumeration ( BSSN,"APPLD FOR, FOREIGNUS") );
			End Else
			if (BSSN) = "Form 1042S" THEN
			Begin
				OUTPUTVALUE( "Form1042SCd", "FORM1042S" );
			End;

			if (bInd) then
				OUTPUTVALUE( "BeneficiaryPersonNm", FormatXMLPersonName(BNAM) )
			else
				WithNewtag ("BeneficiaryBusinessName") do
				begin
					OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(BNAM));
				end;

			if ValidXMLStreetAddress(BADD1) and ValidXMLCity(BCIT) and ValidXMLState(BSTA) and ValidXMLZIPCode(BZIP) THEN
				WITHNEWTAG( "USAddress" ) DO
				BEGIN
					OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(BADD1) );
					OUTPUTVALUE( "AddressLine2Txt", FormatXMLStreetAddress(BADD) );
					OUTPUTVALUE( "CityNm", FormatXMLCity(BCIT) );
					OUTPUTVALUE( "StateAbbreviationCd", FormatXMLState(BSTA) );
					OUTPUTVALUE( "ZIPCd", FormatXMLZipCode(BZIP) );
				END;

			if HasValue(COUNTRY) THEN
			WITHNEWTAG( "ForeignAddress" ) DO
			BEGIN
				OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(BADD1) );
				OUTPUTVALUE( "AddressLine2Txt", FormatXMLStreetAddress(BADD) );
				OUTPUTVALUE( "CityNm", FormatXMLCity(BCIT));
				OUTPUTVALUE( "ProvinceOrStateNm", FormatXMLProvince(PROVINCE));
				OUTPUTVALUE( "CountryCd", FormatXMLCountry(COUNTRY) );
				OUTPUTVALUE( "ForeignPostalCd", POSTCODE );
			END;

		END;
		IF IsChecked( JBOX1 ) THEN
			OUTPUTVALUE( "DomesticBeneficiaryInd", "X" );
		IF IsChecked( JBOX2 ) THEN
			OUTPUTVALUE( "ForeignBeneficiaryInd", "X" );

		OUTPUTVALUE( "InterestIncomeAmt", L1 );
		OUTPUTVALUE( "OrdinaryDividendsAmt", L2 );
		OUTPUTVALUE( "QualifiedDividendsAmt", L2B );
		OUTPUTVALUE( "NetSTCapitalGainAmt", L3 );
		OUTPUTVALUE( "NetLTCapitalGainAmt", L4A );
		OUTPUTVALUE( "Collectibles28PercentGainAmt", L4B );
		OUTPUTVALUE( "UnrecapturedSection1250GainAmt", L4C );
		OUTPUTVALUE( "OtherPortfolioIncomeLossAmt", L5 );
		OUTPUTVALUE( "OrdinaryBusinessIncomeAmt", L6 );
		if (HasValue(L7)) then
		begin
			WITHNEWTAG( "NetRentalIncomeRealEstateAmt" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", sSchK1RntID[copy] );
				SETATTRIBUTE( "referenceDocumentName", "NetRentalRealEstateIncomeExplanation" );
				OutputLiteral ( L7 );
			END;

		end;
		OUTPUTVALUE( "OtherRentalIncomeAmt", L8 );
		DLTCt := LastIndex( DEPR );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "BenefDirectlyApprtnDedGrp" ) DO
		BEGIN
			OUTPUTVALUE( "DirectlyApprtnDeductionsCd", L9A[i] );
			if ( fwschk1.l5b + fwschk1.l5c + fwschk1.l5d + fwschk1.l6b + fwschk1.l6c + fwschk1.l6d +fwschk1.l7b+ fwschk1.l7c + fwschk1.l7d +fwschk1.l8b + fwschk1.l8c + fwschk1.l8d = 0) then
			begin
		    	OUTPUTVALUE( "DirectlyApprtnDeductionsAmt", L9D[i] );
		    end
		    else
		    begin
				WITHNEWTAG( "DirectlyApprtnDeductionsAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId",  sSchK1DADID[copy]  );
					SETATTRIBUTE( "referenceDocumentName", "DirectlyApportionedDeductionsExplanation" );
					IF ( L9d[i] <> 0 ) THEN OUTPUTLITERAL( L9d[i] ) ELSE OUTPUTLITERAL( "0" );
				END;
 			end;
		END;

		OUTPUTVALUE( "EstateTaxDeductionAmt", L10 );
		DLTCt := LastIndex( FINALYR );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "BenefFinalYearDeductionGrp" ) DO
		BEGIN
			OUTPUTVALUE( "FinalYearDeductionsCd", L11A[i] );
		    OUTPUTVALUE( "FinalYearDeductionsAmt", L11D[i] );
		END;
		DLTCt := LastIndex( ALTMIN );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "AMTAdjustmentGrp" ) DO
		BEGIN
			OUTPUTVALUE( "AMTAdjustmentCd", L12A[i] );
		    OUTPUTVALUE( "AMTAdjustmentAmt", L12D[i] );
		END;
		DLTCt := LastIndex( CREDITS );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "BenefCrAndCreditRecaptureGrp" ) DO
		BEGIN
			OUTPUTVALUE( "CreditsAndRecaptureCd", L13A[i] );
			OUTPUTVALUE( "CreditsAndRecaptureAmt", L13D[i] );
		END;
		DLTCt := LastIndex( OTHER );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "BenefOtherInformationGrp" ) DO
		BEGIN
		If (L14A[i] IN ["A".."I"])and (L14D[i]<>0)Then
			Begin
			OUTPUTVALUE( "F1041K1OtherCd", L14A[i] );
		    OUTPUTVALUE( "F1041K1OtherAmt", L14D[i] );
		    End;
		    END;

	END;
  END;
END;
PROCEDURE IRS2210Output(docID : FText );

FORM F221012;

VAR
	a,b,c,d		: Integer;

BEGIN
	WITHNEWTAG( "IRS2210" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "referenceDocumentId", WaiverID );
		SETATTRIBUTE( "referenceDocumentName", "BinaryAttachment WaiverExplanationStatement" );
		OUTPUTVALUE( "CurrentYearTaxAfterCreditsAmt", L2 );
		OUTPUTVALUE( "OtherTaxesAmt", L3 );
		OUTPUTVALUE( "RefundableCreditsAmt", L8 );
		OUTPUTVALUE( "CurrentYearTaxAmt", L9 );
		OUTPUTVALUE( "CurrentYearTaxCalculatedAmt", L10 );
		OUTPUTVALUE( "WithholdingTaxesAmt", L11 );
		OUTPUTVALUE( "NetTaxDueAmt", L12 );
		OUTPUTVALUE( "AnnualPaymentBasedOnPriorYrAmt", L13 );
		OUTPUTVALUE( "RequiredAnnualPaymentAmt", L14 );
		if(hasValue( PENN )) then
			OUTPUTVALUE( "OwePenaltyInd", "0"  )
		else
			OUTPUTVALUE( "OwePenaltyInd", "1"  );
		OUTPUTVALUE( "WaiverOfEntirePenaltyInd", L1A );
		OUTPUTVALUE( "WaiverOfPartOfPenaltyInd", PTWAIVX );
		OUTPUTVALUE( "AnnualizedIncomeMethodInd", L1B );
		OUTPUTVALUE( "ActuallyWithheldInd", L1C );
		OUTPUTVALUE( "JointReturnInd", L1D );
		OUTPUTVALUE( "TotalEstimatedTaxPaymentsAmt", L16 );
		OUTPUTVALUE( "TotalWhTaxesAndESPaymentsAmt", L17 );
		OUTPUTVALUE( "TotalUnderpaymentForYearAmt", L18 );
		OUTPUTVALUE( "TotalUnderpaymentCalculatedAmt", L19 );
		OUTPUTVALUE( "DueDatePaidMultipliedAmt", L20 );
		If TestFormIs( PartOfReturn, F221012:FEXPL22 ) and HasValue(L21C ) then
		begin
			WITHNEWTAG( "PenaltyAmt" ) DO
			BEGIN
				SETATTRIBUTE( "waivedLiteralShortMethodCd", "AMOUNT WAIVED" );
				SETATTRIBUTE( "waivedShortMethodAmt", L21C  );
				IF ( l21 <> 0 ) THEN OUTPUTLITERAL( l21 ) ELSE OUTPUTLITERAL( "0" );
			END;
		end	else
			OUTPUTVALUE( "PenaltyAmt", L21 );
		OUTPUTVALUE( "RequiredInstallmentAAmt", L22[1] );
		OUTPUTVALUE( "RequiredInstallmentBAmt", L22[2] );
		OUTPUTVALUE( "RequiredInstallmentCAmt", L22[3] );
		OUTPUTVALUE( "RequiredInstallmentDAmt", L22[4] );
		OUTPUTVALUE( "EstimatedTaxPdAndWithheldAAmt", L23[1] );
		OUTPUTVALUE( "EstimatedTaxPdAndWithheldBAmt", L23[2] );
		OUTPUTVALUE( "EstimatedTaxPdAndWithheldCAmt", L23[3] );
		OUTPUTVALUE( "EstimatedTaxPdAndWithheldDAmt", L23[4] );
		OUTPUTVALUE( "UnderpaymentAAmt", L29[1] );
		OUTPUTVALUE( "OverpaymentAAmt", L30[1] );
		OUTPUTVALUE( "TaxToBeAppliedBAmt", L25[2] );
		OUTPUTVALUE( "TaxesDueColumnBAmt", L26[2] );
		OUTPUTVALUE( "AppliedOverpaymentBAmt", L27[2] );
		OUTPUTVALUE( "AppliedUnderpaymentBAmt", L28[2] );
		OUTPUTVALUE( "UnderpaymentBAmt", L29[2] );
		OUTPUTVALUE( "OverpaymentBAmt", L30[2] );
		OUTPUTVALUE( "TaxToBeAppliedCAmt", L25[3] );
		OUTPUTVALUE( "TaxesDueColumnCAmt", L26[3] );
		OUTPUTVALUE( "AppliedOverpaymentCAmt", L27[3] );
		OUTPUTVALUE( "AppliedUnderpaymentCAmt", L28[3] );
		OUTPUTVALUE( "UnderpaymentCAmt", L29[3] );
		OUTPUTVALUE( "OverpaymentCAmt", L30[3] );
		OUTPUTVALUE( "TaxToBeAppliedDAmt", L25[4] );
		OUTPUTVALUE( "TaxesDueColumnDAmt", L26[4] );
		OUTPUTVALUE( "AppliedOverpaymentDAmt", L27[4] );
		OUTPUTVALUE( "UnderpaymentDAmt", L29[4] );

		If TestFormIs( PartOfReturn, F221012:FEXPL22 ) and HasValue(L35C ) then
		BEGIN
			WITHNEWTAG( "TotalPenaltyAmt" ) DO
			BEGIN
				SETATTRIBUTE( "waivedLiteralRegularMethodCd", "AMOUNT WAIVED" );
				SETATTRIBUTE( "waivedRegularMethodAmt", L35C  );
				IF ( L37 <> 0 ) THEN OUTPUTLITERAL( L37 ) ELSE OUTPUTLITERAL( "0" );
			END;
		END else
			OUTPUTVALUE( "TotalPenaltyAmt", L37 );
		OUTPUTVALUE( "AGIPeriodAAmt", F22103.L1[1] );
		OUTPUTVALUE( "AnnualizedIncomeAAmt", F22103.L3[1] );
		OUTPUTVALUE( "ItemizedDeductionsAAmt", F22103.L4[1] );
		OUTPUTVALUE( "AnnualizedItemizedDedAAmt", F22103.L6[1] );
		OUTPUTVALUE( "ReturnStandardDeductionAAmt", F22103.L7[1] );
		OUTPUTVALUE( "InstallmentDeductionAAmt", F22103.L8[1] );
		OUTPUTVALUE( "NetIncomeAAmt", F22103.L9[1] );
		OUTPUTVALUE( "ExemptionClaimedAAmt", F22103.L10[1] );
		OUTPUTVALUE( "TaxableIncomeAAmt", F22103.L11[1] );
		OUTPUTVALUE( "TentativeTaxAAmt", F22103.L12[1] );
		OUTPUTVALUE( "OtherTaxesAAmt", F22103.L14[1] );
		OUTPUTVALUE( "TaxBeforeCreditsAAmt", F22103.L15[1] );
		OUTPUTVALUE( "AllowedCreditsAAmt", F22103.L16[1] );
		OUTPUTVALUE( "NetTaxDueAAmt", F22103.L17[1] );
		OUTPUTVALUE( "ApplicableTaxDueAAmt", F22103.L19[1] );
		OUTPUTVALUE( "TaxDueAAmt", F22103.L21[1] );
		OUTPUTVALUE( "InstallmentTaxAAmt", F22103.L22[1] );
		OUTPUTVALUE( "AggregateTaxDueAAmt", F22103.L24[1] );
		OUTPUTVALUE( "AnnualizedIncomeInstallAAmt", F22103.L26[1] );
		OUTPUTVALUE( "AGIPeriodBAmt", F22103.L1[2] );
		OUTPUTVALUE( "AnnualizedIncomeBAmt", F22103.L3[2] );
		OUTPUTVALUE( "ItemizedDeductionsBAmt", F22103.L4[2] );
		OUTPUTVALUE( "AnnualizedItemizedDedBAmt", F22103.L6[2] );
		OUTPUTVALUE( "ReturnStandardDeductionBAmt", F22103.L7[2] );
		OUTPUTVALUE( "InstallmentDeductionBAmt", F22103.L8[2] );
		OUTPUTVALUE( "NetIncomeBAmt", F22103.L9[2] );
		OUTPUTVALUE( "ExemptionClaimedBAmt", F22103.L10[2] );
		OUTPUTVALUE( "TaxableIncomeBAmt", F22103.L11[2] );
		OUTPUTVALUE( "TentativeTaxBAmt", F22103.L12[2] );
		OUTPUTVALUE( "OtherTaxesBAmt", F22103.L14[2] );
		OUTPUTVALUE( "TaxBeforeCreditsBAmt", F22103.L15[2] );
		OUTPUTVALUE( "AllowedCreditsBAmt", F22103.L16[2] );
		OUTPUTVALUE( "NetTaxDueBAmt", F22103.L17[2] );
		OUTPUTVALUE( "ApplicableTaxDueBAmt", F22103.L19[2] );
		OUTPUTVALUE( "TaxDueBAmt", F22103.L21[2] );
		OUTPUTVALUE( "InstallmentTaxBAmt", F22103.L22[2] );
		OUTPUTVALUE( "AccumulatedAdjustedTaxBAmt", F22103.L23[2] );
		OUTPUTVALUE( "AggregateTaxDueBAmt", F22103.L24[2] );
		OUTPUTVALUE( "AnnualizedIncomeInstallBAmt", F22103.L26[2] );
		OUTPUTVALUE( "AGIPeriodCAmt", F22103.L1[3] );
		OUTPUTVALUE( "AnnualizedIncomeCAmt", F22103.L3[3] );
		OUTPUTVALUE( "ItemizedDeductionsCAmt", F22103.L4[3] );
		OUTPUTVALUE( "AnnualizedItemizedDedCAmt", F22103.L6[3] );
		OUTPUTVALUE( "ReturnStandardDeductionCAmt", F22103.L7[3] );
		OUTPUTVALUE( "InstallmentDeductionCAmt", F22103.L8[3] );
		OUTPUTVALUE( "NetIncomeCAmt", F22103.L9[3] );
		OUTPUTVALUE( "ExemptionClaimedCAmt", F22103.L10[3] );
		OUTPUTVALUE( "TaxableIncomeCAmt", F22103.L11[3] );
		OUTPUTVALUE( "TentativeTaxCAmt", F22103.L12[3] );
		OUTPUTVALUE( "OtherTaxesCAmt", F22103.L14[3] );
		OUTPUTVALUE( "TaxBeforeCreditsCAmt", F22103.L15[3] );
		OUTPUTVALUE( "AllowedCreditsCAmt", F22103.L16[3] );
		OUTPUTVALUE( "NetTaxDueCAmt", F22103.L17[3] );
		OUTPUTVALUE( "ApplicableTaxDueCAmt", F22103.L19[3] );
		OUTPUTVALUE( "TaxDueCAmt", F22103.L21[3] );
		OUTPUTVALUE( "InstallmentTaxCAmt", F22103.L22[3] );
		OUTPUTVALUE( "AccumulatedAdjustedTaxCAmt", F22103.L23[3] );
		OUTPUTVALUE( "AggregateTaxDueCAmt", F22103.L24[3] );
		OUTPUTVALUE( "AnnualizedIncomeInstallCAmt", F22103.L26[3] );
		OUTPUTVALUE( "AGIPeriodDAmt", F22103.L1[4] );
		OUTPUTVALUE( "AnnualizedIncomeDAmt", F22103.L3[4] );
		OUTPUTVALUE( "ItemizedDeductionsDAmt", F22103.L4[4] );
		OUTPUTVALUE( "AnnualizedItemizedDedDAmt", F22103.L6[4] );
		OUTPUTVALUE( "ReturnStandardDeductionDAmt", F22103.L7[4] );
		OUTPUTVALUE( "InstallmentDeductionDAmt", F22103.L8[4] );
		OUTPUTVALUE( "NetIncomeDAmt", F22103.L9[4] );
		OUTPUTVALUE( "ExemptionClaimedDAmt", F22103.L10[4] );
		OUTPUTVALUE( "TaxableIncomeDAmt", F22103.L11[4] );
		OUTPUTVALUE( "TentativeTaxDAmt", F22103.L12[4] );
		OUTPUTVALUE( "OtherTaxesDAmt", F22103.L14[4] );
		OUTPUTVALUE( "TaxBeforeCreditsDAmt", F22103.L15[4] );
		OUTPUTVALUE( "AllowedCreditsDAmt", F22103.L16[4] );
		OUTPUTVALUE( "NetTaxDueDAmt", F22103.L17[4] );
		OUTPUTVALUE( "ApplicableTaxDueDAmt", F22103.L19[4] );
		OUTPUTVALUE( "TaxDueDAmt", F22103.L21[4] );
		OUTPUTVALUE( "InstallmentTaxDAmt", F22103.L22[4] );
		OUTPUTVALUE( "AccumulatedAdjustedTaxDAmt", F22103.L23[3] );
		OUTPUTVALUE( "AggregateTaxDueDAmt", F22103.L24[4] );
		OUTPUTVALUE( "AnnualizedIncomeInstallDAmt", F22103.L26[4] );
		WITHNEWTAG( "SEWorksheetByQtr" ) DO
		BEGIN
			OUTPUTVALUE( "NetSelfEmploymentEarningsAAmt", F22103.L27[1] );
			OUTPUTVALUE( "SSTRRTWagesAAmt", F22103.L29[1] );
			OUTPUTVALUE( "NetProratedSSTLimitAAmt", F22103.L30[1] );
			OUTPUTVALUE( "AnnualizedSSTRRTWagesAAmt", F22103.L32[1] );
			OUTPUTVALUE( "AnnualizedNetSEEarningsAAmt", F22103.L34[1] );
			OUTPUTVALUE( "AnnualizedSelfEmploymentTxAAmt", F22103.L35[1] );
			OUTPUTVALUE( "NetSelfEmploymentEarningsBAmt", F22103.L27[2] );
			OUTPUTVALUE( "SSTRRTWagesBAmt", F22103.L29[2] );
			OUTPUTVALUE( "NetProratedSSTLimitBAmt", F22103.L30[2] );
			OUTPUTVALUE( "AnnualizedSSTRRTWagesBAmt", F22103.L32[2] );
			OUTPUTVALUE( "AnnualizedNetSEEarningsBAmt", F22103.L34[2] );
			OUTPUTVALUE( "AnnualizedSelfEmploymentTxBAmt", F22103.L35[2] );
			OUTPUTVALUE( "NetSelfEmploymentEarningsCAmt", F22103.L27[3] );
			OUTPUTVALUE( "SSTRRTWagesCAmt", F22103.L29[3] );
			OUTPUTVALUE( "NetProratedSSTLimitCAmt", F22103.L30[3] );
			OUTPUTVALUE( "AnnualizedSSTRRTWagesCAmt", F22103.L32[3] );
			OUTPUTVALUE( "AnnualizedNetSEEarningsCAmt", F22103.L34[3] );
			OUTPUTVALUE( "AnnualizedSelfEmploymentTxCAmt", F22103.L35[3] );
			OUTPUTVALUE( "NetSelfEmploymentEarningsDAmt", F22103.L27[4] );
			OUTPUTVALUE( "SSTRRTWagesDAmt", F22103.L29[4] );
			OUTPUTVALUE( "NetProratedSSTLimitDAmt", F22103.L30[4] );
			OUTPUTVALUE( "AnnualizedSSTRRTWagesDAmt", F22103.L32[4] );
			OUTPUTVALUE( "AnnualizedNetSEEarningsDAmt", F22103.L34[4] );
			OUTPUTVALUE( "AnnualizedSelfEmploymentTxDAmt", F22103.L35[4] );
		END;
	END;

END;
PROCEDURE Form4684Output(i : FInteger; docID : FText);
Form F4684P2[i];
VAR
	LastOne		: Index;
    j		    : Integer;
	hNameSpc   	: FText;
	tempID		: FText;

BEGIN
   	WITHNEWTAG( concat(hNameSpc, "IRS4684") ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		LastOne := LastIndex( A94 );
		FOR j := 1 TO LastOne DO
		BEGIN
			IF HasValue( L22[j] ) THEN
			WITHNEWTAG( concat(hNameSpc, "BusinessProperties") ) DO
			BEGIN
				OUTPUTVALUE( concat(hNameSpc, "PropertyDesc"), FormatXMLLineExplanation(L22[j]) );
				OUTPUTVALUE( concat(hNameSpc, "CostOrAdjustedBasisAmt"), L23[j] );
				OUTPUTVALUE( concat(hNameSpc, "InsuranceOrOthReimbursementAmt"), L24[j] );
				OUTPUTVALUE( concat(hNameSpc, "GainFromCasualtyOrTheftAmt"), L25[j] );
				OUTPUTVALUE( concat(hNameSpc, "FairMarketValueBeforeTheftAmt"), L26[j] );
				OUTPUTVALUE( concat(hNameSpc, "FairMarketValueAfterTheftAmt"), L27[j] );
				OUTPUTVALUE( concat(hNameSpc, "NetFairMarketValueAmt"), L28[j] );
				OUTPUTVALUE( concat(hNameSpc, "SmllrOfCostOrNetFairMrktVlAmt"), L29[j] );
				OUTPUTVALUE( concat(hNameSpc, "NetBusinessPropertyLossAmt"), L30[j] );
			END;
		END;

		OUTPUTVALUE( concat(hNameSpc, "TotalBusPropertyTheftLossAmt"), L31 );

		LastOne := LastIndex( Line32 );
		FOR j := 1 TO LastOne DO
		BEGIN
			IF HasValue( L32A[j] ) THEN
			WITHNEWTAG( concat(hNameSpc, "ShortTermTheftProperty") ) DO
			BEGIN
				OUTPUTVALUE( concat(hNameSpc, "CasualtyOrTheftDesc"), FormatXMLLineExplanation(L32A[j]) );
				OUTPUTVALUE( concat(hNameSpc, "TradeOrRentalPropertyAmt"), L32B1[j] );
				OUTPUTVALUE( concat(hNameSpc, "IncomeProducingPropertyAmt"), L32B2[j] );
				OUTPUTVALUE( concat(hNameSpc, "GainsFromCasualtiesOrTheftAmt"), L32C[j] );
			END;
		END;

		OUTPUTVALUE( concat(hNameSpc, "TotShortTermTradeOrBusinessAmt"), L33B1 );
		OUTPUTVALUE( concat(hNameSpc, "ShortTermPropIncomeProdTotAmt"), L33B2 );
		OUTPUTVALUE( concat(hNameSpc, "ShortTermTotalGainsTheftAmt"), L33C );

		WITHNEWTAG( concat(hNameSpc, "ShortTermPropNetGainOrLossGrp" ) ) do
		Begin
			OUTPUTVALUE( concat(hNameSpc, "ShortTermPropNetGainOrLossAmt"), L34 );
		End;

		WITHNEWTAG( concat(hNameSpc, "ShortTermPropertyIncTotalGrp" ) ) do
		begin
			OUTPUTVALUE( concat(hNameSpc, "ShortTermPropIncomeProdTotAmt"), L35 );
		end;

		OUTPUTVALUE( concat(hNameSpc, "CasualtyOrTheftGainFrom4797Amt"), L36 );

    	LastOne := LastIndex( Line37 );
    	FOR j := 1 TO LastOne DO
		BEGIN
    		IF HasValue( L37A[j] ) THEN
    		WITHNEWTAG( concat(hNameSpc, "LongTermTheftProperty") ) DO
    		BEGIN
				OUTPUTVALUE( concat(hNameSpc, "CasualtyOrTheftDesc"), FormatXMLLineExplanation(L37A[j]) );
      	 		OUTPUTVALUE( concat(hNameSpc, "TradeOrRentalPropertyAmt"), L37B1[j] );
      	 		OUTPUTVALUE( concat(hNameSpc, "IncomeProducingPropertyAmt"), L37B2[j] );
      	 		OUTPUTVALUE( concat(hNameSpc, "GainsFromCasualtiesOrTheftAmt"), L37C[j] );
    		END;
		END;

		OUTPUTVALUE( concat(hNameSpc, "LongTermTradeOrBusinessTotAmt"), L38B1 );
		OUTPUTVALUE( concat(hNameSpc, "LongTermPropIncomeProdTotAmt"), L38B2 );
		OUTPUTVALUE( concat(hNameSpc, "LongTermTotalGainsTheftAmt"), L39 );
  		OUTPUTVALUE( concat(hNameSpc, "LongTermPropertyTotalLossesAmt"), L40 );

  		WITHNEWTAG( concat(hNameSpc, "LongTermPropNetGainOrLossGrp" ) ) do
  		begin
	  		OUTPUTVALUE( concat(hNameSpc, "LongTermPropNetGainOrLossAmt"), L41A );
  		end;

  		WITHNEWTAG( concat(hNameSpc, "LongTermPropertyIncomeTotalGrp" ) ) do
  		begin
      		OUTPUTVALUE( concat(hNameSpc, "LongTermPropIncomeProdTotAmt"), L41B );
  		end;

  		WITHNEWTAG( concat(hNameSpc, "LongTermPropIncomePlusGainGrp" ) ) do
  		begin
		if (HasValue(L42)) then
  			OUTPUTVALUE( concat(hNameSpc, "PassiveActivityLossLiteralCd" ), "PAL" );
      		OUTPUTVALUE( concat(hNameSpc, "LongTermPropIncomePlusGainAmt"), L42 );
  		end;

		WITHNEWTAG(  concat(hNameSpc, "RevenueProcedure200920Grp") ) DO
		BEGIN
			OUTPUTVALUE(  concat(hNameSpc, "InitialInvestmentAmt"), F4684P2[i]:F4684P3.IINVEST );
			OUTPUTVALUE(  concat(hNameSpc, "SubsequentInvestmentsAmt"), F4684P2[i]:F4684P3.SINVEST );
			OUTPUTVALUE(  concat(hNameSpc, "IncmRptOnTxRtnTYPrDiscvYrAmt"), F4684P2[i]:F4684P3.INCRPRTD );
			OUTPUTVALUE(  concat(hNameSpc, "TotInitialSubsqInvstAndIncmAmt"), F4684P2[i]:F4684P3.TOTALINV );
			OUTPUTVALUE(  concat(hNameSpc, "TotalWithdrawalsForAllYearsAmt"), F4684P2[i]:F4684P3.WITHDRAW );
			OUTPUTVALUE(  concat(hNameSpc, "TotalQlfyInvstAmt"), F4684P2[i]:F4684P3.NETINV );
			OUTPUTVALUE(  concat(hNameSpc, "ActlOrPotentialClaimsRcvryPct"),  F4684P2[i]:F4684P3.RCVRPERC  );
			OUTPUTVALUE( concat(hNameSpc,  "RcvryPctTimesTotalQlfyInvstAmt"), F4684P2[i]:F4684P3.RCVRCALC );
			OUTPUTVALUE( concat(hNameSpc,  "ActualRecoveryAmt"), F4684P2[i]:F4684P3.ACTRCVRY );
			OUTPUTVALUE(  concat(hNameSpc, "InsuranceSIPCRecoveryAmt"), F4684P2[i]:F4684P3.SIPC );
			OUTPUTVALUE(  concat(hNameSpc, "TotalRecoveryAmt"), F4684P2[i]:F4684P3.TOTRCVRY );
			OUTPUTVALUE(  concat(hNameSpc, "TheftLossDeductionAmt"), F4684P2[i]:F4684P3.DEDTLOSS );
				Blank(tempID);

			WITHNEWTAG(  concat(hNameSpc, "TheftLossDedRevenuePr200920Grp") ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId",  tempID);
				If IsChecked( F4684P2[i]:F4684P3.INDBOX ) then
				Begin
					OUTPUTVALUE(  concat(hNameSpc, "PersonNm"), FormatXMLPersonName(F4684P2[i]:F4684P3.INAME) );
					OUTPUTVALUE( concat(hNameSpc,  "SSN"), FormatXMLSSN(F4684P2[i]:F4684P3.ITID) );
				End;
				If IsChecked( F4684P2[i]:F4684P3.ENTBOX ) then
				Begin
					WITHNEWTAG(  concat(hNameSpc, "BusinessName") ) DO
					BEGIN
						OUTPUTVALUE(  concat(hNameSpc, "BusinessNameLine1Txt"), FormatXMLBusinessNameLine1(F4684P2[i]:F4684P3.INAME) );
					END;
					OUTPUTVALUE(  concat(hNameSpc, "EIN"), FormatXMLEIN(F4684P2[i]:F4684P3.ITID) );
				End;
					IF ValidXMLUSAddress(F4684P2[i]:F4684P3.THIEFADR, F4684P2[i]:F4684P3.THIEFCIT, F4684P2[i]:F4684P3.THIEFST, F4684P2[i]:F4684P3.THIEFZIP) THEN BEGIN WithNewTag("USAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(F4684P2[i]:F4684P3.THIEFADR)); OUTPUTVALUE("CityNm", FormatXMLCity(F4684P2[i]:F4684P3.THIEFCIT)); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(F4684P2[i]:F4684P3.THIEFST)); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(F4684P2[i]:F4684P3.THIEFZIP)); END; END ELSE WithNewTag("ForeignAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(F4684P2[i]:F4684P3.THIEFADR)); OUTPUTVALUE("CityNm", FormatXMLCity(F4684P2[i]:F4684P3.THIEFCIT)); OUTPUTVALUE("ProvinceOrStateNm", FormatXMLProvince(F4684P2[i]:F4684P3.PROVINCE)); OUTPUTVALUE("CountryCd", FormatXMLCountry(F4684P2[i]:F4684P3.COUNTRY)); OUTPUTVALUE("ForeignPostalCd", FormatXMLPostalCode(F4684P2[i]:F4684P3.POSTCODE)); END;
			END;

		END;

	END;

END;
PROCEDURE IRS4684Output(i : FInteger; docID : FText);

FORM F4684P1[i];

VAR

	DLTCt, FormCt	: Index;
	c				: Integer;
	hNameSpc   		: FText;

BEGIN
	WITHNEWTAG( concat(hNameSpc, "IRS4684" )) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );
			for c := 1 TO 4 DO
				if  (HasValue(L9[c])) Then
					WITHNEWTAG( concat(hNameSpc, "PersonalUseProperties" )) DO
						BEGIN
							OUTPUTVALUE( concat(hNameSpc, "PropertyDesc"), FormatXMLLineExplanation(L1[c]) );
							OUTPUTVALUE( concat(hNameSpc, "CostOrOtherBasisAmt"), L2[c] );
							OUTPUTVALUE( concat(hNameSpc, "InsuranceOrOthReimbursementAmt"), L3[c] );
							OUTPUTVALUE( concat(hNameSpc, "GainFromCasualtyOrTheftAmt"), L4[c] );
							OUTPUTVALUE( concat(hNameSpc, "FairMarketValueBeforeTheftAmt"), L5[c] );
							OUTPUTVALUE( concat(hNameSpc, "FairMarketValueAfterTheftAmt"), L6[c] );
							OUTPUTVALUE( concat(hNameSpc, "NetFairMarketValueAmt"), L7[c] );
							OUTPUTVALUE( concat(hNameSpc, "SmllrOfAdjOrNetFairMrktVlAmt"), L8[c] );
							OUTPUTVALUE( concat(hNameSpc, "PropertyMinusInsuranceValueAmt"), L9[c] );
						END;
			OUTPUTVALUE( concat(hNameSpc, "TotalPrsnlPropertyTheftLossAmt"), L10 );
			OUTPUTVALUE( concat(hNameSpc, "CasualtyOrTheftLossLimitAmt"), L11 );
			OUTPUTVALUE( concat(hNameSpc, "NetCasualtyOrTheftLossAmt"), L12 );
			OUTPUTVALUE( concat(hNameSpc, "TotalNetCasualtyOrTheftLossAmt"), L13 );
			OUTPUTVALUE( concat(hNameSpc, "TotalCasualtyAndTheftGainAmt"), L14 );
			OUTPUTVALUE( concat(hNameSpc, "TotalTheftGainLessTotalLossAmt"), L15 );
			OUTPUTVALUE( concat(hNameSpc, "TotalLossLessTotalTheftGainAmt"), L16 );
			OUTPUTVALUE( concat(hNameSpc, "TenPercentOfAGIAmt"), L19 );
			OUTPUTVALUE( concat(hNameSpc, "CalcAdjGroIncmMnsTotNetLossAmt"), TOTAL );
		END;

END;
PROCEDURE IRS8582Output( docID : FText );

FORM F85821;

VAR
	DLTCt, FormCT	: Index;
	i, f		: Integer;

BEGIN
	WITHNEWTAG( "IRS8582" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		OUTPUTVALUE( "RentalRealtyIncomeAmt", L1A );
		OUTPUTVALUE( "RentalRealtyLossAmt", abs( L1B ) );
		OUTPUTVALUE( "PYUnallowedRentalLossAmt", abs( L1C ) );
		OUTPUTVALUE( "NetRentalRealtyAmt", L1D );
		OUTPUTVALUE( "RevitalizationDeductionAmt", abs( RevitDed ) );
		OUTPUTVALUE( "PriorYearRevitalizationAmt", abs( ComRev2B ) );
		OUTPUTVALUE( "NetRevitalizationAmt", abs( Total ) );
		OUTPUTVALUE( "OtherActivityIncomeAmt", L2A );
		OUTPUTVALUE( "OtherActivityLossAmt", abs( L2B ) );
		OUTPUTVALUE( "PriorYearUnallowedOtherLossAmt", abs( L2C ) );
		OUTPUTVALUE( "NetOtherActivityAmt", L2D );
		OUTPUTVALUE( "TotalPassiveActivityAmt", L3 );
		OUTPUTVALUE( "RentalRealtyLossLimitAmt", L4 );
		OUTPUTVALUE( "MaximumAllowedIncomeAmt", L5 );
		OUTPUTVALUE( "ModifiedAGIAmt", L6 );
		OUTPUTVALUE( "ModifiedAGIDifferenceAmt", L7 );
		OUTPUTVALUE( "PercentNetSpecialAllowanceAmt", L8 );
		OUTPUTVALUE( "AllowedRentalRealtyLossAmt", L9 );
		OUTPUTVALUE( "StandardAllowanceAmt", ComRev11 );
		OUTPUTVALUE( "RentalAllowanceAmt", ComRev12 );
		OUTPUTVALUE( "SpecialRevitalizationAmt", ComRev13 );
		OUTPUTVALUE( "FinalRevitalizationAmt", ComRev14 );
		OUTPUTVALUE( "TotalIncomeAmt", L10 );
		OUTPUTVALUE( "TotalLossesAllowedAmt", L11 );

		if (TestFormIs( PartOfReturn, F85822)) then
		begin
			WITHNEWTAG( "ParentWrkshtRentalActGrp" ) DO
			BEGIN

				DLTCt := LastIndex( WKS1, F85822 );
				FOR i := 1 TO DLTCt DO
				WITHNEWTAG( "WrkshtRentalActGrp" ) DO
				BEGIN
					OUTPUTVALUE( "PassiveActivityNm", FormatXMLShortDescription(F85822.N1[i]) );
					OUTPUTVALUE( "CurrentYearNetIncomeAmt", F85822.A1[i] );
					OUTPUTVALUE( "CurrentYearNetLossAmt", F85822.B1[i] );
					OUTPUTVALUE( "PriorYearRentalUnallowedAmt", F85822.C1[i] );
					OUTPUTVALUE( "OverallGainAmt", F85822.D1[i] );
					OUTPUTVALUE( "OverallLossAmt", F85822.E1[i] );
				END;
				OUTPUTVALUE( "TotalCurrentYearNetIncomeAmt", F85822.TA1 );
				OUTPUTVALUE( "TotalCurrentYearNetLossAmt", F85822.TB1 );
				OUTPUTVALUE( "TotalPriorYrRentalUnallowedAmt", F85822.TC1 );
			END;
			WITHNEWTAG( "ParentWrkshtCommercialGrp" ) DO
			BEGIN

				DLTCt := LastIndex( A173, F85822 );
				FOR i := 1 TO DLTCt DO
				WITHNEWTAG( "WrkshtCommercialGrp" ) DO
				BEGIN
					OUTPUTVALUE( "CommercialActivityNm", FormatXMLShortDescription(F85822.NAME[i]) );
					OUTPUTVALUE( "CurrentYearDeductionsAmt", F85822.CYDed[i] );
					OUTPUTVALUE( "Sect179DedDepreciationPYAmt", F85822.PYDed[i] );
					OUTPUTVALUE( "OverallLossAmt", F85822.OLoss[i] );
				END;
				OUTPUTVALUE( "RevitalizationDeductionAmt", F85822.TCYDed );
				OUTPUTVALUE( "PriorYearRevitalizationAmt", F85822.TPYDed );
			END;
			WITHNEWTAG( "ParentWrkshtPassiveGrp" ) DO
			BEGIN

				DLTCt := LastIndex( Wks2, F85822 );
				FOR i := 1 TO DLTCt DO
				WITHNEWTAG( "WrkshtPassiveGrp" ) DO
				BEGIN
					OUTPUTVALUE( "NonParticipateActivityNm", FormatXMLShortDescription(F85822.N2[i]) );
					OUTPUTVALUE( "CurrentYearNetIncomeAmt", F85822.A2[i] );
					OUTPUTVALUE( "CurrentYearNetLossAmt", F85822.B2[i] );
					OUTPUTVALUE( "PriorYearUnallowedLossesAmt", F85822.C2[i] );
					OUTPUTVALUE( "OverallGainAmt", F85822.D2[i] );
					OUTPUTVALUE( "OverallLossAmt", F85822.E2[i] );
				END;
				OUTPUTVALUE( "TotalOtherCurrentYearIncomeAmt", F85822.TA2 );
				OUTPUTVALUE( "TotalOtherCurrentYearLossAmt", F85822.TB2 );
				OUTPUTVALUE( "TotalOtherPYUnallowedAmt", F85822.TC2 );
			END;
			WITHNEWTAG( "ParentWrkshtAllowanceGrp" ) DO
			BEGIN

				DLTCt := LastIndex( Wks3, F85822 );
				FOR i := 1 TO DLTCt DO
				WITHNEWTAG( "WrkshtAllowanceGrp" ) DO
				BEGIN
					OUTPUTVALUE( "SpecialAllowanceActivityNm", FormatXMLShortDescriptionLength(F85822.N3[i], 25) );
					OUTPUTVALUE( "ReportingFormOrScheduleNm", FormatXMLShortDescription(F85822.F3[i]) );
					OUTPUTVALUE( "F8582WrkshtLossesAmt", F85822.A3[i] );
					OUTPUTVALUE( "LossesPct", FormatXMLRatio(F85822.B3[i] * 100) );
					OUTPUTVALUE( "SpecialAllowanceAmt", F85822.C3[i] );
					OUTPUTVALUE( "NetSpecialAllowanceAmt", F85822.D3[i] );
				END;
				OUTPUTVALUE( "TotalLossAmt", F85822.TA3 );
				OUTPUTVALUE( "TotalSpecialAllowanceAmt", F85822.TC3 );
				OUTPUTVALUE( "TotalNetSpecialAllowanceAmt", F85822.TD3 );
			END;
			WITHNEWTAG( "ParentWrkshtLossGrp" ) DO
			BEGIN

				DLTCt := LastIndex( Wks4, F85822 );
				FOR i := 1 TO DLTCt DO
				WITHNEWTAG( "WrkshtLossGrp" ) DO
				BEGIN
					OUTPUTVALUE( "UnallowedLossActivityNm", FormatXMLShortDescription(F85822.N4[i]) );
					OUTPUTVALUE( "ReportingFormOrScheduleNm", FormatXMLShortDescriptionLength(F85822.F4[i], 10) );
					OUTPUTVALUE( "F8582WrkshtLossesAmt", F85822.A4[i] );
					OUTPUTVALUE( "LossesPct", FormatXMLRatio(F85822.B4[i] * 100) );
					OUTPUTVALUE( "PriorYearUnallowedLossesAmt", F85822.C4[i] );
				END;
				OUTPUTVALUE( "TotalAllocationLossAmt", F85822.TA4 );
				OUTPUTVALUE( "TotalLossAmt", F85822.TC4 );
			END;
		end;

		FormCT := NumCopies (F85823);
		for f := 1 to FormCT do
		begin
			if (TestFormIs( PartOfReturn, F85823[f])) then
			begin
				WITHNEWTAG( "ParentWrkshtListActivityGrp" ) DO
				BEGIN

					DLTCt := LastIndex( Wks5, F85823[f] );
					FOR i := 1 TO DLTCt DO
					WITHNEWTAG( "WrkshtListActivityGrp" ) DO
					BEGIN
						OUTPUTVALUE( "AllowedLossActivityNm", FormatXMLShortDescription(F85823[f].N5[i]) );
						OUTPUTVALUE( "ReportingFormOrScheduleNm", FormatXMLShortDescriptionLength(F85823[f].F5[i], 10) );
						OUTPUTVALUE( "F8582WrkshtLossesAmt", F85823[f].A5[i] );
						OUTPUTVALUE( "PriorYearUnallowedLossesAmt", F85823[f].B5[i] );
						OUTPUTVALUE( "F8582WrkshtAllowedLossesAmt", F85823[f].C5[i] );
					END;
					OUTPUTVALUE( "TotalLossAmt", F85823[f].TA5 );
					OUTPUTVALUE( "TotalUnallowedLossAmt", F85823[f].TB5 );
					OUTPUTVALUE( "TotalAllowedLossAmt", F85823[f].TC5 );
				END;
				WITHNEWTAG( "ParentWrkshtLossActivityGrp" ) DO
				BEGIN
					OUTPUTVALUE( "MultipleLossActivityNm", FormatXMLShortDescriptionLength(F85823[f].Act1, 25) );

					DLTCt := LastIndex( A195, F85823[f] );
					FOR i := 1 TO DLTCt DO
					WITHNEWTAG( "WrkshtLossActivityGrp" ) DO
					BEGIN
						OUTPUTVALUE( "ReportingFormOrScheduleNm", FormatXMLShortDescription(F85823[f].FSch1[i]) );
						OUTPUTVALUE( "NetLossAmt", F85823[f].FL1A[i]);
						OUTPUTVALUE( "NetIncomeAmt", F85823[f].FL1B[i]);
						OUTPUTVALUE( "NetIncomeLossAmt", F85823[f].FL1C[i]);
						OUTPUTVALUE( "LossesPct", FormatXMLRatio(F85823[f].FL1CC[i] * 100) );
						OUTPUTVALUE( "PriorYearUnallowedLossesAmt", F85823[f].FL1CD[i]);
						OUTPUTVALUE( "F8582WrkshtLossesAmt", F85823[f].FL1CE[i]);
					END;
					OUTPUTVALUE( "TotalNetIncomeLossAmt", F85823[f].FTot1 );
					OUTPUTVALUE( "TotalUnallowedAmt", F85823[f].FTot2 );
					OUTPUTVALUE( "TotalAllowedAmt", F85823[f].FTot3 );
				END;
				WITHNEWTAG( "ParentWrkshtLossActivityGrp" ) DO
				BEGIN
					OUTPUTVALUE( "MultipleLossActivityNm", FormatXMLShortDescriptionLength(F85823[f].Act2, 25) );

					DLTCt := LastIndex( A196, F85823[f] );
					FOR i := 1 TO DLTCt DO
					WITHNEWTAG( "WrkshtLossActivityGrp" ) DO
					BEGIN
						OUTPUTVALUE( "ReportingFormOrScheduleNm", FormatXMLShortDescription(F85823[f].FSch8[i]) );
						OUTPUTVALUE( "NetLossAmt", F85823[f].FL8A[i]);
						OUTPUTVALUE( "NetIncomeAmt", F85823[f].FL8B[i]);
						OUTPUTVALUE( "NetIncomeLossAmt", F85823[f].FL8C[i]);
						OUTPUTVALUE( "LossesPct", FormatXMLRatio(F85823[f].FL8CC[i] * 100) );
						OUTPUTVALUE( "PriorYearUnallowedLossesAmt", F85823[f].FL8CD[i]);
						OUTPUTVALUE( "F8582WrkshtLossesAmt", F85823[f].FL8CE[i]);
					END;
					OUTPUTVALUE( "TotalNetIncomeLossAmt", F85823[f].FTot4 );
					OUTPUTVALUE( "TotalUnallowedAmt", F85823[f].FTot5 );
					OUTPUTVALUE( "TotalAllowedAmt", F85823[f].FTot6 );
				END;
			end;
		end;
	END;

END;
PROCEDURE IRS8829Output(copy:FInteger; docid:ftext);

FORM FSCHC[copy]:F8829;

VAR
	DLTCt	: Index;
	i, n	: Integer;
BEGIN
	If(TestFormIs( PartOfReturn, FSCHC[copy]:F8829 )) Then
	BEGIN
		WITHNEWTAG( "IRS8829" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );
			SETATTRIBUTE( "softwareId", "15000271" );
			SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
			OUTPUTVALUE( "ProprietorNm", FormatXMLPersonName(NAME) );
			OUTPUTVALUE( "SSN", FormatXMLSSN(SSN) );
			OUTPUTVALUE( "BusinessUseSquareFeetCnt", L1 );
			OUTPUTVALUE( "TotalAreaOfHomeCnt", L2 );
			OUTPUTVALUE( "BusinessSquareFeetPct", FormatXMLRatio(L3) );
			OUTPUTVALUE( "BusinessUseHoursCnt", L4 );
			OUTPUTVALUE( "TotalHoursAvailableCnt", L5 );
			OUTPUTVALUE( "BusinessHoursPct", FormatXMLRatio(L6) );
			if (l7 <> 0 ) then
				IF (s88292[copy] <> 0 ) THEN
				BEGIN
					WITHNEWTAG( "BusinessPct" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId",  s88292[copy] );
						SETATTRIBUTE( "referenceDocumentName", "SpecialComputationForCertainDaycareFacilitiesStatement" );
						OUTPUTLITERAL( FormatXMLRatio(L7) );
					END;
				END ELSE
					OUTPUTVALUE("BusinessPct", FormatXMLRatio(L7) );
			OUTPUTVALUE( "HomeBusinessGainOrLossAmt", L8A );
			OUTPUTVALUE( "CasualtyLossesDirectAmt", L9A );
			OUTPUTVALUE( "CasualtyLossesIndirectAmt", L9B );
			OUTPUTVALUE( "DeductibleMortgageIntDirectAmt", TLINTDIR );
			OUTPUTVALUE( "DeductibleMortgageIntIndrAmt", L10B );
			OUTPUTVALUE( "RealEstateTaxesDirectAmt", L11A );
			OUTPUTVALUE( "RealEstateTaxesIndirectAmt", L11B );
			OUTPUTVALUE( "DirectDeductedExpnssSubtlAmt", L12A );
			OUTPUTVALUE( "IndirectDeductedExpnssSubtlAmt", L12B );
			OUTPUTVALUE( "AllowableIndrDeductedExpnssAmt", L13B );
			OUTPUTVALUE( "DirectAndIndirectExpnsSubtlAmt", L14 );
			OUTPUTVALUE( "HomeBusinessIncomeAmt", L15 );
			OUTPUTVALUE( "ExcessMortgageIntDirectAmt", L16A );
			OUTPUTVALUE( "ExcessMortgageIntIndirectAmt", L16B );
			OUTPUTVALUE( "InsuranceDirectAmt", OTHINSA );
			OUTPUTVALUE( "InsuranceIndirectAmt", OTHINS );
			OUTPUTVALUE( "RentDirectAmt", RENTA );
			OUTPUTVALUE( "RentIndirectAmt", RENTB );
			OUTPUTVALUE( "RepairsAndMaintDirectAmt", L18A );
			OUTPUTVALUE( "RepairsAndMaintIndirectAmt", L18B );
			OUTPUTVALUE( "UtilitiesDirectAmt", L19A );
			OUTPUTVALUE( "UtilitiesIndirectAmt", L19B );
			OUTPUTVALUE( "OtherExpensesDirectAmt", L20A );
			OUTPUTVALUE( "OtherExpensesIndirectAmt", L20B );
			OUTPUTVALUE( "DirectNondeductedSubtotalAmt", L21A );
			OUTPUTVALUE( "IndirectNondeductedSubtotalAmt", L21B );
			OUTPUTVALUE( "AllwblIndrNondeductedExpnssAmt", L22 );
			OUTPUTVALUE( "OperatingExpensesCarryoverAmt", L23 );
			OUTPUTVALUE( "NondeductibleNetExpensesAmt", L24 );
			OUTPUTVALUE( "AllowableOperatingExpensesAmt", L25 );
			OUTPUTVALUE( "CsltyLossesAndDeprecLimitAmt", L26 );
			OUTPUTVALUE( "ExcessCasualtyLossesAmt", 27 );
			OUTPUTVALUE( "CyovExCsltyLossesAndDeprecAmt", L29 );
			OUTPUTVALUE( "CasualtyLossesAndDeprecNetAmt", L30 );
			OUTPUTVALUE( "AllwblExCsltyLossesDeprecAmt", L31 );
			OUTPUTVALUE( "TotalAllowableExpensesAmt", L32 );
			OUTPUTVALUE( "CasualtyLossPortionAmt", L33 );
			OUTPUTVALUE( "AllowableHomeBusExpnssSchCAmt", L34 );
			if (l35 <> 0 ) then
				IF s88291[copy] <> 0 THEN
				BEGIN
					WITHNEWTAG( "HomeAdjBasisOrFairMarketAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", s88291[copy] );
						SETATTRIBUTE( "referenceDocumentName", "CostOrOtherBasisOfAdditionsAndImprovementsSchedule" );
						OUTPUTLITERAL( L35 );

					END;
				END ELSE
					OUTPUTVALUE("HomeAdjBasisOrFairMarketAmt" , l35);
			OUTPUTVALUE( "ValueOfLandAmt", L36 );
			OUTPUTVALUE( "BasisOfBuildingAmt", L37 );
			OUTPUTVALUE( "BusinessBasisOfBuildingAmt", L38 );
			OUTPUTVALUE( "DepreciationPct", FormatXMLRatio(L39) );

			if (l40 <> 0 ) then
				IF (s88293[copy] <> 0) THEN
				BEGIN
					WITHNEWTAG( "AllowableHomeDepreciationAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", s88293[copy] );
						SETATTRIBUTE( "referenceDocumentName", "DepreciationComputationSchedule IRS4562" );
						OUTPUTLITERAL( L40 );
					END;
				END ELSE
					OUTPUTVALUE("AllowableHomeDepreciationAmt" , L40);
			OUTPUTVALUE( "OperatingExpensesAmt", L41 );
			OUTPUTVALUE( "ExcessCsltyLossesAndDeprecAmt", L42 );
		END;
	END;
END;
PROCEDURE Fm311568Output();

Form F311568;
VAR
	DLTCt		: FInteger;
	i,
	LastOne,
	tL28Pres,
	tL28Prop	: Integer;
	OTHCA,
	OTHCB,
	OTCOSA,
	OTCOSB		: FDollar;
	bValid	: Boolean;

BEGIN
	IF TestFormIs( PartOfReturn, F311568 ) THEN
	BEGIN
		WITHNEWTAG( "IRS3115ScheduleD" ) DO
		BEGIN
			OUTPUTVALUE( "LongTermApplicantContractsInd", FormatXMLBoolean(BX2AY, DI2A) );

			IF IsChecked( BX2AY ) THEN
			WITHNEWTAG( "AllContractsQlfySectionExcInd" ) DO
			BEGIN
				OUTPUTLITERAL( FormatXMLBoolean(BX2BY, DI2B) );
			END;

			OUTPUTVALUE( "ApplcntReqPctOfCompMethodInd", FormatXMLBoolean(YES2C, DI2C) );

			OUTPUTVALUE( "CmplnFctrCstCstSmplfdMthdInd", FormatXMLBoolean(BOX2DY, BOX2D) );

			IF IsChecked( NO2C ) THEN
			WITHNEWTAG( "ApplcntReqExmptComplnMethodInd" ) DO
			BEGIN
				OUTPUTLITERAL( FormatXMLBoolean(YES2D, DI2D) );
			END;
			OUTPUTVALUE( "LTMfrContractsAsDefInSectInd", FormatXMLBoolean(BX3AY, DI3A) );
			OUTPUTVALUE( "EnterCostPlusLTCntrctInd", FormatXMLBoolean(YES4A, DI4A) );
			OUTPUTVALUE( "EnterFederalLTCntrctInd", FormatXMLBoolean(YES4B, DI4B) );
			OUTPUTVALUE( "ApplicationSubjectToSectionInd", FormatXMLBoolean(SEC263AY, SEC263A) );

			OUTPUTVALUE( "PresInvntryVltnMethodCmplncInd", FormatXMLBoolean(BX3Y, DII3) );

			WITHNEWTAG( "InventoryBeingChanged" ) DO
			BEGIN
				WITHNEWTAG( "PresentMethodTxt" ) DO
				BEGIN
					WITHNEWTAG( "Methods" ) DO
					BEGIN
						OUTPUTVALUE( "SpecificIdentificationInd", SPECID1 );
						OUTPUTVALUE( "FIFOInd", FIFO1 );
						OUTPUTVALUE( "LIFOInd", LIFO1 );

						IF IsChecked( OTHERA1 ) THEN
						WITHNEWTAG( "OtherIdentificationMethodInd" ) DO
						BEGIN
							OUTPUTLITERAL( OTHERA1 );
						END;

						OUTPUTVALUE( "CostInd", COST1 );
						OUTPUTVALUE( "CostOrMarketInd", COSMAR1 );
						OUTPUTVALUE( "RetailCostInd", RETCOS1 );
						OUTPUTVALUE( "LowerRetailOfCostOrMarketInd", LOWER1 );

						IF IsChecked( OTHER1 ) THEN
						WITHNEWTAG( "OtherValutionMethodInd" ) DO
						BEGIN
							OUTPUTLITERAL( OTHER1 );
						END;
					END;

					OUTPUTVALUE( "ValueEndOfTaxYearBefYrOfChgAmt", EOYVAL1 );
				END;

				WITHNEWTAG( "ProposedMethodTxt" ) DO
				BEGIN
					WITHNEWTAG( "Methods" ) DO
					BEGIN
						OUTPUTVALUE( "SpecificIdentificationInd", SPECID2 );
						OUTPUTVALUE( "FIFOInd", FIFO2 );
						OUTPUTVALUE( "LIFOInd", LIFO2 );

						IF IsChecked( OTHERA2 ) THEN
						WITHNEWTAG( "OtherIdentificationMethodInd" ) DO
						BEGIN
							OUTPUTLITERAL( OTHERA2 );
						END;

						OUTPUTVALUE( "CostInd", COST2 );
						OUTPUTVALUE( "CostOrMarketInd", COSMAR2 );
						OUTPUTVALUE( "RetailCostInd", RETCOS2 );
						OUTPUTVALUE( "LowerRetailOfCostOrMarketInd", LOWER2 );

						IF IsChecked( OTHER2 ) THEN
						WITHNEWTAG( "OtherValutionMethodInd" ) DO
						BEGIN
							OUTPUTLITERAL( OTHER2 );
						END;
					END;

				        OUTPUTVALUE( "ValueEndOfTaxYearBefYrOfChgAmt", EOYVAL2 );
				END;
			END;

			WITHNEWTAG( "InventoryNotBeingChanged" ) DO
			BEGIN
				WITHNEWTAG( "PresentMethodTxt" ) DO
				BEGIN
					WITHNEWTAG( "Methods" ) DO
					BEGIN
						OUTPUTVALUE( "SpecificIdentificationInd", SPECID3 );
						OUTPUTVALUE( "FIFOInd", FIFO3 );
						OUTPUTVALUE( "LIFOInd", LIFO3 );

						IF IsChecked( OTHERA3 ) THEN
						WITHNEWTAG( "OtherIdentificationMethodInd" ) DO
						BEGIN
							OUTPUTLITERAL( OTHERA3 );
						END;

						OUTPUTVALUE( "CostInd", COST3 );
						OUTPUTVALUE( "CostOrMarketInd", COSMAR3 );
						OUTPUTVALUE( "RetailCostInd", RETCOS3 );
						OUTPUTVALUE( "LowerRetailOfCostOrMarketInd", LOWER3 );

						IF IsChecked( OTHER3 ) THEN
						WITHNEWTAG( "OtherValutionMethodInd" ) DO
						BEGIN
							OUTPUTLITERAL( OTHER3 );
						END;
					END;
				END;
			END;
			WITHNEWTAG( "DirectMaterial" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(DIRMATA, 2, 3, 0, TRUE, ""));
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(DIRMATB, 2, 3, 0, TRUE, ""));
			END;

			WITHNEWTAG( "DirectLabor" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(DIRLABA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(DIRLABB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "IndirectLabor" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(INDLABA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(INDLABB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "OfficersCompensation" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(OFFCOMA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(OFFCOMB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "PensionAndOtherRelatedCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(PENOTHA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(PENOTHB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "EmployeeBenefits" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(EMPBENA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(EMPBENB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "IndirectMaterialsAndSupplies" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(INDMATA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(INDMATB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "PurchasingCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(PURCOSA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(PURCOSB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "HandlingProcessingAssemblyCost" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(HANPROA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(HANPROB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "OffsiteStorageWarehousingCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(OFFSITA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(OFFSITB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "DeprecAmortzAndCostRecovery" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(DEPAMTA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(DEPAMTB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "Depletion" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(DEPLNA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(DEPLNB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "Rent" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(RENTA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(RENTB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "TaxesNotStateLocalAndForeign" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(TAXOTHA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(TAXOTHB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "Insurance" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(INSA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(INSB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "Utilities" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(UTILA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(UTILB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "MaintRepairsProdResaleLTCntrct" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(MAINTA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(MAINTB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "EngineeringAndDesignCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(ENGDESA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(ENGDESB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "ReworkLaborScrapAndSpoilage" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(REWORKA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(REWORKB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "ToolsAndEquipment" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(TOOLSA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(TOOLSB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "QualityControlAndInspection" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(QUALCA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(QUALCB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "ContractBiddingExpnssIncurred" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(BIDDEXA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(BIDDEXB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "LicensingAndFranchiseCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(LICENSA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(LICENSB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "CapitalizableServiceCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(CAPITAA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(CAPITAB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "AdministrativeCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(ADMINA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(ADMINB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "RsrchAndExptlExpnssLTContracts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(RESEXPA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(RESEXPB, 2, 3, 0, TRUE, "") );
			END;

			WITHNEWTAG( "Interest" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(INTA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(INTB, 2, 3, 0, TRUE, "") );
			END;

			BLANK(bValid); DLTCt := LastIndex(L28, F311568); FOR i := 1 TO DLTCt DO BEGIN IF (ValidXMLShortExplanation( F311568.L28DESC[i]) ) THEN BEGIN bValid := TRUE; BREAK; END; END;

			IF bValid THEN
			WITHNEWTAG( "OtherCostsRqrToBeAllocated" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", ODICstID );
				SETATTRIBUTE( "referenceDocumentName", "ListOfOtherCostsDirectAndIndirectCostsAttachment" );
				IF (LASTINDEX(L28, F311568) = 1) THEN
				FOR i := 1 TO LASTONE DO
				BEGIN
					OTHCA := L28PRES[1];
					OTHCB := L28PROP[1];
				END;

				OUTPUTVALUE( "PresentMethodTxt", FormatString(OTHCA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(OTHCB, 2, 3, 0, TRUE, "") );
			END;
			IF HasValue( MARKA ) or HasValue( MARKB ) THEN
			WITHNEWTAG( "MarketingSellAdvtgDistriExpnss" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(MARKA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(MARKB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( RSEXA ) or HasValue( RSEXB ) THEN
			WITHNEWTAG( "OtherResearchAndExptlExpenses" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(RSEXA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(RSEXB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( BIDEXPA ) or HasValue( BIDEXPB ) THEN
			WITHNEWTAG( "OtherBiddingExpenses" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(BIDEXPA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(BIDEXPB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( GENADMA ) or HasValue( GENADMB ) THEN
			WITHNEWTAG( "GeneralAndAdministrativeCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(GENADMA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(GENADMB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( INCTAXA ) or HasValue( INCTAXB ) THEN
			WITHNEWTAG( "IncomeTaxes" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(INCTAXA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(INCTAXB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( COSSTRA ) or HasValue( COSSTRB ) THEN
			WITHNEWTAG( "CostOfStrikes" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(COSSTRA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(COSSTRB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( WARRA ) or HasValue( WARRB ) THEN
			WITHNEWTAG( "WarrantyProductLiabilityCosts" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(WARRA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(WARRB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( SEC179A ) or HasValue( SEC179B ) THEN
			WITHNEWTAG( "Section179Costs" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(SEC179A, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(SEC179B, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( OSSTORA ) or HasValue( OSSTORB ) THEN
			WITHNEWTAG( "OnSiteStorage" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(OSSTORA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(OSSTORB, 2, 3, 0, TRUE, "") );
			END;

			IF HasValue( DEAMORA ) or HasValue( DEAMORB ) THEN
			WITHNEWTAG( "OtherDeprecAmortzCostRecovery" ) DO
			BEGIN
				OUTPUTVALUE( "PresentMethodTxt", FormatString(DEAMORA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(DEAMORB, 2, 3, 0, TRUE, "") );
			END;

			BLANK(bValid); DLTCt := LastIndex(SECCL11, F311568); FOR i := 1 TO DLTCt DO BEGIN IF (ValidXMLShortExplanation( F311568.L11DESC[i])) THEN BEGIN bValid := TRUE; BREAK; END; END;

			IF bValid THEN
			WITHNEWTAG( "OtherCostsNotRqrToBeAllocated" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", OCostsID );
				SETATTRIBUTE( "referenceDocumentName", "OtherCostsNotRequiredToBeAllocatedAttachment" );

				IF (LASTINDEX(SECCL11, F311568) = 1) THEN
				FOR i := 1 TO LASTONE DO
				BEGIN
					OTCOSA := L11PRES[1];
					OTCOSB := L11PROP[1];
				END;

				OUTPUTVALUE( "PresentMethodTxt", FormatString(OTCOSA, 2, 3, 0, TRUE, "") );
				OUTPUTVALUE( "ProposedMethodTxt", FormatString(OTCOSB, 2, 3, 0, TRUE, "") );
			END;
		END;
		WITHNEWTAG( "IRS3115ScheduleE" ) DO
		BEGIN
			WITHNEWTAG( "ChangeInDeprecOrAmortization" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDeprecUnderSectionInd", FormatXMLBoolean(DEPRCY, SCHELN1) );
				OUTPUTVALUE( "DepreciationOrAmortizationInd", FormatXMLBoolean(DEPCAPY, SCHELN2) );

				IF IsChecked( DEPCAPY ) THEN
					OUTPUTVALUE( "ApplicableSectionTxt", FormatXMLAlphaNumericAndParentheses(ASECTION) );

				OUTPUTVALUE( "DeprecOrAmortzElectionMadeInd", FormatXMLBoolean(ELECTY, SCHELN3) );

				IF IsChecked( ELECTY ) THEN
					OUTPUTVALUE( "ElectionMadeTxt", FormatXMLAlphaNumericAndParentheses(ELECTION) );

				OUTPUTVALUE( "LivedInPropertyBefRentingItInd", FormatXMLBoolean(APPLIVY, SCHELN4B) );
				OUTPUTVALUE( "PublicUtilityPropertyInd", FormatXMLBoolean(PUBUTA, SCHELN4C) );
			END;
		END;
	END;
END;
PROCEDURE Fm311545Output();

Form F311545;

VAR
	DLTCt	: FInteger;
	LastOne	: Index;
	i		: Integer;
	bValid	: Boolean;

	hAdjInd		: FText;

BEGIN
                If IsChecked(BX24Y) THEN
		    OUTPUTVALUE( "RequireUseCutOffBasisYesInd", "X" );
                If IsChecked(BX24N) THEN
		    OUTPUTVALUE( "RequireUseCutOffBasisNoInd", "X" );
                IF ( ADJMNT > 0 ) THEN
                        hAdjInd := "+"
                ELSE
                IF ( ADJMNT < 0 ) THEN
                        hAdjInd := "-";

		IF HasValue(ADJMNT) THEN
		WITHNEWTAG( "NetSectionAdjustmentAmt" ) DO
		BEGIN
	            SETATTRIBUTE( "increaseOrDecreaseCd", hAdjInd );
		    IF ( ADJMNT <> 0 ) THEN OUTPUTLITERAL( ADJMNT ) ELSE OUTPUTLITERAL( "0" );
	        END;
		OUTPUTVALUE( "TakingEntireSectAdjIntoAcctInd", FormatXMLBoolean(BX26Y, LN26) );
                If IsChecked(BXDEMIN) THEN
		    OUTPUTVALUE( "DeMinimisElection50KInd", "X" );
                If IsChecked(BXACQ) THEN
		    OUTPUTVALUE( "EligibleAcquisTransElectInd", "X" );
		IF IsChecked( BX27Y ) THEN
			WITHNEWTAG( "PartOfAdjAttrblBtwnMembersInd" ) DO
			BEGIN
				OUTPUTLITERAL( FormatXMLBoolean(BX27Y, LN27) );
			END;
	IF HasValue( NETADJ ) or HasValue( SCHALN2 ) THEN
	BEGIN
        WITHNEWTAG( "IRS3115ScheduleA" ) DO
		BEGIN
			IF IsChecked( F311513.BX11Y ) and HasValue( LN11PRES ) THEN
			WITHNEWTAG( "PresentMethod" ) DO
			BEGIN
				OUTPUTVALUE( "CashInd", CASH1BX );
				OUTPUTVALUE( "AccrualInd", ACCR1BX );

				IF IsChecked( HYB1BX ) THEN
				WITHNEWTAG( "HybridInd" ) DO
				BEGIN
					OUTPUTLITERAL( HYB1BX );
				END;
			END;

			IF IsChecked( F311513.BX11Y ) and HasValue( LN11PROP ) THEN
			WITHNEWTAG( "ProposedMethod" ) DO
			BEGIN
				OUTPUTVALUE( "CashInd", CASH2BX );
				OUTPUTVALUE( "AccrualInd", ACCR2BX );

				IF IsChecked( HYB2BX ) THEN
				WITHNEWTAG( "HybridInd" ) DO
				BEGIN
					OUTPUTLITERAL( HYB2BX );
				END;
			END;
			IF HasValue( INCACR ) THEN
			BEGIN
				IF ( INCACR <> 0 ) THEN
					OUTPUTVALUE( "IncomeAccruedButNotReceivedAmt", INCACR )
				ELSE
					OUTPUTVALUE( "IncomeAccruedButNotRcvdNONECd", "NONE" );
			END;

			IF HasValue( INCREC ) THEN
			BEGIN
				IF ( INCREC <> 0 ) THEN
				WITHNEWTAG( "IncomeReceivedOrRptBfrEarnAmt" ) DO
				BEGIN
					OUTPUTLITERAL( INCREC );
				END;

				IF ( INCREC = 0 ) THEN
					OUTPUTVALUE( "IncomeRcvdOrRptBefEarnNONECd", "NONE" );
			END;

			IF HasValue( EXPACR ) THEN
			BEGIN
				IF ( EXPACR <> 0 ) THEN
					OUTPUTVALUE( "ExpensesAccruedButNotPaidAmt", EXPACR )
				ELSE
					OUTPUTVALUE( "ExpensesAccruedButNotPdNONECd", "NONE" );
			END;

			IF HasValue( PREPD ) THEN
			BEGIN
				IF ( PREPD <> 0 ) THEN
					OUTPUTVALUE( "PrepaidExpensePrevDeductedAmt", PREPD )
				ELSE
					OUTPUTVALUE( "PrepaidExpnsPrevDedNONECd", "NONE" );
			END;

			IF HasValue( SUPPL ) THEN
			BEGIN
				IF ( SUPPL <> 0 ) THEN
					OUTPUTVALUE( "SuppliesOnHandPrevDeductedAmt", SUPPL )
				ELSE
					OUTPUTVALUE( "SupOnHandPrevDeductedNONECd", "NONE" );
			END;

			IF HasValue( INV ) THEN
			BEGIN
				IF ( INV <> 0 ) THEN
					OUTPUTVALUE( "InventoryOnHandPrevDeductedAmt", INV )
				ELSE
					OUTPUTVALUE( "InvntryOnHandPrevDedNONECd", "NONE" );
			END;

			IF ( OTHAMT <> 0 ) THEN
			BEGIN
				BLANK(bValid); DLTCt := LastIndex(LINEG, F311545); FOR i := 1 TO DLTCt DO BEGIN IF (ValidXMLExplanation( F311545.OTHSPC[i]) and (F311545.OAMTDET[i] <> 0) ) THEN BEGIN bValid := TRUE; BREAK; END; END;

				IF bValid THEN
				BEGIN
					WITHNEWTAG( "OtherAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", OthAmtID );
						SETATTRIBUTE( "referenceDocumentName", "OtherAmountsStatement" );
						OUTPUTLITERAL( OTHAMT );
					END;
				END;
			END
			ELSE
				OUTPUTVALUE( "OtherAmountNONECd", "NONE" );

			IF HasValue( NETADJ ) THEN
			BEGIN
				IF ( NETADJ <> 0 ) THEN
					OUTPUTVALUE( "NetSectionAdjustmentAmt", NETADJ )
				ELSE
					OUTPUTVALUE( "NetSectionAdjustmentNoneCd", "NONE" );
			END;

			OUTPUTVALUE( "RequestingRecurItemExcInd", FormatXMLBoolean(RECEXMY, SCHALN2) );

			OUTPUTVALUE( "DCN33Ind", FormatXMLBoolean(BOX5Y, BOX5) );

		END;
	END;
END;
PROCEDURE Form3115Output(docID : FText);

Form F311513;
VAR
	LastOne	: Index;
	i		    : Integer;
	hAdjInd		: FText;

BEGIN

	if TestFormIs( PartOfReturn, F311513 ) then
	BEGIN
		WITHNEWTAG( "IRS3115" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );

			IF IsChecked(INDBX) THEN
				OUTPUTVALUE( "PersonNm", FormatXMLPersonName(APPLNAME))
			ELSE
			IF (APPL > 1) then
			BEGIN
			 	IF ValidXMLBusinessNameLine1( APPLNAME ) THEN
				WITHNEWTAG( "BusinessName" ) DO
				BEGIN
					OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(APPLNAME) );
				END;
			END;

			IF ValidXMLEIN(APPLIDNO) THEN OUTPUTVALUE( "EIN", FormatXMLEIN(APPLIDNO) ) ELSE IF ValidXMLSSN(APPLIDNO) THEN OUTPUTVALUE( "SSN", FormatXMLSSN(APPLIDNO) ) ELSE OUTPUTVALUE( "MissingSSNEINReasonCd", FormatXMLEnumeration(APPLIDNO, "APPLD FOR,FOREIGNUS") );

			OUTPUTVALUE( "PrincipalBusinessActivityCd", FormatXMLBusinessActivityCode(BACNO));
			OUTPUTVALUE( "TaxYearBeginDt", FormatXMLDate(TYBEG) );
			OUTPUTVALUE( "TaxYearEndDt", FormatXMLDate(TYEND) );
			OUTPUTVALUE( "ContactPersonNm", FormatXMLPersonName(CONTACT) );
			OUTPUTVALUE( "TelephoneNum", FormatXMLPhoneNumber(PHONE) );
			OUTPUTVALUE( "IsMemberOfConsolidatedGroupInd", FormatXMLBoolean(CONSGRP, CONSBOX) );
			OUTPUTVALUE( "ApplicantAttachedFormInd", FormatXMLBoolean(Fm2848, F2848) );

			WITHNEWTAG( "WhoIsFilingForm" ) DO
			BEGIN
				OUTPUTVALUE( "IndividualInd", INDBX );
				OUTPUTVALUE( "CorporationInd", CORPBX );
				OUTPUTVALUE( "ControlledForeignCorpInd", FORCRPBX );
				OUTPUTVALUE( "Corporation1050Ind", BX1050 );
				OUTPUTVALUE( "QualifiedPersonalSrvcCorpInd", QPSBX );

				IF IsChecked( EXMPBX ) THEN
				WITHNEWTAG( "ExemptOrganizationInd" ) DO
				BEGIN
					SETATTRIBUTE( "codeSectionTxt", FormatXMLAlphaNumericAndParentheses(CODE) );
					OUTPUTLITERAL( EXMPBX );
				END;

				OUTPUTVALUE( "CooperativeInd", COOPBX );
				OUTPUTVALUE( "PartnershipInd", PSHIPBX );
				OUTPUTVALUE( "SCorporationInd", SCORPBX );
				OUTPUTVALUE( "InsuranceCompanySect816aInd", INSCO1BX );
				OUTPUTVALUE( "InsuranceCompanySect831Ind", INSCO2BX );

				IF IsChecked( FILINGBX ) THEN
				WITHNEWTAG( "OtherApplicantTypeInd" ) DO
				BEGIN
					SETATTRIBUTE( "desc", FormatString(FILING, 20, 4, 0, TRUE, "") );
					OUTPUTLITERAL( FILINGBX );
				END;
			END;

			IF HasValue( CHANGE ) THEN
			WITHNEWTAG( "TypeOfAccountingMethod" ) DO
			BEGIN
				OUTPUTVALUE( "DepreciationOrAmortizationInd", DEPCNBX );
				OUTPUTVALUE( "FinclProductsAndActivitiesInd", FINBX );
				IF HasValue( METHODBX ) THEN
				WITHNEWTAG( "OtherApplicantTypeInd" ) DO
				BEGIN
					SETATTRIBUTE( "desc", FormatString(Concat( METHOD, " ", METHOD2 ), 20, 4, 0, TRUE, "") );
					OUTPUTLITERAL( METHODBX );
				END;
			END;
                        If HasValue(DCN1) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN1, 4, 0) );

                        If HasValue(DCN2) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN2, 4, 0) );

                        If HasValue(DCN3) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN3, 4, 0) );

                        If HasValue(DCN4) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN4, 4, 0) );

                        If HasValue(DCN5) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN5, 4, 0) );

                        If HasValue(DCN6) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN6, 4, 0) );

                        If HasValue(DCN7) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN7, 4, 0) );

                        If HasValue(DCN8) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN8, 4, 0) );

                        If HasValue(DCN9) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN9, 4, 0) );

                        If HasValue(DCN10) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN10, 4, 0) );

                        If HasValue(DCN11) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN11, 4, 0) );

                        If HasValue(DCN12) then
                            OUTPUTVALUE( "DesignatedAccountingMthdChgNum", FormatXMLNNInteger(DCN12, 4, 0) );
			IF HasValue( OTHRCHG ) THEN
			WITHNEWTAG( "MethodOfAccountingOtherInd" ) DO
			BEGIN
				SETATTRIBUTE( "methodOfAccountingOtherDesc", FormatXMLLineExplanation(CHNGDESC) );
				OUTPUTLITERAL( OTHRCHG );
			END;
			OUTPUTVALUE( "RulesRstrAutoChangeProcInd", FormatXMLBoolean(BX2Y, LN2) );
			OUTPUTVALUE( "AllInformationProvidedInd", FormatXMLBoolean(BX3Y, LN3) );
			OUTPUTVALUE( "ApplcntTrdBusReqChgRelatesInd", FormatXMLBoolean(BX4AY, LN4A) );
			OUTPUTVALUE( "RequestChgUndSect1381Ind", FormatXMLBoolean(BX4BY, LN4B) );
			OUTPUTVALUE( "PreparerOtherThanFilerNm", FormatXMLPersonName(PNAME) );
			IF ValidXMLBusinessNameLine1( FIRMNAME ) THEN
			WITHNEWTAG( "PreparerFirmName" ) DO
			BEGIN
				OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(FIRMNAME) );
			END;
			OUTPUTVALUE( "AnyFederalReturnsUnderExamInd", FormatXMLBoolean(BOX6AY, BX33) );
			OUTPUTVALUE( "AcctMthdChgUndConsiderationInd", FormatXMLBoolean(BX4CY, LN4C) );
			WITHNEWTAG( "ExaminingAgentContactInfo" ) DO
			BEGIN
				OUTPUTVALUE( "PersonNm", FormatXMLPersonName(EXAMAGT) );
				OUTPUTVALUE( "PhoneNum", FormatXMLPhoneNumber(TNUM) );
				OUTPUTVALUE( "TaxYr",FormatXMLYear(TXYR) );
			END;
			OUTPUTVALUE( "CopyProvidedToExaminingAgtInd", FormatXMLBoolean(BX4GY, LN4G) );
                        If IsChecked(BOX7AY) THEN
			    OUTPUTVALUE( "AuditProtectionApplyYesInd", "X" );
                        If IsChecked(BOX7AN) THEN
		            OUTPUTVALUE( "AuditProtectionApplyNoInd", "X" );
                        If IsChecked(NOEXAM) THEN
                            OUTPUTVALUE( "NotUnderExamInd", "X" );

                        If IsChecked(WIN3) THEN
                            OUTPUTVALUE( "ThreeMonthWindowInd", "X" );

                        If IsChecked(DAY120) THEN
                        Begin
                            OUTPUTVALUE( "OneHundredTwentyDaysPeriodInd", "X" );
                            OUTPUTVALUE( "ExaminationEndDt", FormatXMLDate(DATEEND) );
                        End;

                        If IsChecked(NODIRECT) THEN
                            OUTPUTVALUE( "MethodNotBeforeDirectorInd", "X" );

                        If IsChecked(NEGADJST) THEN
                            OUTPUTVALUE( "NegativeAdjustmentInd", "X" );

                        If IsChecked(CAP) THEN
                        Begin
                            OUTPUTVALUE( "CAPInd", "X" );
                            OUTPUTVALUE( "MemberJoinedGroupDt", FormatXMLDate(DATEJOIN) );
                        End;

                        If IsChecked(AUDIT) THEN
                            OUTPUTVALUE( "AuditProtectionExamInd", "X" );

                        If IsChecked(OTHER) THEN
                            OUTPUTVALUE( "OtherInd", "X" );
			OUTPUTVALUE( "FedReturnBeforeAppealsInd", FormatXMLBoolean(BX5AY, LN5A) );

			OUTPUTVALUE( "AcctMthdUnderCnsdrByFedCrtInd", FormatXMLBoolean(BX5CY, LN5C) );
			IF IsChecked( BX5CY ) THEN
			BEGIN
                                If IsChecked(APOFF) THEN
                                    OUTPUTVALUE( "AppealsOfficerInd", "X" );
                                If IsChecked(CNSLGOV) THEN
                                    OUTPUTVALUE( "CounselForTheGovernmentInd", "X" );
				WITHNEWTAG( "AOOrGovtCounselCntctInfo" ) DO
				BEGIN
					OUTPUTVALUE( "PersonNm", FormatXMLPersonName(XAMAGT) );
					OUTPUTVALUE( "PhoneNum", FormatXMLPhoneNumber(TELEPHON) );
					OUTPUTVALUE( "TaxYr", FormatXMLYear(TXYRS) );
				END;
			END;

			OUTPUTVALUE( "AOOrGovtCounselProvCopyInd", FormatXMLBoolean(BX5BY, LN5B) );
			OUTPUTVALUE( "PrtshpSCorpAcctMthdUndExamInd", FormatXMLBoolean(BX7Y, LN7) );
			OUTPUTVALUE( "ChgInAcctMthdMadeInPast5YrsInd", FormatXMLBoolean(BX9AY, LN9A) );
			OUTPUTVALUE( "PnReqPrvtLtrRlngTamAcctChgInd", FormatXMLBoolean(BX10AY, LN10A) );
			OUTPUTVALUE( "RequestingChgToOverallAcctInd", FormatXMLBoolean(BX11Y, LN11) );
			OUTPUTVALUE( "ProposedMethodUsedForBksInd", FormatXMLBoolean(BX14Y, LN14) );
			OUTPUTVALUE( "ConferenceOfRightRequestedInd", FormatXMLBoolean(BX16Y, LN16) );

			IF HasValue( FRSTAMNT ) or HasValue( SNDAMNT )
				or HasValue( THRDAMNT ) THEN
			WITHNEWTAG( "GrossReceipts4YrsPreceding" ) DO
			BEGIN
				IF HasValue( FRSTAMNT ) THEN
				BEGIN
					OUTPUTVALUE( "GrossReceiptsForFirstPrecYrAmt", FRSTAMNT );
					OUTPUTVALUE( "FirstPrecedingYearEndDt",
						FormatXMLYearMonth(Concat( FSTMO, "/01/", FSTYR )) );
				END;
				IF HasValue( SNDAMNT ) THEN
				BEGIN
					OUTPUTVALUE( "GrossReceiptsFor2ndPrecYrAmt", SNDAMNT );
					OUTPUTVALUE( "SecondPrecedingYearEndDt",
						FormatXMLYearMonth(Concat( SCNDMO, "/01/", SCNDYR )) );
				END;
				IF HasValue( THRDAMNT ) THEN
				BEGIN
					OUTPUTVALUE( "GrossReceiptsForThirdPrecYrAmt", THRDAMNT );
					OUTPUTVALUE( "ThirdPrecedingYearEndDt",
						FormatXMLYearMonth(Concat( THRDMO, "/01/", THRDYR )) );
				END;
				IF HasValue( FRTHAMNT ) THEN
				BEGIN
					OUTPUTVALUE( "GrossReceiptsFor4thPrecYrAmt", FRTHAMNT );
					OUTPUTVALUE( "FourthPrecedingYearEndDt",
						FormatXMLYearMonth(Concat( FRTHMO, "/01/", FRTHYR )) );
				END;
			END;
			IF IsChecked( BX18Y ) THEN
			WITHNEWTAG( "ChangeReqAllwUnderAutoChgInd" ) DO
			BEGIN
				OUTPUTLITERAL( FormatXMLBoolean(BX18Y, LN18) );
			END;

			IF IsChecked( BX22Y ) THEN
			WITHNEWTAG( "GroupMembersUsePrpsdMthdInd" ) DO
			BEGIN
				OUTPUTLITERAL( FormatXMLBoolean(BX22Y, LN22) );
			END;
			Fm311545Output();
			Fm311568Output();
		END;
	END;
END;
PROCEDURE Form3468Output(docID : FText);
Form F3468;
VAR
	hp1, hp2	: FInteger;

BEGIN

If TestFormIs( PartOfReturn, F3468 ) Then
	BEGIN

		WITHNEWTAG( "IRS3468" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );
            OUTPUTVALUE("LessorNm", FormatString(LNAME, 35, 3, 0, TRUE, ""));
			IF ValidXMLUSAddress(LADDR, LCITY, LST2, LZIP2) THEN
				WithNewTag("LessorUSAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(LADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(LCITY)); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(LST2)); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(LZIP2)); END;

			OUTPUTVALUE("PropertyDesc", FormatXMLLineExplanation(LPROPDES));
			OUTPUTVALUE("TreatedAsAcquiredPropertyAmt", AMT);
			OUTPUTVALUE("InvstIntgrtGasCombCycPropAmt", L4BAS);
			OUTPUTVALUE("CalcGasCombCycPropInvstCrAmt", L4A);

			OUTPUTVALUE("AdvancedCoalBaseTechnologyAmt", L4BBAS);
			OUTPUTVALUE("CalcAdvancedCoalBaseTechAmt", L4B);

			OUTPUTVALUE("QlfyAdvCoalBasedTechAmt", BASIS6C);
			OUTPUTVALUE("CalcAdvCoalBasedTechAmt", BASIS6CC);

			OUTPUTVALUE("TotalQlfyAdvncCoalProjCrAmt", L4C);

			OUTPUTVALUE("QlfyGasificationPropBssAmt", BASIS7A);
			OUTPUTVALUE("CalcQlfyGasificationPropBssAmt", BASIS7AA);

			OUTPUTVALUE("OtherQlfyInvstPropertyBasisAmt", L5BAS);
			OUTPUTVALUE("CalcOtherQlfyInvstPropCrAmt", L5);

			OUTPUTVALUE("TotalQlfyGasificationProjCrAmt", TOTAL7C);

			OUTPUTVALUE("BssQlfyInvstAdvncEnergyAmt", BASIS3);
			OUTPUTVALUE("CalcBssQlfyInvstAdvncEnergyAmt", BAS3AMT);
			OUTPUTVALUE("UnusedCreditFromCoopAmt", L6);
			OUTPUTVALUE("TotAdvncCoalGasAndEnergyCrAmt", L7);
			If IsChecked( L1ABX ) then
				if (TestFormIs(PartOfReturn, F3468:FEXPL102)) then
				begin
					WITHNEWTAG( "RehabilitationExpendElectInd" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", s34681ID );
						SETATTRIBUTE( "referenceDocumentName", "RehabilitationCreditClaimedInPriorYearExplanation" );
						OutputLiteral(L1ABX);
					END;
				end
				else
				OUTPUTVALUE( "RehabilitationExpendElectInd", L1ABX );
			OUTPUTVALUE( "RehabilitationPeriodBeginDt", FormatXMLDate(L1DBDATE) );
			OUTPUTVALUE( "RehabilitationPeriodEndDt", FormatXMLDate(L1DEDATE) );

			OUTPUTVALUE( "AdjustedBasisOfBuildingAmt", L1D2 );
			OUTPUTVALUE( "QlfyRehbltExpendIncurredAmt", L1D3 );

			OUTPUTVALUE( "QualifiedPre1936BldgGOZAmt", GOZO36 );
			OUTPUTVALUE( "CalcQlfyPre1936BldgGOZAmt", L1B );
			OUTPUTVALUE( "QlfyRehbltPre1936BldgMWDAAmt", MIDWDIS );
			OUTPUTVALUE( "QlfyRehbltPre1936BldgMWDACrAmt", MIDW );
			OUTPUTVALUE( "QlfyRehbltOtherPre1936BldgAmt", L1B36 );
			OUTPUTVALUE( "CalcRehbltOtherPre1936BldgAmt", PRE36B );
			OUTPUTVALUE( "CertifiedHistStrctrGOZAmt", GOZOCHS );
			OUTPUTVALUE( "CertifiedHistStrctrGOZCrAmt", L1C );
			OUTPUTVALUE( "CertHistStrctrAffctMWDAAmt", MIDWDCHS );
			OUTPUTVALUE( "CalcCertHistStrctrAffctMWDAAmt", MIDWCHS );
			OUTPUTVALUE( "OtherCertifiedHistStrctrAmt", L1CHS );
			OUTPUTVALUE( "CalcOthCertifiedHistStrctrAmt", CHSB );
			OUTPUTVALUE( "NPSProjectNum", FormatString(Strip( L1CNP," "), 18, 4, 0, TRUE, ""));
			OUTPUTVALUE( "EIN",	 FormatXMLEIN(L1CNP));
			OUTPUTVALUE( "NPSApprovalDt", FormatXMLDate(L1CDATE) );
			OUTPUTVALUE( "RehbltCrElectLargePartnerAmt", L1E );
			OUTPUTVALUE( "GthrmlAndSolarEgyPropBssAmt", BASIS11A );
			OUTPUTVALUE( "CalcGthrmlAndSolarEgyPropAmt", BAS11AA );

			OUTPUTVALUE( "PropSolarIllmntnOrEgyBssAmt", BASIS11B );
			OUTPUTVALUE( "CalcPropSolarIllmntnOrEgyAmt", BAS11BB );

			OUTPUTVALUE( "QualifiedFuelCellPropBssAmt", BASISBEF );
			OUTPUTVALUE( "CalcQlfyFuelCellPropBssAmt", BASBAMT );

			OUTPUTVALUE( "BetweenLmtFuelCellPropKwCapQty", FormatXMLLongInteger(KCAPBEF));
			OUTPUTVALUE( "BetweenLmtFuelCellPropKwCapAmt", KCBEFAMT);

			OUTPUTVALUE( "AdjustedQlfyFuelCellPropCrAmt", LESSBEF );
			OUTPUTVALUE( "BasisQlfyFuelCellPropAcqAmt", BASIS11C);
			OUTPUTVALUE( "CalcBssQlfyFuelCellPropAcqAmt", BAS11CC);

			OUTPUTVALUE( "AfterLmtFuelCellPropKwCapQty",FormatXMLLongInteger(KILOCAP3));
			OUTPUTVALUE( "AfterLmtFuelCellPropKwCapAmt",	KILOAMT3);
			OUTPUTVALUE( "AdjBssQlfyApplcblFuelCellCrAmt", LESSER5);

			OUTPUTVALUE( "QlfyMicroturbinePropBssAmt", BASIS11F );
			OUTPUTVALUE( "CalcQlfyMicroturbinePropBssAmt", BAS11FF );

			OUTPUTVALUE( "QlfyMicroturbinePropKwCapQty",FormatXMLLongInteger(KILOCAP4));
			OUTPUTVALUE( "CalcQlfyMcrtrbnPropKwCapAmt", KILOAMT4);

			OUTPUTVALUE( "AdjQlfyMicroturbineKwBssAmt", LESSER6);

			OUTPUTVALUE( "BasisOfHeatAndPowerPropAmt", BASIS11I);
			OUTPUTVALUE( "CalcBasisOfHeatAndPowerPropAmt", BAS11II);
			hp2 := ELECMEA2;
			OUTPUTVALUE( "MegaHorsepowerPct", ELECMEA2);
			OUTPUTVALUE( "AdjHeatAndPowerSysPropCrAmt", LESSER7);

			OUTPUTVALUE( "BasisOfWindEnergyPropAmt", BASIS11L);
			OUTPUTVALUE( "CalcBasisOfWindEnergyPropAmt", BAS11LL);

            OUTPUTVALUE( "AdjBasisOfWindEnergyPropCrAmt", SMALLER);

        	OUTPUTVALUE( "BssOfWindEgyConstrErctnAmt", BASISAFT);
			OUTPUTVALUE( "CalcBssOfWindEgyConstrErctnAmt", BASAAMT);

			OUTPUTVALUE( "BssGthrmlPropHtPumpSysAmt", BASIS11N);
			OUTPUTVALUE( "CalcBssGthrmlPropHtPumpSysAmt", BAS11NN);

			OUTPUTVALUE( "BssOfPropPlacedInSrvcAmt", BASIS5);
     		OUTPUTVALUE( "CalcBssOfPropPlacedInSrvcAmt", BAS5AMT);

			OUTPUTVALUE( "UnusedCrRehbltEgyCrFromCoopAmt", COOPCR);
			OUTPUTVALUE( "TotalInvestmentCreditAmt", STOT1);
		END;
	END;
END;
PROCEDURE pBusinessCreditsGr(n : FInteger);

FORM F3800;

Begin

    WITHNEWTAG( "BusinessCreditsGrp" ) DO
        BEGIN
                If HasValue(F3800MLT[n].L1A) Then
                WITHNEWTAG( "CurrentYearInvestmentCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1AEIN) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearInvestmentCreditAmt" ) DO
						Begin
                                SETATTRIBUTE( "referenceDocumentId", ( F3468ID ) );

                                OUTPUTLITERAL(F3800MLT[n].L1A);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearInvestmentCreditAmt" ) DO
						Begin
								OUTPUTLITERAL(F3800MLT[n].L1A);
						End;
                    END;

                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1AEIN) );
                END;
                If HasValue(F3800MLT[n].L1E) Then
                WITHNEWTAG( "CYIncreasingResearchCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1EEIN) THEN
                    BEGIN
                        WITHNEWTAG( "CYIncreasingResearchCrAmt" ) DO
                        Begin
                                SETATTRIBUTE( "referenceDocumentId", ( F6765ID ) );

                                OUTPUTLITERAL(F3800MLT[n].L1E);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CYIncreasingResearchCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1E);
						End;
                    END;
                          OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1EEIN) );
                END;
                If HasValue(F3800MLT[n].L1F) Then
                WITHNEWTAG( "CYLowIncomeHousingCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].EIN1) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearLowIncomeHsngCrAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8586ID ) );
                                OUTPUTLITERAL(F3800MLT[n].L1F);
                        End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearLowIncomeHsngCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1F);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EIN1) );
                END;
                If HasValue(F3800MLT[n].L1H) Then
                WITHNEWTAG( "CurrentYearDisabledAccessCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1HEIN) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearDisabledAccessCrAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8826ID ) );
                                OUTPUTLITERAL(F3800MLT[n].L1H);
                        End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearDisabledAccessCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1H);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1HEIN) );
                END;
                If HasValue(F3800MLT[n].L1I) Then
                WITHNEWTAG( "CYRenewableElectricityCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1IEIN) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearRenewableElecCrAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8835ID ) );
                                OUTPUTLITERAL(F3800MLT[n].L1I);
                        End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearRenewableElecCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1I);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1IEIN) );
                END;
                If HasValue(F3800MLT[n].L1J) Then
                WITHNEWTAG( "CurrentYearIndianEmplmnCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1JEIN) THEN
                    BEGIN
                        WITHNEWTAG( "CYIndianEmploymentCreditAmt" ) DO
                        Begin
                                SETATTRIBUTE( "referenceDocumentId", ( F8845ID ) );
                                OUTPUTLITERAL(F3800MLT[n].L1J);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CYIndianEmploymentCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].L1J);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1JEIN) );
                END;
                If HasValue(F3800MLT[n].L1L) Then
                WITHNEWTAG( "CurrentYearOrphanDrugCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1LEIN) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearOrphanDrugCreditAmt" ) DO
                        Begin
								OUTPUTLITERAL(F3800MLT[n].L1L);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearOrphanDrugCreditAmt" ) DO
						Begin
								OUTPUTLITERAL(F3800MLT[n].L1L);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1LEIN) );
                END;
                If HasValue(F3800MLT[n].L1M) Then
                WITHNEWTAG( "CurrentYearNewMarketsCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].EIN2) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearNewMarketsCreditAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1M);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearNewMarketsCreditAmt" ) DO
						Begin
								OUTPUTLITERAL(F3800MLT[n].L1M);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EIN2) );
                END;
                If HasValue(F3800MLT[n].STARTUP) Then
                WITHNEWTAG( "CYSmallEmployerPensionPlanGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].STARTE ) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYrSmllEmplrPnsnPlanAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8881ID ) );
                                OUTPUTLITERAL(F3800MLT[n].STARTUP);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYrSmllEmplrPnsnPlanAmt" ) DO
						Begin
								OUTPUTLITERAL(F3800MLT[n].STARTUP);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].STARTE) );
                END;
                If HasValue(F3800MLT[n].CHLDCARE) Then
                WITHNEWTAG( "CYEmplrProvChildCareFcltsCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].EIN3) THEN
                    BEGIN
                        WITHNEWTAG( "CYEmplrProvChldCareFcltsCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].CHLDCARE);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CYEmplrProvChldCareFcltsCrAmt" ) DO
						Begin
								OUTPUTLITERAL(F3800MLT[n].CHLDCARE);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EIN3) );
                END;
                If HasValue(F3800MLT[n].BIODIESL) Then
                WITHNEWTAG( "CurrentYearBiodieselFuelCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].BIODIESE) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearBiodieselFuelCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].BIODIESL);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearBiodieselFuelCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].BIODIESL);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].BIODIESE) );
                END;
                If HasValue(F3800MLT[n].LOWSULFR) Then
                WITHNEWTAG( "CYLowSulfurDieselCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].LOWSULFE ) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearLowSulfurDslCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].LOWSULFR);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearLowSulfurDslCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].LOWSULFR);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].LOWSULFE) );
                END;
                If HasValue(F3800MLT[n].SPIRITS) Then
                WITHNEWTAG( "DistilledSpiritsCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].SPIRITE) THEN
                    BEGIN
                        WITHNEWTAG( "DistilledSpiritsCreditAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].SPIRITS);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "DistilledSpiritsCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].SPIRITS);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].SPIRITE) );
                END;
                If HasValue(F3800MLT[n].NONCONV) Then
                WITHNEWTAG( "CYNonconventionalFuelCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].NONCONVE ) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearNnconvFuelCrAmt" ) DO
                        Begin
								 OUTPUTLITERAL(F3800MLT[n].NONCONV);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearNnconvFuelCrAmt" ) DO
						Begin
								 OUTPUTLITERAL(F3800MLT[n].NONCONV);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].NONCONVE) );
                END;
                If HasValue(F3800MLT[n].ENERGY) Then
                WITHNEWTAG( "CYEnergyEfficientHomeCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].ENERGYE) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYrEngyEfficientHmCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].ENERGY);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYrEngyEfficientHmCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].ENERGY);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].ENERGYE) );
                END;
                If HasValue(F3800MLT[n].APPLCR) Then
                WITHNEWTAG( "CYEnergyEfficientApplianceGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].APPLCRE ) THEN
                    BEGIN
                        WITHNEWTAG( "CYEngyEfficientApplianceAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].APPLCR);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CYEngyEfficientApplianceAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].APPLCR);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].APPLCRE) );
                END;
                If HasValue(F3800MLT[n].ALTVEHIC) Then
                WITHNEWTAG( "CYAlternativeMotorVehicleCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].EIN4) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearAltMtrVehCrAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8910ID[1] ) );
                                OUTPUTLITERAL(F3800MLT[n].ALTVEHIC);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearAltMtrVehCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].ALTVEHIC);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EIN4) );
                END;
                If HasValue(F3800MLT[n].ALTFUEL) Then
                WITHNEWTAG( "CYAlternativeRefuelingCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].ALTFUELE) THEN
                    BEGIN
                        WITHNEWTAG( "CurrentYearAltRefuelingCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].ALTFUEL);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CurrentYearAltRefuelingCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].ALTFUEL);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].ALTFUELE) );
                END;
                If HasValue(F3800MLT[n].L1O) Then
                WITHNEWTAG( "MineRescueTeamTrainingCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].MINERSC) THEN
                    BEGIN
                        WITHNEWTAG( "MineRescueTeamTrainingCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1O);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "MineRescueTeamTrainingCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].L1O);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].MINERSC) );
                END;
                If HasValue(F3800MLT[n].AGCHEMCR) Then
                WITHNEWTAG( "AgriculturalChemicalsCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].AGCHEME) THEN
                    BEGIN
                        WITHNEWTAG( "AgriculturalChemicalsCreditAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].AGCHEMCR);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "AgriculturalChemicalsCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].AGCHEMCR);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].AGCHEME) );
                END;
                If HasValue(F3800MLT[n].EMPDIFF) Then
                WITHNEWTAG( "DifferentialWagePaymentsCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].EMPDIFFE) THEN
                    BEGIN
                        WITHNEWTAG( "DifferentialWagePaymentsCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].EMPDIFF);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "DifferentialWagePaymentsCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].EMPDIFF);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EMPDIFFE) );
                END;
                If HasValue(F3800MLT[n].CO2SEQ) Then
                WITHNEWTAG( "CarbonDioxideCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].CO2SEQE ) THEN
                    BEGIN
                        WITHNEWTAG( "CarbonDioxideCreditAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].CO2SEQ);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CarbonDioxideCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].CO2SEQ);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].CO2SEQE) );
                END;
                If HasValue(F3800MLT[n].L8936) Then
                WITHNEWTAG( "QlfyPlugInElecDriveMtrVehCrGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].F8936E) THEN
                    BEGIN
                        WITHNEWTAG( "QlfyPlugInElecDriveMtrVehCrAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L8936);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "QlfyPlugInElecDriveMtrVehCrAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].L8936);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].F8936E) );
                END;
                If HasValue(F3800MLT[n].L8834) Then
                WITHNEWTAG( "AllowableQlfyElectricVehGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].F8834E) THEN
                    BEGIN
                        WITHNEWTAG( "AllowableQualifiedElecVehAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L8834);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "AllowableQualifiedElecVehAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].L8834);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].F8834E) );
                END;
                If HasValue(F3800MLT[n].L1N) Then
                WITHNEWTAG( "NewHireRetentionCreditAmtGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1NE) THEN
                    BEGIN
                        WITHNEWTAG( "NewHireRetentionCreditAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1N);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "NewHireRetentionCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].L1N);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1NE) );
                END;
                If HasValue(F3800MLT[n].L1P) Then
                WITHNEWTAG( "CYGenBusCrElectingLgePrtshpGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].L1OE ) THEN
                    BEGIN
                        WITHNEWTAG( "CYGenBusCrElectingLgePrtshpAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].L1P);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CYGenBusCrElectingLgePrtshpAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].L1P);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].L1OE) );
                END;
                WITHNEWTAG( "OtherCurrentYearCreditAmtGrp" ) DO
                BEGIN
                        OUTPUTVALUE( "OtherCurrentYearCreditAmt", F3800MLT[n].OTHERGBC );
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EINOTHGB) );
                END;
                OUTPUTVALUE( "CurrentYearGeneralBusCrAmt", F3800MLT[n].L2 );
                If HasValue(F3800MLT[n].F8844) Then
                WITHNEWTAG( "EnterAmountFromF8844Grp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].F8844E) THEN
                    BEGIN
                        WITHNEWTAG( "EnterAmountFromF8844Amt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8844ID ) );
                                OUTPUTLITERAL(F3800MLT[n].F8844);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "EnterAmountFromF8844Amt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].F8844);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].F8844E) );
                END;
                If HasValue(F3800MLT[n].REHABCR) Then
                WITHNEWTAG( "InvestmentCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].INVCRE ) THEN
                    BEGIN
                        WITHNEWTAG( "InvestmentCreditAmt" ) DO
                        Begin
                                SETATTRIBUTE( "referenceDocumentId", ( F3468ID ) );

                                OUTPUTLITERAL(F3800MLT[n].REHABCR);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "InvestmentCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].REHABCR);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].INVCRE) );
                END;
                If HasValue(F3800MLT[n].WORKOPP) Then
                WITHNEWTAG( "WorkOpportunityCrFrom5884Grp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].WORKOPPE) THEN
                    BEGIN
                        WITHNEWTAG( "WorkOpportunityCrFrom5884Amt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F5884ID ) );
                                OUTPUTLITERAL(F3800MLT[n].WORKOPP);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "WorkOpportunityCrFrom5884Amt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].WORKOPP);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].WORKOPPE) );
                END;
                If HasValue(F3800MLT[n].ABFC) Then

                WITHNEWTAG( "BiofuelProducerCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].ABFCE) THEN
                    BEGIN

                        WITHNEWTAG( "BiofuelProducerCreditAmt" ) DO
                        Begin
                                SETATTRIBUTE( "referenceDocumentId", ( F6478ID ) );
                                SETATTRIBUTE( "referenceDocumentName", "IRS6478" );
                                OUTPUTLITERAL(F3800MLT[n].ABFC);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "BiofuelProducerCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].ABFC);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].ABFCE) );
                END;
                If HasValue(F3800MLT[n].LOWINCCR) Then
                WITHNEWTAG( "LowIncomeHousingCreditGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].LOWINCE) THEN
                    BEGIN
                        WITHNEWTAG( "LowIncomeHousingCreditAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8586ID) );
                                OUTPUTLITERAL(F3800MLT[n].LOWINCCR);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "LowIncomeHousingCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].LOWINCCR);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].LOWINCE) );
                END;
                If HasValue(F3800MLT[n].ELECCOAL) Then
                WITHNEWTAG( "RnwblElecCoalCrFromF8835Grp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].ELECOALE) THEN
                    BEGIN
                        WITHNEWTAG( "RnwblElecCoalCrFromF8835Amt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8835ID ) );
                                OUTPUTLITERAL(F3800MLT[n].ELECCOAL);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "RnwblElecCoalCrFromF8835Amt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].ELECCOAL);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].ELECOALE) );
                END;
                If HasValue(F3800MLT[n].TIPSCR) Then
                WITHNEWTAG( "CrForEmployerSSMedicareTaxGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].TIPSCRE) THEN
                    BEGIN
                        WITHNEWTAG( "CreditForEmployerSSMedcrTxAmt" ) DO
                        Begin

                                SETATTRIBUTE( "referenceDocumentId", ( F8846ID ) );
                                OUTPUTLITERAL(F3800MLT[n].TIPSCR);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "CreditForEmployerSSMedcrTxAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].TIPSCR);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].TIPSCRE) );
                END;
                If HasValue(F3800MLT[n].RRTM) Then
                WITHNEWTAG( "QualifiedRailroadTrackMaintGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].RRTME) THEN
                    BEGIN
                        WITHNEWTAG( "QualifiedRailroadTrackMaintAmt" ) DO
                        Begin
                                OUTPUTLITERAL(F3800MLT[n].RRTM);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "QualifiedRailroadTrackMaintAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].RRTM);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].RRTME) );
                END;
                If HasValue(F3800MLT[n].SEHIP) Then
                WITHNEWTAG( "SmallEmployerHIPCreditAmtGrp" ) DO
                BEGIN
					If Not HasValue(F3800MLT[n].SEHIPEIN) THEN
                    BEGIN
                        WITHNEWTAG( "SmallEmployerHIPCreditAmt" ) DO
                        Begin
                                SETATTRIBUTE( "referenceDocumentId", ( F8941ID ) );

                                OUTPUTLITERAL(F3800MLT[n].SEHIP);
						End;
					END
					ELSE
					BEGIN
                        WITHNEWTAG( "SmallEmployerHIPCreditAmt" ) DO
						Begin
                                OUTPUTLITERAL(F3800MLT[n].SEHIP);
						End;
                    END;
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].SEHIPEIN) );
                END;
                If HasValue(F3800MLT[n].OTHERESB) Then
                WITHNEWTAG( "OtherSpecifiedCreditAmtGrp" ) DO
                BEGIN
                        OUTPUTVALUE( "OtherSpecifiedCreditAmt", F3800MLT[n].OTHERESB );
                        OUTPUTVALUE( "PassThroughEntityEIN", FormatXMLEIN(F3800MLT[n].EINOTHES) );
                END;
                OUTPUTVALUE( "SumOfAllowableGeneralBusCrAmt", F3800MLT[n].SUBTOT3 );
                OUTPUTVALUE( "TotalBusinessCreditsAmt", F3800MLT[n].TOTAL );
        END;
End;
PROCEDURE Form3800Output(docID : FText);

FORM F3800;

VAR
	temp	: FText;

	Ctr, Ctr2,
	DLTCt, CMax		        : FInteger;
	i, j, n,LastOne			: Index;
	hBoxA, hBoxB			: boolean;
	hBoxC, hBoxD, hBoxG		: Index;
BEGIN
	WITHNEWTAG( "IRS3800" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );

		OUTPUTVALUE( "GeneralBusCrFromNnPssvActyAmt", G1GBN  );
		OUTPUTVALUE( "CurrYearPassiveActyCreditsAmt", G1GBP );
	    If HasValue(G1GBP) then
		   IF ( G1GBPA <> 0 ) THEN OutputValue( "PssvActyForGenBusCrAllowedAmt", G1GBPA ) ELSE OutputValue( "PssvActyForGenBusCrAllowedAmt", "0" );
		OUTPUTVALUE( "CYGeneralBusCrCarryforwardAmt", G1GBCF );

		OUTPUTVALUE( "CarryBackGeneralBusinessCrAmt", G1GBCB );
		OUTPUTVALUE( "CYCreditsNotAllwAgainstTMTAmt", G1GBTOT );
		OUTPUTVALUE( "RegularTaxBeforeCreditsAmt", L9 );
		OUTPUTVALUE( "AlternativeMinimumTaxAmt", L10 );
		OUTPUTVALUE( "AdjustedRegTaxBeforeCreditAmt", L11 );
		OUTPUTVALUE( "ForeignTaxCreditAmt", L12A );
		OUTPUTVALUE( "CertainAllowableCreditsAmt", varcr );
		OUTPUTVALUE( "TotalTaxCreditsAmt", L12L );
		OUTPUTVALUE( "NetIncomeTaxAmt", L13 );
		OUTPUTVALUE( "NetRegularTaxAmt", L15 );
		OUTPUTVALUE( "ExcessNetRegularTaxAmt", L16 );
		OUTPUTVALUE( "TentativeMinimumTaxAmt", L14 );
		OUTPUTVALUE( "AdjustedExcessNetRegularTaxAmt", L17 );
		OUTPUTVALUE( "AdjustedNetIncomeTaxAmt", L18a );
		OUTPUTVALUE( "SmllrCYNotAllwTMTOrTotAdjAmt", SMALLER1 );
		OUTPUTVALUE( "TentativeMinimunTaxTimesPctAmt", MULT1 );
		OUTPUTVALUE( "GreaterExcessOrTimesPctAmt", GREATER1 );
		OUTPUTVALUE( "NetIncmTaxLessGreaterExcessAmt", SUBTR1 );
		OUTPUTVALUE( "SubSmllrFromNetLessGreaterAmt", SUBTR2 );

		OUTPUTVALUE( "TotEmpwrZoneGenBusCreditsAmt", F8844 );
		OUTPUTVALUE( "GBCFromPssvActyAllPartsAmt", F8844GP );
	    If HasValue(F8844GP) then
		   IF ( F8844GPA <> 0 ) THEN OutputValue( "PassiveActyAllowedForTYAmt", F8844GPA ) ELSE OutputValue( "PassiveActyAllowedForTYAmt", "0" );
		OUTPUTVALUE( "TotalPassiveActivityCreditAmt", F8844G );
		OUTPUTVALUE( "EmpwrZoneAndComEmploymentCrAmt", SMALLER3 );
		OUTPUTVALUE( "NetIncomeTaxLessPctExcessAmt", SUBTR3 );
        OUTPUTVALUE( "SumSmllrEmpwrZnEmplmnCrAmt", SUBTOT2 );
		OUTPUTVALUE( "NetSmllrAndEmpwrZnEmplmnCrAmt", SUBTR4 );
		OUTPUTVALUE( "AllwGenBusCrFromNonPssvActyAmt", G2GBN );
		OUTPUTVALUE( "GenBusEligSmllBusPssvActyCrAmt", G2G_ESP );

	    If HasValue(G2G_ESP) then
		IF ( G2G_ESPA <> 0 ) THEN OutputValue( "OtherSpecifiedAllwGenBusCrAmt", G2G_ESPA ) ELSE OutputValue( "OtherSpecifiedAllwGenBusCrAmt", "0" );
		OUTPUTVALUE( "AllwGenAndEligSmllBusCfwdCrAmt", G2G_ESCF );

		OUTPUTVALUE( "AllwGenAndEligSmllBusCybkCrAmt", G2G_ESCB );

		OUTPUTVALUE( "TotAllwGenAndEligSmllBusCrAmt", SUBTOT3 );
		OUTPUTVALUE( "SmllrGenBusCrOrTotGenEligCrAmt", SMALLER4 );

		OUTPUTVALUE( "CurrentYearCreditAllowedAmt", L19 );
        CMax := NumCopies( F3800MLT );
		WITHNEWTAG( "GenBusCrOrEligSmllBusCrGrp" ) DO
		BEGIN

            If IsChecked(F3800MLT[1].MOREPT3) Then
    			WITHNEWTAG( "ConsolidatedBusinessCreditsGrp" ) DO
                Begin
    				OUTPUTVALUE( "ConsolidatedSectionInd", F3800MLT[1].MOREPT3 );
                    pBusinessCreditsGr(1);
                End;

            hBoxC := 0;
            hBoxD := 0;
            hBoxG := 0;

            for n := 1 TO CMAX DO
		    Begin
		    	If IsChecked(F3800MLT[n].GBCNPA) Then
            		hBoxA := true;
		    	If IsChecked(F3800MLT[n].GBCPA) Then
            		hBoxB := true;
		    	If IsChecked(F3800MLT[n].GBCCF) Then
            		hBoxC := n;
		    	If IsChecked(F3800MLT[n].GBCCB) Then
		    		hBoxD := n;
		    	If IsChecked(F3800MLT[n].SBCCF) Then
                	hBoxG := n;
		    end;

		    if hBoxA then
		    	FOR n := 1 TO CMAX DO
		    	begin
	                WITHNEWTAG( "GeneralBusCrFromNnpssvActyGrp" ) DO
	                Begin
	                	if IsChecked(F3800MLT[n].GBCNPA) Then
	                	begin
	                		OUTPUTVALUE( "GeneralBusCrFromNnpssvActyInd", "X" );
                        	pBusinessCreditsGr(n);
                        end;
                    end;
	    		end;

            If hBoxB Then
            	FOR n := 1 TO CMAX DO
            	begin
	                WITHNEWTAG( "GeneralBusCrFromPassiveActyGrp" ) DO
	                Begin
	                	if IsChecked(F3800MLT[n].GBCPA) Then
	                	begin
	                		OUTPUTVALUE( "GeneralBusCrFromPassiveActyInd", "X" );
	            			pBusinessCreditsGr(n);
	            		end;
	                End;
	            end;

            if (hBoxC <> 0) then
                WITHNEWTAG( "GeneralBusCrCarryforwardsGrp" ) DO
                Begin
                    OUTPUTVALUE( "GeneralBusCrCarryforwardsInd", "X" );
    				pBusinessCreditsGr(hBoxC);
                End;

            if (hBoxD <> 0) Then
                WITHNEWTAG( "GeneralBusCrCarrybacksGrp" ) DO
                Begin
                    OUTPUTVALUE( "GeneralBusCrCarrybacksInd", "X" );
        			pBusinessCreditsGr(hBoxD);
                End;

            if (hBoxG <> 0) then
                WITHNEWTAG( "EligibleSmallBusinessCrCfwdGrp" ) DO
                Begin
                	OUTPUTVALUE( "EligSmllBusCrCarryforwardsInd", "X" );
                	pBusinessCreditsGr(hBoxG);
                End;

        END;
    END;
END;
PROCEDURE Form4136Output(docID : FText);

FORM F4136;

VAR
     LastOne	: Index;
     i		    : Integer;

BEGIN
	IF TestFormIs( PartOfReturn, F4136 ) THEN
	BEGIN
		WITHNEWTAG( "IRS4136" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );
			IF L1TABC > 0 THEN
			BEGIN
				OUTPUTVALUE( "OffHwyBusUseGasolineGalsQty", FormatXMLFuelGallons(L1AG) );
				OUTPUTVALUE( "FarmingPurposesGasolineGalsQty", FormatXMLFuelGallons(L1BG) );

				IF ( L1CG1 > 0 ) AND ValidXMLFuelGallons( L1CG1 ) THEN
				BEGIN
					WITHNEWTAG( "OtherNontaxableUseOfGasoline" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(L1CT1, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(L1CG1));
					END;
				END;

				WITHNEWTAG( "NontaxableUseOfGasolineCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "362" );
					OUTPUTLITERAL( L1TABC );
				END;
			END;

	  		OUTPUTVALUE( "ExportedNontxUseGasGalsQty", FormatXMLFuelGallons(NTUGEG) );

			IF NTUGECR > 0 THEN
			BEGIN
				WITHNEWTAG( "ExportedNontxUseOfGasCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "411" );
					OUTPUTLITERAL( NTUGECR );
				END;
			END;
			IF L2TA > 0 THEN
			BEGIN
		  		OUTPUTVALUE( "AviationGasolineGallonsQty", FormatXMLFuelGallons(L2AG));
				WITHNEWTAG( "AviationGasolineCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "354" );
					OUTPUTLITERAL( L2TA );
				END;
			END;

			IF  L2T > 0  THEN
			BEGIN
				IF ( L2BG1 > 0 ) AND ValidXMLFuelGallons( L2BG1 ) THEN
				BEGIN
					WITHNEWTAG( "AviationNontxUseGasGalsQty" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(L2BT1, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(L2BG1));
					END;
				END;

				WITHNEWTAG( "AviationNontxGasCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "324" );
					OUTPUTLITERAL( L2T );
				END;
			END;

			OUTPUTVALUE( "ExpNontxAviationGasGalsQty", FormatXMLFuelGallons(NTUAGEG));

			IF  NTUAGCR > 0  THEN
			BEGIN
				WITHNEWTAG( "ExpNontxAviationGasCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "412" );
					OUTPUTLITERAL( NTUAGCR );
				END;
			END;

			OUTPUTVALUE( "LUSTTxAvnFuelFrgnTradeGalsQty", FormatXMLFuelGallons(LUSTAGAL) );

			IF  LUSTACR > 0  THEN
			BEGIN
				WITHNEWTAG( "LUSTTxAvnFuelFrgnTradeCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "433" );
					OUTPUTLITERAL( LUSTACR );
				END;
			END;
			if (TestFormIs( PartOfReturn, F4136:Fexpl77 )) then
			begin
				WITHNEWTAG ( "UndyedDieselUseExceptionInd" ) do
				begin
					SETATTRIBUTE( "referenceDocumentId", s4136_1 );
					SETATTRIBUTE( "referenceDocumentName", "EvidenceOfDyedDieselFuelStatement" );
					OutputLiteral( "X");
				end;
			end
			else
			OUTPUTVALUE( "UndyedDieselUseExceptionInd" , L3BX );

			IF  L3TAB > 0  THEN
			BEGIN
				IF ( L3AG1 > 0 ) AND ValidXMLFuelGallons( L3AG1 ) THEN
				BEGIN
					WITHNEWTAG( "NontaxableUseOfUndyedDiesel" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(L3AT1, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(L3AG1));
					END;
				END;

				OUTPUTVALUE( "FarmPrpsUndyedDslFuelGalsQty", FormatXMLFuelGallons(FARMGAL) );
				WITHNEWTAG( "FarmPrpsUndyedDslFuelCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "360" );
					OUTPUTLITERAL( L3TAB );
				END;
			END;

			OUTPUTVALUE( "TrainUseOfUndyedDieselGalsQty", FormatXMLFuelGallons(L3BG2B));

			IF  L3BTB > 0  THEN
			BEGIN
				WITHNEWTAG( "TrainUseOfUndyedDieselCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "353" );
					OUTPUTLITERAL( L3BTB );
				END;
			END;

			OUTPUTVALUE( "BusUseOfUndyedDieselGalsQty", FormatXMLFuelGallons(L3CG));

			IF L3CT > 0  THEN
			BEGIN
				WITHNEWTAG( "BusUseOfUndyedDieselCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "350" );
					OUTPUTLITERAL( L3CT );
				END;
			END;

			OUTPUTVALUE( "ExpUndyedDieselFuelGalsQty", FormatXMLFuelGallons(NTUDFEG) );

			IF NTUDFECR > 0  THEN
			BEGIN
				WITHNEWTAG( "ExpUndyedDieselFuelCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "413" );
					OUTPUTLITERAL( NTUDFECR );
				END;
			END;
			if (TestFormIs( PartOfReturn, F4136:Fexpl116 )) then
			begin
				WITHNEWTAG ( "UndyedKeroseneUseExceptionInd" ) do
				begin
					SETATTRIBUTE( "referenceDocumentId", s4136_2 );
					SETATTRIBUTE( "referenceDocumentName", "EvidenceOfDyedKeroseneStatement" );
					OutputLiteral( "X");
				end;
			end
			else
			OUTPUTVALUE( "UndyedKeroseneUseExceptionInd" , L4BX );

			IF L4TAB > 0 THEN
			BEGIN
				IF ( L4AG1 > 0 ) AND ValidXMLFuelGallons( L4AG1 ) THEN
				BEGIN
					WITHNEWTAG( "NontaxableUseOfUndyedKerosene" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(L4AT1, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(L4AG1));
					END;
				END;

				OUTPUTVALUE( "FarmPrpsUndyedKeroseneGalsQty", FormatXMLFuelGallons(PURPGAL) );

				WITHNEWTAG( "FarmPrpsUndyedKeroseneCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "346" );
					OUTPUTLITERAL( L4TAB );
				END;
			END;

			OUTPUTVALUE( "BusUseOfUndyedKeroseneGalsQty", FormatXMLFuelGallons(BUSGAL));

			IF  BUSCRED > 0  THEN
				WITHNEWTAG( "BusUseOfUndyedKeroseneCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "347" );
					OUTPUTLITERAL( BUSCRED );
				END;

			OUTPUTVALUE( "ExportedUndyedKeroseneGalsQty", FormatXMLFuelGallons(NTUKEG) );

			IF  NTUKECR > 0  THEN
				WITHNEWTAG( "ExportedUndyedKeroseneCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "414" );
					OUTPUTLITERAL( NTUKECR );
				END;

			IF  NTGAL1 > 0  THEN
				WITHNEWTAG( "NontxUseUndyedKrsnTxdAt044" ) DO
				BEGIN
					OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTTYPE1, 2, 2, 2, FALSE, "") );
					OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTGAL1) );
				END;

			IF  NTCR1 > 0  THEN
				WITHNEWTAG( "NontxUseUndyedKrsnTxd044CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "377" );
					OUTPUTLITERAL( NTCR1 );
				END;

			IF  NTGAL2 > 0  THEN
				WITHNEWTAG( "NontxUseUndyedKrsnTxd219" ) DO
				BEGIN
					OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTTYPE2, 2, 2, 2, FALSE, "") );
					OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTGAL2) );
				END;

			IF  NTCR2 > 0  THEN
				WITHNEWTAG( "NontxUseUndyedKrsnTxd219CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "369" );
					OUTPUTLITERAL( NTCR2 );
				END;
			OUTPUTVALUE( "KeroseneUsedInAvnTxd244GalsQty", FormatXMLFuelGallons(L14A1G) );

			IF  L14A1 > 0  THEN
				WITHNEWTAG( "KeroseneUsedInAvnTxd244CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "417" );
					OUTPUTLITERAL( L14A1 );
				END;

			OUTPUTVALUE( "KeroseneUsedInAvnTxd219GalsQty", FormatXMLFuelGallons(L14A2G) );

			IF  L14A2 > 0  THEN
				WITHNEWTAG( "KeroseneUsedInAvnTxd219CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "355" );
					OUTPUTLITERAL( L14A2 );
				END;
			IF NTNCREDA > 0 THEN
			BEGIN
				IF ( NTNGALA > 0 ) AND ValidXMLFuelGallons( NTNGALA )  THEN
				BEGIN
					WITHNEWTAG( "NonTxKrsnUsedInAvnTxd244" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTNTYPEA, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTNGALA));
					END;
				END;

				WITHNEWTAG( "NonTxKrsnUsedInAvnTxd244CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "346" );
					OUTPUTLITERAL( NTNCREDA );
				END;
			END;

			IF NTNCREDB > 0 THEN
			BEGIN
				IF ( NTNGALB > 0 ) AND ValidXMLFuelGallons( NTNGALB )  THEN
				BEGIN
					WITHNEWTAG( "NonTxKrsnUsedInAvnTxd219" ) DO
			  	  	BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTNTYPEB, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTNGALB));
					END;
				END;

				WITHNEWTAG( "NonTxKrsnUsedInAvnTxd219CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "369" );
					OUTPUTLITERAL( NTNCREDB );
				END;
			END;

			OUTPUTVALUE( "LUSTTxKrsnAvnFrgnTrdGalsQty", FormatXMLFuelGallons(LUSTBG) );

			IF LUSTBC > 0 THEN
			BEGIN
				WITHNEWTAG( "LUSTTxKrsnAvnFrgnTrdCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "433" );
					OUTPUTLITERAL( LUSTBC );
				END;
			END;
			OUTPUTVALUE( "UndyedDieselRegistrationNum", FormatXMLRegistrationNum(UPPERCASE( UV5 )));
			if (TestFormIs( PartOfReturn, F4136:Fexpl78 )) then
			begin
				WITHNEWTAG ( "SalesUndyedDieselExceptionInd" ) do
				begin
					SETATTRIBUTE( "referenceDocumentId", s4136_3 );
					SETATTRIBUTE( "referenceDocumentName", "EvidenceOfDyedDieselFuelSoldStatement ToWhomDieselFuelSoldStatement" );
					OutputLiteral( "X");
				end;
			end
			else
			OUTPUTVALUE( "SalesUndyedDieselExceptionInd" , L5BX );

			OUTPUTVALUE( "SlsUndyedDslStLclGovtGalsQty", FormatXMLFuelGallons(L5BG));

			IF L5T > 0  THEN
				WITHNEWTAG( "SlsUndyedDslUseStLclGovtCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "360" );
		 			OUTPUTLITERAL( L5T  );
				END;

			OUTPUTVALUE( "SlsUndyedDieselUseBusGalsQty", FormatXMLFuelGallons(LOCGAL));

			IF LOCCRED > 0  THEN
				WITHNEWTAG( "SlsUndyedDieselUseBusCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "350" );
		 			OUTPUTLITERAL( LOCCRED  );
				END;
		   	OUTPUTVALUE( "UndyedKeroseneRegistrationNum", FormatXMLRegistrationNum(UPPERCASE( UV6 )));
			if (TestFormIs( PartOfReturn, F4136:Fexpl84 )) then
			begin
				WITHNEWTAG ( "SlsUndyedKeroseneExceptionInd" ) do
				begin
					SETATTRIBUTE( "referenceDocumentId", s4136_4 );
					SETATTRIBUTE( "referenceDocumentName", "EvidenceOfDyedKeroseneSoldStatement" );
					OutputLiteral( "X");
				end;
			end
			else
			OUTPUTVALUE( "SlsUndyedKeroseneExceptionInd" , L6BX );

			IF ( L6T > 0 )	THEN
			BEGIN
				OUTPUTVALUE( "SlsUndyedKrsnStLclGovtGalsQty" , FormatXMLFuelGallons(L6BG));
				OUTPUTVALUE( "SlsUndyedKrsnBlockPumpGalsQty", FormatXMLFuelGallons(L6CG));

				WITHNEWTAG( "SlsUndyedKrsnBlockPumpCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "346" );
		 			OUTPUTLITERAL( L6T );
				END;
			END;

			OUTPUTVALUE( "SlsUndyedKrsnUseBusGalsQty", FormatXMLFuelGallons(INGAL));

			IF ( INCRED > 0 ) THEN
				WITHNEWTAG( "SlsUndyedKrsnUseBusCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "347" );
			 		OUTPUTLITERAL( INCRED );
				END;
			OUTPUTVALUE( "KeroseneForAvnRegistrationNum", FormatXMLRegistrationNum(UPPERCASE( SALEREG )));

			OUTPUTVALUE( "SlsKrsnUsedInAvnTxd219GalsQty", FormatXMLFuelGallons(L14B1G));

			IF ( L14B1 > 0 ) THEN
				WITHNEWTAG( "SlsKrsnUsedInAvnTxd219CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "355" );
			 		OUTPUTLITERAL( L14B1 );
				END;

			OUTPUTVALUE( "SlsKrsnUsedInAvnTxd244GalsQty", FormatXMLFuelGallons(L14B2G));

			IF ( L14B2 > 0 )	THEN
				WITHNEWTAG( "SlsKrsnUsedInAvnTxd244CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "417" );
					OUTPUTLITERAL( L14B2 );
				END;

			OUTPUTVALUE( "SlsKrsnNnxmptUseInAvnGalsQty", FormatXMLFuelGallons(L14B3G));

			IF ( L14B3 > 0 )	THEN
				WITHNEWTAG( "SlsKrsnNnxmptUseInAvnCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "418" );
					OUTPUTLITERAL( L14B3 );
				END;

			IF L14B4 > 0 THEN
			BEGIN
				IF ( L14B4G > 0 ) AND ValidXMLFuelGallons( L14B4G )  THEN
				BEGIN
					WITHNEWTAG( "OtherNontaxableUseTaxedAt244" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTATYPE, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(L14B4G) );
					END;
			  	END;

				WITHNEWTAG( "SlsKrsnOthNontxTxd244CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "346" );
					OUTPUTLITERAL( L14B4 );
				END;
			END;

			IF L14B5 > 0 THEN
			BEGIN
				IF ( L14B5G > 0 ) AND ValidXMLFuelGallons( L14B5G )  THEN
				BEGIN
					WITHNEWTAG( "OtherNontaxableUseTaxedAt219" ) DO
					BEGIN
						OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NONUSE, 2, 2, 2, FALSE, ""));
						OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(L14B5G));
					END;
				END;

				WITHNEWTAG( "SlsKrsnOthNontxTxd219CrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "369" );
					OUTPUTLITERAL( L14B5 );
				END;
			END;

			OUTPUTVALUE( "LUSTTxSlsKrsnAvnFrgnTrdGalsQty", FormatXMLFuelGallons(UVLUSTG) );

			IF UVLUSTC > 0 THEN
			BEGIN
				WITHNEWTAG( "LUSTTxSlsKrsnAvnFrgnTrdCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "433" );
					OUTPUTLITERAL( UVLUSTC );
				END;
			END;
			OUTPUTVALUE( "BiodieselRnwblRegistrationNum", FormatXMLRegistrationNum(UPPERCASE( BIOREG )));

			OUTPUTVALUE( "BiodieselMixtureGallonsQty", FormatXMLFuelGallons(BIOGAL));

			IF BIOCRED > 0 THEN
				WITHNEWTAG( "BiodieselMixtureCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "388" );
					OUTPUTLITERAL( BIOCRED );
				END;

			OUTPUTVALUE( "AgriBiodieselMixtureGallonsQty", FormatXMLFuelGallons(AGRIGAL));

			IF AGRICRED > 0 THEN
				WITHNEWTAG( "AgriBiodieselMixtureCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "390" );
					OUTPUTLITERAL( AGRICRED );
				END;
			OUTPUTVALUE( "RenewableDieselMixtureGalsQty", FormatXMLFuelGallons(RENEWGAL));

			IF RENEWCR > 0 THEN
				WITHNEWTAG( "RenewableDieselMixtureCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "307" );
					OUTPUTLITERAL( RENEWCR );
				END;
			IF NTLPGCR > 0 THEN
			BEGIN
				IF ( NTLPGGAL > 0 ) AND ValidXMLFuelGallons( NTLPGGAL )  THEN
				BEGIN
					IF (NTLPTYPE = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxLiquifiedPetroleumGas" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTLPTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTLPGRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLPGGAL));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxLiquifiedPetroleumGas" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTLPTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLPGGAL));
						END;
					END;

					WITHNEWTAG( "NontxLiquefiedPtrlmGasCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "419" );
						OUTPUTLITERAL( NTLPGCR );
					END;
				END;
			END;

			IF NTPCR > 0 THEN
			BEGIN
				IF ( NTPGAL > 0 ) AND ValidXMLFuelGallons( NTPGAL )  THEN
				BEGIN
					IF ( NTPTYPE = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxPSeriesFuels" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTPTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTPRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTPGAL));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxPSeriesFuels" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTPTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTPGAL));
						END;
					END;

					WITHNEWTAG( "NontxPSeriesFuelsCreditAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "420" );
						OUTPUTLITERAL( NTPCR );
					END;
				END;
			END;

			IF NTCNGCR > 0 THEN
			BEGIN
				IF ( NTCNGGAL > 0 ) AND ValidXMLFuelGallons( NTCNGGAL )  THEN
				BEGIN
					IF (NTCNTYPE = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxCompressedNaturalGas" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTCNTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTCNRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTCNGGAL));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxCompressedNaturalGas" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTCNTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTCNGGAL));
						END;
					END;

					WITHNEWTAG( "NontxCompressedNaturalGasCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "421" );
						OUTPUTLITERAL( NTCNGCR );
					END;
				END;
			END;

			IF NTLHCR > 0 THEN
			BEGIN
				IF ( NTLHGAL > 0 ) AND ValidXMLFuelGallons( NTLHGAL )  THEN
				BEGIN
					if (NTLHTYPE = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxLiquifiedHydrogen" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTLHTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTLHRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLHGAL));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxLiquifiedHydrogen" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTLHTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLHGAL));
						END;
					END;

					WITHNEWTAG( "NontxLiquefiedHydrogenCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "422" );
						OUTPUTLITERAL( NTLHCR );
					END;
				END;
			END;

			IF NTCOALCR > 0 THEN
			BEGIN
				IF ( NTCOALGA > 0 ) AND ValidXMLFuelGallons( NTCOALGA )  THEN
				BEGIN
					IF (NTCOALTY = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxLiqfdFuelDerFromCoal" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTCOALTY, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTCOALRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTCOALGA));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxLiqfdFuelDerivedFromCoal" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTCOALTY, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTCOALGA));
							END;
					END;

					WITHNEWTAG( "NontxLiqfdFuelDerFromCoalCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "423" );
						OUTPUTLITERAL( NTCOALCR );
					END;
				END;
			END;

			IF NTBIOCR > 0 THEN
			BEGIN
				IF ( NTBIOGAL > 0 ) AND ValidXMLFuelGallons( NTBIOGAL )  THEN
				BEGIN
					IF (NTBIOTYP = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxLiqFuelDerFromBiomass" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTBIOTYP, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTBIORT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTBIOGAL));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontaxLiqFuelDerFromBiomass" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(NTBIOTYP, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTBIOGAL));
						END;
					END;

					WITHNEWTAG( "NontxLiqFuelDerBiomassCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "424" );
						OUTPUTLITERAL( NTBIOCR );
					END;
				END;
			END;

			IF NTLNGCR > 0 THEN
			BEGIN
				IF ( NTLNGGAL > 0 ) AND ValidXMLFuelGallons( NTLNGGAL )  THEN
				BEGIN
					IF (NTLNTYPE = 5) THEN
					BEGIN
						WITHNEWTAG( "BusNontxLiquefiedNaturalGas" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTLNTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTLNRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLNGGAL));
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxLiquefiedNaturalGas" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTLNTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLNGGAL));
						END;
					END;

					WITHNEWTAG( "NontxLiquefiedNaturalGasCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "425" );
						OUTPUTLITERAL( NTLNGCR );
					END;
				END;
			END;

			IF NTLGCR > 0 THEN
			BEGIN
				IF ( NTLGGAL > 0 ) AND ValidXMLFuelGallons( NTLGGAL )  THEN
				BEGIN
					IF (NTLGTYPE = 5) THEN
					BEGIN
					WITHNEWTAG( "BusNontxLiquefiedGasDerBiomass" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTLGTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", NTLGRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLGGAL) );
						END;
					END
					ELSE
					BEGIN
					WITHNEWTAG( "NontxLiquefiedGasBiomass" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(NTLGTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(NTLGGAL) );
						END;

					END;

					WITHNEWTAG( "NontxLiquefiedGasBiomassCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "435" );
						OUTPUTLITERAL( NTLGCR );
					END;
				END;
			END;
			OUTPUTVALUE( "AlternativeFuelRegistrationNum", FormatXMLRegistrationNum(ALTREG));

			OUTPUTVALUE( "LiquefiedPetroleumGasGalsQty", FormatXMLFuelGallons(AFLPGGAL));

			IF AFLPGCR > 0 THEN
				WITHNEWTAG( "LiquefiedPetroleumGasCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "426" );
					OUTPUTLITERAL( AFLPGCR );
				END;
			OUTPUTVALUE( "PSeriesFuelsGallonsQty", FormatXMLFuelGallons(AFPGAL));

			IF AFPCR > 0 THEN
				WITHNEWTAG( "PSeriesFuelsCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "427" );
					OUTPUTLITERAL( AFPCR );
				END;

			OUTPUTVALUE( "CompressedNaturalGasGalsQty", FormatXMLFuelGallons(AFCNGGAL));

			IF AFCNGCR > 0 THEN
				WITHNEWTAG( "CompressedNaturalGasCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "428" );
					OUTPUTLITERAL( AFCNGCR );
				END;
			OUTPUTVALUE( "LiquefiedHydrogenGallonsQty", FormatXMLFuelGallons(AFLHGAL));

			IF AFCNGCR > 0 THEN
				WITHNEWTAG( "LiquefiedHydrogenCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "429" );
					OUTPUTLITERAL( AFCNGCR );
				END;

			OUTPUTVALUE( "LiquidFuelDerFromCoalGalsQty", FormatXMLFuelGallons(AFCOALGA));

			IF AFCOALCR > 0 THEN
				WITHNEWTAG( "LiquidFuelDerFromCoalCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "430" );
					OUTPUTLITERAL( AFCOALCR );
				END;

			OUTPUTVALUE( "LiquidFuelDerBiomassGalsQty", FormatXMLFuelGallons(AFBIOGAL));

			IF AFBIOCR > 0 THEN
				WITHNEWTAG( "LiquidFuelDerBiomassCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "431" );
					OUTPUTLITERAL( AFBIOCR );
				END;

			OUTPUTVALUE( "LiquefiedNaturalGasGallonsQty", FormatXMLFuelGallons(AFLNGGAL));

			IF AFLNGCR > 0 THEN
				WITHNEWTAG( "LiquefiedNaturalGasCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "432" );
					OUTPUTLITERAL( AFLNGCR );
				END;
			OUTPUTVALUE( "LiquefiedGasDerBiomassGalsQty", FormatXMLFuelGallons(AFLGGAL));

			IF AFLGCR > 0 THEN
				WITHNEWTAG( "LiquefiedGasDerBiomassCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "436" );
					OUTPUTLITERAL( AFLGCR );
				END;

			OUTPUTVALUE( "CompressedGasBiomassGGEQty", FormatXMLFuelGallons(AFCGGAL));

			IF AFCGCR > 0 THEN
				WITHNEWTAG( "CompressedGasBiomassCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "437" );
					OUTPUTLITERAL( AFCGCR );
				END;
			OUTPUTVALUE( "CreditCardIssrRegistrationNum" , FormatXMLRegistrationNum(UPPERCASE( RCCREG )));

			OUTPUTVALUE( "DslFuelSoldStLocalGovtGalsQty", FormatXMLFuelGallons(RCCDGAL));

			IF RCCDCR > 0 THEN
				WITHNEWTAG( "DslFuelSoldStLocalGovtCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "360" );
					OUTPUTLITERAL( RCCDCR );
				END;

			OUTPUTVALUE( "KrsnFuelSoldStLocalGovtGalsQty", FormatXMLFuelGallons(RCCKGAL));

			IF RCCKCR > 0 THEN
				WITHNEWTAG( "KrsnFuelSoldStLocalGovtCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "346" );
					OUTPUTLITERAL( RCCKCR );
				END;
			OUTPUTVALUE( "KrsnAvnSoldStLocalGovtGalsQty", FormatXMLFuelGallons(RCCAGAL));

			IF RCCACR > 0 THEN
				WITHNEWTAG( "KrsnAvnSoldStLocalGovtCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "369" );
					OUTPUTLITERAL( RCCACR );
				END;
			IF DWNTCR > 0 THEN
			BEGIN
				IF ( DWNTGAL > 0 ) AND ValidXMLFuelGallons( DWNTGAL )  THEN
				BEGIN
					If( DWNTTYPE = 5 )THEN
					BEGIN
						WITHNEWTAG( "BusNontxUseDieselWtrEmulsion" ) DO
						BEGIN
							OUTPUTVALUE("FuelTaxLocalBusCd", "BUS");
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd", FormatString(DWNTTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "CreditRt", DWNTRT );
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(DWNTGAL) );
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "NontxUseDieselWaterEmulsion" ) DO
						BEGIN
							OUTPUTVALUE( "NontaxableUseOfFuelTypeCd",FormatString(DWNTTYPE, 2, 2, 2, FALSE, ""));
							OUTPUTVALUE( "GallonsQty", FormatXMLFuelGallons(DWNTGAL));
						END;
					END;
					WITHNEWTAG( "NontxUseDieselWtrEmulsionCrAmt" ) DO
					BEGIN
						SETATTRIBUTE( "creditReferenceNum", "309" );
						OUTPUTLITERAL( DWNTCR );
					END;
				 END;
			END;

			OUTPUTVALUE( "ExpNontxUseDslWtrEmulsionQty", FormatXMLFuelGallons(DWEXGAL));

			IF DWEXCR > 0 THEN
				WITHNEWTAG( "ExpNontxUseDslWtrEmulsionCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "306" );
					OUTPUTLITERAL( DWEXCR );
				END;
			OUTPUTVALUE( "DieselWtrBlndgRegistrationNum", FormatXMLRegistrationNum(UPPERCASE( DWBREG )));

			OUTPUTVALUE( "BlndrCrUseDslWtrEmulsionQty", FormatXMLFuelGallons(DWBGAL));

			IF DWBCR > 0 THEN
				WITHNEWTAG( "BlndrCrUseDslWtrEmulsionCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "310" );
					OUTPUTLITERAL( DWBCR );
				END;
			OUTPUTVALUE( "ExportedDyedDieselFuelGalsQty", FormatXMLFuelGallons(EXDGAL));

			IF EXDCR  > 0 THEN
				WITHNEWTAG( "ExportedDyedDieselFuelCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "415" );
					OUTPUTLITERAL( EXDCR );
				END;

			OUTPUTVALUE( "ExportedDyedKeroseneGallonsQty", FormatXMLFuelGallons(EXKGAL));

			IF EXKCR > 0 THEN
				WITHNEWTAG( "ExportedDyedKeroseneCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "creditReferenceNum", "416" );
					OUTPUTLITERAL( EXKCR );
				END;
			OUTPUTVALUE( "TotalFuelTaxCreditAmt", L9 );

	   	END;
	END;
END;
PROCEDURE Form4255Output(docID : FText);

FORM F4255;

VAR
	j		: INTEGER;

BEGIN
	IF TestFormIs( PartOfReturn, F4255 ) THEN
	BEGIN
		WITHNEWTAG( "IRS4255" ) DO
	   	BEGIN
			SETATTRIBUTE( "documentId", docID );
			FOR j := 1 TO 4 DO
			WITHNEWTAG( "RecaptureOfInvstCrProperties" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLText(PRPA[j], 50));
				OUTPUTVALUE( "CreditRt", FormatXMLRatio(L1[j]));
				OUTPUTVALUE( "CostOrOtherBasisAmt", L2[j] );
				OUTPUTVALUE( "OriginalCreditAmt", L3[j] );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L4[j]));
				OUTPUTVALUE( "PropertyCeasedToQualifyDt", FormatXMLDate(L5[j]));
				OUTPUTVALUE( "PropertyQualifiedYearCnt",FormatXMLNNInteger(L6[j], 2, 0));
				OUTPUTVALUE( "RecapturePct", FormatXMLRatio(L7[j]));
				OUTPUTVALUE( "TentativeRecaptureTaxAmt", L8[j] );
			END;
			IF L9WA <> 0 THEN
			BEGIN
				WITHNEWTAG( "TotalTentativeRecaptureTaxAmt" ) DO
				BEGIN
					SETATTRIBUTE( "taxFromAttachedCd", "TAX FROM ATTACHED" );
					OUTPUTLITERAL( L9 );
				END;
			END
			else
			  	OUTPUTVALUE( "TotalTentativeRecaptureTaxAmt", L9 );

			OUTPUTVALUE( "NonqualifedFinanceRcptrTaxAmt",  L10 );
			OUTPUTVALUE( "RecaptureTaxSubtotalAmt", L11 );
			OUTPUTVALUE( "NonOffsetTaxOfOriginalCrAmt", L12 );
			OUTPUTVALUE( "NetOfNonOffsetTxOriginalCrAmt", FUELCR);
			if (TestFormIs(PartOfReturn, F4255:FEXPL150)) and (RECAP <> 0) then
			begin
				WITHNEWTAG( "TxForRcptrQlfyThrputicDiscvAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", s4255id );
					SETATTRIBUTE( "referenceDocumentName", "RecaptureQualifyingTherapeuticDiscoveryProjectCreditStmt" );
					OUTPUTLITERAL( RECAP );
				END;
			end
			else
				OUTPUTVALUE( "TxForRcptrQlfyThrputicDiscvAmt", RECAP );
			OUTPUTVALUE( "TotalIncreaseInTaxAmt", L13 );

 	   END;
  	END;
END;
PROCEDURE SpclDeprecAllwncElectOutStmtOutput(docID : FText);
Form IRC168;
VAR
	n, i, j, LastOne, hCopy, hPCopy : Index;
        h168Types, h168Txt : FText;
        hElectOut       : Boolean;

BEGIN
END;
PROCEDURE Form4562AOutput(docID : FText);

Form FWLN15B: F4562A;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
        		hWhich4562StmtID := s4562a;
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4562COutput (i : FInteger; docID : FText);

Form FSCHC[i]:F4562C;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
        		hWhich4562StmtID := s4562c[i];
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4562E1Output(i : FInteger; docID : FText);

Form FSCHE1[i] : F4562e1;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
	    		hWhich4562StmtID := s4562e1[i];
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4562E2Output(i : FInteger; docID : FText);

Form FSCHE1[i] : F4562e2;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
	    		hWhich4562StmtID := s4562e2[i];
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4562E3Output(i : FInteger; docID : FText);

Form FSCHE1[i] : F4562e3;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
	    		hWhich4562StmtID := s4562e3[i];
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4562FOutput(i : FInteger; docID : FText);

Form SCHF[i]:F4562F;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
	    		hWhich4562StmtID := s4562f[i];
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4562ROutput(i : FInteger; docID : FText);

Form F4835[i]:F4562R;
VAR
	n	      	        	: Integer;
	hRecPer		     		: FDECIMAL1;
    h168Txt, h168Types,
    hWhich4562StmtID		: FText;
    LastOne,
	k, j, hCopy, hPCopy     : Index;
	hConvention,
    hElectOut               : Boolean;

BEGIN
	WITHNEWTAG( "IRS4562" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "BusinessOrActivityTxt", FormatXMLText(BUS, 40) );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "MaximumDollarLimitationAmt", L1 );
		OUTPUTVALUE( "TotalCostOfSection179PropAmt", L2 );
        if HasValue(L5) or HasValue(L8) or HasValue(L13) then
		    OUTPUTVALUE( "ThresholdCostOfSect179PropAmt", L3 );
		OUTPUTVALUE( "ReductionInLimitationAmt", L4 );
		OUTPUTVALUE( "DollarLimitationForTaxYearAmt", L5 );

		LastOne:= min( 99999, LastIndex(L6) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L6A[n]) then
			WITHNEWTAG( "ElectedProperty" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L6A[n]) );
				OUTPUTVALUE( "CostForBusinessUseOnlyAmt", L6B[n] );
				OUTPUTVALUE( "ElectedCostAmt", L6C[n] );
			END;
	   	END;

		OUTPUTVALUE( "TotalElectedCostSect179PropAmt", L8 );
		OUTPUTVALUE( "TentativeDeductionAmt", L9 );
		OUTPUTVALUE( "DisallowedDeductionCyovAmt", L10 );
		OUTPUTVALUE( "BusinessIncomeLimitationAmt", L11 );
		OUTPUTVALUE( "Section179ExpenseDeductionAmt", L12 );
		OUTPUTVALUE( "NextYearCarryoverAmt", L13 );
        			hElectOut := True;
                hPCopy := NumCopies(SCHF) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(SCHF[j]:FASSF) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                hPCopy := NumCopies(F4835) ;
                for J := 1 to hPCopy do
                Begin
                        hCopy := NumCopies(F4835[j]:FASSR) ;
                        for k := 1 to hCopy do
                        Begin
                                If IsChecked(F4835[j]:FASSR[k].ENSDAY) and IsChecked(F4835[j]:FASSR[k].ESPY) and (Substring(F4835[j]:FASSR[k].DTPS,7,4) = 2015 ) Then
                                Begin
                                        hElectOut := True;
                                        Break;
                                End;
                        End;
                End;
                If (BONUS14 > 0) Then
		        OUTPUTVALUE( "SpecialAllowanceAmt", BONUS14 );
        	hWhich4562StmtID := "999";
				hWhich4562StmtID := s4562r[i];
        	if (hWhich4562StmtID <> "999") and (L17 <> 0) then
        	begin
	        	WithNewTag("Section168f1ElectedPropertyAmt") do
	        	begin
		        	SETATTRIBUTE( "referenceDocumentId", hWhich4562StmtID );
		        	SETATTRIBUTE( "referenceDocumentName", "Section168f1PropertyExplanationStatement" );
		        	OutputLiteral ( L17 );
	        	end;
	        end
	        else
		OUTPUTVALUE( "Section168f1ElectedPropertyAmt", L17 );
		OUTPUTVALUE( "OtherDepreciationAmt", L18 );
		OUTPUTVALUE( "MACRSDedForAstInSrvcBfrPYAmt", L16 );
		OUTPUTVALUE( "GeneralAssetAccountElectionInd", GAAX );

		if (HasValue(L14G[1..7])) or (HasValue(L14G7[1..2])) or (HasValue(L14G8[1..2])) then
		WITHNEWTAG( "GeneralDepreciationSystem" ) DO
		BEGIN
        	if HasValue(L14G[1]) Then
        	WITHNEWTAG( "GDS3YearProperty" ) DO
        	BEGIN
		    	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[1] );
	            OUTPUTVALUE( "RecoveryPrd", "3" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[1]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[1] );
 			END;
        	if HasValue(L14G[2]) Then
         	WITHNEWTAG( "GDS5YearProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[2] );
	            OUTPUTVALUE( "RecoveryPrd", "5" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[2]) );
		        OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[2] );
			END;
        	if HasValue(L14G[3]) Then
			WITHNEWTAG( "GDS7YearProperty" ) DO
			BEGIN
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C[3] );
				OUTPUTVALUE( "RecoveryPrd", "7" );
				OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[3]) );
				OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[3]));
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G[3] );
			END;
        	if HasValue(L14G[4]) Then
     		WITHNEWTAG( "GDS10YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[4] );
	            OUTPUTVALUE( "RecoveryPrd", "10" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[4]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[4]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[4] );
	        END;
        	if HasValue(L14G[5]) Then
		    WITHNEWTAG( "GDS15YearProperty" ) DO
        	BEGIN
            	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[5] );
            	OUTPUTVALUE( "RecoveryPrd", "15" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[5]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[5]));
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[5] );
         	END;
        	if HasValue(L14G[6]) Then
     		WITHNEWTAG( "GDS20YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "BasisForDepreciationAmt", L14C[6] );
	            OUTPUTVALUE( "RecoveryPrd", "20" );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[6]) );
	            OUTPUTVALUE( "DepreciationMethodCd", FormatXMLDepreciationMethod(L14F[6]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[6] );
	        END;
        	if HasValue(L14G[7]) Then
     		WITHNEWTAG( "GDS25YearProperty" ) DO
		   	BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C[7] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L14E[7]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G[7] );
		   	END;
			LastOne:= min( 99999, LastIndex(L14G7) );
			for n := 1 to LastOne do
			BEGIN
    		if HasValue(L14G7[n]) Then
			WITHNEWTAG( "GDSResidentialRentalProperty" ) DO
			BEGIN
				OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B7[n]) );
				OUTPUTVALUE( "BasisForDepreciationAmt", L14C7[n] );
				OUTPUTVALUE( "DepreciationDeductionAmt", L14G7[n] );
			END;
			END;
        	if HasValue(L14G8[1]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealProp" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[1]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[1] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[1] );
			END;
        	if HasValue(L14G8[2]) Then
     		WITHNEWTAG( "GDSNonRsdntlRealPropSpecify" ) DO
     		BEGIN
	            OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L14B8[2]) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L14C8[2] );
	            hRecPer := FormatString(L14D8, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L14G8[2] );
			END;
  		END;
		if HasValue(L15G[1..3]) then
		WITHNEWTAG( "AlternativeDepreciationSystem" ) DO
		BEGIN
		if HasValue(L15G[1]) then
 			WITHNEWTAG( "ADSClassLifeProperty" ) DO
 			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[1] );
	            hRecPer := FormatString(L15D1, 4,2,0,FALSE,".");
	            OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[1]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[1] );
	        END;
		if HasValue(L15G[2]) then
        	WITHNEWTAG( "ADS12YearProperty" ) DO
			BEGIN
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[2] );
	            OUTPUTVALUE( "DepreciationConventionCd", FormatXMLDepreciationConvention(L15E[2]) );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[2] );
	        END;
			if HasValue(L15G[3]) then
		   	WITHNEWTAG( "ADS40YearProperty" ) DO
	        BEGIN
	        	OUTPUTVALUE( "MonthAndYearPlacedInServiceDt", FormatXMLYearMonth(L15B3) );
	            OUTPUTVALUE( "BasisForDepreciationAmt", L15C[3] );
	            OUTPUTVALUE( "DepreciationDeductionAmt", L15G[3] );
	        END;
		END;
		OUTPUTVALUE( "TotalDepreciationAmt", L20 );
		OUTPUTVALUE( "Section263ACurrentYearCostAmt", L21 );
		OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L22AY, L22A) );
		OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L22BY, L22B) );
		OUTPUTVALUE( "TotalSpecialDeprecAllwncAmt", Bonus25 );
		LastOne:= min( 99999, LastIndex(L23) );
		for n := 1 to LastOne do
		BEGIN
			if (HasValue(L23H[n])) or (HasValue(L23I[n])) then
			WITHNEWTAG( "MoreThanHalfBusinessUseProp" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L23A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L23B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L23C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L23D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L23E[n] );
				hRecPer := L23F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DeprecMthdAndConventionTypeCd", FormatXMLMethodandConvention(L23G[n], 0));
				OUTPUTVALUE( "DepreciationDeductionAmt", L23H[n] );
				OUTPUTVALUE( "ElectedSection179CostAmt", L23I[n] );
			END;
		END;
		LastOne:= min( 99999, LastIndex(L24) );
		for n := 1 to LastOne do
		BEGIN
			if HasValue(L24H[n]) then
			WITHNEWTAG( "LessThanHalfBusinessUseProp" ) DO
			BEGIN
	 			OUTPUTVALUE( "PropertyDesc", FormatXMLShortDescription(L24A[n]) );
				OUTPUTVALUE( "PlacedInServiceDt", FormatXMLDate(L24B[n]) );
				OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(L24C[n]) );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L24D[n] );
				OUTPUTVALUE( "BasisForDepreciationAmt", L24E[n] );
				hRecPer := L24F[n];
				OUTPUTVALUE( "RecoveryPrd", (hRecPer) );
				OUTPUTVALUE( "DepreciationConventionAndPreCd", FormatXMLMethodandConvention(L24G[n], TRUE) );
				OUTPUTVALUE( "DepreciationDeductionAmt", L24H[n] );
			END;
		END;
		OUTPUTVALUE( "TotalListedDepreciationAmt", L25 );
		OUTPUTVALUE( "TotalSection179ExpenseAmt", L26 );

		LastOne:= min( 99999, LastIndex(L27) );
		for n := 1 to LastOne do
		BEGIN
			if (L27[n] > 0) then
			WITHNEWTAG( "VehicleUsage" ) DO
			BEGIN
		 		OUTPUTVALUE( "BusinessMilesCnt", L27[n] );
	 			OUTPUTVALUE( "CommutingMilesCnt", L28[n] );
				OUTPUTVALUE( "OtherPersonalMilesCnt", L29[n] );
				OUTPUTVALUE( "TotalMilesCnt", L30[n] );
				OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L31Y[n], L31[n]) );
				OUTPUTVALUE( "UsedPrimarilyByOwnerInd", FormatXMLBoolean(L32Y[n], L32[n]) );
				OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L33Y[n], L33[n]) );
			END;
		END;
		OUTPUTVALUE( "PolicyNoPrsnlOrCmmtngUseInd", FormatXMLBoolean(L34Y, L34) );
		OUTPUTVALUE( "PolicyNoPrsnlExcCmmtngUseInd", FormatXMLBoolean(L35Y, L35) );
		OUTPUTVALUE( "TreatAllVehUseAsPrsnlUseInd", FormatXMLBoolean(L36Y, L36) );
		OUTPUTVALUE( "ProvideOverNumVehAndHaveRecInd", FormatXMLBoolean(L37Y, L37) );
		OUTPUTVALUE( "MeetRqrForAutoDemoUseInd", FormatXMLBoolean(L38Y, L38) );
		if L41 > 0 then
		WITHNEWTAG( "AmortizationInfo" ) DO
		BEGIN
			LastOne:= min( 99999, LastIndex(L39) );
	  		for n := 1 to LastOne do
	  		BEGIN
				if HasValue(L39F[n]) then
	 			WITHNEWTAG( "AmortizationInfoTable" ) DO
	 			BEGIN
				    OUTPUTVALUE( "CostDesc", FormatXMLShortDescription(L39A[n]) );
				    OUTPUTVALUE( "AmortizationBeginDt", FormatXMLDate(L39B[n]) );
				    OUTPUTVALUE( "AmortizableAmt", L39C[n] );
				    OUTPUTVALUE( "CodeSectionTxt", FormatXMLText(L39d[n], 25) );
				    if HasValue(L39E[n]) then
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E[n], 6) )
					Else
				        OUTPUTVALUE( "AmortizationPeriodOrPctTxt", FormatXMLText(L39E2[n], 6) );
				    OUTPUTVALUE( "AmortizationThisYearAmt", L39F[n] );
				END;
			END;
		END;
		OUTPUTVALUE( "AmortizationCostsBeforeTYAmt", L40 );
		OUTPUTVALUE( "TotalAmortizationAmt", L41 );
	END;
END;
PROCEDURE Form4797P3Output(i : FInteger);
FORM F4797P3[i];
VAR
     LastOne	: Index;
     n		    : Integer;

BEGIN
	IF TestFormIs( PartOfReturn, F4797P3[i] ) THEN
	BEGIN
		LastOne := LastIndex( A76 );
		FOR n := 1 TO LastOne DO
		IF HasValue( L21A[n] ) THEN
		WITHNEWTAG( "PropertyDispositionGain" ) DO
		BEGIN
			OUTPUTVALUE( "PropertyDesc", FormatXMLText(L21A[n], 40) );

			IF ( UpperCase(L21B[n]) in ["INHERITED", "VARIOUS"]) THEN
				OUTPUTVALUE( "DateAcquiredInheritedCd", "INHERITED" )
			ELSE
				OUTPUTVALUE( "AcquiredDt", FormatXMLDate(L21B[n]) );

			if UpperCase(L21C[n]) = "VARIOUS" then
				OUTPUTVALUE( "VariousCd", "VARIOUS" )
			ELSE
				OUTPUTVALUE( "SoldDt", FormatXMLDate(L21C[n]));

			OUTPUTVALUE( "GrossSalesPriceAmt", L22[n] );
			OUTPUTVALUE( "CostOrOtherBasisExpenseSaleAmt", L23[n] );
			OUTPUTVALUE( "DepreciationDepletionAllwAmt", L24[n] );
			OUTPUTVALUE( "AdjustedBasisAmt", L25[n] );
			OUTPUTVALUE( "TotalGainAmt", L26[n] );
			OUTPUTVALUE( "Section1245DepreciationAllwAmt", L27A[n] );
			OUTPUTVALUE( "Section1245PropertyAmt", L27B[n] );
			OUTPUTVALUE( "AddnlDepreciationAfter1975Amt", L28A[n] );
			OUTPUTVALUE( "ApplicablePercentageAmt", L28B[n] );
			OUTPUTVALUE( "GainLessDeprecAfter1975Amt", L28C[n] );
			OUTPUTVALUE( "AddnlDepreciation1969To1976Amt", Max(0,L28D[n]) );
			OUTPUTVALUE( "SmllrReducedGainAddnlDeprecAmt", L28E[n] );
			OUTPUTVALUE( "Section291Amt", L28F[n] );
			OUTPUTVALUE( "Section1250PropertyAmt", L28G[n] );
			OUTPUTVALUE( "SoilWaterLandClearExpenseAmt", L29A[n] );
			OUTPUTVALUE( "ApplcblPctSoilWtrClearExpnAmt", L29B[n] );
			OUTPUTVALUE( "Section1252PropertyAmt", L29C[n] );
			OUTPUTVALUE( "IntangibleDrillingDevCostAmt", L30A[n] );
			OUTPUTVALUE( "Section1254PropertyAmt", L30B[n] );
			OUTPUTVALUE( "ApplcblPctPaymentExcludedAmt", L31A[n] );
			OUTPUTVALUE( "Section1255PropertyAmt", L31B[n] );
		END;
	END;
END;
PROCEDURE Form4797P2Output(i : FInteger);
FORM F47972[i];
VAR
     LastOne	: Index;
     n		    : Integer;

BEGIN
	IF TestFormIs( PartOfReturn, F47972[i] ) THEN
	BEGIN
		LastOne := LastIndex( A68 );
		FOR n := 1 TO LastOne DO
		IF HasValue( L21A[n] ) THEN
		WITHNEWTAG( "PropertyDispositionGain" ) DO
		BEGIN
			OUTPUTVALUE( "PropertyDesc", FormatXMLText(L21A[n], 40) );

			IF ( UpperCase(L21B[n]) in ["INHERITED", "VARIOUS"]) THEN
				OUTPUTVALUE( "DateAcquiredInheritedCd", FormatXMLEnumeration((L21B[n]), "INHERITED,VARIOUS"))
			ELSE
				OUTPUTVALUE( "AcquiredDt", FormatXMLDate(L21B[n]));

			if UpperCase(L21C[n]) = "VARIOUS" then
				OUTPUTVALUE( "VariousCd", "VARIOUS" )
			ELSE
				OUTPUTVALUE( "SoldDt", FormatXMLDate(L21C[n]));

			OUTPUTVALUE( "GrossSalesPriceAmt", L22[n] );
			OUTPUTVALUE( "CostOrOtherBasisExpenseSaleAmt", L23[n] );
			OUTPUTVALUE( "DepreciationDepletionAllwAmt", L24[n] );
			OUTPUTVALUE( "AdjustedBasisAmt", L25[n] );
			OUTPUTVALUE( "TotalGainAmt", L26[n] );
			OUTPUTVALUE( "Section1245DepreciationAllwAmt", L27A[n] );
			OUTPUTVALUE( "Section1245PropertyAmt", L27B[n] );
			OUTPUTVALUE( "AddnlDepreciationAfter1975Amt", L28A[n] );
			OUTPUTVALUE( "ApplicablePercentageAmt", L28B[n] );
			OUTPUTVALUE( "GainLessDeprecAfter1975Amt", L28C[n] );
			OUTPUTVALUE( "AddnlDepreciation1969To1976Amt", Max(0,L28D[n]) );
			OUTPUTVALUE( "SmllrReducedGainAddnlDeprecAmt", L28E[n] );
			OUTPUTVALUE( "Section291Amt", L28F[n] );
			OUTPUTVALUE( "Section1250PropertyAmt", L28G[n] );
			OUTPUTVALUE( "SoilWaterLandClearExpenseAmt", L29A[n] );
			OUTPUTVALUE( "ApplcblPctSoilWtrClearExpnAmt", L29B[n] );
			OUTPUTVALUE( "Section1252PropertyAmt", L29C[n] );
			OUTPUTVALUE( "IntangibleDrillingDevCostAmt", L30A[n] );
			OUTPUTVALUE( "Section1254PropertyAmt", L30B[n] );
			OUTPUTVALUE( "ApplcblPctPaymentExcludedAmt", L31A[n] );
			OUTPUTVALUE( "Section1255PropertyAmt", L31B[n] );
		END;
	END;
END;
PROCEDURE F4797Output(docID : FText);
FORM F4797;
VAR
	LastOne		: index;
	i	      	: Integer;
	Pg2Ct, Pg3Ct	: FInteger;

BEGIN
	WITHNEWTAG( "IRS4797" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );

		WITHNEWTAG( "BusinessName" ) DO
			BEGIN
				OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(NAME) );

			END;
		OUTPUTVALUE( "EIN", FormatXMLEIN(SSN) );
		OUTPUTVALUE( "CurrentYearGrossProceedsAmt", L1 );
		LastOne := LastIndex( Line2 );
		FOR i := 1 TO LastOne DO
			IF HasValue( L2A[i] ) THEN
			WITHNEWTAG( "PropertySaleOrExchange" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLText(L2A[i], 20));

				IF (UpperCase(L2B[i]) in ["INHERITED", "VARIOUS"]) THEN
					OUTPUTVALUE( "DateAcquiredInheritedCd", FormatXMLEnumeration((L2B[i]), "INHERITED,VARIOUS"))
				ELSE
					OUTPUTVALUE( "AcquiredDt", FormatXMLDate(L2B[i]) );

				if UpperCase(L2C[i]) = "VARIOUS" then
					OUTPUTVALUE( "VariousCd", "VARIOUS" )
				ELSE
					OUTPUTVALUE( "SoldDt", FormatXMLDate(L2C[i]));

				OUTPUTVALUE( "GrossSalesPriceAmt", L2D[i] );
				OUTPUTVALUE( "DepreciationAllowedAmt", L2E[i] );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L2F[i] );
				OUTPUTVALUE( "GainOrLossAmt", L2G[i] );
			END;
			OUTPUTVALUE( "GainForm4684Amt", L3 );
			OUTPUTVALUE( "GainInstallmentSalesFrm6252Amt", L4 );
			OUTPUTVALUE( "GainLossForm8824Amt", L5G );
			OUTPUTVALUE( "GainOthThanCasualtyOrTheftAmt", L6 );
			OUTPUTVALUE( "TotalPropertyGainLossAmt", L8 );
			OUTPUTVALUE( "NonrecapturedNet1231LossesAmt", L9 );
			OUTPUTVALUE( "TotalGainLossAmt", Max(0,L10) );

			LastOne := LastIndex( Line11 );
			FOR i := 1 TO LastOne DO
			IF HasValue( L11A[i] ) THEN
			WITHNEWTAG( "OrdinaryGainLoss" ) DO
			BEGIN
				OUTPUTVALUE( "PropertyDesc", FormatXMLText(L11A[i], 20) );

				IF (UpperCase(L11B[i]) in ["INHERITED", "VARIOUS"]) THEN
					OUTPUTVALUE( "DateAcquiredInheritedCd", FormatXMLEnumeration((L11B[i]), "INHERITED,VARIOUS"))
				ELSE
					OUTPUTVALUE( "AcquiredDt", FormatXMLDate(L11B[i]));

				if UpperCase(L11C[i]) = "VARIOUS" then
					OUTPUTVALUE( "VariousCd", "VARIOUS" )
				ELSE
					OUTPUTVALUE( "SoldDt", FormatXMLDate(L11C[i]));

				OUTPUTVALUE( "GrossSalesPriceAmt", L11D[i] );
				OUTPUTVALUE( "DepreciationAllowedAmt", L11E[i] );
				OUTPUTVALUE( "CostOrOtherBasisAmt", L11F[i] );
				OUTPUTVALUE( "GainOrLossAmt", L11G[i] );
			END;
			OUTPUTVALUE( "OrdinaryLossAmt", abs(L12) );
			OUTPUTVALUE( "PropGainNonrecapturedLossAmt", L13 );

			OUTPUTVALUE( "NetGainLossForm4684Amt", L15G );
			OUTPUTVALUE( "OrdnryGainInstalSaleFrm6252Amt", L16 );
			OUTPUTVALUE( "OrdinaryGainLossForm8824Amt", L17G );
			OUTPUTVALUE( "TotalOrdinaryGainLossAmt", L20 );
			Pg2Ct := Numcopies(F47972);
			FOR i := 1 TO Pg2Ct DO
				Form4797P2Output(i);
			Pg3Ct := Numcopies(F4797P3);
			FOR i := 1 TO Pg3Ct DO
				Form4797P3Output(i);
		IF TestFormIs(PartOfReturn, F47972[1]) THEN
		BEGIN
			OUTPUTVALUE( "TotalGainsForAllPropertiesAmt", F47972[1].L32 );
			OUTPUTVALUE( "TotalSectionPropertyAmt", F47972[1].L33 );
			OUTPUTVALUE( "NetGainAmt", F47972[1].L34 );
			OUTPUTVALUE( "Sect179DedDepreciationPYAmt", F47972[1].L35[1] );
			OUTPUTVALUE( "Sect280DedDepreciationPYAmt", F47972[1].L35[2] );
			OUTPUTVALUE( "Sect179RcmptDepreciationAmt", F47972[1].L36[1] );
			OUTPUTVALUE( "Sect280RcmptDepreciationAmt", F47972[1].L36[2] );
			OUTPUTVALUE( "Section179RecaptureAmt", F47972[1].L37[1] );
			OUTPUTVALUE( "Sect280RecaptureAmt", F47972[1].L37[2] );
		END
		ELSE
		BEGIN
			OUTPUTVALUE( "TotalGainsForAllPropertiesAmt", F4797P3[1].L32 );
			OUTPUTVALUE( "TotalSectionPropertyAmt", F4797P3[1].L33 );
			OUTPUTVALUE( "NetGainAmt", F4797P3[1].L34 );
			OUTPUTVALUE( "Sect179DedDepreciationPYAmt", F4797P3[1].L35[1] );
			OUTPUTVALUE( "Sect280DedDepreciationPYAmt", F4797P3[1].L35[2] );
			OUTPUTVALUE( "Sect179RcmptDepreciationAmt", F4797P3[1].L36[1] );
			OUTPUTVALUE( "Sect280RcmptDepreciationAmt", F4797P3[1].L36[2] );
			OUTPUTVALUE( "Section179RecaptureAmt", F4797P3[1].L37[1] );
			OUTPUTVALUE( "Sect280RecaptureAmt", F4797P3[1].L37[2] );
		END;

	END;
END;
PROCEDURE Form5884Output(docID : FText);
Form F5884;

BEGIN

		WITHNEWTAG( "IRS5884" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );

			OUTPUTVALUE( "WagesBetween120And399HrsAmt", L1AA );
			OUTPUTVALUE( "TotWagesBetween120And399HrsAmt", L1A );
			OUTPUTVALUE( "Wages400OrMoreHoursAmt", L1BB );
			OUTPUTVALUE( "Wages400OrMoreHoursCreditAmt", L1B );
			OUTPUTVALUE( "SecondYearWagesAmt", QSYWA );
			OUTPUTVALUE( "TotalSecondYearWagesAmt", QSYW );
			OUTPUTVALUE( "TotalWagesAmt", L2 );
			OUTPUTVALUE( "PassThruWorkOpportunityCrAmt", L3 );
			OUTPUTVALUE( "TotalCreditsAmt", L4 );
			OUTPUTVALUE( "CreditAllocationAmt", BENALLOC );
			OUTPUTVALUE( "EstatesTrustsAndCoopsCreditAmt", CET );
		END;
END;
PROCEDURE Form6478Output(docID : FText);
Form F6478;

VAR

     LastOne	: Index;
     i		   : Integer;
	tmp			: FText;

BEGIN
		WITHNEWTAG( "IRS6478" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );
			SETATTRIBUTE( "referenceDocumentId", s64781ID );
 		OUTPUTVALUE( "Qlfy2ndBiofuelProdFuelGalsQty", FormatXMLNNInteger(QCBPGAL, 9, 0) );
		OUTPUTVALUE( "Qlfy2ndBiofuelProdFuelCrAmt", QCBPAMT );
		tmp := FormatString(UPPERCASE(REGNUM), 20, 4, 0, TRUE, "");
		tmp := strip(tmp, " ");
		OUTPUTVALUE( "FuelsCreditRegistrationNum", tmp );

		OUTPUTVALUE( "OtherIncomeAmt", L4 );
		OUTPUTVALUE( "BiofuelProducerCreditAmt", L5 );
		OUTPUTVALUE( "EthanolAlcoholOtherCreditAmt", L6 );
			OUTPUTVALUE( "AllocatedToBeneficiariesAmt", L16 );
			OUTPUTVALUE( "EstatesTrustsCooperativesAmt", L17 );
	END;
END;
PROCEDURE Form6252Output(i : FInteger; docID : FText);
FORM F6252[i];

BEGIN
	IF TestFormIs( PartOfReturn, F6252[i] ) THEN
	WITHNEWTAG( "IRS6252" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(L1) );
		OUTPUTVALUE( "AcquiredDt", FormatXMLDate(L2A) );
		OUTPUTVALUE( "SoldDt", FormatXMLDate(L2B) );
		OUTPUTVALUE( "PropertySoldToRelatedPartyInd", FormatXMLBoolean(L3Y, L3) );
		OUTPUTVALUE( "PropSoldRltdPartyMrktblSecInd", FormatXMLBoolean(L4Y, L4) );

		IF ( L5 > 0 ) THEN
		WITHNEWTAG( "SellingPriceIncludingMortgAmt" ) DO
		BEGIN
		   OUTPUTLITERAL( L5 );
		END;

		OUTPUTVALUE( "MortgageIndebtednessAmt", L6 );
		OUTPUTVALUE( "SellingPriceLessMortgIndbtAmt", L7 );
		OUTPUTVALUE( "CostOrOtherBasisPropSoldAmt", L8 );
		OUTPUTVALUE( "DepreciationAllowedAmt", L9 );
		OUTPUTVALUE( "AdjustedBasisAmt", L10 );
		OUTPUTVALUE( "CommissionsOtherExpnsOfSaleAmt", L11 );
		OUTPUTVALUE( "TotalSectionPropertyAmt", L12 );
		OUTPUTVALUE( "SumOfAdjBssCommIncmRcptrAmt", L13 );
		OUTPUTVALUE( "SumLessAdjBssCommIncmRcptrAmt", L14 );
		OUTPUTVALUE( "ExcludedGainAmt", L15 );
		OUTPUTVALUE( "GrossProfitAmt", L16 );
		OUTPUTVALUE( "NetAdjBasisCommIncmRcptrAmt", L17 );
		OUTPUTVALUE( "ContractPriceAmt", L18 );
		OUTPUTVALUE( "GrossProfitRatioPct", FormatXMLRatio(L19) );
		OUTPUTVALUE( "YearOfSaleAmt", L20 );
		OUTPUTVALUE( "PaymentsReceivedCurrentYearAmt", L21 );
		OUTPUTVALUE( "SumYearOfSaleAndPymtsRcvdAmt", L22 );
		OUTPUTVALUE( "PaymentsReceivedPriorYearAmt", L23 );
		OUTPUTVALUE( "InstallmentSaleIncomeAmt", L24 );
		OUTPUTVALUE( "OrdinaryIncomePartAmt", L25 );
		OUTPUTVALUE( "InstalSaleLessOrdnryIncmAmt", L26 );

		IF HasValue( L27 ) THEN
		BEGIN
			WITHNEWTAG( "RelatedPartyName" ) DO
			BEGIN
		      OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(L27) );
			END;
		END;

		IF ValidXMLUSAddress(L27ADDR, CITY, ST, ZIP) THEN BEGIN WithNewTag("RelatedPartyUSAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(L27ADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(CITY)); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(ST)); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(ZIP)); END; END ELSE WithNewTag("RelatedPartyForeignAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(L27ADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(CITY)); OUTPUTVALUE("ProvinceOrStateNm", FormatXMLProvince(PROVINCE)); OUTPUTVALUE("CountryCd", FormatXMLCountry(COUNTRY)); OUTPUTVALUE("ForeignPostalCd", FormatXMLPostalCode(POSTCODE)); END;
		IF ValidXMLEIN(L27ID) THEN OUTPUTVALUE( "RelatedPartyEIN", FormatXMLEIN(L27ID) ) ELSE IF ValidXMLSSN(L27ID) THEN OUTPUTVALUE( "RelatedPartySSN", FormatXMLSSN(L27ID) ) ELSE OUTPUTVALUE( "MissingEINReasonCd", FormatXMLEnumeration(L27ID, "APPLD FOR,FOREIGNUS") );
		OUTPUTVALUE( "SecondDispositionInd", FormatXMLBoolean(L28Y, L28) );
		OUTPUTVALUE( "SndDisposMore2YrsAftrFirstInd", L29A );
		OUTPUTVALUE( "DispositionDt", FormatXMLDate(L29DT) );
		OUTPUTVALUE( "FirstDisposSaleExchangeStkInd", L29B );
		OUTPUTVALUE( "SecondDisposInvlntryCnvrtInd", L29C );
		OUTPUTVALUE( "SecondDisposAfterDeathSellrInd", L29D );

		IF IsChecked( L29E ) THEN
			if (TestFormIs(PartOfReturn, F6252[i]:FEXPL32)) then
			begin
				WITHNEWTAG( "NotToAvoidTaxInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", s62521ID[i]);
					SETATTRIBUTE( "referenceDocumentName", "ExplanationOfDisposNotToAvoidTaxStatement");
					OUTPUTLITERAL( L29E );
				END;
			end
			else
				OutputValue( "NotToAvoidTaxInd", L29E );

		OUTPUTVALUE( "RealizedAmt", L30 );
		OUTPUTVALUE( "FirstYearContractPriceAmt", L31 );
		OUTPUTVALUE( "SmllrRealizedOrContractPrcAmt", L32 );
		OUTPUTVALUE( "TotalPaymentsReceivedAmt", L33 );
		OUTPUTVALUE( "TotalPaymentsRcvdLessPrcAmt", L34 );
		OUTPUTVALUE( "TotPymtPrcTimesGroPrftPctAmt", L35 );
		OUTPUTVALUE( "OrdinaryIncmUndRecaptureRlsAmt", L36 );
		OUTPUTVALUE( "PaymentPriceLessOrdnryIncmAmt", L37 );
	END;
END;
PROCEDURE Form6765Output(docID : FText);
Form F6765;

var

hOnlyone		: Boolean;
temp			: FText;

BEGIN
		WITHNEWTAG( "IRS6765" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", docID );

			If ( L17A > 0 ) then
			BEGIN
				OUTPUTVALUE( "RegularQlfyServicesWagesAmt", L5 );
				OUTPUTVALUE( "RegularSupplyCostAmt", L6 );
				OUTPUTVALUE( "RegularComputerCostAmt", L7 );
				OUTPUTVALUE( "RegularContractResearchPctAmt", L8 );
				OUTPUTVALUE( "RegularTotQlfyResearchExpnsAmt", L9 );
				OUTPUTVALUE( "FixedBasedPct", FormatXMLRatio(L10) );
				OUTPUTVALUE( "RegularAverageGrossReceiptsAmt", L11 );
				OUTPUTVALUE( "FixedBasePctTimesGrossRcptsAmt", L12 );

				IF ( L13 = 0 ) AND  ( REDCR > 0 ) THEN
					OUTPUTVALUE( "AdjTotQualifedRsrchExpnssAmt", "0" )
				ELSE
				IF ( L13 > 0 ) THEN
					OUTPUTVALUE( "AdjTotQualifedRsrchExpnssAmt", L13 );

				OUTPUTVALUE( "HalfAdjTotQlfyRsrchExpnssAmt", L14 );
				OUTPUTVALUE( "SmallerQlfyResearchExpnssAmt", L15 );
				OUTPUTVALUE( "RsrchExpensesPlusRsrchPymtsAmt", L16 );
				if (TestFormIs( PartOfReturn, F6765:FEXPL107 )) then
				begin
					WITHNEWTAG( "RegularCreditAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", s67651ID );
						SETATTRIBUTE( "referenceDocumentName", "CapExpensesDedAmountsSchedule MembersOfControlledGroupStmt" );
						OutputLiteral( L17A );
					end;
				end
				else
					OUTPUTVALUE( "RegularCreditAmt", L17A );

				OUTPUTVALUE( "RegularRedSect280CCrElectInd", FormatXMLBoolean(REDCRXY, REDCRX) );
			END;
	   		OUTPUTVALUE( "TotalSumEnergyAndNetBaseAmt", SUBTOT2 );
	   		OUTPUTVALUE( "TotalSumTimesTwentyPctAmt", SUBTOT3 );
	   		OUTPUTVALUE( "AltQlfyServicesWagesAmt", QUALWGS );
	   		OUTPUTVALUE( "AltSupplyCostAmt", SUPPCOST );
	   		OUTPUTVALUE( "AltComputerCostAmt", COMPCOST );
	   		OUTPUTVALUE( "AltContractResearchPctAmt", CONTRRES );
	   		OUTPUTVALUE( "AltTotQlfyResearchExpnsAmt", QRESEXP );
	   		OUTPUTVALUE( "TotQlfyResearchExpns3PYAmt", PRQREXP );
	   		OUTPUTVALUE( "TotQlfyResearchExpns3PYPctAmt", SUBTOT4 );
	   		OUTPUTVALUE( "NetQlfyResearchExpns3PYPctAmt", SUBTOT5 );
	   		OUTPUTVALUE( "NetQlfyResearchExpnsPctAmt", SUBTOT6 );
	   		OUTPUTVALUE( "TotalAltPctAmt", F6765P2.SUBTOT7 );
			if (TestFormIs( PartOfReturn, F6765P2:FEXPL94 )) then
			begin
				WITHNEWTAG( "AltCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", s67652ID );
					SETATTRIBUTE( "referenceDocumentName", "CapExpensesDedAmountsSchedule MembersOfControlledGroupStmt" );
					OutputLiteral( F6765P2.REDCR2 );
				end;
			end
			else
				OUTPUTVALUE( "AltCreditAmt", F6765P2.REDCR2 );

			OUTPUTVALUE( "AltRedSect280CCrElectInd", FormatXMLBoolean(F6765P2.REDCR2XY, F6765P2.BX6) );
            OUTPUTVALUE( "EmployerDiffWagePymtCrAmt",  F6765P2.EWAGES );
			OUTPUTVALUE( "NetEmployerDiffWagePymtCrAmt",  F6765P2.SUBTOT );
			OUTPUTVALUE( "ResearchActivitiesIncrCrAmt", F6765P2.L42 );
	   		OUTPUTVALUE( "CYResearchCreditAmt", F6765P2.L43 );
	   		OUTPUTVALUE( "EstateOrTrustAllocatedBenefAmt", F6765P2.BENALLOC );
	   		OUTPUTVALUE( "NetEstateOrTrustAllocBenefAmt", F6765P2.ESTTRTOT );
		END;
END;
PROCEDURE Form8586Output(docID : FText);
Form F8586;

VAR
	DLTCt			: FInteger;
	i, j			: Index;
	bValid			: Boolean;
	LastOne,ItsDone	: Index;

BEGIN
	WITHNEWTAG( "IRS8586" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE("Forms8609AAttachedBfr2008Cnt", FormatXMLNNInteger(L1, 8, 0));

		IF IsChecked(B2BY) THEN
		begin
			OUTPUTVALUE("DecrInQlfyBssOfBldgsBF2008Ind", "true");
			WITHNEWTAG("BldgIdOfBldgWithDecreasedBasis") DO
			BEGIN
				OUTPUTVALUE( "BIN", FormatXMLbin(L2B1) );
				OUTPUTVALUE( "BIN", FormatXMLbin(L2B2) );
				OUTPUTVALUE( "BIN", FormatXMLbin(L2B3) );
				OUTPUTVALUE( "BIN", FormatXMLbin(L2B4) );
			END;
		end
		else
			OUTPUTVALUE("DecrInQlfyBssOfBldgsBF2008Ind", "false");

		IF hasValue(F8609AID[1]) THEN
		BEGIN
			WITHNEWTAG( "CurrentYearCreditBfr2008Amt") DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", F8609AID[1] );
				SETATTRIBUTE( "referenceDocumentName", "IRS8609A" );
				IF ( L3 <> 0 ) THEN OUTPUTLITERAL( L3 ) ELSE OUTPUTLITERAL( "0" );
			END;
		END
		Else
			OUTPUTVALUE( "CurrentYearCreditBfr2008Amt", L3 );

		OUTPUTVALUE( "LowIncomeHousingCrBF2008Amt", L4);

		OUTPUTVALUE( "LowIncmHsnCrPlusCurYrCrBF08Amt", L5 );
			OUTPUTVALUE( "AllocatedtoBeneficiariesAmt", BenAlloc );
			OUTPUTVALUE( "PassiveActyOrTotCurrYrCrAmt", L6 );
		OUTPUTVALUE("Forms8609AAttachedAftr2007Cnt", FormatXMLNNInteger(L8, 8, 0));
		IF IsChecked(B9BY) THEN
		BEGIN
			OUTPUTVALUE("DecrQlfyBssOfBldgsAF2007Ind", "true");
			WITHNEWTAG("DecrInQlfyBasisOfBldgsAF2007") DO
			BEGIN
				OUTPUTVALUE("BIN", FormatXMLbin(B9B1));
				OUTPUTVALUE("BIN", FormatXMLbin(B9B2));
				OUTPUTVALUE("BIN", FormatXMLbin(B9B3));
				OUTPUTVALUE("BIN", FormatXMLbin(B9B4));
			END;
		END
		ELSE
			OUTPUTVALUE("DecrQlfyBssOfBldgsAF2007Ind", "false");
		IF hasValue(F8609AID[1]) THEN
		BEGIN
			WITHNEWTAG( "CurrentYearCreditAftr2007Amt") DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", F8609AID[1] );
				SETATTRIBUTE( "referenceDocumentName", "IRS8609A" );
				IF ( L10 <> 0 ) THEN OUTPUTLITERAL( L10 ) ELSE OUTPUTLITERAL( "0" );
			END;
		END
		Else
		OUTPUTVALUE("CurrentYearCreditAftr2007Amt", L10);

		OUTPUTVALUE("LowIncomeHousingCrAF2007Amt", L11);
		OUTPUTVALUE("LowIncmHsnCrPlusCurYrCrAF07Amt", L12);
			OUTPUTVALUE("AllocToBeneficiariesAmt", A23);
			OUTPUTVALUE("EstatesAndTrustsResultAmt", A24);
	END;
END;
PROCEDURE Form8594Output(i : FInteger; docID : FText);
Form F8594[i];

VAR

     LastOne	: Index;
     n		    : Integer;
	 TmpReason 	: FText;
BEGIN

	   WITHNEWTAG( "IRS8594" ) DO
	   BEGIN
	      SETATTRIBUTE( "documentId", docID );

		if hasValue(NAME) then
		BEGIN
			WITHNEWTAG( "BusinessName") DO
			BEGIN
				OUTPUTVALUE("BusinessNameLine1Txt", FormatString(NAME, 75, 4, 0, TRUE, "#-()&'"));
			END;
		END;

		if hasValue(EIN) then
			OUTPUTVALUE("EIN", FormatString(EIN, 9, 2, 0, FALSE, ""));
	      OUTPUTVALUE( "PurchaserInd", CK1 );
	      OUTPUTVALUE( "SellerInd", CK2 );

			IF ValidXMLBusinessNameLine1( NAM1 ) THEN
			BEGIN
			   WITHNEWTAG( "OtherPartyName" ) DO
					BEGIN
				       OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(Nam1) );
				    END;
			END;

		  IF ValidXMLEIN(ID1) THEN OUTPUTVALUE( "OtherPartyEIN", FormatXMLEIN(ID1) ) ELSE IF ValidXMLSSN(ID1) THEN OUTPUTVALUE( "OtherPartySSN", FormatXMLSSN(ID1) ) ELSE OUTPUTVALUE( "MissingEINReasonCd", FormatXMLEnumeration(ID1, "APPLD FOR, FOREIGNUS") );
		  IF ValidXMLStreetAddress( ADD1 ) AND ValidXMLCity( CIT1 ) AND
			   ValidXMLState( ST1 ) AND ValidXMLZIPCode( ZIP1 ) THEN
			BEGIN
		      WITHNEWTAG( "OtherPartyUSAddress" ) DO
		      BEGIN
		         OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(ADD1) );
	    	     OUTPUTVALUE( "CityNm", FormatXMLCity(CIT1) );
		         OUTPUTVALUE( "StateAbbreviationCd", FormatXMLState(ST1) );
		         OUTPUTVALUE( "ZIPCd", FormatXMLZipCode(ZIP1) );
		      END;
		    END;

		OUTPUTVALUE( "SaleDt", FormatXMLDate(L2) );
		OUTPUTVALUE( "TotalSalePriceAmt", SAL3 );

		OUTPUTVALUE( "Class1FairMarketValueAmt", FMV[1] );
		OUTPUTVALUE( "Class1SalesPriceAllocationAmt", ASP[1] );

		OUTPUTVALUE( "Class2FairMarketValueAmt", FMV[2] );
		OUTPUTVALUE( "Class2SalesPriceAllocationAmt", ASP[2] );

		OUTPUTVALUE( "Class3FairMarketValueAmt", FMV[3] );
		OUTPUTVALUE( "Class3SalesPriceAllocationAmt", ASP[3] );

		OUTPUTVALUE( "Class4FairMarketValueAmt", FMV[4] );
		OUTPUTVALUE( "Class4SalesPriceAllocationAmt", ASP[4] );

		OUTPUTVALUE( "Class5FairMarketValueAmt", FMV[5] );
		OUTPUTVALUE( "Class5SalesPriceAllocationAmt", ASP[5] );

		OUTPUTVALUE( "Class6And7FairMarketValueAmt", FMV[6] );
		OUTPUTVALUE( "Class6And7SalesPriceAllocnAmt", ASP[6] );

		OUTPUTVALUE( "TotalFairMarketValueAmt", TOTAGGRE );
		OUTPUTVALUE( "TotalSalesPriceAllocationAmt", TOTALLOC );

		OUTPUTVALUE( "BuyerOrSellerProvAllocnPrcInd", FormatXMLBoolean(L5AY, L5A) );
		OUTPUTVALUE( "AggregateValuesListedInd", FormatXMLBoolean(L5BY, L5B) );
		OUTPUTVALUE( "PrchsOrEntrAgrmtWithSellrInd", FormatXMLBoolean(L6Y, L6) );
		OUTPUTVALUE( "OrignalFormFiledTaxYear", FormatXMLYear(Taxyr) );
		OUTPUTVALUE( "TaxReturnFormNumberDsc", FormatXMLShortDescriptionLength(L7TEXT, 12));

		OUTPUTVALUE( "Class1PrevPriceAllocationAmt", ASP4[1] );
		OUTPUTVALUE( "AggregateValuesListedIndAmt", ID4[1] );
		OUTPUTVALUE( "Class1RedeterminedAllocnAmt", RASP[1] );

		OUTPUTVALUE( "Class2PrevPriceAllocationAmt", ASP4[2] );
		OUTPUTVALUE( "Class2IncreaseDecreaseAmt", ID4[2] );
		OUTPUTVALUE( "Class2RedeterminedAllocnAmt", RASP[2] );

		OUTPUTVALUE( "Class3PrevPriceAllocationAmt", ASP4[3] );
		OUTPUTVALUE( "Class3IncreaseDecreaseAmt", ID4[3] );
		OUTPUTVALUE( "Class3RedeterminedAllocnAmt", RASP[3] );

		OUTPUTVALUE( "Class4PrevPriceAllocationAmt", ASP4[4] );
		OUTPUTVALUE( "Class4IncreaseDecreaseAmt", ID4[4] );
		OUTPUTVALUE( "Class4RedeterminedAllocnAmt", RASP[4] );

		OUTPUTVALUE( "Class5PrevPriceAllocationAmt", ASP4[5] );
		OUTPUTVALUE( "Class5IncreaseDecreaseAmt", ID4[5] );
		OUTPUTVALUE( "Class5RedeterminedAllocnAmt", RASP[5] );

		OUTPUTVALUE( "Class6And7PrevPriceAllocnAmt", ASP4[6] );
		OUTPUTVALUE( "Class6And7IncreaseDecreaseAmt", ID4[6] );
		OUTPUTVALUE( "Class6And7RedetermAllocnAmt", RASP[6] );

		OUTPUTVALUE( "TotalOfPreviousPriceAllocnAmt", TASP );
		OUTPUTVALUE( "TotalRedeterminedAllocationAmt", TRSP );
		Lastone := LastIndex(Line9);
		IF Lastone >= 1 THEN
			BEGIN
				IF TRSP > 0 THEN
				WITHNEWTAG( "IncreaseOrDecreaseReasonsDsc" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentName", "ReasonsForIncreaseOrDecreaseStatement" );
					For n := 1 To Lastone Do
					   TmpReason := concat(TmpReason," ",(IV2[n]));
					OUTPUTLITERAL( FormatXMLShortExplanation(TmpReason) );
				END;
			END;
	   END;
END;
PROCEDURE Form8609AOutput(i : FInteger; docID : FText);
Form F8609A[i];

VAR
	LastOne	: Index;
	n		    : Integer;

BEGIN
	WITHNEWTAG( "IRS8609A" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );

		OUTPUTVALUE( "BIN", FormatXMLbin(BIN) );
		OUTPUTVALUE( "NewlyConstrOrExstngBuildingInd", NEWCON );

		IF (not IsChecked(NEWCON)) THEN
			OUTPUTVALUE( "Section42eRehbltExpendInd", REHAB );

      OUTPUTVALUE( "Orig8609HousingCrAgencyRecInd", FormatXMLBoolean(BOXDY, LINED) );
      OUTPUTVALUE( "QlfyLowIncmHsngProjSect42Ind", FormatXMLBoolean(BOXEY, LINEE) );
      OUTPUTVALUE( "DecreaseQualifiedBasisBldgInd", FormatXMLBoolean(BOXFY, LINEF) );
      OUTPUTVALUE( "BuildingEligibleBasisAmt", L1 );

      IF (L2 >= 0) and (L2 <= 1) THEN
	OUTPUTVALUE( "LowIncomePortionRt", L2 );

      OUTPUTVALUE( "QualifiedBasisOfLowIncmBldgAmt", L3 );
      OUTPUTVALUE( "PartYearAdjustmentDuringTYAmt", L4 );

      IF (L5 >= 0) and (L5 <= 1) THEN
	OUTPUTVALUE( "MaximumApplicableCrPct", L5 );

      OUTPUTVALUE( "CreditForLowIncomeBuildingAmt", L6 );
      OUTPUTVALUE( "QualifiedBasisAdditionAmt", L7 );
      OUTPUTVALUE( "PartYearAdjustment2DuringTYAmt", L8 );

      IF (L9 >= 0) and (L9 <= 1) THEN
	OUTPUTVALUE( "OneThirdMaximumApplicableCrPct", L9 );

      OUTPUTVALUE( "IntBasedLowIncomeBuildingAmt", L10 );
      OUTPUTVALUE( "Section42f3BModificationAmt", L11 );
      OUTPUTVALUE( "AdjCrForLowIncomeBuildingAmt", L12 );
      OUTPUTVALUE( "CreditForBldgBfrReductionAmt", L13 );
      OUTPUTVALUE( "DsallwCrDueToFederalGrantAmt", L14 );
      OUTPUTVALUE( "CreditAllowedForBldgForTYAmt", L15 );
      OUTPUTVALUE( "TaxpayerShareOfCreditForYrAmt", L16 );
      OUTPUTVALUE( "AdjForDeferredFirstYrCreditAmt", L17 );
      OUTPUTVALUE( "LowIncomeHousingCrAmt", L18 );
   END;
END;
PROCEDURE Form8824Output(i : FInteger; docID : FText);
Form F8824[i];
VAR
	LastOne		: Index;
	n			: Integer;
	hNameSpc	: FText;
	refDocName, refDocID  : FText;
BEGIN
		IF (s88242[i] = "0") THEN
		BEGIN
			refDocName := "";
			refDocID := "";
		END ELSE
		BEGIN
			refDocName := "RealizedAndRecognizedGainInMultiAssetExchangesStmt";
			refDocID := s88242[i];
		END;
   	WITHNEWTAG( concat(hNameSpc, "IRS8824") ) DO
   	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "referenceDocumentName", refDocName);
		SETATTRIBUTE( "referenceDocumentId", refDocID);
      	OUTPUTVALUE( concat(hNameSpc, "LikeKindPropertyGivenUpDsc"), FormatXMLText(Concat(L1A," ",L1B), 250));
      	OUTPUTVALUE( concat(hNameSpc, "LikeKindPropertyReceivedDsc"), FormatXMLText(Concat(L2A," ",L2B), 250));
     	OUTPUTVALUE( concat(hNameSpc, "PropertyGivenUpAcquiredDt"), FormatXMLDate(L3) );
      	OUTPUTVALUE( concat(hNameSpc, "PropertyTransferredDt"), FormatXMLDate(L4) );
      	OUTPUTVALUE( concat(hNameSpc, "WrittenNoticeOfPropertyRcvdDt"), FormatXMLDate(L5) );
      	OUTPUTVALUE( concat(hNameSpc, "PropertyActuallyReceivedDt"), FormatXMLDate(L6) );
      	OUTPUTVALUE( concat(hNameSpc, "ExchangeMadeWithRelatedPrtyInd"), FormatXMLBoolean(L7A, L7) );
      	IF IsChecked( L7A ) THEN
      	BEGIN
	      	if (ValidXMLEIN(IDN2)) THEN
	      	begin
				WITHNEWTAG( concat(hNameSpc, "BusinessName") ) DO
				begin
		        	OUTPUTVALUE( concat(hNameSpc, "BusinessNameLine1Txt"), FormatXMLBusinessNameLine1(NM2) );
      			end;
		    END
		    else
		    begin
		    	OUTPUTVALUE( concat(hNameSpc, "PersonNm"), FormatString(NM2, 35, 3, 0, TRUE, "") );
      		end;

	      	OUTPUTVALUE( concat(hNameSpc, "RelationshipDescriptionTxt"), FormatXMLText(REL2, 15) );

			IF ValidXMLEIN(IDN2) THEN OUTPUTVALUE( concat(hNameSpc, "EIN"), FormatXMLEIN(IDN2) ) ELSE IF ValidXMLSSN(IDN2) THEN OUTPUTVALUE( concat(hNameSpc, "SSN"), FormatXMLSSN(IDN2) ) ELSE OUTPUTVALUE( concat(hNameSpc, "MissingEINReasonCd"), FormatXMLEnumeration(IDN2, "APPLD FOR,FOREIGNUS") );
				IF ValidXMLUSAddress(ADD2, CIT2, ST2, ZIP2) THEN BEGIN WithNewTag("USAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(ADD2)); OUTPUTVALUE("CityNm", FormatXMLCity(CIT2)); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(ST2)); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(ZIP2)); END; END ELSE WithNewTag("ForeignAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(ADD2)); OUTPUTVALUE("CityNm", FormatXMLCity(CIT2)); OUTPUTVALUE("ProvinceOrStateNm", FormatXMLProvince(PROVINCE)); OUTPUTVALUE("CountryCd", FormatXMLCountry(COUNTRY)); OUTPUTVALUE("ForeignPostalCd", FormatXMLPostalCode(POSTCODE)); END;
	      	OUTPUTVALUE( concat(hNameSpc, "RelatedPartySoldPropRcvdInd"), FormatXMLBoolean(L9Y, L9) );
	      	OUTPUTVALUE( concat(hNameSpc, "YouSoldPropertyReceivedInd"), FormatXMLBoolean(L10Y, L10) );
	      	OUTPUTVALUE( concat(hNameSpc, "DisposWasAftrDthRltdPartysInd"), L11A );
	      	OUTPUTVALUE( concat(hNameSpc, "DispositionWasInvlntryCnvrtInd"), L11B );

			IF ((s88241[i] <> "0") and (L11C = "X")) THEN
			BEGIN
				WITHNEWTAG( "ExchDisposNotTaxAvoidanceInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentName", "PrincipalPurposeOfRelatedPartyExchangeStatement");
					SETATTRIBUTE( "referenceDocumentId", s88241[i]);
					outputliteral(L11C);
				END;
			END ELSE
	      	OUTPUTVALUE( concat(hNameSpc, "ExchDisposNotTaxAvoidanceInd"), L11C );
		END;

      	OUTPUTVALUE( concat(hNameSpc, "FMVOfOtherPropertyGivenUpAmt"), L12 );
      	OUTPUTVALUE( concat(hNameSpc, "AdjustedBasisOfOthPropGvnUpAmt"), L13 );
      	OUTPUTVALUE( concat(hNameSpc, "GainLossOnOtherPropGvnUpAmt"), L14 );
      	OUTPUTVALUE( concat(hNameSpc, "CashFMVNetLiabRedByExpnssAmt"), L15 );
      	OUTPUTVALUE( concat(hNameSpc, "FMVOfLikeKindPropertyRcvdAmt"), L16 );
      	OUTPUTVALUE( concat(hNameSpc, "RealizedAmt"), L17 );
      	OUTPUTVALUE( concat(hNameSpc, "AdjBssOfLikeKindPropGvnUpAmt"), L18 );
      	OUTPUTVALUE( concat(hNameSpc, "RealizedGainOrLossAmt"), L19 );
      	OUTPUTVALUE( concat(hNameSpc, "SmallerGainOrLossAmt"), L20 );
      	OUTPUTVALUE( concat(hNameSpc, "OrdinaryIncmUndRecaptureRlsAmt"), L21 );
      	OUTPUTVALUE( concat(hNameSpc, "SmllrGainLossLessOrdnryIncmAmt"), L22 );
      	OUTPUTVALUE( concat(hNameSpc, "RecognizedGainAmt"), L23 );
      	OUTPUTVALUE( concat(hNameSpc, "DeferredGainOrLossAmt"), L24 );
      	OUTPUTVALUE( concat(hNameSpc, "BasisOfLikeKindPropertyRcvdAmt"), L25 );
	END;
END;
PROCEDURE Form8826Output(docID : FText);
Form F8826;

BEGIN
	If (L8 > 0) then
	WITHNEWTAG( "IRS8826" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "TotalEligibleAccessExpendAmt", L1 );
		OUTPUTVALUE( "EligExpendAndMinDifferenceAmt", L3 );
		OUTPUTVALUE( "SmallerFromDifferenceOrMaxAmt", L5 );
		OUTPUTVALUE( "ShareOfCreditAmt", L6 );
		OUTPUTVALUE( "PrtshpandSCorpDisabledAcsCrAmt", L7 );
		OUTPUTVALUE( "PrtshpandSCorpReportAmt", L8 );
	END;
END;
PROCEDURE Form8835Output(docID : FText);
Form F8835;

VAR
	FYR  	: FTEXT;

BEGIN

	IF (AL1FY ="FY") or (BL1FY ="FY") or (BL2FY ="FY") or (BL6FY ="FY") THEN
			FYR  := "FY";

	WITHNEWTAG( "IRS8835" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "fiscalYearTaxpayerCd", FYR );

		IF AL10 > 0  THEN
			WITHNEWTAG( "QualifiedFacilitiesPriorTo1023" ) DO
			BEGIN
				OUTPUTVALUE( "KilowattHoursPrdcdAndSoldQty",FormatXMLLongInteger(AL1A));
				OUTPUTVALUE( "TotalKwHrsPrdcdAndSoldCrAmt", AL1 );

				OUTPUTVALUE( "CreditBfrPhaseoutAdjustmentAmt", AL2A );
				OUTPUTVALUE( "PhaseoutAdjustmentRt", ( AL2B ) );
				OUTPUTVALUE( "TotalPhaseoutAdjustmentAmt", AL2 );
				OUTPUTVALUE( "CreditBeforeReductionAmt", AL3 );
				OUTPUTVALUE( "TotalGovernmentGrantsAmt", AL4 );
				OUTPUTVALUE( "TotCapitalAccountAdditionsAmt", AL5 );
				OUTPUTVALUE( "CreditReductionRt", ( AL6 ) );
				OUTPUTVALUE( "CreditReductionAmt", AL7 );
				OUTPUTVALUE( "AdjustedCreditReductionAmt", AL8 );
				OUTPUTVALUE( "RenewableElectricityProdCrAmt", AL9 );
				OUTPUTVALUE( "AdjCrRedAndRnwblElecProdCrAmt", AL10 );

			END;
			IF BL30 > 0 THEN
			WITHNEWTAG( "QualifiedFacilitiesAfter1022" ) DO
			BEGIN
				OUTPUTVALUE( "KwHrsPrdcdAndSoldWindQty",FormatXMLLongInteger(BL1A));
				OUTPUTVALUE( "KwHrsPrdcdAndSoldWindCrAmt", BL1CA );
				OUTPUTVALUE( "KwHrsPrdcdSoldClsLoopBmssQty",BL1B );
				OUTPUTVALUE( "KwHrsPrdcdSoldClsLoopBmssCrAmt",BL1Cb );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldGthrmlQty", BL1C);
				OUTPUTVALUE( "KwHrsPrdcdAndSoldGthrmlAmt",BL1Cc );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldSolarQty",BL1D );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldSolarCrAmt",BL1Cd );
				OUTPUTVALUE( "TotalForCreditRateUnder45a1Amt",BL1 );

				OUTPUTVALUE( "KwHrsPrdcdSoldOpenLoopBmssQty", BL2A  );
				OUTPUTVALUE( "KwHrsPrdcdSoldOpenLopBmssCrAmt", BL2CA  );
				OUTPUTVALUE( "KwHrsPrdcdSoldSmllIrgtnPwrQty", BL2B  );
				OUTPUTVALUE( "KwHrsPrdcdSldSmllIrgtnPwrCrAmt", BL2CB  );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldLndfllGasQty", BL2C  );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldLndfllGsCrAmt", BL2CC  );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldTrashQty", BL2D  );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldTrashCrAmt", BL2CD  );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldHydropowerQty", BL2E  );
				OUTPUTVALUE( "KwHrsPrdcdAndSoldHydropwrCrAmt", BL2CE  );
				OUTPUTVALUE( "KwHrsPrdcdSoldMarineRnwblQty", BL2F  );
				OUTPUTVALUE( "KwHrsPrdcdSoldMarineRnwblCrAmt", BL2CF  );
				OUTPUTVALUE( "TotalForCreditRtUnder45b4AAmt", BL2  );

				OUTPUTVALUE( "TotClsOpenKwHrsPrdcdSoldCrAmt", BL3 );
				OUTPUTVALUE( "CreditBfrPhaseoutAdjustmentAmt", BL4A );
				OUTPUTVALUE( "PhaseoutAdjustmentRt", ( BL4B ) );
				OUTPUTVALUE( "TotalPhaseoutAdjustmentAmt", BL4 );
				OUTPUTVALUE( "NetPhaseoutAdjustmentAmt", BL5 );
				OUTPUTVALUE( "RefineCoalTonPrdcdSoldQty", FormatXMLLongInteger(BL6A));
				OUTPUTVALUE( "TotRefineCoalTonPrdcdSoldCrAmt", BL6 );
				OUTPUTVALUE( "RefinedCoalCrBfrPhaseoutAdjAmt", BL7A );
				OUTPUTVALUE( "RefinedCoalPhaseoutAdjRt", ( BL7B ) );
				OUTPUTVALUE( "RefinedCoalTotalPhaseoutAdjAmt", BL7 );
				OUTPUTVALUE( "NetRefinedCoalPhaseoutAdjAmt", BL8 );
				OUTPUTVALUE( "RefinedCoalCreditBeforeRedAmt",  BL10 );
				OUTPUTVALUE( "TotalGovernmentGrantsAmt", BL11 );
				OUTPUTVALUE( "TotCapitalAccountAdditionsAmt", BL12 );
				OUTPUTVALUE( "CreditReductionRt", ( BL13 ) );
				OUTPUTVALUE( "CreditReductionAmt", BL14 );
				OUTPUTVALUE( "AdjustedCreditReductionAmt", BL15 );

				OUTPUTVALUE( "RnwblElecRefinedCoalProdCrAmt", BL23 );

 			OUTPUTVALUE( "TotalAllowedTaxCreditAmt", BL30 );

			END;

	END;
END;
PROCEDURE Form8844Output(docID : FText);
Form F8844;
BEGIN
	WITHNEWTAG( "IRS8844" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "TotalQualifiedEmpwrZoneWgsAmt", L1A );
		OUTPUTVALUE( "CurrentYearCreditAmt", L2 );
		OUTPUTVALUE( "FlowthroughEntityCreditAmt", L3 );
		OUTPUTVALUE( "TotalCurrentYearEZRCECreditAmt", L4 );

	 	 OUTPUTVALUE( "AllocatedToBeneficiariesAmt", BENALLOC );
		 OUTPUTVALUE( "EstatesTrustsAndCoopsCreditAmt", COESTTR );

	END;
END;
PROCEDURE Form8845Output(docID : FText);
Form F8845;

BEGIN
	WITHNEWTAG( "IRS8845" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "TotQlfyWagesEmplHlthInsAmt", L1 );
		IF ( L2 <> 0 ) THEN OutputValue( "CY93TotQlfyWagesEmplHlthInsAmt", L2 ) ELSE OutputValue( "CY93TotQlfyWagesEmplHlthInsAmt", "0" );
		IF ( L3 <> 0 ) THEN OutputValue( "IncrementalIncreaseAmt", L3 ) ELSE OutputValue( "IncrementalIncreaseAmt", "0" );
		IF ( L4 <> 0 ) THEN OutputValue( "CurrentYearCreditAmt", L4 ) ELSE OutputValue( "CurrentYearCreditAmt", "0" );
		OUTPUTVALUE( "IndianEmploymentCreditAmt", L5 );
		OUTPUTVALUE( "CYIndianEmploymentCreditAmt", L6 );

		OUTPUTVALUE( "AllocatedToBeneficiariesAmt", ALLOC );
		OUTPUTVALUE( "EstatesTrustsAndCoopsCreditAmt", CREDIT );

   END;
END;
PROCEDURE Form8846Output(docID : FText);
Form F8846;

BEGIN
	   WITHNEWTAG( "IRS8846" ) DO
	   BEGIN
	      SETATTRIBUTE( "documentId", docID );
	      OUTPUTVALUE( "TotalTipsReceivedAmt", L1 );
   	      OUTPUTVALUE( "TipsNotSubjectToCreditAmt", L2 );
	      OUTPUTVALUE( "CreditableTipsAmt", L3 );
		  OUTPUTVALUE( "EmplWageExceededMaxAmtInd", L4BX );
		  OUTPUTVALUE( "CurrentYearCreditAmt", L4 );
	      OUTPUTVALUE( "CrForEmplrSSAndMedcrTxsAmt", L5 );
	      OUTPUTVALUE( "TotalCrTipsAndEmplrSSMedcrAmt", L6 );

	   END;
END;
PROCEDURE Form8881Output(docID : FText);

Form F8881;

VAR
	LastOne	: Index;
	i		    : Integer;

BEGIN
	WITHNEWTAG( "IRS8881" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "QualifiedStartupCostsIncurdAmt", COSTS );
		OUTPUTVALUE( "OnehalfOfQlfyStartupCostAmt", HALFCSTS );
		OUTPUTVALUE( "PensionPlanStartupCostsCrAmt", PASSTHRU );
		OUTPUTVALUE( "SumCostsAndCrFromPPStartupAmt", SUBTTL );
		OUTPUTVALUE( "CurrentYearCreditAmt", MAX500 );
	END;
END;
PROCEDURE Form8903Output(docID : FText);
Form F8903;
BEGIN
	WITHNEWTAG( "IRS8903" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );

		WITHNEWTAG( "AllProductionGrp" ) DO
		BEGIN
			OUTPUTVALUE( "DomesticProductionGroRcptsAmt", ODOMPROD );
			OUTPUTVALUE( "AllocatedCostOfGoodsSoldAmt", OALLSOLD );
			OUTPUTVALUE( "DirectDedExpensesLossesAmt", ODIRALL );
			OUTPUTVALUE( "IndirectDedExpnssLossesAmt", OINDALL );
			OUTPUTVALUE( "TotCostGdsSoldDedExpnssLossAmt", OADDLIN );
			OUTPUTVALUE( "NetDomesticProdGrossRcptsAmt", OSUBLIN );
			OUTPUTVALUE( "QlfyProductionActivitiesAmt", OQUALENT );
			OUTPUTVALUE( "ProductionActivitiesIncomeAmt", OSUBTOT1 );
			OUTPUTVALUE( "EstateOrTrustAllocatedBenefAmt", OBENES1 );
			OUTPUTVALUE( "OilRelQlfyProdActivitiesIncAmt", OQUALPRO );
		END;
		WITHNEWTAG( "AllActivitiesGrp" ) DO
		BEGIN
			OUTPUTVALUE( "DomesticProductionGroRcptsAmt", DOMPROD );
			OUTPUTVALUE( "AllocatedCostOfGoodsSoldAmt", ALLSOLD );
			OUTPUTVALUE( "DirectDedExpensesLossesAmt", DIRALL );
			OUTPUTVALUE( "IndirectDedExpnssLossesAmt", INDALL );
			OUTPUTVALUE( "TotCostGdsSoldDedExpnssLossAmt", ADDLIN );
			OUTPUTVALUE( "NetDomesticProdGrossRcptsAmt", SUBLIN );
			OUTPUTVALUE( "QlfyProductionActivitiesAmt", QUALENT );
			OUTPUTVALUE( "ProductionActivitiesIncomeAmt", SUBTOT1 );
			OUTPUTVALUE( "EstateOrTrustAllocatedBenefAmt", BENES1 );
			OUTPUTVALUE( "QlfyProductionActyIncomeAmt", QUALPROD );

		END;
		OUTPUTVALUE( "IncomeLimitationAmt", INCLIM );
		OUTPUTVALUE( "QualifiedIncomeOrIncomeLmtAmt", SMALIN );
		OUTPUTVALUE( "PercentOfIncomeAmt", THRPER );
		OUTPUTVALUE( "QlfyIncOrOilRelOrIncLimitsAmt", SMALLER );
		OUTPUTVALUE( "QlfyIncOrOilRelOrIncPercentAmt", ORED );
		OUTPUTVALUE( "DomesticProdActivityRedAmt", SUBTRACT );

		OUTPUTVALUE( "W2WagesAmt", FORMWAGE );
		OUTPUTVALUE( "PassThroughW2WagesAmt", FORMENT );
		OUTPUTVALUE( "TotalW2WagesAmt", SUMLIN );

		OUTPUTVALUE( "EstateOrTrustAllocatedBenefAmt", BENES2 );
		OUTPUTVALUE( "EstatesAndTrustsAmt", SUBTOT2 );
		OUTPUTVALUE( "W2WageLimitationAmt", WAGELIM );
		OUTPUTVALUE( "IncomePctOrW2WageLimitationAmt", ENTSMAL );
		OUTPUTVALUE( "CoopeartivesDomesticProdDedAmt", DEDPATR );
		OUTPUTVALUE( "ExpandedGroupAllocationAmt", GRPALL );
		OUTPUTVALUE( "DomesticProductionActDedAmt", PRODACT );
	END;
END;
PROCEDURE Form8910Output(i : FInteger; docID : FText);
Form F8910[i];

VAR

     LastOne	: Index;
     n		    : Integer;
     numAltVeh  : Integer;
     tempMake   : fText;

BEGIN
	WITHNEWTAG( "IRS8910" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		If HasValue( VEHYRA ) AND HasValue( YRMKA ) AND Hasvalue( YMMA ) THEN
		BEGIN
			WITHNEWTAG( "IRS8910TentativeCreditGrp" ) DO
				BEGIN
					IF (FormatXMLNNInteger(VEHYRA, 4, true) > 1000) and (FormatXMLNNInteger(VEHYRA, 4, true) < 9000) THEN
					BEGIN
						WITHNEWTAG( "VehicleDescriptionGrp" ) DO
						BEGIN
							OUTPUTVALUE( "VehicleModelYr", FormatXMLYear(VEHYRA) );
							OUTPUTVALUE( "VehicleMakeNameTxt", FormatXMLShortDescription(YRMKA) );
							OUTPUTVALUE( "VehicleModelNameTxt", FormatXMLShortDescription(YMMA) );
						END;
					END;
					OUTPUTVALUE( "VIN", hVINA);
					OUTPUTVALUE( "VehiclePlacedInServiceDt", FormatXMLDate(INSERVA) );
					OUTPUTVALUE( "AltMotorVehTentativeCreditAmt", TENCRA );
				END;
		END;
		If HasValue( VEHYRB ) AND HasValue( YRMKB ) AND Hasvalue( YMMB )THEN
		BEGIN
			WITHNEWTAG( "IRS8910TentativeCreditGrp" ) DO
				BEGIN
				IF (FormatXMLNNInteger(VEHYRB, 4, true) > 1000) and (FormatXMLNNInteger(VEHYRB, 4, true) < 9000) THEN
					WITHNEWTAG( "VehicleDescriptionGrp" ) DO
					BEGIN
						OUTPUTVALUE( "VehicleModelYr", FormatXMLYear(VEHYRB) );
						OUTPUTVALUE( "VehicleMakeNameTxt", FormatXMLShortDescription(YRMKB) );
						OUTPUTVALUE( "VehicleModelNameTxt", FormatXMLShortDescription(YMMB) );
					END;
					OUTPUTVALUE( "VIN", hVINB);
					OUTPUTVALUE( "VehiclePlacedInServiceDt", FormatXMLDate(INSERVB) );
					OUTPUTVALUE( "AltMotorVehTentativeCreditAmt", TENCRB );
				END;
		END;
		If (P2SUBA > 0 )THEN
			If HasValue( VEHYRA ) AND HasValue( YRMKA ) AND Hasvalue( YMMA ) AND HasValue( BUSUSEA ) AND HasValue( P2SUBA )THEN
				WITHNEWTAG( "BusinessInvestmentUseGrp" ) DO
					BEGIN
						OUTPUTVALUE( "BusinessInvestmentUsePct",  FormatXMLRatio(BUSUSEA)  );
						OUTPUTVALUE( "BusinessInvestmentUseAmt", P2SUBA );
					END;
		If (P2SUBB > 0 )THEN
		     If HasValue( VEHYRB ) AND HasValue( YRMKB ) AND Hasvalue( YMMB ) AND HasValue( BUSUSEB ) AND HasValue( P2SUBB )THEN
				WITHNEWTAG( "BusinessInvestmentUseGrp" ) DO
    				BEGIN
						OUTPUTVALUE( "BusinessInvestmentUsePct", FormatXMLRatio(BUSUSEB));
						OUTPUTVALUE( "BusinessInvestmentUseAmt", P2SUBB );
					END;
		OUTPUTVALUE( "TotalBusinessInvestmentUseAmt", P2SUBTOT );
		OUTPUTVALUE( "AlternativeMotorVehicleCrAmt", PTAMV );
		OUTPUTVALUE( "BusinessInvstUsePartOfCrAmt", BUSAMV );
		OUTPUTVALUE( "TentativeCreditForPrsnlUseAmt", LESSTENA );
		OUTPUTVALUE( "TentativeCreditForPrsnlUseAmt", LESSTENB );

		OUTPUTVALUE( "TotalTentativeCrForPrsnlUseAmt", P3SUB );
		OUTPUTVALUE( "TotalTaxBeforeCrAndOthTaxesAmt", FR1040 );

		OUTPUTVALUE( "AltMotorVehCreditFromFormsAmt", TOTCRS );
		OUTPUTVALUE( "AltMotorVehAdjustedCreditAmt", LESSTMT );
		OUTPUTVALUE( "PersonalUsePartOfCreditAmt", PERAMV );
	END;

END;
PROCEDURE Form8941Output(docID: FText);

FORM F8941;

VAR
	DLTCt	: Index;
	n		: Integer;

BEGIN
	WITHNEWTAG( "IRS8941" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareVersion", FEFHDSUM.sftid );
        WITHNEWTAG( "BusinessName" ) DO
     	BEGIN
        	OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(TPNAME));
        End;
        if ValidXMLEIN(TPSSN) THEN
        	OUTPUTVALUE( "EIN", FormatXMLEIN(TPSSN) );
		if ValidXMLEIN(EEIN) THEN
			OUTPUTVALUE( "EmplmnTaxesReportEmployerEIN", FormatXMLEIN(EEIN) );
		OUTPUTVALUE( "SmllEmplrHIPIndivEmpldForCrCnt", EMPLS1 );
		OUTPUTVALUE( "SmllEmplrHIPFTEEmplForTaxYrCnt", FTEMPL1 );
		OUTPUTVALUE( "AvgAnnualWagesPdForTxYrAmt", AVGWGS );
		OUTPUTVALUE( "HIPPaidForEmplEmployedForCrAmt", PREMPD );
		OUTPUTVALUE( "SmllEmplrHIPPotentiallyPaidAmt", PREMPOSS );
		OUTPUTVALUE( "SmllEmplrEligibleHIPPaidAmt", SMALLER1 );
		OUTPUTVALUE( "SmllEmplrEligHIPTimesPctAmt", EMPLPCT );
		OUTPUTVALUE( "SmllEmplrHIPFTECreditAmt", LESS10 );
		OUTPUTVALUE( "AnnualWgPdLessThanSpecifiedAmt", LESS25K);
		OUTPUTVALUE( "TotStPremSbsdyPdOrCrForHIPAmt", STSUBSID );
		OUTPUTVALUE( "HIPPdLessTotStPremOrCrAmt", SUBTR1 );
		OUTPUTVALUE( "SmallerAnnualWgPdOrHIPPdAmt", SMALLER2 );
		OUTPUTVALUE( "PaidHIPForEmplForPrpsOfCrCnt", EMPLS2 );
		OUTPUTVALUE( "FTEEmplPdHIPForPrpsOfCrCnt", FTEMPL2 );
		OUTPUTVALUE( "SmllEmplrCreditForHIPAmt", SEHIPCR );
		OUTPUTVALUE( "SumSmllrAmtAndCreditForHIPAmt", ADD1 );
				OUTPUTVALUE( "SmllEmplrHIPAllocToPatronsAmt", COOP );
				OUTPUTVALUE( "SmllEmplrHIPSumLessAllocAmt", SUBTR3 );
	END;

END;
PROCEDURE Form8949Output(docID:FText);
VAR
	DLTCt, DLTCt2	: Index;
	i, j			: Integer;
	formCount		: Integer;
	copy			: Index;
	tmpDocID,
	tmpReference	: FText;
BEGIN

	DLTCt := LastIndex(PDFATTCH, FEFHDSUM);
	for i := 1 to DLTCt DO
	BEGIN
		if (FEFHDSUM.ATTDESC[i] = "8949Detail") THEN
		BEGIN
			tmpDocID := TotDocCt - DLTCt + i;
			IF (tmpDocID > 0) THEN tmpDocID := PadLeft(tmpDocID, DocIDLen, "0");
			tmpReference := "BinaryAttachment";
			break;
		END;
	END;
	WITHNEWTAG( "IRS8949" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "IRS8949" );
		SETATTRIBUTE( "referenceDocumentId", tmpDocID );
		SETATTRIBUTE( "referenceDocumentName", tmpReference );
		formCount := NumCopies(F8949);
		for i := 1 to formCount do
		begin
			WITHNEWTAG( "ShortTermCapitalGainAndLossGrp" ) DO
			BEGIN
				if (isChecked(F8949[i].STBOXA)) THEN
					OUTPUTVALUE( "TransRptOn1099BThatShowBssInd", "X");
				if (isChecked(F8949[i].STBOXB)) THEN
					OUTPUTVALUE( "TransRptOn1099BNotShowBasisInd", "X");
				if (isChecked(F8949[i].STBOXC)) THEN
					OUTPUTVALUE( "TransactionsNotRptedOn1099BInd", "X");
				DLTCt2 := LastIndex( SHORTTBL, F8949[i] );
				FOR j := 1 TO DLTCt2 DO
				BEGIN
					WITHNEWTAG( "CapitalGainAndLossAssetGrp" ) DO
					BEGIN
						OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(F8949[i].L1A[j]));
						OUTPUTVALUE( "AcquiredDt", FormatXMLDate(F8949[i].L1C[j]));
						if (UPPERCASE(F8949[i].L1C[j]) = "VARIOUS") then
							OUTPUTVALUE( "DateAcquiredInheritedCd",  "VARIOUS");
						OUTPUTVALUE( "SoldOrDisposedDt", FormatXMLDate(F8949[i].L1D[j]) );
						if (UPPERCASE(F8949[i].L1D[j])  = "WORTHLESS") THEN
							OUTPUTVALUE( "SoldOrDisposedCd", "WORTHLESS")
						else
						if (UPPERCASE(F8949[i].L1D[j])  = "BANKRUPT") THEN
							OUTPUTVALUE( "SoldOrDisposedCd", "BANKRUPT");
						OUTPUTVALUE( "ProceedsSalesPriceAmt", F8949[i].L1E[j]);
						OUTPUTVALUE( "CostOrOtherBasisAmt", F8949[i].L1F[j]);
						OUTPUTVALUE( "AdjustmentsToGainOrLossCd", FormatXMLAlpha (F8949[i].L1B[j], 7));
						OUTPUTVALUE( "AdjustmentsToGainOrLossAmt", F8949[i].L1G[j] );
						OUTPUTVALUE( "GainOrLossAmt", F8949[i].L20H[j]);
					END;
				END;
				OUTPUTVALUE( "TotalProceedsSalesPriceAmt", F8949[i].L2E );
				OUTPUTVALUE( "TotalCostOrOtherBasisAmt", F8949[i].L2F );
				OUTPUTVALUE( "TotAdjustmentsToGainOrLossAmt", F8949[i].L2G );
				OUTPUTVALUE( "TotalGainOrLossAmt", F8949[i].TOTH );
			END;
		end;
		for i := 1 to formCount do
		begin
			WITHNEWTAG( "LongTermCapitalGainAndLossGrp" ) DO
			BEGIN
				if (isChecked(F8949[i].LTBOXA)) THEN
					OUTPUTVALUE( "TransRptOn1099BThatShowBssInd", "X");
				if (isChecked(F8949[i].LTBOXB)) THEN
					OUTPUTVALUE( "TransRptOn1099BNotShowBasisInd", "X");
				if (isChecked(F8949[i].LTBOXC)) THEN
					OUTPUTVALUE( "TransactionsNotRptedOn1099BInd", "X");
				DLTCt2 := LastIndex( LONGTBL, F8949[i] );
				for j := 1 TO DLTCt2 DO
					WITHNEWTAG( "CapitalGainAndLossAssetGrp" ) DO
					BEGIN
						OUTPUTVALUE( "PropertyDesc",FormatXMLLineExplanation(F8949[i].L3A[j]));
						OUTPUTVALUE( "AcquiredDt", FormatXMLDate(F8949[i].L3C[j]));
						if (UPPERCASE(F8949[i].L3C[j]) = "VARIOUS") then
							OUTPUTVALUE( "DateAcquiredInheritedCd",  "VARIOUS");
						OUTPUTVALUE( "SoldOrDisposedDt", FormatXMLDate(F8949[i].L3D[j]));
						if (UPPERCASE(F8949[i].L3D[j])  = "WORTHLESS") THEN
							OUTPUTVALUE( "SoldOrDisposedCd", "WORTHLESS")
						else
						if (UPPERCASE(F8949[i].L3D[j])  = "BANKRUPT") THEN
							OUTPUTVALUE( "SoldOrDisposedCd", "BANKRUPT");
						OUTPUTVALUE( "ProceedsSalesPriceAmt", F8949[i].L3E[j]);
						OUTPUTVALUE( "CostOrOtherBasisAmt", F8949[i].L3F[j]);
						OUTPUTVALUE( "AdjustmentsToGainOrLossCd", FormatXMLAlpha (F8949[i].L3B[j], 7));
						OUTPUTVALUE( "AdjustmentsToGainOrLossAmt", F8949[i].L3G[j]);
						OUTPUTVALUE( "GainOrLossAmt", F8949[i].L220H[j]);
					END;
				OUTPUTVALUE( "TotalProceedsSalesPriceAmt", F8949[i].L4E );
				OUTPUTVALUE( "TotalCostOrOtherBasisAmt", F8949[i].L4F );
				OUTPUTVALUE( "TotAdjustmentsToGainOrLossAmt", F8949[i].L4G );
				OUTPUTVALUE( "TotalGainOrLossAmt", F8949[i].TOT2H);
			END;
		end;
	END;

END;
PROCEDURE IRS8960Output(docID:FText);

FORM F8960;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	if (TestFormIs( PartOfReturn, F8960 )) then
	begin
	WITHNEWTAG( "IRS8960" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		If isChecked (SEC6013G)then
			OUTPUTVALUE( "Section6013gInd", "X" );
		If isChecked (SEC6013H)then
			OUTPUTVALUE( "Section6013hInd", "X" );
		If isChecked (REGBOX)then
		OUTPUTVALUE( "RegSection1141110gInd", "X" );
		OUTPUTVALUE( "TaxableInterestAmt", INTEREST );
		OUTPUTVALUE( "OrdinaryDividendsAmt", DIVIDEND );
		OUTPUTVALUE( "AnnuitesFromNonQlfPlansAmt", ANNUITY );
		OUTPUTVALUE( "NetRentalIncomeOrLossAmt", RENTAL );
		OUTPUTVALUE( "AdjNetIncmOrLossNonSect1411Amt", ADJUST4B );
		OUTPUTVALUE( "RentalREAndAdjNetIncmOrLossAmt", SUM4A4B );
		OUTPUTVALUE( "PropertyDisposGainOrLossAmt", GAIN5A );
		OUTPUTVALUE( "NonNIITPropDisposGainOrLossAmt", GAIN5B );
		OUTPUTVALUE( "AdjFromDisposOfStockAmt", ADJUSTK1 );
		OUTPUTVALUE( "GainOrLossFromDisposAmt", SUMLN5 );
		OUTPUTVALUE( "CFCAndPFICInvstIncmChangesAmt", CHANGEII );
		OUTPUTVALUE( "OtherInvestmentIncomeOrLossAmt", OTHMOD );
		OUTPUTVALUE( "TotalIncomeAmt", TOTPT1 );
		OUTPUTVALUE( "InvestmentInterestAmt", INVINTEX );
		OUTPUTVALUE( "StateLocalForeignIncomeTaxAmt", STATETAX );
		OUTPUTVALUE( "MiscInvestmentExpenseAmt", MISCEXP );
		OUTPUTVALUE( "InvestmentExpenseAmt", SUMLN9 );
		OUTPUTVALUE( "AdditionalModificationAmt", ADDMOD );
		OUTPUTVALUE( "TotalDeductionModificationAmt", TOTPT2 );
		OUTPUTVALUE( "NetInvestmentIncomeAmt", NETININI );
		OUTPUTVALUE( "ModifiedAGIAmt", MODAGI );
		OUTPUTVALUE( "FilingThresholdAmt", THRSHOLD );
		OUTPUTVALUE( "MAGILessThresholdAmt", SUBTRCTI );
		OUTPUTVALUE( "SmllrIncmOrMAGILessThrshldAmt", SMALLERI );
		OUTPUTVALUE( "IndivNetInvstIncomeTaxAmt", NIITAXI );
		OUTPUTVALUE( "IncomeDistributionDeductionAmt", DISTDED );
		OUTPUTVALUE( "UndistributedNetIncomeAmt", UNDISNII );
		OUTPUTVALUE( "AdjustedGrossIncomeAmt", AGI );
		OUTPUTVALUE( "TrustEstHighestTaxBracketAmt", TOPBRAC );
		OUTPUTVALUE( "AGILessTrustEstHighestTaxAmt", SUBTRCTF );
		OUTPUTVALUE( "SmllrUndistrIncmAGILessTaxAmt", SMALLERF );
		OUTPUTVALUE( "EstTrustNetInvstIncomeTaxAmt", NETTAXF );
	END;
  End;
END;
PROCEDURE IRS1116Output(copy:FInteger; docID :Ftext);

FORM F1116[copy];
VAR
	DLTCt,
	ctr		: Index;
	i		: Integer;
	tmptxt  : FText;
BEGIN

 	if (TestFormIs( PartOfReturn, F1116[copy] )) then
	begin

		WITHNEWTAG( "IRS1116" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", F1116ID[copy] );
			SETATTRIBUTE( "softwareId", "15000271" );
			SETATTRIBUTE( "documentName", "IRS1116" );
			if isChecked(Box1) THEN OUTPUTVALUE( "ForeignIncPassiveCategoryInd", "X");
			if isChecked(Box8) THEN OUTPUTVALUE( "ForeignIncGeneralCategoryInd", "X" );
			if isChecked(Box10) THEN OUTPUTVALUE( "ForeignIncSection901jInd", "X" );
			if isChecked(Box11) THEN OUTPUTVALUE( "ForeignIncResourcedTreatyInd", "X" );
			if isChecked(Box7) THEN OUTPUTVALUE( "ForeignIncLumpSumDistribInd", "X" );
			OUTPUTVALUE( "ResidenceForeignCountryCd", FormatXMLCountry(RESI) );
			WITHNEWTAG( "ForeignTaxCreditSource" ) DO
			BEGIN
				OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(LJ[1]) );
				OUTPUTVALUE( "ForeignGrossIncomeAmt", L1[1] );

				if ( (L2[1] <> 0 ) and (sFg2aID[copy] <> "0")) then
				begin
					WITHNEWTAG( "ForeignIncRelatedExpensesAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg2aID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "ForeignIncmRelatedExpensesStmt" );
		                OUTPUTLITERAL(L2[1]);
					END;
				end
				else
					OUTPUTVALUE ( "ForeignIncRelatedExpensesAmt", L2[1] );
				OUTPUTVALUE( "ItemizedOrStandardDeductionAmt", L3a[1] );

				if ((L3B[1] <> 0 ) and (sFg3baID[copy] <> "0"))then
				begin
					WITHNEWTAG( "OtherDeductionsNotRelatedAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg3baID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "OtherDeductionsNotRelatedStatement" );
		                OUTPUTLITERAL(L3B[1]);
					END;
				end
				else
					OUTPUTVALUE ( "OtherDeductionsNotRelatedAmt", L3b[1] );
				OUTPUTVALUE( "TotalDeductionAmt", L3C[1] );
				OUTPUTVALUE( "GrossForeignSourceIncomeAmt", L3D[1] );
				OUTPUTVALUE( "GrossIncomeAmt", L3E[1] );
				OUTPUTVALUE( "ForeignIncomePct", ( L3F[1] ) );
				OUTPUTVALUE( "ProRataDeductionsNotRelatedAmt", L3G[1] );
				OUTPUTVALUE( "ApportionedHomeMortgIntExpAmt", L4A[1] );
				OUTPUTVALUE( "ApportionedOtherInterestExpAmt", L4B[1] );
				OUTPUTVALUE( "ForeignSourceLossAmt", L5[1] );
				OUTPUTVALUE( "ForeignIncNetDeductAndLossAmt", L6[1] );
				OUTPUTVALUE( "ForeignTaxesPaidOrAccruedDt", FormatXMLDate(DATE[1]) );
				if(N[1] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnDivAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(N[1]);
					END;
				end;

				if( O[1] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnRentAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( O[1]);
					END;
				end;

				if( P[1] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnIntAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(P[1]);
					END;
				end;
				if( Q[1] <> 0 )then
				begin
					WITHNEWTAG( "OtherCurrencyTaxPaidAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( Q[1]);
					END;
				end;
				OUTPUTVALUE( "USTaxWithheldOnDividendAmt", R[1] );
				OUTPUTVALUE( "USTaxWithheldOnRentAmt", S[1] );
				OUTPUTVALUE( "USTaxWithheldOnInterestAmt", T[1] );
				OUTPUTVALUE( "USDollarOtherForeignTaxPaidAmt", U[1] );
				OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", V[1] );
			END;

			WITHNEWTAG( "ForeignTaxCreditSource" ) DO
			BEGIN
				OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(LJ[2]) );
				OUTPUTVALUE( "ForeignGrossIncomeAmt", L1[2] );

				if ( (L2[2] <> 0 ) and (sFg2bID[copy] <> "0")) then
				begin
					WITHNEWTAG( "ForeignIncRelatedExpensesAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg2bID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "ForeignIncmRelatedExpensesStmt" );
		                OUTPUTLITERAL( L2[2] );
					END;
				end
				else
					OUTPUTVALUE ( "ForeignIncRelatedExpensesAmt", L2[2] );
				OUTPUTVALUE( "ItemizedOrStandardDeductionAmt", L3a[2] );

				if (( L3B[2] <> 0 )and (sFg3bbID[copy] <> "0"))then
				begin
					WITHNEWTAG( "OtherDeductionsNotRelatedAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg3bbID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "OtherDeductionsNotRelatedStatement" );
		                OUTPUTLITERAL(L3B[2]);
					END;
				end
				else
					OUTPUTVALUE ( "OtherDeductionsNotRelatedAmt", L3B[2] );
				OUTPUTVALUE( "TotalDeductionAmt", L3C[2] );
				OUTPUTVALUE( "GrossForeignSourceIncomeAmt", L3D[2] );
				OUTPUTVALUE( "GrossIncomeAmt", L3E[2] );
				OUTPUTVALUE( "ForeignIncomePct", ( L3F[2] ) );
				OUTPUTVALUE( "ProRataDeductionsNotRelatedAmt", L3G[2] );
				OUTPUTVALUE( "ApportionedHomeMortgIntExpAmt", L4A[2] );
				OUTPUTVALUE( "ApportionedOtherInterestExpAmt", L4B[2] );
				OUTPUTVALUE( "ForeignSourceLossAmt", L5[2] );
				OUTPUTVALUE( "ForeignIncNetDeductAndLossAmt", L6[2] );
				OUTPUTVALUE( "ForeignTaxesPaidOrAccruedDt", FormatXMLDate(DATE[2]) );
				if(N[2] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnDivAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(N[2]);
					END;
				end;

				if( O[2] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnRentAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( O[2]);
					END;
				end;

				if( P[2] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnIntAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(P[2]);
					END;
			    end;

				if( Q[2] <> 0 )then
				begin
					WITHNEWTAG( "OtherCurrencyTaxPaidAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( Q[2]);
					END;
				end;
				OUTPUTVALUE( "USTaxWithheldOnDividendAmt", R[2] );
				OUTPUTVALUE( "USTaxWithheldOnRentAmt", S[2] );
				OUTPUTVALUE( "USTaxWithheldOnInterestAmt", T[2] );
				OUTPUTVALUE( "USDollarOtherForeignTaxPaidAmt", U[2] );
				OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", V[2] );
			END;
			WITHNEWTAG( "ForeignTaxCreditSource" ) DO
			BEGIN
				OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(LJ[3]) );
				OUTPUTVALUE( "ForeignGrossIncomeAmt", L1[3] );

				if ( (L2[3] <> 0 ) and (sFg2cID[copy] <> "0")) then
				begin
					WITHNEWTAG( "ForeignIncRelatedExpensesAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg2cID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "ForeignIncmRelatedExpensesStmt" );
		                OUTPUTLITERAL(L2[3]);
					END;
			    end
			    else
			    	OUTPUTVALUE ( "ForeignIncRelatedExpensesAmt", L2[3] );
				OUTPUTVALUE( "ItemizedOrStandardDeductionAmt", L3a[3] );

				if ( (L3B[3] <> 0 ) and (sFg3bcID[copy] <> "0")) then
				begin
					WITHNEWTAG( "OtherDeductionsNotRelatedAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg3bcID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "OtherDeductionsNotRelatedStatement" );
		                OUTPUTLITERAL(L3B[3]);
					END;
				end
				else
					OUTPUTVALUE ( "OtherDeductionsNotRelatedAmt", L3B[3] );
				OUTPUTVALUE( "TotalDeductionAmt", L3C[3] );
				OUTPUTVALUE( "GrossForeignSourceIncomeAmt", L3D[3] );
				OUTPUTVALUE( "GrossIncomeAmt", L3E[3] );
				OUTPUTVALUE( "ForeignIncomePct", ( L3F[3] ) );
				OUTPUTVALUE( "ProRataDeductionsNotRelatedAmt", L3G[3] );
				OUTPUTVALUE( "ApportionedHomeMortgIntExpAmt", L4A[3] );
				OUTPUTVALUE( "ApportionedOtherInterestExpAmt", L4B[3] );
				OUTPUTVALUE( "ForeignSourceLossAmt", L5[3] );
				OUTPUTVALUE( "ForeignIncNetDeductAndLossAmt", L6[3] );
				OUTPUTVALUE( "ForeignTaxesPaidOrAccruedDt", FormatXMLDate(DATE[3]) );
				if(N[3] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnDivAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(N[3]);
					END;
				end;

				if(O[3] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnRentAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( O[3]);
					END;
				 end;

				if(P[3] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnIntAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(P[3]);
					END;
				end;

				if(Q[3] <> 0 )then
				begin
					WITHNEWTAG( "OtherCurrencyTaxPaidAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( Q[3]);
					END;
				end;
				OUTPUTVALUE( "USTaxWithheldOnDividendAmt", R[3] );
				OUTPUTVALUE( "USTaxWithheldOnRentAmt", S[3] );
				OUTPUTVALUE( "USTaxWithheldOnInterestAmt", T[3] );
				OUTPUTVALUE( "USDollarOtherForeignTaxPaidAmt", U[3] );
				OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", V[3] );
			END;
			tmptxt := concat(tmptxt, " ", L1T, L1T1, L1T3 );
			OUTPUTVALUE( "IncomeFromForeignSourceTxt", FormatXMLLineExplanation(tmptxt) );
			OUTPUTVALUE( "TotalForeignGrossIncomeAmt", L1T3 );

			If ((HasValue( compnx )) and (sFg1bID[copy] <> "0")) then
			begin
				WITHNEWTAG( "AltBasisCompensationSourceInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sFg1bID[copy] );
					SETATTRIBUTE( "referenceDocumentName", "AltBasisCompensationSourceStatement" );
	                OUTPUTLITERAL( "X" );
				END;
			end
			else
				OUTPUTVALUE ( "AltBasisCompensationSourceInd", compnx );
			OUTPUTVALUE( "TotalDeductionOrLossAmt", L6ET );
			OUTPUTVALUE( "NetForeignTaxableIncomeLossAmt", L7 );
			If (HasValue( CBXP ))then
			OUTPUTVALUE( "ForeignTaxesPaidCreditInd", "X" );
			If (HasValue( CBXA ))then
			OUTPUTVALUE( "ForeignTaxesAccruedCreditInd", "X" );
			OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", L8T );

			if ( (L10 <> 0 ) and (sCarBkID[copy] <> "0")) then
			begin
				WITHNEWTAG( "ForeignTaxCrCarrybackOrOverAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sCarBkID[copy] );
					SETATTRIBUTE( "referenceDocumentName", "ForeignTaxCrCarrybackComputationStatement" );
					OUTPUTLITERAL( L10 );
				END;
			end
			else
				OUTPUTVALUE ( "ForeignTaxCrCarrybackOrOverAmt", L10 );
			OUTPUTVALUE( "ForeignGrossTaxPaidOrAccrAmt", L11 );

			if( L12 <> 0 )then
			begin
				WITHNEWTAG( "ForeignTaxReductionAmt" ) DO
				BEGIN
					OUTPUTLITERAL( L12 );
				END;
			end;
			OUTPUTVALUE( "ForeignIncHighTaxKickOutAdjAmt", RECLASS );
			OUTPUTVALUE( "ForeignTaxAvailableForCrRedAmt", L13 );
			OUTPUTVALUE( "ForeignTaxableIncomeOrLossAmt", L14 );
			if( L15 <> 0 )then
			begin
				WITHNEWTAG( "ForeignIncomeNetAdjustmentAmt" ) DO
				BEGIN
					OUTPUTLITERAL( L15 );
				END;
			end;
			OUTPUTVALUE( "ForeignNetTaxableIncomeAmt", L16 );
			OUTPUTVALUE( "ForeignTaxableIncBfExemptAmt", L17 );
			OUTPUTVALUE( "ForeignTaxableIncBfExemptRt", ( L18) );
			OUTPUTVALUE( "TaxFromTaxReturnAmt", L19 );
			OUTPUTVALUE( "MaxAllowedForeignTaxCreditAmt", L20 );

			if( L21 <> 0 )then
			begin
				WITHNEWTAG( "GrossForeignTaxCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "foreignIncomeLumpSumDistribCd", "LSD" );
					OUTPUTLITERAL( L21 );
				END;
			end;
			OUTPUTVALUE( "ForeignPassiveIncTaxCreditAmt", L22 );
			OUTPUTVALUE( "ForeignGeneralIncTaxCreditAmt", L28 );
			OUTPUTVALUE( "ForeignIncRsrcdTreatyTaxCrAmt", L29 );
			OUTPUTVALUE( "ForeignIncLumpSumDistribCrAmt", L27 );
			OUTPUTVALUE( "TentativeForeignTaxCreditAmt", L30 );
			OUTPUTVALUE( "SmllrOfRtnTaxOrForeignTaxCrAmt", NEWL31 );
			OUTPUTVALUE( "IntlBoycottCreditReductionAmt", L31 );
			OUTPUTVALUE( "ForeignTaxCreditAmt", L32 );

		END;
	END;
	if (TestFormIs( PartOfReturn, F1116AMT[copy] )) then
	begin

		WITHNEWTAG( "IRS1116" ) DO
		BEGIN
			SETATTRIBUTE( "documentId", F1116AMTID[copy] );
			SETATTRIBUTE( "softwareId", "15000271" );
			SETATTRIBUTE( "documentName", "IRS1116" );
			OUTPUTVALUE( "AlternativeMinimumTaxCd", "AMT" );
			if isChecked(F1116AMT[Copy].Box1) THEN OUTPUTVALUE( "ForeignIncPassiveCategoryInd", "X");
			if isChecked(F1116AMT[Copy].Box8) THEN OUTPUTVALUE( "ForeignIncGeneralCategoryInd", "X" );
			if isChecked(F1116AMT[Copy].Box10) THEN OUTPUTVALUE( "ForeignIncSection901jInd", "X" );
			if isChecked(F1116AMT[Copy].Box11) THEN OUTPUTVALUE( "ForeignIncResourcedTreatyInd", "X" );
			if isChecked(F1116AMT[Copy].Box7) THEN OUTPUTVALUE( "ForeignIncLumpSumDistribInd", "X" );
			OUTPUTVALUE( "ResidenceForeignCountryCd", FormatXMLCountry(F1116AMT[Copy].RESI) );
			WITHNEWTAG( "ForeignTaxCreditSource" ) DO
			BEGIN
				OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(F1116AMT[Copy].LJ[1]) );
				OUTPUTVALUE( "ForeignGrossIncomeAmt", F1116AMT[Copy].L1[1] );

				if ((F1116AMT[Copy].L2[1] <> 0 )  and (sFg2aAMTID[copy] <> "0")) then
				begin
					WITHNEWTAG( "ForeignIncRelatedExpensesAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg2aAMTID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "ForeignIncmRelatedExpensesStmt" );
		                OUTPUTLITERAL(F1116AMT[Copy].L2[1]);
					END;
				end
				else
					OUTPUTVALUE ( "ForeignIncRelatedExpensesAmt", F1116AMT[Copy].L2[1] );
				OUTPUTVALUE( "ItemizedOrStandardDeductionAmt", F1116AMT[Copy].L3a[1] );

				if ((F1116AMT[Copy].L3B[1] <> 0 ) and (sFg3baAMTID[copy] <> "0")) then
				begin
					WITHNEWTAG( "OtherDeductionsNotRelatedAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg3baAMTID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "OtherDeductionsNotRelatedStatement" );
		                OUTPUTLITERAL(F1116AMT[Copy].L3B[1]);
					END;
				end
				else
					OUTPUTVALUE ( "OtherDeductionsNotRelatedAmt", F1116AMT[Copy].L3B[1] );
				OUTPUTVALUE( "TotalDeductionAmt", F1116AMT[Copy].L3C[1] );
				OUTPUTVALUE( "GrossForeignSourceIncomeAmt", F1116AMT[Copy].L3D[1] );
				OUTPUTVALUE( "GrossIncomeAmt", F1116AMT[Copy].L3E[1] );
				OUTPUTVALUE( "ForeignIncomePct", ( F1116AMT[Copy].L3F[1] ) );
				OUTPUTVALUE( "ProRataDeductionsNotRelatedAmt", F1116AMT[Copy].L3G[1] );
				OUTPUTVALUE( "ApportionedHomeMortgIntExpAmt", F1116AMT[Copy].L4A[1] );
				OUTPUTVALUE( "ApportionedOtherInterestExpAmt", F1116AMT[Copy].L4B[1] );
				OUTPUTVALUE( "ForeignSourceLossAmt", F1116AMT[Copy].L5[1] );
				OUTPUTVALUE( "ForeignIncNetDeductAndLossAmt", F1116AMT[Copy].L6[1] );
				OUTPUTVALUE( "ForeignTaxesPaidOrAccruedDt", FormatXMLDate(F1116AMT[Copy].DATE[1]) );
				if(F1116AMT[Copy].N[1] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnDivAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(F1116AMT[Copy].N[1]);
					END;
				end;

				if( F1116AMT[Copy].O[1] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnRentAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( F1116AMT[Copy].O[1]);
					END;
				end;

				if( F1116AMT[Copy].P[1] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnIntAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(F1116AMT[Copy].P[1]);
					END;
				end;
				if( F1116AMT[Copy].Q[1] <> 0 )then
				begin
					WITHNEWTAG( "OtherCurrencyTaxPaidAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( F1116AMT[Copy].Q[1]);
					END;
				end;
				OUTPUTVALUE( "USTaxWithheldOnDividendAmt", F1116AMT[Copy].R[1] );
				OUTPUTVALUE( "USTaxWithheldOnRentAmt", F1116AMT[Copy].S[1] );
				OUTPUTVALUE( "USTaxWithheldOnInterestAmt", F1116AMT[Copy].T[1] );
				OUTPUTVALUE( "USDollarOtherForeignTaxPaidAmt", F1116AMT[Copy].U[1] );
				OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", F1116AMT[Copy].V[1] );
			END;

			WITHNEWTAG( "ForeignTaxCreditSource" ) DO
			BEGIN
				OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(F1116AMT[Copy].LJ[2]) );
				OUTPUTVALUE( "ForeignGrossIncomeAmt", F1116AMT[Copy].L1[2] );

				if (( F1116AMT[Copy].L2[2] <> 0 ) and (sFg2bAMTID[copy] <> "0")) then
				begin
					WITHNEWTAG( "ForeignIncRelatedExpensesAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg2bAMTID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "ForeignIncmRelatedExpensesStmt" );
		                OUTPUTLITERAL( F1116AMT[Copy].L2[2] );
					END;
				end
				else
					OUTPUTVALUE ( "ForeignIncRelatedExpensesAmt", F1116AMT[Copy].L2[2] );
				OUTPUTVALUE( "ItemizedOrStandardDeductionAmt", F1116AMT[Copy].L3a[2] );

				if (( F1116AMT[Copy].L3B[2] <> 0 ) and (sFg3bbAMTID[copy] <> "0")) then
				begin
					WITHNEWTAG( "OtherDeductionsNotRelatedAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg3bbAMTID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "OtherDeductionsNotRelatedStatement" );
		                OUTPUTLITERAL(F1116AMT[Copy].L3B[2]);
					END;
				end
				else
					OUTPUTVALUE ( "OtherDeductionsNotRelatedAmt", F1116AMT[Copy].L3B[2] );
				OUTPUTVALUE( "TotalDeductionAmt", F1116AMT[Copy].L3C[2] );
				OUTPUTVALUE( "GrossForeignSourceIncomeAmt", F1116AMT[Copy].L3D[2] );
				OUTPUTVALUE( "GrossIncomeAmt", F1116AMT[Copy].L3E[2] );
				OUTPUTVALUE( "ForeignIncomePct", ( F1116AMT[Copy].L3F[2] ) );
				OUTPUTVALUE( "ProRataDeductionsNotRelatedAmt", F1116AMT[Copy].L3G[2] );
				OUTPUTVALUE( "ApportionedHomeMortgIntExpAmt", F1116AMT[Copy].L4A[2] );
				OUTPUTVALUE( "ApportionedOtherInterestExpAmt", F1116AMT[Copy].L4B[2] );
				OUTPUTVALUE( "ForeignSourceLossAmt", F1116AMT[Copy].L5[2] );
				OUTPUTVALUE( "ForeignIncNetDeductAndLossAmt", F1116AMT[Copy].L6[2] );
				OUTPUTVALUE( "ForeignTaxesPaidOrAccruedDt", FormatXMLDate(F1116AMT[Copy].DATE[2]) );
				if(F1116AMT[Copy].N[2] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnDivAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(F1116AMT[Copy].N[2]);
					END;
				end;

				if( F1116AMT[Copy].O[2] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnRentAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( F1116AMT[Copy].O[2]);
					END;
				end;

				if( F1116AMT[Copy].P[2] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnIntAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(F1116AMT[Copy].P[2]);
					END;
			    end;

				if( F1116AMT[Copy].Q[2] <> 0 )then
				begin
					WITHNEWTAG( "OtherCurrencyTaxPaidAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( F1116AMT[Copy].Q[2]);
					END;
				end;
				OUTPUTVALUE( "USTaxWithheldOnDividendAmt", F1116AMT[Copy].R[2] );
				OUTPUTVALUE( "USTaxWithheldOnRentAmt", F1116AMT[Copy].S[2] );
				OUTPUTVALUE( "USTaxWithheldOnInterestAmt", F1116AMT[Copy].T[2] );
				OUTPUTVALUE( "USDollarOtherForeignTaxPaidAmt", F1116AMT[Copy].U[2] );
				OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", F1116AMT[Copy].V[2] );
			END;
			WITHNEWTAG( "ForeignTaxCreditSource" ) DO
			BEGIN
				OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(F1116AMT[Copy].LJ[3]) );
				OUTPUTVALUE( "ForeignGrossIncomeAmt", F1116AMT[Copy].L1[3] );

				if (( F1116AMT[Copy].L2[3] <> 0 ) and (sFg2cAMTID[copy] <> "0")) then
				begin
					WITHNEWTAG( "ForeignIncRelatedExpensesAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg2cAMTID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "ForeignIncmRelatedExpensesStmt" );
		                OUTPUTLITERAL(F1116AMT[Copy].L2[3]);
					END;
			    end
			    else
			    	OUTPUTVALUE ( "ForeignIncRelatedExpensesAmt", F1116AMT[Copy].L2[3] );

				debugmsg(sFg2cAMTID[copy]);
				OUTPUTVALUE( "ItemizedOrStandardDeductionAmt", F1116AMT[Copy].L3a[3] );

				if ((F1116AMT[Copy].L3B[3] <> 0 ) and (sFg3bcAMTID[copy] <> "0")) then
				begin
					WITHNEWTAG( "OtherDeductionsNotRelatedAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", sFg3bcAMTID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "OtherDeductionsNotRelatedStatement" );
		                OUTPUTLITERAL(F1116AMT[Copy].L3B[3]);
					END;
				end
				else
					OUTPUTVALUE ( "OtherDeductionsNotRelatedAmt", F1116AMT[Copy].L3B[3] );
				OUTPUTVALUE( "TotalDeductionAmt", F1116AMT[Copy].L3C[3] );
				OUTPUTVALUE( "GrossForeignSourceIncomeAmt", F1116AMT[Copy].L3D[3] );
				OUTPUTVALUE( "GrossIncomeAmt", F1116AMT[Copy].L3E[3] );
				OUTPUTVALUE( "ForeignIncomePct", ( F1116AMT[Copy].L3F[3] ) );
				OUTPUTVALUE( "ProRataDeductionsNotRelatedAmt", F1116AMT[Copy].L3G[3] );
				OUTPUTVALUE( "ApportionedHomeMortgIntExpAmt", F1116AMT[Copy].L4A[3] );
				OUTPUTVALUE( "ApportionedOtherInterestExpAmt", F1116AMT[Copy].L4B[3] );
				OUTPUTVALUE( "ForeignSourceLossAmt", F1116AMT[Copy].L5[3] );
				OUTPUTVALUE( "ForeignIncNetDeductAndLossAmt", F1116AMT[Copy].L6[3] );
				OUTPUTVALUE( "ForeignTaxesPaidOrAccruedDt", FormatXMLDate(F1116AMT[Copy].DATE[3]) );
				if(F1116AMT[Copy].N[3] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnDivAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(F1116AMT[Copy].N[3]);
					END;
				end;

				if(F1116AMT[Copy].O[3] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnRentAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( F1116AMT[Copy].O[3]);
					END;
				 end;

				if(F1116AMT[Copy].P[3] <> 0 )then
				begin
					WITHNEWTAG( "ForeignTaxWithheldOnIntAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL(F1116AMT[Copy].P[3]);
					END;
				end;

				if(F1116AMT[Copy].Q[3] <> 0 )then
				begin
					WITHNEWTAG( "OtherCurrencyTaxPaidAmt" ) DO
					BEGIN
	                    OUTPUTLITERAL( F1116AMT[Copy].Q[3]);
					END;
				end;
				OUTPUTVALUE( "USTaxWithheldOnDividendAmt", F1116AMT[Copy].R[3] );
				OUTPUTVALUE( "USTaxWithheldOnRentAmt", F1116AMT[Copy].S[3] );
				OUTPUTVALUE( "USTaxWithheldOnInterestAmt", F1116AMT[Copy].T[3] );
				OUTPUTVALUE( "USDollarOtherForeignTaxPaidAmt", F1116AMT[Copy].U[3] );
				OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", F1116AMT[Copy].V[3] );
			END;
			tmptxt := concat(tmptxt, " ", F1116AMT[Copy].L1T, F1116AMT[Copy].L1T1, F1116AMT[Copy].L1T3 );
			OUTPUTVALUE( "IncomeFromForeignSourceTxt", FormatXMLLineExplanation(tmptxt) );
			OUTPUTVALUE( "TotalForeignGrossIncomeAmt", F1116AMT[Copy].L1T3 );

			If ((HasValue( F1116AMT[Copy].compnx )) and (sFg1bAMTID[copy] <> "0")) then
			begin
				WITHNEWTAG( "AltBasisCompensationSourceInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sFg1bAMTID[copy] );
					SETATTRIBUTE( "referenceDocumentName", "AltBasisCompensationSourceStatement" );
	                OUTPUTLITERAL( "X" );
				END;
			end
			else
				OUTPUTVALUE ( "AltBasisCompensationSourceInd", compnx );
			debugmsg( sFg1bAMTID[copy] );
			OUTPUTVALUE( "TotalDeductionOrLossAmt", F1116AMT[Copy].L6ET );
			OUTPUTVALUE( "NetForeignTaxableIncomeLossAmt", F1116AMT[Copy].L7 );
			If (HasValue( F1116AMT[Copy].CBXP ))then
				OUTPUTVALUE( "ForeignTaxesPaidCreditInd", "X" );
			If (HasValue( F1116AMT[Copy].CBXA ))then
				OUTPUTVALUE( "ForeignTaxesAccruedCreditInd", "X" );
			OUTPUTVALUE( "TotalForeignTaxesPaidOrAccrAmt", F1116AMT[Copy].L8T );

			if (( F1116AMT[Copy].L10 <> 0 ) and (sCarBkAMTID[copy] <> "0")) then
			begin
				WITHNEWTAG( "ForeignTaxCrCarrybackOrOverAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sCarBkAMTID[copy] );
					SETATTRIBUTE( "referenceDocumentName", "ForeignTaxCrCarrybackComputationStatement" );
					OUTPUTLITERAL( F1116AMT[Copy].L10 );
				END;
			end
			else
				OUTPUTVALUE ( "ForeignTaxCrCarrybackOrOverAmt", F1116AMT[Copy].L10 );
			OUTPUTVALUE( "ForeignGrossTaxPaidOrAccrAmt", F1116AMT[Copy].L11 );

			if( F1116AMT[Copy].L12 <> 0 )then
			begin
				WITHNEWTAG( "ForeignTaxReductionAmt" ) DO
				BEGIN
					OUTPUTLITERAL( F1116AMT[Copy].L12 );
				END;
			end;
			OUTPUTVALUE( "ForeignIncHighTaxKickOutAdjAmt", F1116AMT[Copy].RECLASS );
			OUTPUTVALUE( "ForeignTaxAvailableForCrRedAmt", F1116AMT[Copy].L13 );
			OUTPUTVALUE( "ForeignTaxableIncomeOrLossAmt", F1116AMT[Copy].L14 );
			if( F1116AMT[Copy].L15 <> 0 )then
			begin
				WITHNEWTAG( "ForeignIncomeNetAdjustmentAmt" ) DO
				BEGIN
					OUTPUTLITERAL( F1116AMT[Copy].L15 );
				END;
			end;
			OUTPUTVALUE( "ForeignNetTaxableIncomeAmt", F1116AMT[Copy].L16 );
			OUTPUTVALUE( "ForeignTaxableIncBfExemptAmt", F1116AMT[Copy].L17 );
			OUTPUTVALUE( "ForeignTaxableIncBfExemptRt", ( F1116AMT[Copy].L18) );
			OUTPUTVALUE( "TaxFromTaxReturnAmt", F1116AMT[Copy].L19 );
			OUTPUTVALUE( "MaxAllowedForeignTaxCreditAmt", F1116AMT[Copy].L20 );

			if( F1116AMT[Copy].L21 <> 0 )then
			begin
				WITHNEWTAG( "GrossForeignTaxCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "foreignIncomeLumpSumDistribCd", "LSD" );
					OUTPUTLITERAL( F1116AMT[Copy].L21 );
				END;
			end;
			OUTPUTVALUE( "ForeignPassiveIncTaxCreditAmt", F1116AMT[Copy].L22 );
			OUTPUTVALUE( "ForeignGeneralIncTaxCreditAmt", F1116AMT[Copy].L28 );
			OUTPUTVALUE( "ForeignIncRsrcdTreatyTaxCrAmt", F1116AMT[Copy].L29 );
			OUTPUTVALUE( "ForeignIncLumpSumDistribCrAmt", F1116AMT[Copy].L27 );
			OUTPUTVALUE( "TentativeForeignTaxCreditAmt", F1116AMT[Copy].L30 );
			OUTPUTVALUE( "SmllrOfRtnTaxOrForeignTaxCrAmt", F1116AMT[Copy].NEWL31 );
			OUTPUTVALUE( "IntlBoycottCreditReductionAmt", F1116AMT[Copy].L31 );
			OUTPUTVALUE( "ForeignTaxCreditAmt", F1116AMT[Copy].L32 );

		END;
	END;

END;
PROCEDURE IRS8801Output(docID : FText);

FORM F8801;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "IRS8801" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		OUTPUTVALUE( "NetMinTaxTaxableIncomeLossAmt", L1 );
		OUTPUTVALUE( "NetMinTaxExclusionItemsAmt", L2 );
		OUTPUTVALUE( "MinTaxCreditNetOprLossDedAmt", L3 );
		OUTPUTVALUE( "SumMinTaxCreditLossAndDedAmt", L4 );
		OUTPUTVALUE( "MinTaxCreditExemptionAmt", L5 );
		OUTPUTVALUE( "MinTaxCreditPhaseOutAmt", L6 );
		OUTPUTVALUE( "NetMinTaxCrMinusPhaseOutAmt", L7 );
		OUTPUTVALUE( "NetMinTaxCrTimesDecimalAmt", L8 );
		OUTPUTVALUE( "NetMinTaxMinusExemptionAmt", L9 );
		OUTPUTVALUE( "NetMinTaxLessLossAndDedAmt", L10 );
		OUTPUTVALUE( "NetMinTaxTimesTaxRateAmt", L11 );
		OUTPUTVALUE( "MinTaxForeignTaxCrExclItemsAmt", L12 );
		OUTPUTVALUE( "TentativeMinTaxOnExclItemsAmt", L13 );
		OUTPUTVALUE( "PYMinTaxApplicableRtnTaxAmt", L14 );
		OUTPUTVALUE( "NetMinTaxOnExclusionItemsAmt", L15 );
		OUTPUTVALUE( "PYAlternativeMinimumTaxAmt", L16 );
		OUTPUTVALUE( "NetAlternativeMinimumTaxAmt", L18 );
		OUTPUTVALUE( "AMTPriorYearCarryforwardAmt", L19 );
		OUTPUTVALUE( "QlfyElecVehPYUnallowedCrAmt", L20 );
		OUTPUTVALUE( "AMTCarryforwardPlusNegativeAmt",  SUBTOT  );
		OUTPUTVALUE( "CYRegTaxLiabiMinusAllwblCrAmt", L22 );
		OUTPUTVALUE( "CYTentativeMinimumTaxAmt", L23 );
		OUTPUTVALUE( "TentMinTaxMinusRegTaxLiabAmt", L24 );
		OUTPUTVALUE( "MinAMTCrAmt", L25 );
		OUTPUTVALUE( "AMTCrCarryforwardToNextYearAmt", L26 );
		OUTPUTVALUE( "NetMinTaxLessDeductionsAmt", L27 );
		OUTPUTVALUE( "PYMinTaxApplicableCapGainAmt", L28 );
		OUTPUTVALUE( "PYUnrecapturedS1250GainAmt", L29 );
		OUTPUTVALUE( "SmallerPYSchDGainOrWrkshtAmt", L30 );
		OUTPUTVALUE( "SmallerNetAMTOrGainAmt", L31 );
		OUTPUTVALUE( "AMTLessSmallerOfTaxOrGainAmt", L32 );
		OUTPUTVALUE( "NetAdjAMTTxblIncTimesPctAmt", L33 );
		OUTPUTVALUE( "MaxCapGainsApplicableLimitAmt", L34 );
		OUTPUTVALUE( "AMTPriorYearApplicableGainAmt", L35 );
		OUTPUTVALUE( "MaxCapGainMinusApplcblLimitAmt", L36 );
		OUTPUTVALUE( "SmllrNetMinTaxOrApplcblGainAmt", L37 );
		OUTPUTVALUE( "SmallerCalculatedNetOrGainAmt", L38 );
		OUTPUTVALUE( "GainMinusSmallerNetAmt", L40 );

		OUTPUTVALUE( "FilingThresholdAmt", FSTATUS );
		OUTPUTVALUE( "ApplcblCapGainsOrSchDWrkshtAmt", QDCGTAX );
		OUTPUTVALUE( "SumThresholdApplcblWrkshtAmt", AMTLN43 );
		OUTPUTVALUE( "FlngThrshldLessThesholdSumAmt", AMTLN44 );
		OUTPUTVALUE( "SmllrAdjNetGainOrTxblIncAmt", SMLN39 );
		OUTPUTVALUE( "NetAltMinTaxableIncTimesPctAmt", SUMLN45 );
		OUTPUTVALUE( "SumOfSmllrAmt", SUM3845 );
		OUTPUTVALUE( "ExcessOfSumAmt", LN47LS37 );
		OUTPUTVALUE( "ExcessOfSumTimesPctAmt", L41 );
		OUTPUTVALUE( "TotalNetAmt", L44 );
		OUTPUTVALUE( "NetSmallerSchDOrAdjNetGainAmt", L42 );
		OUTPUTVALUE( "NetSchDOrAdjNetGainTimesPctAmt", L43 );
		OUTPUTVALUE( "SumOfAltMinTaxPercentagesAmt", L53NEW );
		OUTPUTVALUE( "NetAltMinTxblIncTimesFSPctAmt", L45 );
		OUTPUTVALUE( "TaxOnAlternativeMinimumGainAmt", L46 );

	END;

END;
PROCEDURE child_procedure(copy_number:Ftext);

FORM  FLGRANT[copy_number];

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp_total:Fdollar;
	tmp_string: FText;

BEGIN

	WITHNEWTAG( "GrantorNameAndAddress" ) DO
	BEGIN
		if (ValidXMLSSN(IDNUM)) THEN
			OUTPUTVALUE( "PersonNm", FormatXMLPersonName(NAME) )
		Else
		WITHNEWTAG( "BusinessName" ) DO
		BEGIN
			OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(NAME) );
		END;

		IF ValidXMLUSAddress(FormatXMLStreetAddress(ADDR), FormatXMLCity(CITY), FormatXMLState(State), FormatXMLZipCode(Zip)) THEN BEGIN WithNewTag("USAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(FormatXMLStreetAddress(ADDR))); OUTPUTVALUE("CityNm", FormatXMLCity(FormatXMLCity(CITY))); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(FormatXMLState(State))); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(FormatXMLZipCode(Zip))); END; END ELSE WithNewTag("ForeignAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(FormatXMLStreetAddress(ADDR))); OUTPUTVALUE("CityNm", FormatXMLCity(FormatXMLCity(CITY))); OUTPUTVALUE("ProvinceOrStateNm", FormatXMLProvince(Province)); OUTPUTVALUE("CountryCd", FormatXMLCountry(Country)); OUTPUTVALUE("ForeignPostalCd", FormatXMLPostalCode(PostCode)); END;
	END;
	OUTPUTVALUE( "SSN", FormatXMLSSN(IDNUM) );
	OUTPUTVALUE( "EIN", FormatXMLEIN(IDNUM) );

	tmp_total := 0;
	DLTCt := LastIndex( A203 );
	FOR i := 1 TO DLTCt DO
	begin
		WITHNEWTAG( "TaxableIncomeGrp" ) DO
		BEGIN
			if (ValidXMLLineExplanation(income[i])) and (incamt[i] <> 0) THEN
			BEGIN
				WITHNEWTAG( "TaxableIncomeTypeAndAmt" ) DO
				BEGIN
					OUTPUTVALUE( "Desc", FormatXMLLineExplanation(income[i]) );
					OUTPUTVALUE( "Amt", incamt[i] );
					tmp_total := tmp_total + incamt[i];
				END;
				OUTPUTVALUE( "TaxableIncomeDesc", FormatXMLLineExplanation(income[i]) );
			END;
		END;
	end;
	DLTCt := LastIndex( Exempt );
	FOR i := 1 TO DLTCt DO
	begin
		WITHNEWTAG( "TaxExemptGrp" ) DO
		BEGIN
			if (ValidXMLLineExplanation(ExmptInc[i])) and (ExmAmt[i] <> 0) THEN
			BEGIN
				WITHNEWTAG( "TaxExemptIncomeTypeAndAmt" ) DO
				BEGIN
					OUTPUTVALUE( "Desc", FormatXMLLineExplanation(ExmptInc[i]) );
					OUTPUTVALUE( "Amt", ExmAmt[i] );
				END;
				OUTPUTVALUE( "TaxExemptIncomeDesc", FormatXMLLineExplanation(ExmptInc[i]) );
			end;
		END;
	end;
	OUTPUTVALUE( "TotalTaxableIncomeAmt", tmp_total );

	tmp_total := 0;
	DLTCt := LastIndex( DEDUCTN );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "DeductionsOrCreditsGrp" ) DO
	BEGIN
		if (ValidXMLLineExplanation(DEDUCTN[i]))  THEN
		BEGIN
			WITHNEWTAG( "DeductionsOrCreditsTypeAndAmt" ) DO
			BEGIN
				OUTPUTVALUE( "Desc", FormatXMLLineExplanation(DEDUCTN[i]) );
				IF ( dedamt[i] <> 0 ) THEN OutputValue( "Amt", dedamt[i] ) ELSE OutputValue( "Amt", "0" );
				tmp_total := tmp_total + dedamt[i];
			END;

			OUTPUTVALUE( "DeductionsOrCreditsDesc", FormatXMLLineExplanation(DEDUCTN[i]) );
		END;
	END;

	DLTCt := LastIndex( CREDIT );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "DeductionsOrCreditsGrp" ) DO
	BEGIN
		if (ValidXMLLineExplanation(CREDIT[i])) and (credamt[i] <> 0) THEN
		BEGIN
			WITHNEWTAG( "DeductionsOrCreditsTypeAndAmt" ) DO
			BEGIN
				OUTPUTVALUE( "Desc", FormatXMLLineExplanation(CREDIT[i]) );
				OUTPUTVALUE( "Amt", credamt[i] );
				tmp_total := tmp_total + credamt[i];
			END;

			OUTPUTVALUE( "DeductionsOrCreditsDesc", FormatXMLLineExplanation(CREDIT[i]) );
		END;
	END;
	OUTPUTVALUE( "TotalDeductionAmt", tmp_total );
	DLTCt := LastIndex( A206 );
	FOR i := 1 TO DLTCt DO
		tmp_string := concat(tmp_string, " ", OTHER[i], " ", Otheramt[i]);
	OUTPUTVALUE( "AdditionalExplanationTxt", FormatXMLShortExplanation(tmp_string) );
END;
PROCEDURE GrantorTypeTrustIncomeAndDeductionsStatementOutput(docID:Ftext);

FORM  FLGRANT[1];

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "GrantorTypeTrustIncmAndDedStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "documentName", "GrantorTypeTrustIncomeAndDeductionsStatement" );

		DLTCt := numCopies( FLGRANT );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "GrantorGrp" ) DO
		BEGIN
			if (TestFormIs( PartOfReturn, FLGRANT[i]) ) THEN
				child_procedure(i);
		END;

	END;

END;
PROCEDURE NOLDeductionStatementOutput(docID:FText);

FORM FEXPLNOL;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp_string:Ftext;

BEGIN
	WITHNEWTAG( "NOLDeductionStatement" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "documentName", "NOLDeductionStatement" );

			DLTCt := LastIndex( Detail );
			FOR i := 1 TO DLTCt DO
				tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLText( tmp_string, 9000) );

	END;

END;
PROCEDURE PooledIncomeFundStatementOutput(docID:FText);

FORM FEXPL01;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp_string:Ftext;

BEGIN
	WITHNEWTAG( "PooledIncomeFundStatement" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "documentName", "PooledIncomeFundStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "YearlyRateOfRetCalculationDesc", FormatXMLShortExplanation(tmp_string) );
	END;

END;
PROCEDURE AmendedReturnChangesStatementOutput(docID:FText);

FORM FEXPLAMD;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp_string:Ftext;

BEGIN
	WITHNEWTAG( "AmendedReturnChanges" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "documentName", "AmendedReturnChanges" );

		OUTPUTVALUE ( "TaxpayerEIN", FormatXMLEIN(fInfowks.EIN));
		WITHNEWTAG( "AmendedReturnChg" ) DO
		BEGIN
			DLTCt := LastIndex( Detail );
			FOR i := 1 TO DLTCt DO
				tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLText( tmp_string, 9000) );
		END;

	END;

END;
PROCEDURE DeductionsOtherCategoriesScheduleOutput(docID : ftext );

FORM F1041P12;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "DedOtherCategoriesSchedule" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		WITHNEWTAG( "DeductionsListedCategories" ) DO
		BEGIN
			OUTPUTVALUE( "Desc", "Other Deductions not Subject to 2% Floor" );
			OUTPUTVALUE( "Amt", L15A );
		END;

	END;

END;
PROCEDURE EstateTaxDeductionWithIRDComputationStatementOutput(docID:FText);

FORM FEXPL02 ;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmpString : FText;

BEGIN
	WITHNEWTAG( "EstateTaxDedWithIRDCmptStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "EstateTaxDeductionWithIRDComputationStatement" );
		tmpString := "";
		DLTCt :=  LastIndex( DETAIL ) ;
		FOR i := 1 TO DLTCt DO
			tmpString := concat(tmpString, " ", DET[i]);
		OUTPUTVALUE( "AdditionalExplanationTxt", FormatXMLShortExplanation(tmpString) );
	END;

END;
PROCEDURE TaxExemptExpenseAllocationStatementOutput( docID : ftext );

FORM FIntDiv;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "TaxExemptExpenseAllocationStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		DLTCt := min(100, LastIndex( ExpAlloc ) );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "ExpenseAllocationGrp" ) DO
		BEGIN

			WITHNEWTAG( "ExpenseTypeAndTotalAmt" ) DO
			BEGIN
				OUTPUTVALUE( "Desc", FormatXMLLineExplanation(ExpDesc[i]) );
				OUTPUTVALUE( "Amt", Expense[i] );
			END;
			OUTPUTVALUE( "AllocatedToTaxExemptIncomeAmt", TEAlloc[i] );
			OUTPUTVALUE( "AllocatedToTaxableIncomeAmt", TaxAlloc[i] );
			OUTPUTVALUE( "LineExplanationTxt", FormatXMLLineExplanation(Addinfo[i]) );
		END;
		OUTPUTVALUE( "TotExpnsAllocToTxExemptIncmAmt", TETotal );
		OUTPUTVALUE( "TotExpnsAllocToTaxableIncmAmt", TXTotal );
	END;

END;
PROCEDURE OtherWithholdingStatementOutput(docID:FText);

FORM FTAXPAY;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "OtherWithholdingStatement" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "documentName", "OtherWithholdingStatement" );

		IF (TAXWITH <> 0 ) THEN
		BEGIN
			WITHNEWTAG( "OtherWithholdingStmt" ) DO
			BEGIN
				OUTPUTVALUE( "WithholdingCd", "FORM 1099" );
				OUTPUTVALUE( "WithholdingAmt", TAXWITH );
			END;
		END;
		IF ( fsumk1s.Hl13a <> 0 ) THEN
		BEGIN
			WITHNEWTAG( "OtherWithholdingStmt" ) DO
			BEGIN
				OUTPUTVALUE( "WithholdingCd", "1120S SCHEDULE K-1" );
				OUTPUTVALUE( "WithholdingAmt", fsumk1s.Hl13a );
			END;
		END;
		IF ( fsumk1p.hL13a <> 0 ) THEN
		BEGIN
			WITHNEWTAG( "OtherWithholdingStmt" ) DO
			BEGIN
				OUTPUTVALUE( "WithholdingCd", "1065 SCHEDULE K-1" );
				OUTPUTVALUE( "WithholdingAmt", fsumk1p.hL13a );
			END;
		END;
		IF ( fsumk1e.hL13d <> 0 ) THEN
		BEGIN
			WITHNEWTAG( "OtherWithholdingStmt" ) DO
			BEGIN
				OUTPUTVALUE( "WithholdingCd", "1041 SCHEDULE K-1" );
				OUTPUTVALUE( "WithholdingAmt", fsumk1e.hL13d );
			END;
		END;

	END;

END;
PROCEDURE InterestPaidOnSellerProvidedFinancingStatementOutput(docID:FText);

FORM FSELFIST;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "IntPdOnSellerProvFinancingStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "documentName", "InterestPaidOnSellerProvidedFinancingStatement" );

		DLTCt := min(100, LastIndex( SELLFIN ) );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "InterestRecipientGrp" ) DO
		BEGIN

			WITHNEWTAG( "NameAndAddress" ) DO
			BEGIN

				IF ( ValidXMLSSN(TIN1[i])) THEN
				BEGIN
					OUTPUTVALUE( "PersonNm", FormatXMLPersonName(NAM[i]) );
				END ELSE
				BEGIN
					WITHNEWTAG( "BusinessName" ) DO
					BEGIN
						OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(NAM[i]) );
					END;
				END;
				If NOT (HasValue(FCOUN[i])) then
				Begin
					WITHNEWTAG( "USAddress" ) DO
					BEGIN
						OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(ADDR1[i]) );
						OUTPUTVALUE( "CityNm", FormatXMLCity(CiTY[i]) );
						OUTPUTVALUE( "StateAbbreviationCd", FormatXMLState(STATE[i]) );
						OUTPUTVALUE( "ZIPCd", FormatXMLZipCode(zip[i]) );
					END;
				End
				Else
				Begin
					WITHNEWTAG( "ForeignAddress" ) DO
					BEGIN
						OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(ADDR1[i]) );
						OUTPUTVALUE( "CityNm", CiTY[i] );
						OUTPUTVALUE( "CountryCd", FormatXMLCountry(FCOUN[i]) );
						OUTPUTVALUE( "ForeignPostalCd", zip[i] );
					END;
				End;
		END;
			OUTPUTVALUE( "SSN", FormatXMLSSN(TIN1[i]) );
			OUTPUTVALUE( "EIN", FormatXMLEIN(TIN1[i]) );
		END;

	END;

END;
PROCEDURE WaiverExplanationStatementOutput(docID : FText);

FORM F221012:FEXPL22;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "WaiverExplanationStatement" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", WaiverID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "WaiverExplanationStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE OtherMethodUsedToValueClosingInventoryStatementOutput(copy:FInteger; docid:ftext);

FORM FSCHC[copy]:FEXPL08;

VAR
	DLTCt	: Index;
	i		: Integer;
	explain	: FText;

BEGIN
	WITHNEWTAG( "OthMthdUsedToVlClsInvntryStmt" ) DO
	BEGIN

		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		DLTCt := LastIndex (Detail);
		explain := Det[1];
		for i := 2 to DLTCt do
			explain := concat(explain, " ", Det[i]);

		OUTPUTVALUE( "Desc", FormatXMLExplanation(explain) );
	END;

END;
PROCEDURE ChangeInValuationsStatementOutput(copy:FInteger; docid:ftext);

FORM FSCHC[copy]:FEXPL09;

VAR
	DLTCt	: Index;
	i		: Integer;
	explain	: FText;

BEGIN
	WITHNEWTAG( "ChangeInValuationsStatement" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		DLTCt := LastIndex (Detail);
		explain := Det[1];
		for i := 2 to DLTCt do
			explain := concat(explain, " ", Det[i]);

		OUTPUTVALUE( "Desc", FormatXMLExplanation(explain) );
	END;

END;
PROCEDURE CCCLoanDetailCashMethodStatementOutput(copy:FInteger; docid:ftext);

FORM schf[copy] ;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp		: FText;
BEGIN
	WITHNEWTAG( "CCCLoanDetailCashMethodStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "CCCLoanDetailCashMethodStatement" );

		DLTCt := LastIndex( L7AEXPL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", L7AT[i]);

		IF ValidXMLLineExplanation(tmp) THEN
		BEGIN
			WITHNEWTAG( "CCCLoanDetail" ) DO
			BEGIN
				OUTPUTVALUE( "LoanDesc", FormatXMLLineExplanation(tmp) );
				IF ( L7A <> 0 ) THEN OutputValue( "LoanAmt", L7A ) ELSE OutputValue( "LoanAmt", "0" );
			END;
		END;
	END;
END;
PROCEDURE PostponementOfCropInsuranceAndDisasterPaymentsStatementOutput(copy:FInteger; docid:ftext);

FORM FC451D4[1] ;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp		: FText;

BEGIN

	For i := 1 to lastIndex ( L8CEXPL, SChF[copy]) DO
		tmp := concat(tmp, "_", SchF[copy].L8CT[i]);
	WITHNEWTAG( "PostponementCropInsDsstrStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "PostponementOfCropInsuranceAndDisasterPaymentsStatement" );

		WITHNEWTAG( "BusinessName" ) DO
		BEGIN
			OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(NAME) );
			OUTPUTVALUE( "BusinessNameLine2Txt", FormatXMLBusinessNameLine2(NAME2) );
		END;
		OUTPUTVALUE( "SectionChoiceStatementTxt", FormatXMLShortExplanation(tmp) );
		DLTCt := LastIndex( A44 );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "DestructionOrDamageCropsGrp" ) DO
		BEGIN
			OUTPUTVALUE( "DestructionOrDamageDt", FormatXMLDate(D1[i]) );
			OUTPUTVALUE( "DestructionOrDamageCauseTxt", FormatXMLShortExplanation(B[i]) );
			OUTPUTVALUE( "DestroyedOrDamagedCropDsc", FormatXMLLineExplanation(a[i]) );
		END;
		DLTCt := LastIndex( A44 );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "InsurancePaymentsForCropGrp" ) DO
		BEGIN
			OUTPUTVALUE( "DestroyedOrDamagedCropDsc", FormatXMLLineExplanation(d2[i]) );

			WITHNEWTAG( "InsurancePaymentGrp" ) DO
			BEGIN
				OUTPUTVALUE( "Dt", FormatXMLDate(D1[i]) );
				OUTPUTVALUE( "Amt",D3[i] );
			END;
			WITHNEWTAG( "InsuranceCarrierName" ) DO
			BEGIN
				OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(E[i]) );
			END;

		END;

	END;

END;
PROCEDURE NetRentalRealEstateIncomeExplanationOutput(copy:FInteger; docid:ftext);

FORM FSCHK1[copy];

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "NetRentalRealEstateIncmExpln" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		OUTPUTVALUE( "ShortExplanationTxt", "Net Rental Real Estate Income" );
	END;

END;
PROCEDURE DirectlyApportionedDeductionsExplanationOutput(copy:FInteger; docid:ftext);

FORM FSCHK1[copy];

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "DirectlyApportionedDedExpln" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		if (FWSCHK1.l5b > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depreciation apportioned to line 5");
		if ( FWSCHK1.l5c > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depletion apportioned to line 5");
		if ( FWSCHK1.l5d > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of amortization apportioned to line 5");
		if ( FWSCHK1.l6b > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depreciation apportioned to line 6");
		if ( FWSCHK1.l6c > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depletion apportioned to line 6");
		if ( FWSCHK1.l6d > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of amortization apportioned to line 6");
		if ( FWSCHK1.l7b > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depreciation apportioned to line 7");
		if ( FWSCHK1.l7c > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depletion apportioned to line 7");
		if ( FWSCHK1.l7d > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of amortization apportioned to line 7");
		if ( FWSCHK1.l8b > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depreciation apportioned to line 8");
		if ( FWSCHK1.l8c > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of depletion apportioned to line 8");
		if ( FWSCHK1.l8d > 0 ) then
			OUTPUTVALUE( "ShortExplanationTxt", "Share of amortization apportioned to line 8");
	END;

END;
PROCEDURE AltBasisCompensationSourceStmtLine1bOutput( copy:FInteger; docID : FText);

FORM F1116[copy]:FEXPL140;
VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "AltBasisCompensationSourceStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "AltBasisCompensationSourceStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		WITHNEWTAG( "AltBasisCompSourceStmt" ) DO
			BEGIN
				OUTPUTVALUE( "AltAllocationBasisDesc", FormatXMLExplanation(tmp_string) );
			END;
	END;

END;
PROCEDURE ForeignIncmRelatedExpensesStmtLine2aOutput(copy:Finteger; docID : FText);

FORM F1116[copy]:FEXPL52;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "ForeignIncmRelatedExpensesStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "ForeignIncmRelatedExpensesStmt" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE ForeignIncmRelatedExpensesStmtLine2bOutput(copy:Finteger; docID : FText);

FORM F1116[copy]:FEXPL53;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "ForeignIncmRelatedExpensesStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "ForeignIncmRelatedExpensesStmt" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE ForeignIncmRelatedExpensesStmtLine2cOutput(copy:Finteger; docID : FText);

FORM F1116[copy]:FEXPL54;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "ForeignIncmRelatedExpensesStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "ForeignIncmRelatedExpensesStmt" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE ForeignTaxCarrybackCompStmtOutput(copy:Finteger; docID:FText);

FORM F1116[copy]:FEXPL19;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "ForeignTaxCrCybkCmptStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "ForeignTaxCrCarrybackComputationStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE OtherDeductionsNotRelatedStmtL3baOutput(copy:FInteger; docID:FText);

FORM F1116[copy]:FEXPL55;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "OtherDeductionsNotRelatedStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "OtherDeductionsNotRelatedStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE OtherDeductionsNotRelatedStmtL3bbOutput(copy:Finteger; docID : FText);

FORM F1116[copy]:FEXPL56;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "OtherDeductionsNotRelatedStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "OtherDeductionsNotRelatedStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE OtherDeductionsNotRelatedStmtL3bcOutput(copy:Finteger; docID : FText);

FORM F1116[copy]:FEXPL57;

VAR
	DLTCt, i	: Index;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "OtherDeductionsNotRelatedStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "OtherDeductionsNotRelatedStatement" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);
		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp_string) );
	END;

END;
PROCEDURE RehabilitationCreditClaimedInPriorYearExplanationOutput(docid:ftext);

FORM F3468:FEXPL102;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp		: FText;

BEGIN
	WITHNEWTAG( "RehabilitationCrExplanation" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "RehabilitationCreditClaimedInPriorYearExplanation" );

		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);
		OUTPUTVALUE( "ShortExplanationTxt", FormatXMLShortExplanation(tmp) );
	END;

END;
PROCEDURE EvidenceOfDyedDieselFuelStatementOutput( docID : ftext );

FORM F4136:FExpl77;

VAR
	DLTCt	: Index;
	i		: Integer;
	hText	: FText;

BEGIN
	WITHNEWTAG( "EvidenceOfDyedDieselFuelStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		hText := Det[1];
		DLTCt := LastIndex (Detail);
		for i := 2 to DLTCt do
			hText := concat (hText, " ", Det[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLText( hText, 9000 ) );
	END;

END;
PROCEDURE EvidenceOfDyedKeroseneStatementOutput(docID : ftext);

FORM F4136:FExpl116;

VAR
	DLTCt	: Index;
	i		: Integer;
	hText	: FText;

BEGIN
	WITHNEWTAG( "EvidenceOfDyedKeroseneStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		hText := Det[1];
		DLTCt := LastIndex (Detail);
		for i := 2 to DLTCt do
			hText := concat (hText, " ", Det[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLText( hText, 9000 ) );

	END;

END;
PROCEDURE EvidenceOfDyedDieselFuelSoldStatementOutput(docID : ftext);

FORM F4136:FExpl78;

VAR
	DLTCt	: Index;
	i		: Integer;
	hText	: FText;

BEGIN
	WITHNEWTAG( "EvidenceDyedDieselFuelSoldStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		hText := Det[1];
		DLTCt := LastIndex (Detail);
		for i := 2 to DLTCt do
			hText := concat (hText, " ", Det[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLText( hText, 9000 ) );

	END;

END;
PROCEDURE EvidenceOfDyedKeroseneSoldStatementOutput(docID : ftext);

FORM F4136:FExpl84;

VAR
	DLTCt	: Index;
	i		: Integer;
	hText	: FText;

BEGIN
	WITHNEWTAG( "EvidenceOfDyedKeroseneSoldStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		hText := Det[1];
		DLTCt := LastIndex (Detail);
		for i := 2 to DLTCt do
			hText := concat (hText, " ", Det[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLText( hText, 9000 ) );

	END;

END;
PROCEDURE RecaptureQualifyingTherapeuticDiscoveryProjectCreditStmtOutput(docid:ftext);

FORM F4255:FEXPL150;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp_string  : Ftext;

BEGIN
	WITHNEWTAG( "QlfyThrputicDiscvProjectCrStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );

		SETATTRIBUTE( "documentName", "RecaptureQualifyingTherapeuticDiscoveryProjectCreditStmt" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
			tmp_string := concat(tmp_string, " ", DET[i]);

		OUTPUTVALUE( "ShortExplanationTxt", FormatXMLShortExplanation(tmp_string) );

	END;

END;
PROCEDURE Section168f14562a( docid : ftext );

Form FWLN15B:F4562a:FEXPL41;

VAR
	DLTCt				: Index;
	i					: Integer;
	HSection168F1ID		: FText;

Begin

	HSection168F1ID := s4562a;
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;
PROCEDURE Section168f14562c( copy: FInteger; docid : ftext );

Form FSCHC[copy]:F4562C:FEXPL33;

VAR
	DLTCt				: Index;
	i					: Integer;
	HSection168F1ID		: FText;

Begin
	HSection168F1ID :=  s4562c[copy];
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;

PROCEDURE Section168f14562e1( copy: FInteger; docid : ftext );

Form FSCHE1[copy]:F4562E1:FEXPL35;

VAR
	DLTCt	: Index;
	i		: Integer;
	HSection168F1ID		: FText;

Begin
	HSection168F1ID :=  s4562e1[copy];
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;

PROCEDURE Section168f14562e2( copy: FInteger; docid : ftext );

Form FSCHE1[copy]:F4562E2:FEXPL36;

VAR
	DLTCt	: Index;
	i		: Integer;
	HSection168F1ID		: FText;

Begin

	HSection168F1ID :=  s4562e2[copy];
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;

PROCEDURE Section168f14562e3( copy: FInteger; docid : ftext );

Form FSCHE1[copy]:F4562E3:FEXPL48;

VAR
	DLTCt				: Index;
	i					: Integer;
	HSection168F1ID		: FText;

Begin

	HSection168F1ID :=  s4562e3[copy];
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;

PROCEDURE Section168f14562f( copy: FInteger; docid : ftext );

Form SCHF[copy]:F4562F:FEXPL37;

VAR
	DLTCt				: Index;
	i					: Integer;
	HSection168F1ID		: FText;

Begin

	HSection168F1ID :=  s4562f[copy];
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;

PROCEDURE Section168f14562r( copy: FInteger; docid : ftext );

Form F4835[copy]:F4562r:FEXPL39;

VAR
	DLTCt				: Index;
	i					: Integer;
	HSection168F1ID		: FText;

Begin

	HSection168F1ID :=  s4562r[copy];
WITHNEWTAG( "Section168f1PropertyStatement" ) DO
BEGIN
	SETATTRIBUTE( "documentId", docID );
	SETATTRIBUTE( "softwareId", "15000271" );
	SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid  );
	DLTCt := LastIndex( Detail );
	FOR i := 1 TO DLTCt DO
	WITHNEWTAG( "Section168f1PropertyInfoTyp" ) DO
	BEGIN
		OUTPUTVALUE( "PropertyDesc", FormatXMLLineExplanation(Det[i]) );
		OUTPUTVALUE( "BasisForDepreciationAmt", Amount[i] );
		OUTPUTVALUE( "MethodDesc", FormatXMLLineExplanation(Method[i]) );
	END;

END;
End;
PROCEDURE ExplanationOfDisposNotToAvoidTaxStatementOutput( copy:FInteger; docid:ftext );

FORM F6252[copy]:FEXPL32;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp		: FText;

BEGIN
	WITHNEWTAG( "ExplnDisposNotToAvoidTaxStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "ExplanationOfDisposNotToAvoidTaxStatement" );

		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);
		OUTPUTVALUE( "ShortExplanationTxt", FormatXMLShortExplanation(tmp) );
	END;

END;
PROCEDURE SmallEthanolProducerCreditElectionOutput(docid:ftext);

FORM F6478:FEXPL114 ;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "SmallEthanolProducerCrElection" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "SmallEthanolProducerCreditElection" );

		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "SmallEthanolProducerCreditInfo" ) DO
		BEGIN
			OUTPUTVALUE( "EthanolGallonsQty", Det[i] );
			OUTPUTVALUE( "CooperativeClaimedGallonsQty", Line[i] );
			OUTPUTVALUE( "QualifiedEthanolFuelProdQty", Amt[i] );
		END;

	END;

END;
PROCEDURE CapExpensesDedAmountsScheduleOutput(docid:ftext);

FORM F6765:FEXPL107;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "CapExpensesDedAmountsSch" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "CapitalizedExpnssDeductionGrp" ) DO
		BEGIN
			OUTPUTVALUE( "CapExpensesDedType", FormatXMLLineExplanation(Det[i]) );
			OUTPUTVALUE( "Amt", Amt[i] );
			OUTPUTVALUE( "LineNum", Line[i] );
		END;

	END;

END;
PROCEDURE CapExpensesDedAmountsSchPage2Output(docid:ftext);

FORM F6765P2:FEXPL94;

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN
	WITHNEWTAG( "CapExpensesDedAmountsSch" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		DLTCt := LastIndex( Detail );
		FOR i := 1 TO DLTCt DO
		WITHNEWTAG( "CapitalizedExpnssDeductionGrp" ) DO
		BEGIN
			OUTPUTVALUE( "CapExpensesDedType", FormatXMLLineExplanation(Det[i]) );
			OUTPUTVALUE( "Amt", Amt[i] );
			OUTPUTVALUE( "LineNum", Line[i] );
		END;

	END;

END;
PROCEDURE PrincipalPurposeOfRelatedPartyExchangeStatementOutput(copy:FInteger; docid:ftext);

FORM F8824[copy]:FEXPL46;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp		: FText;

BEGIN
	WITHNEWTAG( "PrincipalPrpsRltdPartyExchStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "PrincipalPurposeOfRelatedPartyExchangeStatement" );

		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);
		OUTPUTVALUE( "ShortExplanationTxt", FormatXMLShortExplanation(tmp) );
	END;

END;
PROCEDURE RealizedAndRecognizedGainInMultiAssetExchangesStmtOutput(copy:FInteger; docid:ftext);

FORM F8824[copy]:FEXPL109;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp		: FText;

BEGIN
	WITHNEWTAG( "GainInMultiAssetExchangesStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "RealizedAndRecognizedGainInMultiAssetExchangesStmt" );

		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);
		DLTCt := LastIndex( DETAIL, F8824[copy]:FEXPL110 );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", F8824[copy]:fexpl110.DET[i]);

		WITHNEWTAG( "GainInMultiAssetExchangeGrp" ) DO
		BEGIN
			OUTPUTVALUE( "ShortExplanationTxt", FormatXMLShortExplanation(tmp) );
			IF ( 0 <> 0 ) THEN OutputValue( "Amt", 0 ) ELSE OutputValue( "Amt", "0" );
		END;

	END;

END;
PROCEDURE SpecialComputationForCertainDaycareFacilitiesStatementOutput(copy:FInteger; docid:ftext);

FORM FSCHC[copy]:F8829:FEXPL126;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp 	: Ftext;

BEGIN
If(TestFormIs( PartOfReturn, FSCHC[copy]:F8829:FEXPL126 )) Then
  Begin
	WITHNEWTAG( "SpclCmptForCrtnDycareFcltsStmt" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "SpecialComputationForCertainDaycareFacilitiesStatement" );
		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);

		OUTPUTVALUE( "ComputationDesc", FormatXMLExplanation(tmp) );
	END;
  End;
END;
PROCEDURE CostOrOtherBasisOfAdditionsAndImprovementsScheduleOutput(copy:FInteger; docid:ftext);

FORM FSCHC[copy]:F8829:FEXPL127;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp 	: Ftext;

BEGIN
  If(TestFormIs( PartOfReturn, FSCHC[copy]:F8829:FEXPL127 )) Then
  Begin
	WITHNEWTAG( "CostOrBasisOfAddAndImprov" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "CostOrOtherBasisOfAdditionsAndImprovementsSchedule" );
		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);

		WITHNEWTAG( "CostOrBasisGrp" ) DO
		BEGIN
			OUTPUTVALUE( "Desc", FormatXMLExplanation(tmp) );
		END;
	END;
  End;
END;
PROCEDURE DepreciationComputationScheduleOutput(copy:FInteger; docid:ftext);

FORM FSCHC[copy]:F8829:FEXPL128;

VAR
	DLTCt	: Index;
	i		: Integer;
	tmp 	: Ftext;

BEGIN
  If(TestFormIs( PartOfReturn, FSCHC[copy]:F8829:FEXPL128 )) Then
  Begin
	WITHNEWTAG( "DepreciationComputation" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		SETATTRIBUTE( "softwareId", "15000271" );
		SETATTRIBUTE( "softwareVersionNum", FEFHDSUM.sftid );
		SETATTRIBUTE( "documentName", "DepreciationComputationSchedule" );
		DLTCt := LastIndex( DETAIL );
		FOR i := 1 TO DLTCt DO
			tmp:= concat(tmp, " ", DET[i]);

		OUTPUTVALUE( "ExplanationTxt", FormatXMLExplanation(tmp) );
	END;
  End;
END;
FUNCTION CountryCode(_country : FText) : FText;
VAR
	hCCode : FText;

BEGIN
	IF HasValue(_country) THEN
	BEGIN
		CASE UPPERCASE(_country) of
			"AFGHANISTAN"					   				: 	hCCode := "AF";
			"AKROTIRI"							: 	hCCode := "AX";
			"ALBANIA"						   				: 	hCCode := "AL";
			"ALGERIA"						   				: 	hCCode := "AG";
			"AMERICAN SAMOA"								: 	hCCode := "AQ";
			"ANDORRA"						   				: 	hCCode := "AN";
			"ANGOLA"										: 	hCCode := "AO";
			"ANGUILLA"										: 	hCCode := "AV";
			"ANTARCTICA"									: 	hCCode := "AY";
			"ANTIGUA AND BARBUDA"			   				: 	hCCode := "AC";
			"ARGENTINA"										: 	hCCode := "AR";
			"ARMENIA"						   				: 	hCCode := "AM";
			"ARUBA"											: 	hCCode := "AA";
			"ASHMORE AND CARTIER ISLANDS"	   				: 	hCCode := "AT";
			"AUSTRALIA"										: 	hCCode := "AS";
			"AUSTRIA"						   				: 	hCCode := "AU";
			"AZERBAIJAN"									: 	hCCode := "AJ";
			"BAHAMAS"						   				: 	hCCode := "BF";
			"BAHRAIN"						   				: 	hCCode := "BA";
			"BAKER ISLAND"									: 	hCCode := "FQ";
			"BANGLADESH"									: 	hCCode := "BG";
			"BARBADOS"										: 	hCCode := "BB";
			"BASSAS DA INDIA"				   				: 	hCCode := "BS";
			"BELARUS"						   				: 	hCCode := "BO";
			"BELGIUM"						   				: 	hCCode := "BE";
			"BELIZE"										: 	hCCode := "BH";
			"BENIN"											: 	hCCode := "BN";
			"BERMUDA"						   				: 	hCCode := "BD";
			"BHUTAN"										: 	hCCode := "BT";
			"BOLIVIA"						   				: 	hCCode := "BL";
			"BOSNIA-HERZEGOVINA"							: 	hCCode := "BK";
			"BOTSWANA"										: 	hCCode := "BC";
			"BOUVET ISLAND"									: 	hCCode := "BV";
			"BRAZIL"										: 	hCCode := "BR";
			"BRITISH INDIAN OCEAN TERRITORY"				: 	hCCode := "IO";
			"BRITISH VIRGIN ISLANDS"						: 	hCCode := "VI";
			"BRUNEI"										: 	hCCode := "BX";
			"BULGARIA"										: 	hCCode := "BU";
			"BURKINA FASO"									: 	hCCode := "UV";
			"BURMA"											: 	hCCode := "BM";
			"BURUNDI"						   				: 	hCCode := "BY";
			"CAMBODIA"										: 	hCCode := "CB";
			"CAMEROON"										: 	hCCode := "CM";
			"CANADA"										: 	hCCode := "CA";
			"CANARY ISLANDS"								: 	hCCode := "XY";
			"CAPE VERDE"									: 	hCCode := "CV";
			"CAYMAN ISLANDS"								: 	hCCode := "CJ";
			"CENTRAL AFRICAN REPUBLIC"						: 	hCCode := "CT";
			"CHAD"											: 	hCCode := "CD";
			"CHANNEL ISLANDS"				   				: 	hCCode := "XC";
			"CHILE"											: 	hCCode := "CI";
			"CHINA"											: 	hCCode := "CH";
			"CHRISTMAS ISLAND"								: 	hCCode := "KT";
			"CLIPPERTON ISLAND"								: 	hCCode := "IP";
			"COCOS (KEELING) ISLANDS"		   				: 	hCCode := "CK";
			"COLOMBIA"										: 	hCCode := "CO";
			"COMOROS"						   				: 	hCCode := "CN";
			"CONGO (BRAZZAVILLE)"			   				: 	hCCode := "CF";
			"CONGO (KINSHASA)"	   				: 	hCCode := "CG";
			"COOK ISLANDS"									: 	hCCode := "CW";
			"CORAL SEA ISLANDS"								: 	hCCode := "CR";
			"CORSICA"						   				: 	hCCode := "VP";
			"COSTA RICA"									: 	hCCode := "CS";
			"COTE D'IVOIRE (IVORY COAST)"	   				: 	hCCode := "IV";
			"CROATIA"						   				: 	hCCode := "HR";
			"CUBA"											: 	hCCode := "CU";
			"CYPRUS"										: 	hCCode := "CY";
			"CZECH REPUBLIC"								: 	hCCode := "EZ";
			"DENMARK"						   				: 	hCCode := "DA";
			"DHEKELIA"							: 	hCCode := "DX";
			"DJIBOUTI"										: 	hCCode := "DJ";
			"DOMINICA"										: 	hCCode := "DO";
			"DOMINICAN REPUBLIC"							: 	hCCode := "DR";
			"EAST TIMOR"									: 	hCCode := "TT";
			"ECUADOR"						   				: 	hCCode := "EC";
			"EGYPT"											: 	hCCode := "EG";
			"EL SALVADOR"					   				: 	hCCode := "ES";
			"ENGLAND"						   				: 	hCCode := "XE";
			"EQUATORIAL GUINEA"								: 	hCCode := "EK";
			"ERITREA"						   				: 	hCCode := "ER";
			"ESTONIA"						   				: 	hCCode := "EN";
			"ETHIOPIA"										: 	hCCode := "ET";
			"EUROPA ISLAND"									: 	hCCode := "EU";
			"FALKLAND ISLANDS (ISLAS MALVINAS)"				: 	hCCode := "FK";
			"FAROE ISLANDS"									: 	hCCode := "FO";
			"FEDERATED STATES OF MICRONESIA"				: 	hCCode := "FM";
			"FIJI"											: 	hCCode := "FJ";
			"FINLAND"						   				: 	hCCode := "FI";
			"FRANCE"										: 	hCCode := "FR";
			"FRENCH GUIANA"									: 	hCCode := "FG";
			"FRENCH POLYNESIA"								: 	hCCode := "FP";
			"FRENCH SOUTHERN AND ANTARCTIC LANDS"			: 	hCCode := "FS";
			"GABON"											: 	hCCode := "GB";
			"THE GAMBIA"									: 	hCCode := "GA";
			"GAZA STRIP"									: 	hCCode := "GZ";
			"GEORGIA"										: 	hCCode := "GG";
			"GERMANY"										: 	hCCode := "GM";
			"GHANA"											: 	hCCode := "GH";
			"GIBRALTAR"										: 	hCCode := "GI";
			"GLORIOSO ISLANDS"								: 	hCCode := "GO";
			"GREECE"										: 	hCCode := "GR";
			"GREENLAND"										: 	hCCode := "GL";
			"GRENADA"										: 	hCCode := "GJ";
			"GRENADINES"									: 	hCCode := "VC";
			"GUADELOUPE"									: 	hCCode := "GP";
			"GUAM"											: 	hCCode := "GQ";
			"GUATEMALA"										: 	hCCode := "GT";
			"GUERNSEY"										: 	hCCode := "GK";
			"GUINEA"										: 	hCCode := "GV";
			"GUINEA-BISSAU"									: 	hCCode := "PU";
			"GUYANA"										: 	hCCode := "GY";
			"HAITI"											: 	hCCode := "HA";
			"HEARD ISLAND AND MCDONALD ISLANDS"				: 	hCCode := "HM";
			"HONDURAS"										: 	hCCode := "HO";
			"HONG KONG"										: 	hCCode := "HK";
			"HOWLAND ISLAND"								: 	hCCode := "HQ";
			"HUNGARY"										: 	hCCode := "HU";
			"ICELAND"										: 	hCCode := "IC";
			"INDIA"											: 	hCCode := "IN";
			"INDONESIA"										: 	hCCode := "ID";
			"IRAN"											: 	hCCode := "IR";
			"IRAQ"											: 	hCCode := "IZ";
			"IRELAND"										: 	hCCode := "EI";
			"ISRAEL"										: 	hCCode := "IS";
			"ITALY"											: 	hCCode := "IT";
			"JAMAICA"										: 	hCCode := "JM";
			"JAN MAYEN"										: 	hCCode := "JN";
			"JAPAN"											: 	hCCode := "JA";
			"JARVIS ISLAND"									: 	hCCode := "DQ";
			"JERSEY"										: 	hCCode := "JE";
			"JOHNSTON ATOLL"								: 	hCCode := "JQ";
			"JORDAN"										: 	hCCode := "JO";
			"JUAN DE NOVA ISLAND"							: 	hCCode := "JU";
			"KAZAKHSTAN"									: 	hCCode := "KZ";
			"KENYA"											: 	hCCode := "KE";
			"KINGMAN REEF"									: 	hCCode := "KQ";
			"KIRIBATI"										: 	hCCode := "KR";
			"KOREA, (NORTH)"								: 	hCCode := "KN";
			"KOREA, (SOUTH)"								: 	hCCode := "KS";
			"KUWAIT"										: 	hCCode := "KU";
			"KYRGYZSTAN"									: 	hCCode := "KG";
			"LAOS"											: 	hCCode := "LA";
			"LATVIA"										: 	hCCode := "LG";
			"LEBANON"										: 	hCCode := "LE";
			"LESOTHO"										: 	hCCode := "LT";
			"LIBERIA"										: 	hCCode := "LI";
			"LIBYA"											: 	hCCode := "LY";
			"LIECHTENSTEIN"									: 	hCCode := "LS";
			"LITHUANIA"										: 	hCCode := "LH";
			"LUXEMBOURG"									: 	hCCode := "LU";
		END;

		IF (not HasValue(hCCode)) THEN
		BEGIN
			CASE UPPERCASE(_country) of
				"MACAU"											: 	hCCode := "MC";
				"MACEDONIA"										: 	hCCode := "MK";
				"MADAGASCAR"									: 	hCCode := "MA";
				"MALAWI"										: 	hCCode := "MI";
				"MALAYSIA"										: 	hCCode := "MY";
				"MALDIVES"										: 	hCCode := "MV";
				"MALI"											: 	hCCode := "ML";
				"MALTA"											: 	hCCode := "MT";
				"MAN, ISLE OF"									: 	hCCode := "IM";
				"MARSHALL ISLANDS"								: 	hCCode := "RM";
				"MARTINIQUE"									: 	hCCode := "MB";
				"MAURITANIA"									: 	hCCode := "MR";
				"MAURITIUS"										: 	hCCode := "MP";
				"MAYOTTE"										: 	hCCode := "MF";
				"MEXICO"										: 	hCCode := "MX";
				"MIDWAY ISLANDS"								: 	hCCode := "MQ";
				"MOLDOVA"										: 	hCCode := "MD";
				"MONACO"										: 	hCCode := "MN";
				"MONGOLIA"										: 	hCCode := "MG";
				"MONTENEGRO"									: 	hCCode := "MJ";
				"MONTSERRAT"									: 	hCCode := "MH";
				"MOROCCO"										: 	hCCode := "MO";
				"MOZAMBIQUE"									: 	hCCode := "MZ";
				"MYANMAR"										: 	hCCode := "XM";
				"NAMIBIA"										: 	hCCode := "WA";
				"NAURU"											: 	hCCode := "NR";
				"NAVASSA ISLAND"								: 	hCCode := "BQ";
				"NEPAL"											: 	hCCode := "NP";
				"NETHERLANDS"									: 	hCCode := "NL";
				"NETHERLANDS ANTILLES"							: 	hCCode := "NT";
				"NEW CALEDONIA"									: 	hCCode := "NC";
				"NEW ZEALAND"									: 	hCCode := "NZ";
				"NICARAGUA"										: 	hCCode := "NU";
				"NIGER"											: 	hCCode := "NG";
				"NIGERIA"										: 	hCCode := "NI";
				"NIUE"											: 	hCCode := "NE";
				"NORFOLK ISLAND"								: 	hCCode := "NF";
				"NORTHERN IRELAND"								: 	hCCode := "XN";
				"NORTHERN MARIANNA ISLANDS"						: 	hCCode := "CQ";
				"NORWAY"										: 	hCCode := "NO";
				"OMAN"											: 	hCCode := "MU";
				"OTHER COUNTRY"									: 	hCCode := "XX";
				"PAKISTAN"										: 	hCCode := "PK";
				"PALMYRA ATOLL"									: 	hCCode := "LQ";
				"PALAU"											: 	hCCode := "PS";
				"PANAMA"										: 	hCCode := "PM";
				"PAPUA-NEW GUINEA"								: 	hCCode := "PP";
				"PARACEL ISLANDS"								: 	hCCode := "PF";
				"PARAGUAY"										: 	hCCode := "PA";
				"PERU"											: 	hCCode := "PE";
				"PHILIPPINES"									: 	hCCode := "RP";
				"PITCAIRN ISLANDS"								: 	hCCode := "PC";
				"POLAND"										: 	hCCode := "PL";
				"PORTUGAL"										: 	hCCode := "PO";
				"PUERTO RICO"									: 	hCCode := "RQ";
				"QATAR"											: 	hCCode := "QA";
				"REUNION"										: 	hCCode := "RE";
				"ROMANIA"										: 	hCCode := "RO";
				"RUSSIA"										: 	hCCode := "RS";
				"RWANDA"										: 	hCCode := "RW";
				"SAMOA AND WESTERN SAMOA"						: 	hCCode := "WS";
				"SAN MARINO"									: 	hCCode := "SM";
				"SAO TOME AND PRINCIPE"							: 	hCCode := "TP";
				"SAUDI ARABIA"									: 	hCCode := "SA";
				"SCOTLAND"										: 	hCCode := "XS";
				"SENEGAL"										: 	hCCode := "SG";
				"SERBIA"										: 	hCCode := "RB";
				"SEYCHELLES"									: 	hCCode := "SE";
				"SIERRA LEONE"									: 	hCCode := "SL";
				"SINGAPORE"										: 	hCCode := "SN";
				"SLOVAK REPUBLIC"								: 	hCCode := "XR";
				"SLOVAKIA"										: 	hCCode := "LO";
				"SLOVENIA"										: 	hCCode := "SI";
				"SOLOMON ISLANDS"							  	: 	hCCode := "BP";
				"SOMALIA"									  	: 	hCCode := "SO";
				"SOUTH AFRICA"									: 	hCCode := "SF";
				"SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS"	: 	hCCode := "SX";
				"SPAIN"											: 	hCCode := "SP";
				"SPRATLY ISLANDS"							  	: 	hCCode := "PG";
				"SRI LANKA"										: 	hCCode := "CE";
				"ST. HELENA"									: 	hCCode := "SH";
				"ST. KITTS AND NEVIS"						  	: 	hCCode := "SC";
				"ST. LUCIA ISLAND"								: 	hCCode := "ST";
				"ST. PIERRE AND MIQUELON"					  	: 	hCCode := "SB";
				"ST. VINCENT AND THE GRENADINES"				: 	hCCode := "VC";
				"SUDAN"											: 	hCCode := "SU";
				"SURINAME"										: 	hCCode := "NS";
				"SVALBARD"										: 	hCCode := "SV";
				"SWAZILAND"										: 	hCCode := "WZ";
				"SWEDEN"										: 	hCCode := "SW";
				"SWITZERLAND"								  	: 	hCCode := "SZ";
				"SYRIA"											: 	hCCode := "SY";
				"TAIWAN"										: 	hCCode := "TW";
				"TAJIKISTIN"									: 	hCCode := "TI";
				"TANZANIA"										: 	hCCode := "TZ";
				"THAILAND"										: 	hCCode := "TH";
				"TOGO"											: 	hCCode := "TO";
				"TOKELAU"									  	: 	hCCode := "TL";
				"TONGA"											: 	hCCode := "TN";
				"TRINIDAD AND TOBAGO"						  	: 	hCCode := "TD";
				"TRISTAN DA CUNHA"								: 	hCCode := "XT";
				"TROMELIN ISLAND"							  	: 	hCCode := "TE";
				"TUNISIA"									  	: 	hCCode := "TS";
				"TURKEY"										: 	hCCode := "TU";
				"TURKMENISTAN"									: 	hCCode := "TX";
				"TURKS AND CAICOS ISLANDS"						: 	hCCode := "TK";
				"TUVALU"										: 	hCCode := "TV";
				"UGANDA"										: 	hCCode := "UG";
				"UKRAINE"									  	: 	hCCode := "UP";
				"UNITED ARAB EMIRATES"							: 	hCCode := "AE";
				"UNITED KINGDOM"								: 	hCCode := "UK";
				"UNKNOWN COUNTRY"							  	: 	hCCode := "UC";
				"URUGUAY"										: 	hCCode := "UY";
				"UZBEKISTAN"									: 	hCCode := "UZ";
				"VANUATU"										: 	hCCode := "NH";
				"VATICAN CITY"									: 	hCCode := "VT";
				"VENEZUELA"										: 	hCCode := "VE";
				"VIETNAM"										: 	hCCode := "VM";
				"VIRGIN ISLANDS"								: 	hCCode := "VQ";
				"WAKE ISLAND"									: 	hCCode := "WQ";
				"WALES"											: 	hCCode := "XW";
				"WALLIS AND FUTUNA"								: 	hCCode := "WF";
				"WEST BANK"										: 	hCCode := "WE";
				"WESTERN SAHARA"								: 	hCCode := "WI";
				"YEMEN (ADEN)"									: 	hCCode := "YM";
				"YUGOSLAVIA"									: 	hCCode := "YI";
				"ZAMBIA"										: 	hCCode := "ZA";
				"ZIMBABWE"										: 	hCCode := "ZI";
				OTHERWISE hCCode := "XX";
			END;
  	 	END;
 	END;

	CountryCode := hCCode;
END;
PROCEDURE PaymentRecordOutput(docID : FText);
Form FEFHDSUM;

BEGIN
	WITHNEWTAG( "IRSPayment" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		IF (((( IsChecked( FEFHDSUM.EF1 ) ) or (( FEFHDSUM.Status > 0) and ( FEFHDSUM.Status <> 3))) and (not (IsChecked(FEFHDSUM.EXTMODE) or IsChecked(FEFHDSUM.AMDMODE)))) and (IsChecked(FEFHDSUM.EDDP) and IsChecked(FEFHDSUM.USDDR))) or (IsChecked(FEFHDSUM.AMDMODE) and (IsChecked(FEFHDSUM.AMDMODE) and IsChecked(FEFHDSUM.USDDR))) THEN
		BEGIN
			OUTPUTVALUE( "RoutingTransitNum", FormatXMLRoutingTransitNumber(DRTN) );
			OUTPUTVALUE( "BankAccountNum", FormatXMLBankAccountNumber(DDAN) );
			IF IsChecked( DTA_CK ) THEN
				OUTPUTVALUE( "BankAccountTypeCd", FormatXMLBankAccount("1") )
			ELSE IF IsChecked( DTA_SV ) THEN
				OUTPUTVALUE( "BankAccountTypeCd", FormatXMLBankAccount("2") );
			IF (IsChecked(FEFHDSUM.AMDMODE) and IsChecked(FEFHDSUM.USDDR)) THEN
			BEGIN
				OUTPUTVALUE( "PaymentAmt", AMEFWAMT );
				OUTPUTVALUE( "RequestedPaymentDt", FormatXMLDate(AMEFWDT) );
			END
			ELSE
			BEGIN
				OUTPUTVALUE( "PaymentAmt", DAMT );
				OUTPUTVALUE( "RequestedPaymentDt", FormatXMLDate(DEBITDT) );
			END;
		END
		ELSE
		IF IsChecked(FEFHDSUM.EXTMODE) and (IsChecked(FEFHDSUM.EDDPX) and IsChecked(FEFHDSUM.USEFWX)) THEN
		BEGIN
			OUTPUTVALUE( "RoutingTransitNum", FormatXMLRoutingTransitNumber(EFWXRTN) );
			OUTPUTVALUE( "BankAccountNum", FormatXMLBankAccountNumber(EFWXDAN) );
			IF IsChecked( EFWXTACK ) THEN
				OUTPUTVALUE( "BankAccountTypeCd", FormatXMLBankAccount("1") )
			ELSE IF IsChecked( EFWXTASV ) THEN
				OUTPUTVALUE( "BankAccountTypeCd", FormatXMLBankAccount("2") );
			OUTPUTVALUE( "PaymentAmt", EFWXAMT );
			OUTPUTVALUE( "RequestedPaymentDt", FormatXMLDate(EFWXDT) );
		END;
		OUTPUTVALUE( "TaxpayerDaytimePhoneNum", FormatXMLPhoneNumber(PHONE) );
	END;
END;
Procedure BinaryAttachmentOutput(i : FInteger; docID : FText);

Form FEFHDSUM;
VAR
	hLen,
	hPos	: FInteger;
	x		: Index;

BEGIN
	WITHNEWTAG( "BinaryAttachment" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );
		OUTPUTVALUE( "DocumentTypeCd", "PDF" );
		IF (UPPERCASE(ATTDESC[i]) = UPPERCASE("8453 Signature Document")) THEN
			OUTPUTVALUE( "Desc", "8453 Signature Document" )
		ELSE

			OUTPUTVALUE( "Desc", FormatXMLText(ATTDESC[i], 64) );
		OUTPUTVALUE( "AttachmentLocationTxt",  FILENAME[i] );

	END;
END;
FUNCTION VinValid (_vin : FText ) : boolean;
VAR
	i			: Index;
	vlength,
	vsum,
	vcheckdigit	: Ftext;
	vremainder	: FInteger;
	vcharacter	: array[17] of FText;
	vvalue,
    vweight	,
	vproduct	: array[17] of FInteger;

BEGIN
	vweight[1] := 8;
	vweight[2] := 7;
	vweight[3] := 6;
	vweight[4] := 5;
	vweight[5] := 4;
	vweight[6] := 3;
	vweight[7] := 2;
	vweight[8] := 10;
	vweight[10] := 9;
	vweight[11] := 8;
	vweight[12] := 7;
	vweight[13] := 6;
	vweight[14] := 5;
	vweight[15] := 4;
	vweight[16] := 3;
	vweight[17] := 2;

	vlength := Length(_vin);
	if (vlength <> 17) and (vlength <> 0) then
		VinValid := False
	else if (vlength = 17) then
	begin
		for i:= 1 to 17 do
		begin
			vcharacter[i] := UpperCase(substring(_vin,i,1));
			Case vcharacter[i] of
				"0" : vvalue[i] := 0;
				"1" : vvalue[i] := 1;
				"2" : vvalue[i] := 2;
				"3" : vvalue[i] := 3;
				"4" : vvalue[i] := 4;
				"5" : vvalue[i] := 5;
				"6" : vvalue[i] := 6;
				"7" : vvalue[i] := 7;
				"8" : vvalue[i] := 8;
				"9" : vvalue[i] := 9;
				"A" : vvalue[i] := 1;
				"B" : vvalue[i] := 2;
				"C" : vvalue[i] := 3;
				"D" : vvalue[i] := 4;
				"E" : vvalue[i] := 5;
				"F" : vvalue[i] := 6;
				"G" : vvalue[i] := 7;
				"H" : vvalue[i] := 8;
				"J" : vvalue[i] := 1;
				"K" : vvalue[i] := 2;
				"L" : vvalue[i] := 3;
				"M" : vvalue[i] := 4;
				"N" : vvalue[i] := 5;
				"P" : vvalue[i] := 7;
				"R" : vvalue[i] := 9;
				"S" : vvalue[i] := 2;
				"T" : vvalue[i] := 3;
				"U" : vvalue[i] := 4;
				"V" : vvalue[i] := 5;
				"W" : vvalue[i] := 6;
				"X" : vvalue[i] := 7;
				"Y" : vvalue[i] := 8;
				"Z" : vvalue[i] := 9;
			end;

			if (i <> 9) then
				vproduct[i] := vvalue[i] * vweight[i];
		end;
	end;

	vsum := vproduct[1.. 17];
	vremainder := (vsum MOD 11);
			Case vremainder of
				0 : vcheckdigit := "0";
				1 : vcheckdigit := "1";
				2 : vcheckdigit := "2";
				3 : vcheckdigit := "3";
				4 : vcheckdigit := "4";
				5 : vcheckdigit := "5";
				6 : vcheckdigit := "6";
				7 : vcheckdigit := "7";
				8 : vcheckdigit := "8";
				9 : vcheckdigit := "9";
			   10 : vcheckdigit := "X";
			end;
		if not(hasValue(_vin)) or (vcharacter[9] = vcheckdigit) then
			begin
				VinValid := true;
			end
		else
			begin
				VinValid := false;
			end;
END;

FUNCTION VinReasonInvalid (_vin : FText ) : Ftext;

VAR
	vlength : FInteger;

BEGIN

	vlength := Length(_vin);

	if vlength < 17 then
		VinReasonInvalid := "There are less than 17 characters in the vehicle identification number you entered";

	if vlength > 17 then
		VinReasonInvalid := "There are more than 17 characters in the vehicle identification number you entered";

	if not(VinValid(_vin)) and (vlength = 17) then
		VinReasonInvalid := "The vehicle identification number you entered has a problem, it did not pass the validation formula provided by the Department of Transportation to verify vehicle identification numbers";
END;

FUNCTION VinLengthLessthan17 (_vin : FText ) : Boolean;

VAR
	vlength : FInteger;

BEGIN

	vlength := Length(_vin);

	if vlength < 17 then
		VinLengthLessthan17 := true;

END;

FUNCTION VinOtherInfo (_vin : FText ) : Ftext;

BEGIN
		VinOtherInfo := "Other Information";
END;
PROCEDURE IRS1041Output(docID : FText);

FORM F1041P12;

VAR
	DLTCt	: Index;
	i		: Integer;
	bValid  : Boolean;

BEGIN
	WITHNEWTAG( "IRS1041" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", F1041ID );
		SETATTRIBUTE( "softwareId", "15000271" );
		IF isChecked(BXA1) THEN OUTPUTVALUE( "DecedentsEstateInd", "X" );
		IF isChecked(BXA2) THEN OUTPUTVALUE( "SimpleTrustInd", "X" );
		IF isChecked(BXA3) THEN OUTPUTVALUE( "ComplexTrustInd", "X");
		IF isChecked(QDTR) THEN OUTPUTVALUE( "QualifiedDisabilityTrustInd", "X" );
		IF isChecked(ESBT) THEN OUTPUTVALUE( "ESBTSPortionOnlyInd", "X" );

		IF isChecked(BXA4) THEN
			IF (TestFormIs( PartOfReturn, FLGRANT[1] ) ) THEN
			BEGIN
				WITHNEWTAG( "GrantorTypeTrustInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sGrantID );
					SETATTRIBUTE( "referenceDocumentName", "GrantorTypeTrustIncomeAndDeductionsStatement" );
					IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				WITHNEWTAG( "GrantorTypeTrustInd" ) DO
				BEGIN
					IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
				END;
			END;

		IF isChecked(BXA7) THEN
			IF (TestFormIs( PartOfReturn, FEXPL01 ) ) THEN
			BEGIN
				WITHNEWTAG( "PooledIncomeFundInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sPoolID );
					SETATTRIBUTE( "referenceDocumentName", "PooledIncomeFundStatement" );
					IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				WITHNEWTAG( "PooledIncomeFundInd" ) DO
				BEGIN
					IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
				END;
			END;

		IF ( NOSC <> 0 ) THEN
			WITHNEWTAG( "ScheduleK1AttachedCnt" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", FSCHK1ID[1] );
				SETATTRIBUTE( "referenceDocumentName", "IRS1041ScheduleK1" );
				IF ( NOSC <> 0 ) THEN OUTPUTLITERAL( NOSC ) ELSE OUTPUTLITERAL( "0" );
			END;
		OUTPUTVALUE( "EstateOrTrustCreateDt", FormatXMLDate(D) );
		IF isChecked(BXE1) THEN OUTPUTVALUE( "NonExemptSec4947a1Ind", "X" );
		IF isChecked(BXE2) THEN OUTPUTVALUE( "NonPrivateFoundationInd", "X" );
		IF isChecked(BXE3) THEN OUTPUTVALUE( "NonExemptSec4947a2Ind", "X" );
		IF isChecked(FBX1) THEN OUTPUTVALUE( "InitialReturnInd", "X" );
		IF isChecked(FBX2) THEN OUTPUTVALUE( "FutureFilingNotRequiredInd", "X" );
		IF isChecked(FBX3) THEN
		BEGIN
			if (TestFormIs( PartOfReturn, FEXPLAMD )) then
			begin
				WITHNEWTAG( "AmendedReturnInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sAmendedID );
					SETATTRIBUTE( "referenceDocumentName", "AmendedReturnChanges" );
					IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
				END;
			end else
				OUTPUTVALUE( "AmendedReturnInd", FBx3 );
		END;
		IF isChecked(NOL) THEN OUTPUTVALUE( "NetOperatingLossCarrybackInd", "X" );
		IF isChecked(FBX7) THEN OUTPUTVALUE( "TrustNameChangeInd", "X" );
		IF isChecked(FBX6) THEN OUTPUTVALUE( "FiduciaryChangeInd", "X" );
		IF isChecked(FBX4) THEN OUTPUTVALUE( "FiduciaryNameChangeInd", "X" );
		IF isChecked(FBX5) THEN OUTPUTVALUE( "FiduciaryAddressChangeInd", "X" );
		IF isChecked(GBX1) THEN
		begin
			OUTPUTVALUE( "Section645ElectionInd", "X" );
			OUTPUTVALUE("TrustEIN", FormatXMLEIN(TTIN));
		end;
		OUTPUTVALUE( "TaxableInterestAmt", L1 );
		OUTPUTVALUE( "OrdinaryDividendsAmt", L2 );
		OUTPUTVALUE( "QlfyDividendBeneficiariesAmt", L2B1 );
		OUTPUTVALUE( "QlfyDividendsEstateTrustAmt", L2B2 );

		bValid := false; for i := 1 to numCopies(FSCHC) do if TestFormIs( PartOfReturn, FSCHC[i] ) then if (schcid[i] > 0 ) then bValid := true;
		IF ( L3 <> 0) THEN
			IF (bValid) THEN
			BEGIN
				WITHNEWTAG( "NetProfitOrLossAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", SchCID[1] );
					SETATTRIBUTE( "referenceDocumentName", "IRS1040ScheduleC IRS1040ScheduleCEZ" );
					IF ( L3 <> 0 ) THEN OUTPUTLITERAL( L3 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "NetProfitOrLossAmt" , L3 );
			END;

		IF ( L4 <> 0 ) THEN
			IF (TestFormIs( PartOfReturn, FSCHD )) THEN
			BEGIN
				WITHNEWTAG( "CapitalGainLossAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", fifSchD );
					SETATTRIBUTE( "referenceDocumentName", "IRS1041ScheduleD" );
					IF ( L4 <> 0 ) THEN OUTPUTLITERAL( L4 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "CapitalGainLossAmt" , L4 );
			END;
		IF ( L5 <> 0 ) THEN
			IF (SCHEID <> 0) THEN
			BEGIN
				WITHNEWTAG( "NetRentalIncomeOrLossAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", SCHEID );
					SETATTRIBUTE( "referenceDocumentName", "IRS1040ScheduleE" );
					IF ( L5 <> 0 ) THEN OUTPUTLITERAL( L5 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "NetRentalIncomeOrLossAmt" , L5 );
			END;

		bValid := false; for i := 1 to numCopies(SCHF) do if TestFormIs( PartOfReturn, SCHF[i] ) then if (schfid[i] > 0 ) then bValid := true;
		IF ( L6 <> 0 ) THEN
			IF (bValid) THEN
			BEGIN
				WITHNEWTAG( "NetFarmProfitLossAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId",  SCHFID[1] );
					SETATTRIBUTE( "referenceDocumentName", "IRS1040ScheduleF" );
					IF ( L6 <> 0 ) THEN OUTPUTLITERAL( L6 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "NetFarmProfitLossAmt" , L6 );
			END;

		IF ( L7 <> 0 ) THEN
			IF (TestFormIs( PartOfReturn, F4797 )) THEN
			BEGIN
				WITHNEWTAG( "TotalOrdinaryGainLossAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F4797ID );
					SETATTRIBUTE( "referenceDocumentName", "IRS4797" );
					SETATTRIBUTE( "form4684Cd", "FORM 4684" );
					IF ( L7 <> 0 ) THEN OUTPUTLITERAL( L7 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "TotalOrdinaryGainLossAmt" , L7 );
			END;
		DLTCt := min(100, LastIndex( OTHINC ) );
		FOR i := 1 TO DLTCt DO
		BEGIN
			if  ValidXMLLineExplanation(L8T[i]) THEN
				WITHNEWTAG( "OtherIncomeDescAndAmt" ) DO
				BEGIN
					OUTPUTVALUE( "Desc", FormatXMLLineExplanation(L8T[i]) );
					IF ( L8A[i] <> 0 ) THEN OutputValue( "Amt", L8A[i] ) ELSE OutputValue( "Amt", "0" );
				END;
		END;
		OUTPUTVALUE( "TotalOtherIncomeAmt", L8 );
		OUTPUTVALUE( "TotalIncomeAmt", L9 );

		IF isChecked( L10XX ) THEN
			if (TestFormIs( PartOfReturn, F4952 )) THEN
			BEGIN
				WITHNEWTAG( "Form4952Ind" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F4952ID );
					SETATTRIBUTE( "referenceDocumentName", "IRS4952" );
					IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
				OUTPUTVALUE( "Form4952Ind", "X");
		OUTPUTVALUE( "InterestAmt", L10 );
		OUTPUTVALUE( "TaxesAmt", L11 );
		OUTPUTVALUE( "FiduciaryFeesAmt", L12 );
		OUTPUTVALUE( "CharitableDeductionsAmt", L13 );
		OUTPUTVALUE( "TaxPreparationFeesAmt", L14 );
		IF ( L15A <> 0 ) THEN
			IF F4684ID[1] > 0 THEN
			BEGIN
				WITHNEWTAG( "OtherDeductionsAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F4684ID[1] );
					SETATTRIBUTE( "referenceDocumentName", "IRS4684 DeductionsOtherCategoriesSchedule" );
					IF ( L15AA <> 0 ) THEN OUTPUTLITERAL( L15AA ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			if sDedOthID > 0 then
			if ((F1041P12.L15A <> 0) and ( F4684ID[1] < 0 )) then
			BEGIN
				WITHNEWTAG( "OtherDeductionsAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sDedOthID );
					SETATTRIBUTE( "referenceDocumentName", "IRS4684 DeductionsOtherCategoriesSchedule" );
					IF ( L15A <> 0 ) THEN OUTPUTLITERAL( L15A ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "OtherDeductionsAmt", L15A );
			end;

		IF ( NOLDedn <> 0 ) THEN
		begin
			if (TestFormIs( PartOfReturn, FExplNOL )) then
			begin
				WITHNEWTAG( "NetOperatingLossDeductionAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sNOLDed );
					SETATTRIBUTE( "referenceDocumentName", "NOLDeductionStatement" );
					OUTPUTLITERAL( NOLDedn );
				end;
			end
			else
				OUTPUTVALUE( "NetOperatingLossDeductionAmt", NOLDedn );
		end;
		OUTPUTVALUE( "MiscItemizedDeductionsAmt", L15B );
		OUTPUTVALUE( "NetDeductionsAmt", L16 );
		OUTPUTVALUE( "AdjustedTotalIncomeAmt", L17 );
		OUTPUTVALUE( "IncomeDistributionDeductionAmt", L18 );

		IF ( L19 <> 0 ) THEN
			IF (TestFormIs( PartOfReturn, FEXPL02 )) THEN
			BEGIN
				WITHNEWTAG( "EstateTaxDeductionAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sGSTID  );
					SETATTRIBUTE( "referenceDocumentName", "EstateTaxDeductionWithIRDComputationStatement" );
					IF ( L19 <> 0 ) THEN OUTPUTLITERAL( L19 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "EstateTaxDeductionAmt" , L19 );
			END;
		OUTPUTVALUE( "ExemptionAmt", L20 );
		OUTPUTVALUE( "TotalDeductionAmt", L21 );
		OUTPUTVALUE( "TaxableIncomeAmt", L22 );

		IF ( L24B <> 0) THEN
		WITHNEWTAG( "EstimatedTaxCreditedToTrustGrp" ) DO
		BEGIN
			OUTPUTVALUE( "EstimatedTaxCreditedToTrustCd", "SECT 643(G)" );
			OUTPUTVALUE( "EstimatedTaxCreditedToTrustAmt", L24B );
		END;
		OUTPUTVALUE( "EstimatedTaxPaymentsAmt", L24A );
		OUTPUTVALUE( "ExtsnRequestIncomeTaxPaidAmt", L24D );
		IF isChecked(X24E) THEN OUTPUTVALUE( "FederalIncomeTaxWthld1099Ind", "X" );

		IF ( L24E > 0 ) THEN
			IF ( (TestFormIs( PartOfReturn, FTaxPay ) and ((FTaxPay.TaxWith <> 0) or (FTaxPay.TaxWhK1 <> 0)) ) ) THEN
			BEGIN
				WITHNEWTAG( "FederalIncomeTaxWithheldAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", fifL24ID );
					SETATTRIBUTE( "referenceDocumentName", "OtherWithholdingStatement" );
					IF ( L24E <> 0 ) THEN OUTPUTLITERAL( L24E ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE(  "FederalIncomeTaxWithheldAmt", L24E);
			END;
			OUTPUTVALUE(  "TaxPaidByRICOrREITAmt", L24G );
		IF ( L24H <> 0 ) THEN
			IF (TestFormIs( PartOfReturn, F4136 )) THEN
			BEGIN
				WITHNEWTAG( "TotalFuelTaxCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F4136ID );
					SETATTRIBUTE( "referenceDocumentName", "IRS4136" );
					IF ( L24H <> 0 ) THEN OUTPUTLITERAL( L24H ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE( "TotalFuelTaxCreditAmt", L24H );
			END;
		OUTPUTVALUE( "TotalOtherPaymentsAmt", L24I );
		OUTPUTVALUE( "TotalPaymentsAmt", L25 );
		OUTPUTVALUE( "EstimatedPenaltyAmt", L26 );
		OUTPUTVALUE( "TaxDueAmt", L27 );
		OUTPUTVALUE( "OverpaymentAmt", L28 );
		OUTPUTVALUE( "AppliedToEsTaxAmt", L29A );
		OUTPUTVALUE( "RefundAmt", L29B );
		OUTPUTVALUE( "CharitableContributionAmt", A1 );
		OUTPUTVALUE( "CharitableExemptDeductionAmt", A2 );
		OUTPUTVALUE( "CharitableNetDeductAmt", A3 );
		OUTPUTVALUE( "CapitalGainCorpusCharityAmt", A4 );
		OUTPUTVALUE( "CapitalGainNetAmt", A5 );
		OUTPUTVALUE( "CapitalGainSect1202Amt", A6 );
		OUTPUTVALUE( "SchBAdjustedTotalIncomeAmt", B1 );
		OUTPUTVALUE( "AdjustedTaxExemptInterestAmt", B2 );
		OUTPUTVALUE( "TotalNetGainOrLossAmt", B3 );
		OUTPUTVALUE( "CapGainAllocatedCorpusAmt", B4 );
		 OUTPUTVALUE("TotalCapitalDistributionsAmt", B5 );

		OUTPUTVALUE("DistributableNetIncomeAmt" , B7 );
		OUTPUTVALUE( "AccountingIncomeAmt", B8 );
		OUTPUTVALUE( "FirstTierDistributionAmt", B9 );
		OUTPUTVALUE( "SecondTierDistributionAmt", B10 );

		IF ( (TestFormIs( PartOfReturn, FSchJ ))) THEN
			BEGIN
				WITHNEWTAG( "TotalDistributionAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", fifSchJ );
					SETATTRIBUTE( "referenceDocumentName", "IRS1041ScheduleJ" );
					IF ( B11 <> 0 ) THEN OUTPUTLITERAL( B11 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE(  "TotalDistributionAmt", B11 );
			END;
		OUTPUTVALUE( "TaxExemptIncomeAmt", B12 );
		OUTPUTVALUE( "TentativeIncmDistriIntDedAmt", B13 );
		OUTPUTVALUE( "TentativeIncmDistriDedAmt", B14 );
		OUTPUTVALUE( "TaxAmt", G1A );
		OUTPUTVALUE( "LumpSumDistributionTaxAmt",G1B );

		IF ( (TestFormIs( PartOfReturn, F1041P34 )) <> 0 ) THEN
		BEGIN
			WITHNEWTAG( "AlternativeMinimumTaxAmt" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", fifSchI );
				SETATTRIBUTE( "referenceDocumentName", "IRS1041ScheduleI" );
				IF ( G1C <> 0 ) THEN OUTPUTLITERAL( G1C ) ELSE OUTPUTLITERAL( "0" );
			END;
		END ELSE
		BEGIN
			OUTPUTVALUE(  "AlternativeMinimumTaxAmt", G1C );
		END;
		OUTPUTVALUE( "TotalTaxForTaxYearAmt", G1D );

		bValid := false; for i := 1 to numCopies(F1116) do if TestFormIs( PartOfReturn, F1116[i] ) then if (F1116ID[i] > 0 ) then bValid := true;
		IF ( TestFormIs( PartOfReturn, F1116[1] )) THEN
			IF ( bValid ) THEN
			BEGIN
				WITHNEWTAG( "ForeignTaxCreditAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F1116ID[1] );
					SETATTRIBUTE( "referenceDocumentName", "IRS1116" );
					IF ( G2A <> 0 ) THEN OUTPUTLITERAL( G2A ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE("ForeignTaxCreditAmt" , G2A);
			END;

		IF ( G2C <> 0 ) THEN
			IF (F3800ID > 0) THEN
			BEGIN
				WITHNEWTAG( "CYGenBusinessCreditAllowedAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F3800ID );
					SETATTRIBUTE( "referenceDocumentName", "IRS3800" );
					IF ( G2C <> 0 ) THEN OUTPUTLITERAL( G2C ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE("CYGenBusinessCreditAllowedAmt" , G2C);
			END;

		IF ( G2D <> 0 ) THEN
			IF (F8801ID > 0) THEN
			BEGIN
				WITHNEWTAG( "CYNonrefundableAMTCrAmt" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F8801ID );
					SETATTRIBUTE( "referenceDocumentName", "IRS8801" );
					IF ( G2D <> 0 ) THEN OUTPUTLITERAL( G2D ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE("CYNonrefundableAMTCrAmt", G2D);
			END;
		OUTPUTVALUE("CYBondCreditAllowedAmt", BONDCR);

		DLTCt := min(3, LastIndex( A171 ) );
		FOR i := 1 TO DLTCt DO
		BEGIN
			IF (  ValidXMLLineExplanation( A162[i])) THEN
				WITHNEWTAG( "OtherCreditsFormAndAmt" ) DO
				BEGIN
					OUTPUTVALUE( "Desc", A162[i] );
					IF ( A166[i] <> 0 ) THEN OutputValue( "Amt", A166[i] ) ELSE OutputValue( "Amt", "0" );
				END;
		END;
		OUTPUTVALUE( "TotalCreditsAmt", G3 );
		OUTPUTVALUE( "TaxesLessCreditsAmt", G4 );
		BEGIN
			OUTPUTVALUE( "EstTrustNetInvstIncomeTaxAmt", NInvInc );
		END;
		IF ( G51 <> 0 ) THEN
			if (TestFormIs( PartOfReturn, F4255 )) THEN
			BEGIN
				WITHNEWTAG( "Form4255Ind" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", F4255ID );
					SETATTRIBUTE( "referenceDocumentName", "IRS4255" );
					IF ( G51 <> 0 ) THEN OUTPUTLITERAL( G51 ) ELSE OUTPUTLITERAL( "0" );
				END;
			END ELSE
			BEGIN
				OUTPUTVALUE(  "Form4255Ind",  G51 );
			END;
		OUTPUTVALUE(  "Form8611Ind",  G52 );
		OUTPUTVALUE( "RecaptureTaxAmt", G5 );
		OUTPUTVALUE( "HouseholdEmploymentTaxAmt", G6 );

		IF HasValue( MTAXT ) THEN
			WITHNEWTAG( "F1041TotalTaxGrp" ) DO
			BEGIN
				OUTPUTVALUE( "F1041TotalTaxLiteralCd", MTAXT );
				IF ( MORETAX <> 0 ) THEN OutputValue( "TaxDueAmt", MORETAX ) ELSE OutputValue( "TaxDueAmt", "0" );
			END;
		OUTPUTVALUE("TotalTaxAmt", G7);

		IF HasValue( BX1Y ) THEN
		begin
			WITHNEWTAG( "TaxExemptIncomeInd" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", sTaxExmptID );
				SETATTRIBUTE( "referenceDocumentName", "TaxExemptExpenseAllocationStatement" );
				IF ( "true" <> 0 ) THEN OUTPUTLITERAL( "true" ) ELSE OUTPUTLITERAL( "0" );
			END;
		end
		else
		begin
			OUTPUTVALUE("TaxExemptIncomeInd", "false");
		end;
		OUTPUTVALUE( "TaxExemptInterestAmt", AMT1 );
		OUTPUTVALUE( "IndividualEarningsInd", FormatXMLBoolean(BX2y, BX2) );
		OUTPUTVALUE( "ForeignAccountsQuestionInd", FormatXMLBoolean(BX3y, BX3) );
		OUTPUTVALUE( "ForeignCountryCd", FormatXMLCountry(FCTY) );
			OUTPUTVALUE( "ForeignTrustInd",  FormatXMLBoolean(BX4y, BX4) );
		IF ((TestFormIs( PartOfReturn, FSELFIST ))) THEN
		BEGIN
			WITHNEWTAG( "SellerFinancedMortgageInd" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", sOIL5ID );
				SETATTRIBUTE( "referenceDocumentName", "InterestPaidOnSellerProvidedFinancingStatement InterestReceivedOrAccruedStatement" );
				IF ( "true" <> 0 ) THEN OUTPUTLITERAL( "true" ) ELSE OUTPUTLITERAL( "0" );
			END;
		END ELSE
		BEGIN
			OUTPUTVALUE("SellerFinancedMortgageInd",  FormatXMLBoolean(BX5y, BX5) );

		END;
		IF isChecked(BX6X) THEN OUTPUTVALUE( "EstateOrTrust663bElectionInd", "X" );

		IF isChecked(BX7X) THEN
			WITHNEWTAG( "Section643e3Ind" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", fifSchD );
				SETATTRIBUTE( "referenceDocumentName", "IRS1041ScheduleD" );
				IF ( "X" <> 0 ) THEN OUTPUTLITERAL( "X" ) ELSE OUTPUTLITERAL( "0" );
			END;
		IF isChecked(BX8X) THEN OUTPUTVALUE( "DecedentEstate2YearsInd", "X" );
		OUTPUTVALUE( "TrustBeneficiariesSkipInd",  FormatXMLBoolean(BX9Y, BX9) );
	END;

END;
PROCEDURE Form7004Output(docID : FText);
Form F7004;
VAR
	temp 			: FText;
	typeOfReturnCode : FInteger;
	bValid			: Boolean;
	i, dltct		: index;

BEGIN

	WITHNEWTAG( "IRS7004" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", docID );

        OUTPUTVALUE("Auto5MonthExtensionReturnCd", CODE);
	    OUTPUTVALUE("Auto6MonthExtensionReturnCd", CODE2);
		OUTPUTVALUE("OrgHasNoOfficeInUSInd", CHKX);
		OUTPUTVALUE("FilingUnderRegsSect160815Ind", REGSX);
		OUTPUTVALUE("InitialReturnInd", L1BA);
		OUTPUTVALUE("FinalReturnInd", L1BB);
		OUTPUTVALUE("AccountingPeriodChangeInd", L1BC);

		OUTPUTVALUE("ConsolidatedRetToBeFiledInd", L1BD);

		if (IsChecked(L1BE)) then
		Begin
			WITHNEWTAG("OtherInd") DO
			Begin
				SETATTRIBUTE ("referenceDocumentId", OthTaxYearID);
				SetAttribute ("referenceDocumentName", "ShortTaxYearExplanationStatement");
				OUTPUTLiteral("X");
			end;
		end;

		IF ( L6 <> 0 ) THEN OutputValue( "TentativeTaxAmt", L6 ) ELSE OutputValue( "TentativeTaxAmt", "0" );

		IF (WRITEAMT > 0) THEN
			temp := "BACKUP WITHHOLDING";

		WITHNEWTAG( "EstTaxPymtAndRfdblCreditAmt" ) DO
		BEGIN
			SETATTRIBUTE( "backupWithholdingTypeCd", temp );
			SETATTRIBUTE( "backupWithholdingAmt", WRITEAMT );

			IF (L7 > 0) THEN
				OutputLiteral (L7)
			ELSE
				OutputLiteral ("0");
		END;

		IF ( DUEWEXT <> 0 ) THEN OutputValue( "BalanceDueAmt", DUEWEXT ) ELSE OutputValue( "BalanceDueAmt", "0" );

		IF (FPmtID > 0) THEN
			OUTPUTVALUE("ACHDebitAgreementInd", "X");
	END;
END;
PROCEDURE ShortTaxYearExplStmtOutput(docID : FText);
Form F7004;

VAR
	i		: Index;
	DLTCt	: FInteger;
    hExpl	: FText;

BEGIN

	DLTCt := LastIndex(A6);
	if DLTCt > 0 then
	begin
		hExpl := OthStmt[1];
	    for i := 2 to DLTCt do
	    	hExpl := concat(hExpl, " ", OthStmt[i]);

	    WithNewTag("ShortTaxYearExplStmt") do
	    BEGIN
	    	SETATTRIBUTE( "documentId", docID );
	    	SetAttribute( "documentName", "ShortTaxYearExplanationStatement");
	        OUTPUTVALUE( "MediumExplanationTxt", FormatXMLMediumExplanation(hExpl) );
	    END;
	end;
end;
Procedure FIF_HeaderOutput();

Form FINFOWKS;
VAR
	hTYBeg,
	hTYEnd,
	hCtry,
	hRtnType,
	hSigner		: FText;
	bDoPIN		: Boolean;
	bDoSigner	: Boolean;
	bDoIDNo		: Boolean;

BEGIN
	hBinCt := LastIndex(PDFATTCH, FEFHDSUM);

    WITHNEWTAG( "ReturnHeader" ) DO
    BEGIN
    	SETATTRIBUTE( "binaryAttachmentCnt", hBinCt );
    	OUTPUTVALUE( "ReturnTs", "2015-01-01T01:00:00+08:00" );

		IF HCAYEAR THEN
		BEGIN
			hTYBeg := concat(2015, "-01-01");
			hTYEnd := concat(2015, "-12-31");
		END
		ELSE
		BEGIN
			hTYBeg := concat(2015, "-", FormatString(GetMonth(Hyrstart), 2, 2, 2, FALSE, ""), "-", FormatString(GetDay(Hyrstart), 2, 2, 2, FALSE, ""));
			hTYEnd := concat(HEndYr4Str, "-", FormatString(GetMonth(HyrEnd), 2, 2, 2, FALSE, ""), "-", FormatString(GetDay(HyrEnd), 2, 2, 2, FALSE, ""));
		END;
		OUTPUTVALUE( "TaxPeriodEndDt", hTYEnd );
    	OUTPUTVALUE( "ISPNum", FEFHDSUM.ISPNUM );

       	OUTPUTVALUE( "SoftwareId", "15000271" );
       	OUTPUTVALUE( "SoftwareVersionNum", AlwaysPad( UpperCase( Concat( "US", AlwaysPad(FormatNumber(FEFHDSUM.SFTVN, 2), 2, 0, "0"), "CV", "000", "TY", 2015 ) ), 15, 1, " " ) );
       	OUTPUTVALUE( "MultSoftwarePackagesUsedInd", "false");
	 		WITHNEWTAG( "OriginatorGrp" ) DO
	     	BEGIN
	     		OUTPUTVALUE( "EFIN", FormatXMLEFIN(FEFHDSUM.EEFIN) );
				OUTPUTVALUE( "OriginatorTypeCd", "ERO" );
		 	END;
		if ( Valid_EFIN(FEFHDSUM.EEFIN) and	hasValue( FEFHDSUM.EROPIN ) and hasValue( FEFHDSUM.PTPIN ) and hasValue( FEFHDSUM.PTSD)) THEN
		BEGIN
			WITHNEWTAG( "PractitionerPINGrp") DO
			BEGIN
	 			OUTPUTVALUE( "EFIN", FormatXMLEFIN(FEFHDSUM.EEFIN) );
	 			OUTPUTVALUE( "PIN", FEFHDSUM.EROPIN );
	 			OUTPUTVALUE( "JuratDisclosureCd", "PRACTITIONER PIN");
	 			OUTPUTVALUE( "FiduciaryPIN", FEFHDSUM.PTPIN );
	 			OUTPUTVALUE( "FiduciarySignatureDt", FEFHDSUM.PTSD);
	 			IF IsChecked(FEFHDSUM.AI1) THEN
					OUTPUTVALUE( "PINEnteredByCd", "FIDUCIARY" )
				ELSE
					OUTPUTVALUE( "PINEnteredByCd", "ERO" );
				OUTPUTVALUE( "FiduciaryRepOfficerNm",FormatXMLPersonName(FINFOWKS.FNAME));
			END;
		END
		else
		BEGIN
			OUTPUTVALUE( "SignatureOptionCd", "BINARY ATTACHMENT 8453 SIGNATURE DOCUMENT");
		END;
		OUTPUTVALUE( "ReturnTypeCd", "1041");
		OUTPUTVALUE( "TaxPeriodBeginDt", hTYBeg );

		WITHNEWTAG( "Filer" ) DO
		BEGIN
			OUTPUTVALUE( "EIN", FormatXMLEIN(EIN) );

			WITHNEWTAG( "EstateOrTrustName" ) DO
			BEGIN
			   OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(NAME) );
			END;
			OUTPUTVALUE( "BusinessNameControlTxt", SpecialNameControl(FINFOWKS.NAMECONT) );

			if IsChecked(IND) Then
			WITHNEWTAG( "FiduciaryPersonName" ) DO
			BEGIN
				OUTPUTVALUE( "PersonFirstNm", FormatString( FIRSTNAM, 20, 33, 0, TRUE, "-" ) );
				OUTPUTVALUE( "PersonLastNm", FormatString( FIDNAME, 20, 33, 0, TRUE, "-" ) );
			END;

			if Not(IsChecked(IND)) Then
			BEGIN
				OUTPUTVALUE( "FiduciaryBusinessNm", FormatXMLBusinessNameLine1(FIDNAME) );
			END;

			OUTPUTVALUE( "FiduciaryTitleTxt", FormatXMLAlpha(TITLE, 75) );

			IF HasValue(COUNTRY) THEN
			BEGIN
				WithNewTag("ForeignAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(ADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(CITY)); OUTPUTVALUE("ProvinceOrStateNm", FormatXMLProvince(PROVINCE)); OUTPUTVALUE("CountryCd", FormatXMLCountry(COUNTRY)); OUTPUTVALUE("ForeignPostalCd", FormatXMLPostalCode(POSTCODE)); END;

			END
			ELSE
			BEGIN
				WithNewTag("USAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(ADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(CITY)); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(ST)); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(ZIP)); END;
			END;
		END;
			IF IsChecked(F1041P12.DISCBXY) THEN
				OUTPUTVALUE( "DiscussWithPaidPreparerInd", "true")
			else
				OUTPUTVALUE( "DiscussWithPaidPreparerInd", "false");
			If Not HasValue(F1041P12.XNP) THEN
			Begin
				WITHNEWTAG( "PaidPreparerInformationGrp" ) DO
				BEGIN
					OUTPUTVALUE( "PreparerPersonNm",FormatXMLPersonName(FEFHDSUM.PPNAME) );
					OUTPUTVALUE( "SignatureDt", FormatXMLDate(FEFHDSUM.PTSD) );
					if (isChecked(FEFHDSUM.PPSEI)) or ischecked(F1041P12.BXSE)
						then OUTPUTVALUE( "SelfEmployedInd", "X" );
					IF ValidXMLPTIN(FEFHDSUM.PPTIN) THEN
						OUTPUTVALUE( "PTIN", FormatXMLPTIN(FEFHDSUM.PPTIN))
					ELSE
						OUTPUTVALUE( "SSN", FormatXMLSSN(FEFHDSUM.PPSSN));
					OUTPUTVALUE( "PreparerFirmEIN", FormatXMLEIN(FEFHDSUM.PPEIN) );
					WITHNEWTAG( "PreparerFirmName" ) DO
					BEGIN
						OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(FEFHDSUM.PPFIRM) );
					END;
					hCtry := CountryCode(FEFHDSUM.PPCNTRY);
					IF ValidXMLForeignAddress(FEFHDSUM.PPADD, FEFHDSUM.PPCITY, hCtry) THEN
					BEGIN
						WITHNEWTAG( "PreparerForeignAddress" ) DO
						BEGIN
							OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(FEFHDSUM.PPADD));
							OUTPUTVALUE( "CityNm", FormatXMLCity(FEFHDSUM.PPCITY) );
							OUTPUTVALUE( "CountryCd", hCtry);
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "PreparerUSAddress" ) DO
						BEGIN
							OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(FEFHDSUM.PPADD));
							OUTPUTVALUE( "CityNm", FormatXMLCity(FEFHDSUM.PPCITY) );
							OUTPUTVALUE( "StateAbbreviationCd", FormatXMLState(FEFHDSUM.PPST) );
							OUTPUTVALUE( "ZIPCd", FormatXMLZipCode(FEFHDSUM.PPZIP) );
						END;
					END;
					IF IsChecked(F1041P12.DISCBXY) THEN
						OUTPUTVALUE( "PhoneNum", FormatXMLPhoneNumber(FEFHDSUM.PPPHN2) )
					ELSE
						OUTPUTVALUE( "PhoneNum", FormatXMLPhoneNumber(FEFHDSUM.PPPHN) );
					OUTPUTVALUE( "EmailAddressTxt", FormatXMLEmailAddress(FEFHDSUM.PPFEMAIL) );
				 End;
			END;
		WITHNEWTAG( "IPAddress" ) DO
		BEGIN
			OUTPUTVALUE( "IPv4AddressTxt", "00.00.00.00" );
		END;
		OUTPUTVALUE( "TaxYr", 2015 );
   	END;
END;
Procedure HeaderOutput();

Form FINFOWKS;
VAR
	hTYBeg,
	hTYEnd,
	hCtry,
	hRtnType,
	hSigner, hPIGrp		: FText;
	bDoPIN		: Boolean;
	bDoSigner	: Boolean;
	bDoIDNo		: Boolean;

BEGIN
    WITHNEWTAG( "ReturnHeader" ) DO
    BEGIN
	  	SETATTRIBUTE( "binaryAttachmentCnt", hBinCtTx );
       	OUTPUTVALUE( "ReturnTs", "2015-01-01T01:00:00+08:00" );

		IF HCAYEAR THEN
		BEGIN
			hTYBeg := concat(2015, "-01-01");
			hTYEnd := concat(2015, "-12-31");
		END
		ELSE
		BEGIN
			hTYBeg := concat(2015, "-", FormatString(GetMonth(Hyrstart), 2, 2, 2, FALSE, ""), "-", FormatString(GetDay(Hyrstart), 2, 2, 2, FALSE, ""));
			hTYEnd := concat(HEndYr4Str, "-", FormatString(GetMonth(HyrEnd), 2, 2, 2, FALSE, ""), "-", FormatString(GetDay(HyrEnd), 2, 2, 2, FALSE, ""));
		END;
		OUTPUTVALUE( "TaxPeriodEndDt", hTYEnd );
    	OUTPUTVALUE( "ISPNum", FEFHDSUM.ISPNUM );

		IF (not IsChecked(FEFHDSUM.EXTMODE)) THEN
		BEGIN
			hCtry := CountryCode(FEFHDSUM.PPCNTRY);

			IF ValidXMLBusinessNameLine1(FEFHDSUM.PPFIRM) and
				(ValidXMLUSAddress(FEFHDSUM.PPADD, FEFHDSUM.PPCITY, FEFHDSUM.PPST, FEFHDSUM.PPZIP) or
				ValidXMLForeignAddress(FEFHDSUM.PPADD, FEFHDSUM.PPCITY, hCtry)) THEN
			BEGIN
				WITHNEWTAG( "PreparerFirmGrp" ) DO
				BEGIN
						IF ValidXMLEIN(FEFHDSUM.PPEIN) THEN OUTPUTVALUE( "PreparerFirmEIN", FormatXMLEIN(FEFHDSUM.PPEIN) ) ELSE OUTPUTVALUE( "MissingEINReasonCd", FormatXMLEnumeration(FEFHDSUM.PPEIN, "APPLD FOR,FOREIGNUS") );
					WITHNEWTAG( "PreparerFirmName" ) DO
					BEGIN
					   OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(FEFHDSUM.PPFIRM));
					END;

					IF ValidXMLForeignAddress(FEFHDSUM.PPADD, FEFHDSUM.PPCITY, hCtry) THEN
					BEGIN
						WITHNEWTAG( "PreparerForeignAddress" ) DO
						BEGIN
							OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(FEFHDSUM.PPADD));
							OUTPUTVALUE( "CityNm", FormatXMLCity(FEFHDSUM.PPCITY) );
							OUTPUTVALUE( "CountryCd", hCtry);
						END;
					END
					ELSE
					BEGIN
						WITHNEWTAG( "PreparerUSAddress" ) DO
						BEGIN
							OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(FEFHDSUM.PPADD));
							OUTPUTVALUE( "CityNm", FormatXMLCity(FEFHDSUM.PPCITY) );
							OUTPUTVALUE( "StateAbbreviationCd", FormatXMLState(FEFHDSUM.PPST) );
							OUTPUTVALUE( "ZIPCd", FormatXMLZipCode(FEFHDSUM.PPZIP) );
						END;
					END;
       			END;
			END;
		END;
       	OUTPUTVALUE( "SoftwareId", "15000270" );
       	OUTPUTVALUE( "SoftwareVersionNum", AlwaysPad( UpperCase( Concat( "US", AlwaysPad(FormatNumber(FEFHDSUM.SFTVN, 2), 2, 0, "0"), "CV", "000", "TY", 2015 ) ), 15, 1, " " ) );

		IF (not IsChecked(FEFHDSUM.EXTMODE)) THEN
			OUTPUTVALUE( "MultSoftwarePackagesUsedInd", "false" );

   		IF ((not IsChecked(FEFHDSUM.EXTMODE)) and (IsChecked(FEFHDSUM.PINFLAG ) and IsChecked(FEFHDSUM.USPIN))) or
 			(IsChecked(FEFHDSUM.EXTMODE) and (IsChecked(FEFHDSUM.EDDPX) and IsChecked(FEFHDSUM.USEFWX))) THEN
			bDoPIN := TRUE;

    	WITHNEWTAG( "OriginatorGrp" ) DO
     	BEGIN
     		OUTPUTVALUE( "EFIN", FormatXMLEFIN(FEFHDSUM.EEFIN) );
			OUTPUTVALUE( "OriginatorTypeCd", "ERO" );
	 		IF bDoPIN THEN
			BEGIN
				WITHNEWTAG( "PractitionerPINGrp" ) DO
	 		 	BEGIN
  			 		OUTPUTVALUE( "EFIN", FormatXMLEFIN(FEFHDSUM.EEFIN) );
  			 		OUTPUTVALUE( "PIN", FormatXMLPIN(FEFHDSUM.EROPIN) );
	 		 	END;
	 		END;
	 	END;

 		IF bDoPIN THEN
		BEGIN
			IF IsChecked(FEFHDSUM.AI1) THEN
				OUTPUTVALUE( "PINEnteredByCd", "Taxpayer" )
			ELSE
   				IF IsChecked(FEFHDSUM.AI2) THEN
					OUTPUTVALUE( "PINEnteredByCd", "ERO" );
		END;
		IF (not IsChecked(FEFHDSUM.EXTMODE)) THEN
		BEGIN
    		IF (IsChecked(FEFHDSUM.PINFLAG ) and IsChecked(FEFHDSUM.USPIN)) THEN
				OUTPUTVALUE( "SignatureOptionCd", "PIN Number" )
			ELSE
				OUTPUTVALUE( "SignatureOptionCd", "Binary Attachment 8453 Signature Document" );
		END;

		IF IsChecked(FEFHDSUM.EXTMODE) THEN
   			hRtnType := "7004"

		ELSE
			hRtnType := "1041" ;
		OUTPUTVALUE( "ReturnTypeCd", hRtnType);
    	OUTPUTVALUE( "TaxPeriodBeginDt", hTYBeg );

		WITHNEWTAG( "Filer" ) DO
		BEGIN
			OUTPUTVALUE( "EIN", FormatXMLEIN(EIN) );

			WITHNEWTAG( "BusinessName" ) DO
			BEGIN
			   OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(NAME) );

			END;
			OUTPUTVALUE( "BusinessNameControlTxt", SpecialNameControl(FINFOWKS.NAMECONT) );
			IF HasValue(COUNTRY) THEN
			BEGIN
				WithNewTag("ForeignAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(ADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(CITY)); OUTPUTVALUE("ProvinceOrStateNm", FormatXMLProvince(PROVINCE)); OUTPUTVALUE("CountryCd", FormatXMLCountry(COUNTRY)); OUTPUTVALUE("ForeignPostalCd", FormatXMLPostalCode(POSTCODE)); END;
			END
			ELSE

			BEGIN
				WithNewTag("USAddress") DO BEGIN OUTPUTVALUE("AddressLine1Txt", FormatXMLStreetAddress(ADDR)); OUTPUTVALUE("CityNm", FormatXMLCity(CITY)); OUTPUTVALUE("StateAbbreviationCd", FormatXMLState(ST)); OUTPUTVALUE("ZIPCd", FormatXMLZipCode(ZIP)); END;
			END;
		END;
			hSigner := "Officer";
			bDoSigner := TRUE;

		IF bDoSigner THEN
		BEGIN

			WITHNEWTAG( "BusinessOfficerGrp" ) DO
 			BEGIN
		  	 	IF IsChecked(FEFHDSUM.EXTMODE) THEN
 				BEGIN
					OUTPUTVALUE( "PersonNm", FormatXMLPersonName(FEF7004.OFFNAME) );
					if not (ValidXMLPersonTitle(FEF7004.OFFTITLE)) THEN
				  		OUTPUTVALUE( "PersonTitleTxt", FormatXMLPersonTitle(FEF7004.OFFTITLE) )
					else
						OUTPUTVALUE( "PersonTitleTxt", FormatXMLPersonTitle(hSigner) );
				END
				ELSE
				BEGIN
				END;
		  		OUTPUTVALUE( "TaxpayerPIN", FEFHDSUM.PTPIN );
					IF (IsChecked(FEFHDSUM.PINFLAG ) and IsChecked(FEFHDSUM.USPIN)) THEN
					BEGIN
						OUTPUTVALUE( "SignatureDt", FormatXMLDate(FEFHDSUM.PTSD) );
					END
					ELSE
					BEGIN

						IF IsChecked(FEFHDSUM.EXTMODE) THEN
			 				OUTPUTVALUE( "SignatureDt", FormatXMLDate(FEF7004.SIGDATE) )
						ELSE
						OUTPUTVALUE( "SignatureDt", FormatXMLDate(FEF7004.SIGDATE) );
					END;
				IF (not IsChecked(FEFHDSUM.EXTMODE)) THEN
					OUTPUTVALUE( "DiscussWithPaidPreparerInd", "1" );
   	 		END;
   	 	END;
		IF (not IsChecked(FEFHDSUM.EXTMODE)) THEN
		BEGIN
			IF ValidXMLSSN(FEFHDSUM.PPSSN) or ValidXMLPTIN(FEFHDSUM.PPTIN) THEN
			BEGIN
				WITHNEWTAG( "PreparerPersonGrp" ) DO
				BEGIN
					OUTPUTVALUE( "PreparerPersonNm", FormatXMLPersonName(FEFHDSUM.PPNAME) );
					BEGIN
						IF ValidXMLPTIN(FEFHDSUM.PPTIN) THEN
							OUTPUTVALUE( "PTIN", FormatXMLPTIN(FEFHDSUM.PPTIN))
						ELSE
							OUTPUTVALUE( "SSN", FormatXMLSSN(FEFHDSUM.PPSSN));
					END;
    	 	  		IF IsChecked(F1041P12.DISCBXY) THEN
					   	OUTPUTVALUE( "PhoneNum", FormatXMLPhoneNumber(FEFHDSUM.PPPHN2) )
					ELSE

					   	OUTPUTVALUE( "PhoneNum", FormatXMLPhoneNumber(FEFHDSUM.PPPHN) );
					   	OUTPUTVALUE( "EmailAddressTxt", FormatXMLEmailAddress(FEFHDSUM.PPFEMAIL) );
					   	OUTPUTVALUE( "SelfEmployedInd", FEFHDSUM.PPSEI );
				END;
			END;
		END;
		OUTPUTVALUE( "TaxYr", 2015 );

   	END;
END;
Main( );
VAR

	b4797POR,
	bEFPOR,
	b4684POR,
	b8453Att,
	bFound,
	bNegNoNA,
	bPosNoNA	: Boolean;
	schEisPor	: Boolean;
	hMode,
	hFrmName,
	PATH,
	hBinID,
	Folder,
	Version,
	xsiLoc		: FText;
	j, LastkOne, LastK1SUP179, AMTCt : Index;
	i, c, n, copyCount, FormCount, copy, y		: Index;
	DLTCt,
	hCt,
	FrmCt,
	TmpDocID, hDocIDTmp	: FInteger;

Begin
if (not IsChecked(FEFHDSUM.DSSN)) THEN
BEGIN

	DLTCt := LastIndex( EROINFO, FEFSVCBR );
	FOR i := 1 TO DLTCt DO
	Begin
	    If HasValue(FEFSVCBR.EROEFIN[i]) and (Fefhdsum.EEFIN = FEFSVCBR.EROEFIN[i]) Then
	    Begin
	        If Not HasValue(FEFSVCBR.EROCNTRY[i]) Then
	        Begin
	                If not HasValue(FEFSVCBR.EROST[i]) Then
	                    FailConversion("The ERO state must be entered on the ERO Info screen to file electronically.");
	                If not HasValue(FEFSVCBR.EROZIP[i]) Then
	                    FailConversion("The ERO zip code must be entered on the ERO Info screen to file electronically.");
	        End;
	        If not HasValue(FEFSVCBR.ERONAME[i]) Then
	            FailConversion("The ERO name must be entered on the ERO Info screen to file electronically.");
	        If not HasValue(FEFSVCBR.EROADDR[i]) Then
	            FailConversion("The ERO address must be entered on the ERO Info screen to file electronically.");
	        If not HasValue(FEFSVCBR.EROCITY[i]) Then
	            FailConversion("The ERO city must be entered on the ERO Info screen to file electronically.");
	        If Not HasValue(FEFSVCBR.SSN[i]) and Not HasValue(FEFSVCBR.EIN[i]) Then
	                FailConversion("The ERO EIN or SSN/PTIN must be entered on the ERO Info screen to file electronically.");
	        If not IsChecked(FEFSVCBR.EROVERI[i]) Then
	                FailConversion("The check box to verify the ERO Name and complete address must be entered on the ERO Info screen to file electronically.");
	        If not HasValue(FPREP.MTEL) then
	                FailConversion("The Firm phone number must be entered on the Firm/Preparer Info screen to file electronically.");
	     End;
	End;
	IF  (FINFOWKS.BIEF = 1 ) THEN
	 	FailConversion("The return is ineligible for electronic filing. For details, open the return and run the Electronic Filing review");
	IF Not HasValue(FINFOWKS.NAMECONT) THEN
		FailConversion("Name Control must be entered on the Information Worksheet in order to file electronically.");
	IF length(FINFOWKS.NAMECONT) < 2 THEN
		FailConversion("Name Control must have at least 2 valid characters in order to file electronically.");
	IF (POS(FINFOWKS.NAMECONTROL, " ") > 0 ) THEN
		FailConversion("Only valid characters may be entered in Name Control in order to file electronically.");

	if IsChecked(FINFOWKS.IND) and Not(HasValue(FINFOWKS.FIRSTNAM)) Then
		FailConversion("First name of Fiduciary is required for electronic filing when the box is marked the Fiduciary is an individual.");
    If (IsChecked(FINFOWKS.BXF) or IsChecked(FINFOWKS.BXS)) and (Concat(f1041p12.ENDT," ",f1041p12.YR1) > Currentdate()) Then
            FailConversion("You can not file your fiscal year return until the year is completed. Wait until after that date in order to file electronically.");
    IF (not (ValidXMLUSAddress(FINFOWKS.ADDR, FINFOWKS.CITY, FINFOWKS.ST, FINFOWKS.ZIP))) and
		(not (ValidXMLForeignAddress(FINFOWKS.ADDR, FINFOWKS.CITY, FINFOWKS.COUNTRY))) THEN
		FailConversion("Complete address information must be entered to file electronically.");
	IF (not (ValidXMLUSAddress(FINFOWKS.ADDR, FINFOWKS.CITY, FINFOWKS.ST, FINFOWKS.ZIP))) and
		(not (ValidXMLForeignAddress(FINFOWKS.ADDR, FINFOWKS.CITY, FINFOWKS.COUNTRY))) THEN
		FailConversion("Complete address information must be entered to file electronically.");
	FormCount := NumCopies( fsche1 );
	for y := 1 TO FormCount DO
	begin
		for c := 1 TO 3 DO
		begin
			if (HasValue(Fsche1[y].STATE[c])) then
			begin
				if not( ValidXMLState(Fsche1[y].STATE[c]) ) then
					FailConversion("A valid state for Schedule E property is required to file electronically.");
			end;
		end;
	end;
	IF F85821.bNegNum and TestFormIs( PartOfReturn, F85821 ) and (not bNegNoNA) THEN BEGIN bNegNoNA := TRUE; hFrmName := "Form 8582"; END;
	IF F85822.bNegNum and TestFormIs( PartOfReturn, F85821 ) and (not bNegNoNA) THEN BEGIN bNegNoNA := TRUE; hFrmName := "Form 8582, page 2"; END;
	IF F8960.bNegNum and TestFormIs( PartOfReturn, F8960 ) and (not bNegNoNA) THEN BEGIN bNegNoNA := TRUE; hFrmName := "Form 8960"; END;
	IF bNegNoNA THEN FailConversion(concat("A negative number was entered on a field which only allows positive numbers on ", hFrmName));
	IF bPosNoNA THEN FailConversion(concat("A positive number was entered on a field which only allows negative numbers on ", hFrmName));
	IF (IsChecked(FEFHDSUM.EXTMODE)) THEN
	Begin
			BEGIN IF ( not IsChecked(F7004.BOXF) ) THEN FailConversion( concat("The Freeze box must be checked on ", "Form 7004", " to file it electronically.") ); END;
	END;
	IF ((not IsChecked(FEFHDSUM.EXTMODE)) and (((not IsChecked(FEFHDSUM.EXTMODE)) and IsChecked(FEFHDSUM.EDDI) and IsChecked(FEFHDSUM.USDDP)) or (IsChecked(FEFHDSUM.EDDP) and IsChecked(FEFHDSUM.USDDR)))) or
		(IsChecked(FEFHDSUM.EXTMODE) and (IsChecked(FEFHDSUM.EDDPX) and IsChecked(FEFHDSUM.USEFWX)))  THEN
	BEGIN
		IF (((( IsChecked( FEFHDSUM.EF1 ) ) or (( FEFHDSUM.Status > 0) and ( FEFHDSUM.Status <> 3))) and (not (IsChecked(FEFHDSUM.EXTMODE) or IsChecked(FEFHDSUM.AMDMODE)))) and (IsChecked(FEFHDSUM.EDDP) and IsChecked(FEFHDSUM.USDDR))) or
			(IsChecked(FEFHDSUM.EXTMODE) and (IsChecked(FEFHDSUM.EDDPX) and IsChecked(FEFHDSUM.USEFWX))) THEN
		BEGIN
			IF (not ValidXMLPhoneNumber(FEFHDSUM.PHONE)) THEN
				FailConversion("The phone number is either missing or invalid for electronic filing.");
		END;

		IF (not (HasValue(FINFOWKS.RTN) and Valid_RTN(FINFOWKS.RTN))) THEN
			FailConversion("The routing transit number entered is either missing or invalid for electronic filing.");

		IF (not (HasValue(FINFOWKS.DAN) and Valid_DAN(FINFOWKS.DAN))) THEN
			FailConversion("The bank account number entered is either missing or invalid for electronic filing.");

		IF (not HasValue(FINFOWKS.TA)) THEN
			FailConversion("The bank account type must be entered for electronic filing.");

		IF IsChecked(FEFHDSUM.EXTMODE) THEN
		BEGIN
			IF (IsChecked(FEFHDSUM.EDDPX) and IsChecked(FEFHDSUM.USEFWX)) THEN
			BEGIN
				IF (not ValidXMLPIN(FEFHDSUM.EROPIN)) THEN
					FailConversion("A valid ERO practitioner PIN must be entered to file electronically when using the practitioner PIN signature method.");

				IF (not ValidXMLDate(FEFHDSUM.EFWXDT)) THEN
					FailConversion("A valid debit date must be entered for electronic filing when paying a balance due with electronic funds withdrawal.");
			END;
		END
		ELSE
		BEGIN
			IF (IsChecked(FEFHDSUM.EDDP) and IsChecked(FEFHDSUM.USDDR)) THEN
			BEGIN
				IF (not ValidXMLDate(FEFHDSUM.DEBITDT)) THEN
					FailConversion("A valid debit date must be entered for electronic filing when paying a balance due with electronic funds withdrawal.");

				IF (not (FEFHDSUM.DAMT > 0)) THEN
					FailConversion("A debit amount must be entered for electronic filing when paying a balance due with electronic funds withdrawal.");
			END;
		END;
	END;
End;
		IF (not IsChecked(FEFHDSUM.DSSN)) THEN
			FailConversion("Electronic filing is not yet available for this year. You must obtain an update before filing electronically. To see when an updated version will be available, go to www.proseries.com" );
	TmpDocID := 1;
	DocIDLen := 8;

	IF IsChecked(FEFHDSUM.EXTMODE) THEN
	BEGIN
		F7004ID := 1;
		DLTCt := LastIndex(A6, F7004); IF (DLTCt > 0) THEN BEGIN FOR i := 1 to DLTCt DO BEGIN IF (IsChecked(F7004.L1BE) and (LastIndex(A6, F7004) > 0)) THEN BEGIN tmpdocID := tmpdocID + 1; OthTaxYearID := PadLeft(tmpdocID, DocIDLen, "0"); BREAK; END; END; END;
		BEGIN IF ((IsChecked(FEFHDSUM.EDDPX) and IsChecked(FEFHDSUM.USEFWX))) THEN BEGIN tmpdocID := tmpdocID + 1; FPmtID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;

		DLTCt := LastIndex(PDFATTCH, FEFHDSUM); IF (DLTCt > 0) THEN BEGIN FOR i := 1 to DLTCt DO BEGIN IF (FEFHDSUM.RTNMODE[i] = 1) and HasValue(FEFHDSUM.ATTDESC[i]) and HasValue(FEFHDSUM.FILENAME[i]) THEN BEGIN tmpdocID := tmpdocID + 1; hBinCt := hBinCt + 1; BinAttID[i] := tmpdocID; END; END; END;
	END
	ELSE

	BEGIN
        F1041ID	 := 1;
        BEGIN IF ((TestFormIs( PartOfReturn, FSchD ))) THEN BEGIN tmpdocID := tmpdocID + 1; fifSchD := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF ((TestFormIs( PartOfReturn, F1041P34 ))) THEN BEGIN tmpdocID := tmpdocID + 1; fifSchI := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF ((TestFormIs( PartOfReturn, FSchJ ))) THEN BEGIN tmpdocID := tmpdocID + 1; fifSchJ := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN FrmCt := Numcopies(FSCHk1); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, FSchK1[i] )) THEN BEGIN tmpdocID := tmpdocID + 1; FSCHK1ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
        BEGIN FrmCt := Numcopies(FSCHC); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; SchCID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
		schEisPor := false;
		FrmCt := Numcopies(Fsche1);
		FOR i := 1 TO FrmCt DO
			if TestFormIs( PartOfReturn, FSCHE1[i] ) then
				schEisPor := true;
		if TestFormIs( PartOfReturn, FSCHE2 ) then
				schEisPor := true;
		FrmCt := Numcopies(Fsche3);
		FOR i := 1 TO FrmCt DO
			if TestFormIs( PartOfReturn, FSCHE3[i] ) then
				schEisPor := true;
		if schEisPor = true then
		begin
			tmpdocID := tmpdocID + 1;
			SchEID := tmpdocID;
		end;

        BEGIN FrmCt := Numcopies(SCHF); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, SCHF[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; SchFID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
        BEGIN FrmCt := Numcopies(F1116); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F1116[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F1116ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
        BEGIN FrmCt := Numcopies(F1116AMT); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F1116AMT[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F1116AMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;

        BEGIN IF (TestFormIs( PartOfReturn, F221012 )) THEN BEGIN tmpdocID := tmpdocID + 1; F2210ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F311513 )) THEN BEGIN tmpdocID := tmpdocID + 1; F3115ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		BEGIN IF (TestFormIs( PartOfReturn, F3468 )) THEN BEGIN tmpdocID := tmpdocID + 1; F3468ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F3800 )) THEN BEGIN tmpdocID := tmpdocID + 1; F3800ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F4136 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4136ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F4255 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4255ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;

        BEGIN IF (TestFormIs( PartOfReturn, FWLN15B:F4562A )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562AID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;

		c := numCopies(FSCHC);
		For copy := 1 to c do
		begin
				F4562cID[copy] := "0";
			i:= copy;
			BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:F4562C )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562cID[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
		end;
        c := numCopies(FSCHE1);
    	For y := 1 to c do
    	begin
	    	if (TestFormIs( PartOfReturn, FSche1[y]:F4562E1 )) Then
	    	begin
	    		BEGIN IF (TestFormIs( PartOfReturn, FSCHE1[y]:F4562e1 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562e1ID[y] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	    	end;
		end;
		For y := 1 to c do
    	begin
	    	if (TestFormIs( PartOfReturn, FSche1[y]:F4562e2 )) Then
	    	begin
	    		BEGIN IF (TestFormIs( PartOfReturn, FSCHE1[y]:F4562e2 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562e2ID[y] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	    	end;
	    end;
		For y := 1 to c do
    	begin

	    	if (TestFormIs( PartOfReturn, FSche1[y]:F4562e3 )) Then
	    	begin
	    		BEGIN IF (TestFormIs( PartOfReturn, FSCHE1[y]:F4562e3 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562e3ID[y] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	    	end;
	    end;
	    c := numCopies(SCHF);
		For copy := 1 to c do
		begin
				F4562fID[copy] := "0";
			i:= copy;
			BEGIN IF (TestFormIs( PartOfReturn, SCHF[i]:F4562f )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562fID[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
		end;
		c := numCopies(F4835);
		For copy := 1 to c do
		begin
				F4562rID[copy] := "0";
			i:= copy;
			BEGIN IF (TestFormIs( PartOfReturn, F4835[i]:F4562R )) THEN BEGIN tmpdocID := tmpdocID + 1; F4562rID[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
		end;
		BEGIN FrmCt := Numcopies(F4684P1); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F4684P1[1] ) THEN BEGIN tmpdocID := tmpdocID + 1; F4684ID1[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
		BEGIN FrmCt := Numcopies(F4684P2); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F4684P2[1] ) THEN BEGIN tmpdocID := tmpdocID + 1; F4684ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;

        BEGIN IF (TestFormIs( PartOfReturn, F4797 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4797ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F4952 )) THEN BEGIN tmpdocID := tmpdocID + 1; F4952ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		BEGIN IF (TestFormIs( PartOfReturn, F5884 )) THEN BEGIN tmpdocID := tmpdocID + 1; F5884ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN FrmCt := Numcopies(F6252); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F6252[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F6252ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
	        BEGIN IF (TestFormIs( PartOfReturn, F6478 )) THEN BEGIN tmpdocID := tmpdocID + 1; F6478ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	        BEGIN IF ((TestFormIs( PartOfReturn, F6765 ) or TestFormIs( PartOfReturn, F6765P2 ))) THEN BEGIN tmpdocID := tmpdocID + 1; F6765ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F85821 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8582ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		BEGIN IF (TestFormIs( PartOfReturn, F8586 )) THEN BEGIN tmpdocID := tmpdocID + 1; f8586ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN FrmCt := Numcopies(F8594); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8594[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F8594ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
    		BEGIN FrmCt := Numcopies(F8609A); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8609A[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F8609AID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F8801 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8801ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN FrmCt := Numcopies(F8824); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8824[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F8824ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
	        BEGIN IF (TestFormIs( PartOfReturn, F8826 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8826ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	        c := numCopies(FSCHC);
	    	For i := 1 to c do
	    	begin
	    		F8829ID[i] := "0";
	    		BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:F8829 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8829ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	    	end;
	        BEGIN IF (TestFormIs( PartOfReturn, F8835 )) THEN BEGIN tmpdocID := tmpdocID + 1; f8835ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	        BEGIN IF (TestFormIs( PartOfReturn, F8844 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8844ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	        BEGIN IF (TestFormIs( PartOfReturn, F8845 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8845ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		BEGIN IF (TestFormIs( PartOfReturn, F8846 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8846ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		BEGIN IF (TestFormIs( PartOfReturn, F8881 )) THEN BEGIN tmpdocID := tmpdocID + 1; f8881ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F8903 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8903ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		BEGIN FrmCt := Numcopies(F8910); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8910[i] ) THEN BEGIN tmpdocID := tmpdocID + 1; F8910ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F8941 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8941ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F8949[1])) THEN BEGIN tmpdocID := tmpdocID + 1; F8949ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, F8960 )) THEN BEGIN tmpdocID := tmpdocID + 1; F8960ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF ((TestFormIs( PartOfReturn, FTaxPay ) and ((FTaxPay.TaxWith <> 0) or (FTaxPay.TaxWhK1 <> 0)) )) THEN BEGIN tmpdocID := tmpdocID + 1; fifL24ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        	BEGIN IF (TestFormIs( PartOfReturn, FEXPLAMD )) THEN BEGIN tmpdocID := tmpdocID + 1; sAmendedID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (((FSCHC[i]:F4562c.L20 > 0) and HasValue(IRC168.DATEE))) THEN BEGIN tmpdocID := tmpdocID + 1; F168ELEC := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
      	c := numCopies(FSCHC);
       	For i := 1 to c do
       	begin
       		sSchC2[i] := "0";
       		BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:FEXPL09 )) THEN BEGIN tmpdocID := tmpdocID + 1; sSchC2[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
       	end;
  		c := numCopies(FSCHC);
     	For i := 1 to c do
     	begin
     		sSchC1[i] := "0";
     		BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:FEXPL08 )) THEN BEGIN tmpdocID := tmpdocID + 1; sSchC1[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
     	end;
       	c := numCopies(SCHF);
       	For i := 1 to c do
       	begin
       		sSchF2[i] := "0";
       		BEGIN IF ((hasValue(schF[i].l7at[1] ))) THEN BEGIN tmpdocID := tmpdocID + 1; sSchF2[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
       	end;
 		c := numCopies(SCHF);
       	For i := 1 to c do
       	begin
       		sSchF3[i] := "0";
       		BEGIN IF ((TestFormIs( PartOfReturn, FC451D4[1]) or hasValue(SCHF[i].L8CT[1]))) THEN BEGIN tmpdocID := tmpdocID + 1; sSchF3[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
       	end;
        BEGIN IF (TestFormIs( PartOfReturn, FEXPL02 )) THEN BEGIN tmpdocID := tmpdocID + 1; sGSTID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, FLGRANT[1] )) THEN BEGIN tmpdocID := tmpdocID + 1; sGrantID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF ((TestFormIs( PartOfReturn, FSELFIST ))) THEN BEGIN tmpdocID := tmpdocID + 1; sOIL5ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
		BEGIN IF (TestFormIs( PartOfReturn, FExplNOL )) THEN BEGIN tmpdocID := tmpdocID + 1; sNOLDed := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF (TestFormIs( PartOfReturn, FEXPL01 )) THEN BEGIN tmpdocID := tmpdocID + 1; sPoolID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        BEGIN IF ((F1041P12.Bx1Y = "X" ) and (LastIndex(ExpAlloc, FIntDiv) > 0)) THEN BEGIN tmpdocID := tmpdocID + 1; sTaxExmptID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        c := numCopies(FSchK1);
       	For i := 1 to c do
       	begin
	        BEGIN IF ((FWSCHK1.l5b + FWSCHK1.l5c + FWSCHK1.l5d + FWSCHK1.l6b + FWSCHK1.l6c + FWSCHK1.l6d + FWSCHK1.l7b + FWSCHK1.l7c + FWSCHK1.l7d + FWSCHK1.l8b + FWSCHK1.l8c + FWSCHK1.l8d > 0)) THEN BEGIN tmpdocID := tmpdocID + 1; sSchK1DADID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        end;

       	For i := 1 to c do
       	begin
	       	sSchK1RntID[i] := "0";
	        BEGIN IF ((HasValue(FSchK1[i].L7))) THEN BEGIN tmpdocID := tmpdocID + 1; sSchK1RntID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
        end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg1bID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL140 ) and IsChecked(F1116[i].COMPNX))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg1bID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg2aID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL52 ) and (F1116[i].L2['a'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg2aID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg2bID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL53 ) and (F1116[i].L2['b'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg2bID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg2cID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL54 ) and (F1116[i].L2['c'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg2cID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sCarBkID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL19 ) and (F1116[i].L10 > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sCarBkID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg3baID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL55 ) and (F1116[i].L3B['a'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg3baID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg3bbID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL56 ) and (F1116[i].L3B['b'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg3bbID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116);
		For i := 1 to c do
			begin
				sFg3bcID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL57 ) and (F1116[i].L3B['c'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg3bcID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg1bAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL140 ) and IsChecked(F1116AMT[i].COMPNX))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg1bAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg2aAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL52 ) and (F1116AMT[i].L2['a'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg2aAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg2bAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL53 ) and (F1116AMT[i].L2['b'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg2bAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg2cAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL54 ) and (F1116AMT[i].L2['c'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg2cAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg3baAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL55 ) and (F1116AMT[i].L3B['a'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg3baAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg3bbAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL56 ) and (F1116AMT[i].L3B['b'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg3bbAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sFg3bcAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL57 ) and (F1116AMT[i].L3B['c'] > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sFg3bcAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		c := numCopies(F1116AMT);
		For i := 1 to c do
			begin
				sCarBkAMTID[i] := "0";
				BEGIN IF ((TestFormIs( PartOfReturn, F1116[i]:FEXPL19 ) and (F1116AMT[i].L10 > 0 ))) THEN BEGIN tmpdocID := tmpdocID + 1; sCarBkAMTID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			end;
		BEGIN IF (TestFormIs( PartOfReturn, F221012:FEXPL22 )) THEN BEGIN tmpdocID := tmpdocID + 1; WaiverID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			BEGIN IF (TestFormIs( PartOfReturn, F3468:FEXPL102 )) THEN BEGIN tmpdocID := tmpdocID + 1; s34681ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			BEGIN IF (TestFormIs( PartOfReturn, F4136:FEXPL78 )) THEN BEGIN tmpdocID := tmpdocID + 1; s4136_3 := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			BEGIN IF (TestFormIs( PartOfReturn, F4136:FEXPL77 )) THEN BEGIN tmpdocID := tmpdocID + 1; s4136_1 := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			BEGIN IF (TestFormIs( PartOfReturn, F4136:FEXPL84 )) THEN BEGIN tmpdocID := tmpdocID + 1; s4136_4 := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			BEGIN IF (TestFormIs( PartOfReturn, F4136:FEXPL116 )) THEN BEGIN tmpdocID := tmpdocID + 1; s4136_2 := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
			BEGIN IF (TestFormIs( PartOfReturn, F4255:FEXPL150 )) THEN BEGIN tmpdocID := tmpdocID + 1; s4255id := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
            BEGIN IF (TestFormIs( PartOfReturn, FWLN15B:F4562a:FEXPL41 ) and (HasValue(FWLN15B:F4562a.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562a := PadLeft(tmpdocID, DocIDLen, "0"); END; END;

    		c := numCopies(FSCHC);
    		For copy := 1 to c do
    		begin
    			s4562c[copy] := "0";
    			i:= copy;
    			BEGIN IF (TestFormIs( PartOfReturn, FSchC[i]:F4562c:FEXPL33 ) and (HasValue(FSchC[i]:F4562c.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562c[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		end;
            c := numCopies(FSCHE1);
        	For copy := 1 to c do
        	begin
        		s4562e1[copy] := "0";
        		s4562e2[copy] := "0";
        		s4562e3[copy] := "0";
    			i := copy;
	    		BEGIN IF (TestFormIs( PartOfReturn, FSchE1[i]:F4562e1:FEXPL35 ) and (HasValue(FSchE1[i]:F4562e1.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562e1[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	    		BEGIN IF (TestFormIs( PartOfReturn, FSchE1[i]:F4562e2:FEXPL36 ) and (HasValue(FSchE1[i]:F4562e2.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562e2[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
	    		BEGIN IF (TestFormIs( PartOfReturn, FSchE1[i]:F4562e3:FEXPL48 ) and (HasValue(FSchE1[i]:F4562e3.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562e3[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    	    end;

    	    c := numCopies(SCHF);
    		For copy := 1 to c do
    		begin
    			s4562f[copy] := "0";
    			i:= copy;
    			BEGIN IF (TestFormIs( PartOfReturn, SchF[i]:F4562f:FEXPL37 ) and (HasValue(SchF[i]:F4562f.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562f[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		end;

    		c := numCopies(F4835);
    		For copy := 1 to c do
    		begin
    			s4562r[copy] := "0";
    			i:= copy;
    			BEGIN IF (TestFormIs( PartOfReturn, F4835[i]:F4562r:FEXPL39 ) and (HasValue(F4835[i]:F4562r.L17))) THEN BEGIN tmpdocID := tmpdocID + 1; s4562r[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
    		end;
            c := numCopies(F6252);
   			For i := 1 to c do
   			begin
   				s62521ID[i] := "0";
   				BEGIN IF (TestFormIs( PartOfReturn, F6252[i]:FEXPL32 ) and (F6252[i].L29E = "X")) THEN BEGIN tmpdocID := tmpdocID + 1; s62521ID[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			end;
   			BEGIN IF (TestFormIs( PartOfReturn, F6478:FEXPL114 )) THEN BEGIN tmpdocID := tmpdocID + 1; s64781ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			BEGIN IF (TestFormIs( PartOfReturn, F6765:FEXPL107 )) THEN BEGIN tmpdocID := tmpdocID + 1; s67651ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			BEGIN IF (TestFormIs( PartOfReturn, F6765P2:FEXPL94 )) THEN BEGIN tmpdocID := tmpdocID + 1; s67652ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
           	c := numCopies(F8824);
   			For i := 1 to c do
   			begin
   				s88241[i] := "0";
   				BEGIN IF (TestFormIs( PartOfReturn, F8824[i]:FEXPL46 )) THEN BEGIN tmpdocID := tmpdocID + 1; s88241[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			end;
            c := numCopies(F8824);
   			For i := 1 to c do
   			begin
   				s88242[i] := "0";
   				BEGIN IF ((TestFormIs( PartOfReturn, F8824[i]:FEXPL109 ) or TestFormIs( PartOfReturn, F8824[i]:FEXPL110 ))) THEN BEGIN tmpdocID := tmpdocID + 1; s88242[i] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			end;
   			c := numCopies(FSCHC);
   			For copy := 1 to c do
   			begin
 				s88291[copy] := "0";
				i:= copy;
   				BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:F8829:FEXPL126 )) THEN BEGIN tmpdocID := tmpdocID + 1; s88291[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			end;
   			c := numCopies(FSCHC);
   			For copy:= 1 to c do
   			begin
     			s88293[copy] := "0";
				i:= copy;
   				BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:F8829:FEXPL128 )) THEN BEGIN tmpdocID := tmpdocID + 1; s88293[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			end;
   			c := numCopies(FSCHC);
   			For copy := 1 to c do
   			begin
     			s88292[copy] := "0";
				i:= copy;
   				BEGIN IF (TestFormIs( PartOfReturn, FSCHC[i]:F8829:FEXPL127 )) THEN BEGIN tmpdocID := tmpdocID + 1; s88292[copy] := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
   			end;
                BEGIN IF ((F1041P12.L15A <> 0) and ( F4684ID[1] < 0 )) THEN BEGIN tmpdocID := tmpdocID + 1; sDedOthID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
		BEGIN IF (((isChecked(FINFOWKS.EFWYES)) and (FINFOWKS.BDA > 0))) THEN BEGIN tmpdocID := tmpdocID + 1; PAYMENT_ID := PadLeft(tmpdocID, DocIDLen, "0"); END; END;
		IF IsChecked(FEFHDSUM.AMDMODE) THEN
		BEGIN
			DLTCt := LastIndex(PDFATTCH, FEFHDSUM); IF (DLTCt > 0) THEN BEGIN FOR i := 1 to DLTCt DO BEGIN IF (FEFHDSUM.RTNMODE[i] = 3) and HasValue(FEFHDSUM.ATTDESC[i]) and HasValue(FEFHDSUM.FILENAME[i]) THEN BEGIN tmpdocID := tmpdocID + 1; hBinCt := hBinCt + 1; BinAttID[i] := tmpdocID; END; END; END;
		END
		ELSE
		BEGIN
			DLTCt := LastIndex(PDFATTCH, FEFHDSUM); IF (DLTCt > 0) THEN BEGIN FOR i := 1 to DLTCt DO BEGIN IF (FEFHDSUM.RTNMODE[i] = 0) and HasValue(FEFHDSUM.ATTDESC[i]) and HasValue(FEFHDSUM.FILENAME[i]) THEN BEGIN tmpdocID := tmpdocID + 1; hBinCt := hBinCt + 1; BinAttID[i] := tmpdocID; END; END; END;
		END;
	END;
	IF (F7004ID > 0) THEN F7004ID := PadLeft(F7004ID, DocIDLen, "0");
	IF (OthTaxYearID > 0) THEN OthTaxYearID := PadLeft(OthTaxYearID, DocIDLen, "0");
	IF (hBinCt > 0) THEN hBinCt := PadLeft(hBinCt, DocIDLen, "0");
	IF (F1041ID > 0) THEN F1041ID := PadLeft(F1041ID, DocIDLen, "0");
    IF (SchCID[1] > 0) THEN SchCID[1] := PadLeft(SchCID[1], DocIDLen, "0");
    IF (SchEID > 0) THEN SchEID := PadLeft(SchEID, DocIDLen, "0");
    IF (SchFID[1] > 0) THEN SchFID[1] := PadLeft(SchFID[1], DocIDLen, "0");
    IF (fifSchD > 0) THEN fifSchD := PadLeft(fifSchD, DocIDLen, "0");
    IF (fifschi > 0) THEN fifschi := PadLeft(fifschi, DocIDLen, "0");
    IF (fifschj > 0) THEN fifschj := PadLeft(fifschj, DocIDLen, "0");
    IF (FSchK1ID[1] > 0) THEN FSchK1ID[1] := PadLeft(FSchK1ID[1], DocIDLen, "0");
    IF (F1116ID[1] > 0) THEN F1116ID[1] := PadLeft(F1116ID[1], DocIDLen, "0");
    IF (F1116AMTID[1] > 0) THEN F1116AMTID[1] := PadLeft(F1116AMTID[1], DocIDLen, "0");
    IF (F3115ID > 0) THEN F3115ID := PadLeft(F3115ID, DocIDLen, "0");

	IF (F3468ID > 0) THEN F3468ID := PadLeft(F3468ID, DocIDLen, "0");
    IF (F3800ID > 0) THEN F3800ID := PadLeft(F3800ID, DocIDLen, "0");
    IF (F4136ID > 0) THEN F4136ID := PadLeft(F4136ID, DocIDLen, "0");
    IF (F4255ID > 0) THEN F4255ID := PadLeft(F4255ID, DocIDLen, "0");
    IF (F4684ID[1] > 0) THEN F4684ID[1] := PadLeft(F4684ID[1], DocIDLen, "0");
    IF (F4952ID > 0) THEN F4952ID := PadLeft(F4952ID, DocIDLen, "0");
    IF (F5884ID > 0) THEN F5884ID := PadLeft(F5884ID, DocIDLen, "0");
    IF (F6478ID > 0) THEN F6478ID := PadLeft(F6478ID, DocIDLen, "0");
    IF (F6765ID > 0) THEN F6765ID := PadLeft(F6765ID, DocIDLen, "0");
    IF (F8586ID > 0) THEN F8586ID := PadLeft(F8586ID, DocIDLen, "0");
    IF (F8594ID[1] > 0) THEN F8594ID[1] := PadLeft(F8594ID[1], DocIDLen, "0");
    IF (F8801ID > 0) THEN F8801ID := PadLeft(F8801ID, DocIDLen, "0");
    IF (F8835ID > 0) THEN F8835ID := PadLeft(F8835ID, DocIDLen, "0");
    IF (F8881ID > 0) THEN F8881ID := PadLeft(F8881ID, DocIDLen, "0");
    IF (F8910ID[1] > 0) THEN F8910ID[1] := PadLeft(F8910ID[1], DocIDLen, "0");
    IF (sAmendedID > 0) THEN sAmendedID := PadLeft(sAmendedID, DocIDLen, "0");
    IF (sDedOthID > 0) THEN sDedOthID := PadLeft(sDedOthID, DocIDLen, "0");
    IF (fifL24ID > 0) THEN fifL24ID := PadLeft(fifL24ID, DocIDLen, "0");
    IF (sGSTID > 0) THEN sGSTID := PadLeft(sGSTID, DocIDLen, "0");

    IF (sGrantID > 0) THEN sGrantID := PadLeft(sGrantID, DocIDLen, "0");
    IF (sOIL5ID > 0) THEN sOIL5ID := PadLeft(sOIL5ID, DocIDLen, "0");
    IF (sPoolID > 0) THEN sPoolID := PadLeft(sPoolID, DocIDLen, "0");
    IF (sTaxExmptID > 0) THEN sTaxExmptID := PadLeft(sTaxExmptID, DocIDLen, "0");
    IF (sSchK1RntID[1] > 0) THEN sSchK1RntID[1] := PadLeft(sSchK1RntID[1], DocIDLen, "0");
    IF (s4255id > 0) THEN s4255id := PadLeft(s4255id, DocIDLen, "0");
	IF (PAYMENT_ID > 0) THEN PAYMENT_ID := PadLeft(PAYMENT_ID, DocIDLen, "0");
	TotDocCt := tmpdocID;
	TotDocCt := PadLeft(TotDocCt, DocIDLen, "0");
	xsiLoc := "http://www.irs.gov/efile";

	If IsChecked(FEFHDSUM.EXTMODE) THEN
	Begin
		Path := "\\plnfs01\source\Tools\DBoard\Extracted\TY14\CommonExtensions\1120XML\2014v3.0\Extensions\7004\Return7004.xsd";
		Version := "2014v3.0";
	End else
	Begin

		Path := "\\plnfs01\source\Tools\DBoard\Extracted\TY15\USFID\1120XML\efile1041_2015v2.0_09-09-15\2015v2.0\EstateTrustIncomeTax\1041\Return1041.xsd";
		Version := "2015v2.0";
	End;
	WithNewTag ( "Return" ) DO
	BEGIN
	    SETATTRIBUTE ("returnVersion", Version);

 		SETATTRIBUTE("xmlns", xsiLoc);

 		SETATTRIBUTE("xmlns:efile", xsiLoc);

 		SETATTRIBUTE("xsi:schemaLocation", concat(xsiLoc, " ", Path));

 		SETATTRIBUTE("xmlns:xsi","http://www.w3.org/2001/XMLSchema-instance");
		If IsChecked(FEFHDSUM.EXTMODE) THEN
		Begin

			TotDocCtExt := tmpdocID;
			TotDocCtExt := PadLeft(TotDocCtExt, DocIDLen, "0");

			HeaderOutput();

			WithNewTag ( "ReturnData" ) DO
			BEGIN
		    	SETATTRIBUTE ("documentCnt", TotDocCtExt );

				Form7004Output(F7004ID);
				IF (length(OthTaxYearID) > 1) THEN ShortTaxYearExplStmtOutput(OthTaxYearID);
				IF (FPmtID > 0) THEN PaymentRecordOutput(PadLeft(FPmtID, DocIDLen, "0"));
				DLTCt := LastIndex(PDFATTCH, FEFHDSUM); FOR i := 1 TO DLTCt DO BEGIN IF (FEFHDSUM.RTNMODE[i] = 1) and HasValue(FEFHDSUM.ATTDESC[i]) and HasValue(FEFHDSUM.FILENAME[i]) THEN BEGIN IF (BinAttID[i] > 0) THEN BinAttID[i] := PadLeft(BinAttID[i], DocIDLen, "0"); BinaryAttachmentOutput(i, BinAttID[i]); END; END;
	    	END;
	    End else
	    Begin
	    	FIF_HeaderOutput();

			WithNewTag ( "ReturnData" ) DO
			BEGIN
		    	SETATTRIBUTE ("documentCnt", TotDocCt);

	    		IRS1041Output(n);

	    		IF (fifSchD > 0) THEN IRS1041ScheduleDOutput(PadLeft(fifSchD, DocIDLen, "0"));
	    		IF (fifSchI > 0) THEN IRS1041ScheduleIOutput(PadLeft(fifSchI, DocIDLen, "0"));
	    		IF (fifSchJ > 0) THEN IRS1041ScheduleJOutput(PadLeft(fifSchJ, DocIDLen, "0"));
				FrmCt := ArraySize(fSchk1ID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, FSchK1[i] )) THEN BEGIN IF (fSchk1ID[i] > 0) THEN fSchk1ID[i] := PadLeft(fSchk1ID[i], DocIDLen, "0"); IRS1041ScheduleK1Output(i, fSchk1ID[i]); END; END;
	    		FrmCt := ArraySize(SchCID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i] ) THEN BEGIN IF (SchCID[i] > 0) THEN SchCID[i] := PadLeft(SchCID[i], DocIDLen, "0"); IRS1040ScheduleCOutput(i, SchCID[i]); END; END;
	    		IF (SchEID > 0) THEN IRS1040ScheduleEOutput(PadLeft(SchEID, DocIDLen, "0"));

	    		FrmCt := ArraySize(SchFID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, SCHF[i] ) THEN BEGIN IF (SchFID[i] > 0) THEN SchFID[i] := PadLeft(SchFID[i], DocIDLen, "0"); IRS1040ScheduleFOutput(i, SchFID[i]); END; END;
				FrmCt := ArraySize(F1116ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F1116[i] ) THEN BEGIN IF (F1116ID[i] > 0) THEN F1116ID[i] := PadLeft(F1116ID[i], DocIDLen, "0"); IRS1116Output(i, F1116ID[i]); END; END;
				IF (F2210ID > 0) THEN IRS2210Output(PadLeft(F2210ID, DocIDLen, "0"));
					IF (F3468ID > 0) THEN Form3468Output(PadLeft(F3468ID, DocIDLen, "0"));
				IF (F3800ID > 0) THEN Form3800Output(PadLeft(F3800ID, DocIDLen, "0"));
				IF (F4136ID > 0) THEN Form4136Output(PadLeft(F4136ID, DocIDLen, "0"));
				IF (F4255ID > 0) THEN Form4255Output(PadLeft(F4255ID, DocIDLen, "0"));

				IF (F4562AID > 0) THEN Form4562AOutput(PadLeft(F4562AID, DocIDLen, "0"));

				FrmCt := ArraySize(F4562cID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:F4562C ) THEN BEGIN IF (F4562cID[i] > 0) THEN F4562cID[i] := PadLeft(F4562cID[i], DocIDLen, "0"); Form4562COutput(i, F4562cID[i]); END; END;

				copyCount := numCopies(FSCHE1);
				for i := 1 to copyCount do
					if TestFormIs (PartofReturn, FSchE1[i]:F4562e1) then
						Form4562E1Output(i, F4562e1ID[i]);

				copyCount := numCopies(FSCHE1);
				for i := 1 to copyCount do
					if TestFormIs (PartofReturn, FSchE1[i]:F4562e2) then
						Form4562E2Output(i, F4562e2ID[i]);

				copyCount := numCopies(FSCHE1);
				for i := 1 to copyCount do
					if TestFormIs (PartofReturn, FSchE1[i]:F4562e3) then
						Form4562E3Output(i, F4562e3ID[i]);

				FrmCt := ArraySize(F4562fID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, SCHF[i]:F4562f ) THEN BEGIN IF (F4562fID[i] > 0) THEN F4562fID[i] := PadLeft(F4562fID[i], DocIDLen, "0"); Form4562FOutput(i, F4562fID[i]); END; END;

				FrmCt := ArraySize(F4562rID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F4835[i]:F4562R ) THEN BEGIN IF (F4562rID[i] > 0) THEN F4562rID[i] := PadLeft(F4562rID[i], DocIDLen, "0"); Form4562ROutput(i, F4562rID[i]); END; END;
				FrmCt := ArraySize(F4684ID1); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F4684P1[1] ) THEN BEGIN IF (F4684ID1[i] > 0) THEN F4684ID1[i] := PadLeft(F4684ID1[i], DocIDLen, "0"); IRS4684Output(i, F4684ID1[i]); END; END;
				FrmCt := ArraySize(F4684ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F4684P2[1] ) THEN BEGIN IF (F4684ID[i] > 0) THEN F4684ID[i] := PadLeft(F4684ID[i], DocIDLen, "0"); Form4684Output(i, F4684ID[i]); END; END;
	    		IF (F4797ID > 0) THEN F4797Output(PadLeft(F4797ID, DocIDLen, "0"));
	    		IF (F4952ID > 0) THEN IRS4952Output(PadLeft(F4952ID, DocIDLen, "0"));
	    			IF (F5884ID > 0) THEN Form5884Output(PadLeft(F5884ID, DocIDLen, "0"));
	    		FrmCt := ArraySize(F6252ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F6252[i] ) THEN BEGIN IF (F6252ID[i] > 0) THEN F6252ID[i] := PadLeft(F6252ID[i], DocIDLen, "0"); Form6252Output(i, F6252ID[i]); END; END;
	    			IF (F6478ID > 0) THEN Form6478Output(PadLeft(F6478ID, DocIDLen, "0"));
	    			IF (F6765ID > 0) THEN Form6765Output(PadLeft(F6765ID, DocIDLen, "0"));
	    		IF (F8582ID > 0) THEN IRS8582Output(PadLeft(F8582ID, DocIDLen, "0"));
	    			IF (f8586ID > 0) THEN Form8586Output(PadLeft(f8586ID, DocIDLen, "0"));
	    		copyCount := numCopies(F8594);
				for i := 1 to copyCount do
	    			Form8594Output(i, F8594ID[i]);
					FrmCt := ArraySize(F8609AID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8609A[i] ) THEN BEGIN IF (F8609AID[i] > 0) THEN F8609AID[i] := PadLeft(F8609AID[i], DocIDLen, "0"); Form8609AOutput(i, F8609AID[i]); END; END;
	    		IF (F8801ID > 0) THEN IRS8801Output(PadLeft(F8801ID, DocIDLen, "0"));

	    		FrmCt := ArraySize(F8824ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8824[i] ) THEN BEGIN IF (F8824ID[i] > 0) THEN F8824ID[i] := PadLeft(F8824ID[i], DocIDLen, "0"); Form8824Output(i, F8824ID[i]); END; END;
		    		IF (F8826ID > 0) THEN Form8826Output(PadLeft(F8826ID, DocIDLen, "0"));
					FrmCt := ArraySize(F8829ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:F8829 ) THEN BEGIN IF (F8829ID[i] > 0) THEN F8829ID[i] := PadLeft(F8829ID[i], DocIDLen, "0"); IRS8829Output(i, F8829ID[i]); END; END;
					IF (F8835ID > 0) THEN Form8835Output(PadLeft(F8835ID, DocIDLen, "0"));
					IF (F8844ID > 0) THEN Form8844Output(PadLeft(F8844ID, DocIDLen, "0"));
					IF (F8845ID > 0) THEN Form8845Output(PadLeft(F8845ID, DocIDLen, "0"));
					IF (F8846ID > 0) THEN Form8846Output(PadLeft(F8846ID, DocIDLen, "0"));
					IF (F8881ID > 0) THEN Form8881Output(PadLeft(F8881ID, DocIDLen, "0"));
				IF (F8903ID > 0) THEN Form8903Output(PadLeft(F8903ID, DocIDLen, "0"));
					FrmCt := ArraySize(F8910ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8910[i] ) THEN BEGIN IF (F8910ID[i] > 0) THEN F8910ID[i] := PadLeft(F8910ID[i], DocIDLen, "0"); Form8910Output(i, F8910ID[i]); END; END;
				IF (F8941ID > 0) THEN Form8941Output(PadLeft(F8941ID, DocIDLen, "0"));
	    		IF (F8949ID > 0) THEN Form8949Output(PadLeft(F8949ID, DocIDLen, "0"));

				IF (F8960ID > 0) THEN irs8960Output(PadLeft(F8960ID, DocIDLen, "0"));
        IF (length(fifL24ID) > 1) THEN OtherWithholdingStatementOutput(fifL24ID);
		IF (length(F168ELEC) > 1) THEN SpclDeprecAllwncElectOutStmtOutput(F168ELEC);
		c := numCopies(FSCHC);
       	for i := 1 to c do
       	BEGIN
       		FrmCt := ArraySize(sSchC2); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:FEXPL09 ) THEN BEGIN IF (sSchC2[i] > 0) THEN sSchC2[i] := PadLeft(sSchC2[i], DocIDLen, "0"); ChangeInValuationsStatementOutput(i, sSchC2[i]); END; END;
       	END;
		c := numCopies(FSCHC);
       	for i := 1 to c do
       	BEGIN
       		FrmCt := ArraySize(sSchC1); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:FEXPL08 ) THEN BEGIN IF (sSchC1[i] > 0) THEN sSchC1[i] := PadLeft(sSchC1[i], DocIDLen, "0"); OtherMethodUsedToValueClosingInventoryStatementOutput(i, sSchC1[i]); END; END;
       	END;
		c := numCopies(SCHF);
       	For i := 1 to c do
       	BEGIN
       		FrmCt := ArraySize(sSchF2); FOR i := 1 TO FrmCt DO BEGIN IF (hasValue(schF[i].l7at[1] )) THEN BEGIN IF (sSchF2[i] > 0) THEN sSchF2[i] := PadLeft(sSchF2[i], DocIDLen, "0"); CCCLoanDetailCashMethodStatementOutput(i, sSchF2[i]); END; END;
       	END;
        c := numCopies(SCHF);
       	For i := 1 to c do
       	BEGIN
       		FrmCt := ArraySize(sSchF3); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, FC451D4[1]) or hasValue(SCHF[i].L8CT[1])) THEN BEGIN IF (sSchF3[i] > 0) THEN sSchF3[i] := PadLeft(sSchF3[i], DocIDLen, "0"); PostponementOfCropInsuranceAndDisasterPaymentsStatementOutput(i, sSchF3[i]); END; END;
       	END;
		IF (length(sAmendedID) > 1) THEN AmendedReturnChangesStatementOutput(sAmendedID);
        IF (length(sGSTID) > 1) THEN EstateTaxDeductionWithIRDComputationStatementOutput(sGSTID);
        IF (length(sGrantID) > 1) THEN GrantorTypeTrustIncomeAndDeductionsStatementOutput(sGrantID);
        IF (length(sOIL5ID) > 1) THEN InterestPaidOnSellerProvidedFinancingStatementOutput(sOIL5ID);
		IF (length(sNOLDed) > 1) THEN NOLDeductionStatementOutput(sNOLDed);
        IF (length(sPoolID) > 1) THEN PooledIncomeFundStatementOutput(sPoolID);
        IF (length(sTaxExmptID) > 1) THEN TaxExemptExpenseAllocationStatementOutput(sTaxExmptID);
       	FrmCt := ArraySize(sSchK1DADID); FOR i := 1 TO FrmCt DO BEGIN IF (FWSCHK1.l5b + FWSCHK1.l5c + FWSCHK1.l5d + FWSCHK1.l6b + FWSCHK1.l6c + FWSCHK1.l6d + FWSCHK1.l7b + FWSCHK1.l7c + FWSCHK1.l7d + FWSCHK1.l8b + FWSCHK1.l8c + FWSCHK1.l8d > 0) THEN BEGIN IF (sSchK1DADID[i] > 0) THEN sSchK1DADID[i] := PadLeft(sSchK1DADID[i], DocIDLen, "0"); DirectlyApportionedDeductionsExplanationOutput(i, sSchK1DADID[i]); END; END;
        c := numCopies(FSCHK1);
       	For i := 1 to c do
       	BEGIN
       		FrmCt := ArraySize(sSchK1RntID); FOR i := 1 TO FrmCt DO BEGIN IF (HasValue(FSchK1[i].L7)) THEN BEGIN IF (sSchK1RntID[i] > 0) THEN sSchK1RntID[i] := PadLeft(sSchK1RntID[i], DocIDLen, "0"); NetRentalRealEstateIncomeExplanationOutput(i, sSchK1RntID[i]); END; END;
       	END;
        c := numCopies(F1116);
        AMTCt := numCopies(F1116AMT);
       	For i := 1 to c do
		begin
		  	FrmCt := ArraySize(sFg1bID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL140 ) and IsChecked(F1116[i].COMPNX)) THEN BEGIN IF (sFg1bID[i] > 0) THEN sFg1bID[i] := PadLeft(sFg1bID[i], DocIDLen, "0"); AltBasisCompensationSourceStmtLine1bOutput(i, sFg1bID[i]); END; END;
		end;
		For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sFg1bAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL140 ) and IsChecked(F1116AMT[i].COMPNX)) THEN BEGIN IF (sFg1bAMTID[i] > 0) THEN sFg1bAMTID[i] := PadLeft(sFg1bAMTID[i], DocIDLen, "0"); AltBasisCompensationSourceStmtLine1bOutput(i, sFg1bAMTID[i]); END; END;
		end;

       	For i := 1 to c do
       	begin
       		FrmCt := ArraySize(sFg2aID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL52 ) and (F1116[i].L2['a'] > 0 )) THEN BEGIN IF (sFg2aID[i] > 0) THEN sFg2aID[i] := PadLeft(sFg2aID[i], DocIDLen, "0"); ForeignIncmRelatedExpensesStmtLine2aOutput(i, sFg2aID[i]); END; END;
		end;
       	For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sFg2aAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL52 ) and (F1116AMT[i].L2['a'] > 0 )) THEN BEGIN IF (sFg2aAMTID[i] > 0) THEN sFg2aAMTID[i] := PadLeft(sFg2aAMTID[i], DocIDLen, "0"); ForeignIncmRelatedExpensesStmtLine2aOutput(i, sFg2aAMTID[i]); END; END;
		end;

       	For i := 1 to c do
		begin
			FrmCt := ArraySize(sFg2bID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL53 ) and (F1116[i].L2['b'] > 0 )) THEN BEGIN IF (sFg2bID[i] > 0) THEN sFg2bID[i] := PadLeft(sFg2bID[i], DocIDLen, "0"); ForeignIncmRelatedExpensesStmtLine2bOutput(i, sFg2bID[i]); END; END;
		end;
	   	For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sFg2bAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL53 ) and (F1116AMT[i].L2['b'] > 0 )) THEN BEGIN IF (sFg2bAMTID[i] > 0) THEN sFg2bAMTID[i] := PadLeft(sFg2bAMTID[i], DocIDLen, "0"); ForeignIncmRelatedExpensesStmtLine2bOutput(i, sFg2bAMTID[i]); END; END;
		end;

       	For i := 1 to c do
		begin
			FrmCt := ArraySize(sFg2cID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL54 ) and (F1116[i].L2['c'] > 0 )) THEN BEGIN IF (sFg2cID[i] > 0) THEN sFg2cID[i] := PadLeft(sFg2cID[i], DocIDLen, "0"); ForeignIncmRelatedExpensesStmtLine2cOutput(i, sFg2cID[i]); END; END;
		end;
       	For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sFg2cAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL54 ) and (F1116AMT[i].L2['c'] > 0 )) THEN BEGIN IF (sFg2cAMTID[i] > 0) THEN sFg2cAMTID[i] := PadLeft(sFg2cAMTID[i], DocIDLen, "0"); ForeignIncmRelatedExpensesStmtLine2cOutput(i, sFg2cAMTID[i]); END; END;
		end;

       	For i := 1 to c do
		begin
			FrmCt := ArraySize(sCarBkID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL19 ) and (F1116[i].L10 > 0 )) THEN BEGIN IF (sCarBkID[i] > 0) THEN sCarBkID[i] := PadLeft(sCarBkID[i], DocIDLen, "0"); ForeignTaxCarrybackCompStmtOutput(i, sCarBkID[i]); END; END;
		end;
       	For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sCarBkAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL19 ) and (F1116AMT[i].L10 > 0 )) THEN BEGIN IF (sCarBkAMTID[i] > 0) THEN sCarBkAMTID[i] := PadLeft(sCarBkAMTID[i], DocIDLen, "0"); ForeignTaxCarrybackCompStmtOutput(i, sCarBkAMTID[i]); END; END;
		end;

       	For i := 1 to c do
       	begin
       		FrmCt := ArraySize(sFg3baID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL55 ) and (F1116[i].L3B['a'] > 0 )) THEN BEGIN IF (sFg3baID[i] > 0) THEN sFg3baID[i] := PadLeft(sFg3baID[i], DocIDLen, "0"); OtherDeductionsNotRelatedStmtL3baOutput(i, sFg3baID[i]); END; END;
		end;
       	For i := 1 to AMTCt do
		begin
		 	FrmCt := ArraySize(sFg3baAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL55 ) and (F1116AMT[i].L3B['a'] > 0 )) THEN BEGIN IF (sFg3baAMTID[i] > 0) THEN sFg3baAMTID[i] := PadLeft(sFg3baAMTID[i], DocIDLen, "0"); OtherDeductionsNotRelatedStmtL3baOutput(i, sFg3baAMTID[i]); END; END;
		end;

       	For i := 1 to c do
		begin
	    	FrmCt := ArraySize(sFg3bbID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL56 ) and (F1116[i].L3B['b'] > 0 )) THEN BEGIN IF (sFg3bbID[i] > 0) THEN sFg3bbID[i] := PadLeft(sFg3bbID[i], DocIDLen, "0"); OtherDeductionsNotRelatedStmtL3bbOutput(i, sFg3bbID[i]); END; END;
		end;
	   	For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sFg3bbAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL56 ) and (F1116AMT[i].L3B['b'] > 0 )) THEN BEGIN IF (sFg3bbAMTID[i] > 0) THEN sFg3bbAMTID[i] := PadLeft(sFg3bbAMTID[i], DocIDLen, "0"); OtherDeductionsNotRelatedStmtL3bbOutput(i, sFg3bbAMTID[i]); END; END;
		end;

       	For i := 1 to c do
		begin
			FrmCt := ArraySize(sFg3bcID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL57 ) and (F1116[i].L3B['c'] > 0 )) THEN BEGIN IF (sFg3bcID[i] > 0) THEN sFg3bcID[i] := PadLeft(sFg3bcID[i], DocIDLen, "0"); OtherDeductionsNotRelatedStmtL3bcOutput(i, sFg3bcID[i]); END; END;
		end;
		For i := 1 to AMTCt do
		begin
			FrmCt := ArraySize(sFg3bcAMTID); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F1116[i]:FEXPL57 ) and (F1116AMT[i].L3B['c'] > 0 )) THEN BEGIN IF (sFg3bcAMTID[i] > 0) THEN sFg3bcAMTID[i] := PadLeft(sFg3bcAMTID[i], DocIDLen, "0"); OtherDeductionsNotRelatedStmtL3bcOutput(i, sFg3bcAMTID[i]); END; END;
		end;
        IF (length(WaiverID) > 1) THEN WaiverExplanationStatementOutput(WaiverID);
        		IF (length(s34681ID) > 1) THEN RehabilitationCreditClaimedInPriorYearExplanationOutput(s34681ID);
            IF (length(s4136_3) > 1) THEN EvidenceOfDyedDieselFuelSoldStatementOutput(s4136_3);
            IF (length(s4136_1) > 1) THEN EvidenceOfDyedDieselFuelStatementOutput(s4136_1);
            IF (length(s4136_4) > 1) THEN EvidenceOfDyedKeroseneSoldStatementOutput(s4136_4);
            IF (length(s4136_2) > 1) THEN EvidenceOfDyedKeroseneStatementOutput(s4136_2);
            IF (length(s4255id) > 1) THEN RecaptureQualifyingTherapeuticDiscoveryProjectCreditStmtOutput(s4255id);
            IF (length(s4562a) > 1) THEN Section168f14562a(s4562a);

            c := numCopies(FSchC);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s4562c); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSchC[i]:F4562c:FEXPL33 ) and (HasValue(FSchC[i]:F4562c.L17)) THEN BEGIN IF (s4562c[i] > 0) THEN s4562c[i] := PadLeft(s4562c[i], DocIDLen, "0"); Section168f14562c(i, s4562c[i]); END; END;
	       	end;

	       	c := numCopies(FSchE1);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s4562e1); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSchE1[i]:F4562e1:FEXPL35 ) and (HasValue(FSchE1[i]:F4562e1.L17)) THEN BEGIN IF (s4562e1[i] > 0) THEN s4562e1[i] := PadLeft(s4562e1[i], DocIDLen, "0"); Section168f14562e1(i, s4562e1[i]); END; END;
	       		FrmCt := ArraySize(s4562e2); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSchE1[i]:F4562e2:FEXPL36 ) and (HasValue(FSchE1[i]:F4562e2.L17)) THEN BEGIN IF (s4562e2[i] > 0) THEN s4562e2[i] := PadLeft(s4562e2[i], DocIDLen, "0"); Section168f14562e2(i, s4562e2[i]); END; END;
	       		FrmCt := ArraySize(s4562e3); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSchE1[i]:F4562e3:FEXPL48 ) and (HasValue(FSchE1[i]:F4562e3.L17)) THEN BEGIN IF (s4562e3[i] > 0) THEN s4562e3[i] := PadLeft(s4562e3[i], DocIDLen, "0"); Section168f14562e3(i, s4562e3[i]); END; END;
	       	end;

	       	c := numCopies(SchF);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s4562f); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, SchF[i]:F4562f:FEXPL37 ) and (HasValue(SchF[i]:F4562f.L17)) THEN BEGIN IF (s4562f[i] > 0) THEN s4562f[i] := PadLeft(s4562f[i], DocIDLen, "0"); Section168f14562f(i, s4562f[i]); END; END;
	       	end;

	       	c := numCopies(F4835);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s4562r); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F4835[i]:F4562r:FEXPL39 ) and (HasValue(F4835[i]:F4562r.L17)) THEN BEGIN IF (s4562r[i] > 0) THEN s4562r[i] := PadLeft(s4562r[i], DocIDLen, "0"); Section168f14562r(i, s4562r[i]); END; END;
	       	end;
            c := numCopies(F6252);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s62521ID); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F6252[i]:FEXPL32 ) and (F6252[i].L29E = "X") THEN BEGIN IF (s62521ID[i] > 0) THEN s62521ID[i] := PadLeft(s62521ID[i], DocIDLen, "0"); ExplanationOfDisposNotToAvoidTaxStatementOutput(i, s62521ID[i]); END; END;
	       	end;
	       	IF (length(s64781ID) > 1) THEN SmallEthanolProducerCreditElectionOutput(s64781ID);
	       	if (TestFormIs( PartOfReturn, F6765:FEXPL107 )) then
	       	begin
	       		if (TestFormIs( PartOfReturn, F6765:FEXPL107 )) then
	       		begin
	       		end;
	       		if (TestFormIs( PartOfReturn, F6765P2:FEXPL94 )) then
	       		begin
	       		end;
	       	end;
	       	IF (length(s67651ID) > 1) THEN CapExpensesDedAmountsScheduleOutput(s67651ID);
	       	IF (length(s67652ID) > 1) THEN CapExpensesDedAmountsSchPage2Output(s67652ID);
	       	c := numCopies(F8824);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s88241); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, F8824[i]:FEXPL46 ) THEN BEGIN IF (s88241[i] > 0) THEN s88241[i] := PadLeft(s88241[i], DocIDLen, "0"); PrincipalPurposeOfRelatedPartyExchangeStatementOutput(i, s88241[i]); END; END;
	       	END;
            c := numCopies(F8824);
	       	For i := 1 to c do
	       	BEGIN
	       		FrmCt := ArraySize(s88242); FOR i := 1 TO FrmCt DO BEGIN IF (TestFormIs( PartOfReturn, F8824[i]:FEXPL109 ) or TestFormIs( PartOfReturn, F8824[i]:FEXPL110 )) THEN BEGIN IF (s88242[i] > 0) THEN s88242[i] := PadLeft(s88242[i], DocIDLen, "0"); RealizedAndRecognizedGainInMultiAssetExchangesStmtOutput(i, s88242[i]); END; END;
	       	END;
       		FrmCt := ArraySize(s88291); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:F8829:FEXPL126 ) THEN BEGIN IF (s88291[i] > 0) THEN s88291[i] := PadLeft(s88291[i], DocIDLen, "0"); CostOrOtherBasisOfAdditionsAndImprovementsScheduleOutput(i, s88291[i]); END; END;
       		FrmCt := ArraySize(s88293); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:F8829:FEXPL128 ) THEN BEGIN IF (s88293[i] > 0) THEN s88293[i] := PadLeft(s88293[i], DocIDLen, "0"); DepreciationComputationScheduleOutput(i, s88293[i]); END; END;
   	 		FrmCt := ArraySize(s88292); FOR i := 1 TO FrmCt DO BEGIN IF TestFormIs( PartOfReturn, FSCHC[i]:F8829:FEXPL127 ) THEN BEGIN IF (s88292[i] > 0) THEN s88292[i] := PadLeft(s88292[i], DocIDLen, "0"); SpecialComputationForCertainDaycareFacilitiesStatementOutput(i, s88292[i]); END; END;
       	 	IF (length(sDedOthID) > 1) THEN DeductionsOtherCategoriesScheduleOutput(sDedOthID);
				if (((isChecked(FINFOWKS.EFWYES)) and (FINFOWKS.BDA > 0))) then
					PaymentRecordOutput(PAYMENT_ID);

				if IsChecked(FEFHDSUM.AMDMODE) THEN
				BEGIN
					DLTCt := LastIndex(PDFATTCH, FEFHDSUM); FOR i := 1 TO DLTCt DO BEGIN IF (FEFHDSUM.RTNMODE[i] = 3) and HasValue(FEFHDSUM.ATTDESC[i]) and HasValue(FEFHDSUM.FILENAME[i]) THEN BEGIN IF (BinAttID[i] > 0) THEN BinAttID[i] := PadLeft(BinAttID[i], DocIDLen, "0"); BinaryAttachmentOutput(i, BinAttID[i]); END; END;
				END
				else
				BEGIN
					DLTCt := LastIndex(PDFATTCH, FEFHDSUM); FOR i := 1 TO DLTCt DO BEGIN IF (FEFHDSUM.RTNMODE[i] = 0) and HasValue(FEFHDSUM.ATTDESC[i]) and HasValue(FEFHDSUM.FILENAME[i]) THEN BEGIN IF (BinAttID[i] > 0) THEN BinAttID[i] := PadLeft(BinAttID[i], DocIDLen, "0"); BinaryAttachmentOutput(i, BinAttID[i]); END; END;
				END;

	    	End;
		END;
  	End;
End;
