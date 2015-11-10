
XMLConverter S2015US1041	EFXML;
VAR

TotDocCt	: FText;
PROCEDURE IRS1040ScheduleCOutput(copy:FInteger; docid:ftext);

FORM Fschc[copy];

VAR
	DLTCt	: Index;
	i		: Integer;

BEGIN

  if (TestFormIs( PartOfReturn, FSCHC[copy] )) then
  begin
	WITHNEWTAG( "IRS1040ScheduleC" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", SchCID[copy] );
		SETATTRIBUTE( "softwareId", "15000271" );
		OUTPUTVALUE( "ProprietorNm", FormatXMLPersonName(NAME) );
		OUTPUTVALUE( "SSN", FormatXMLSSN(EIN) );
		OUTPUTVALUE( "PrincipalBusinessActivityDesc", FormatXMLLineExplanation(A) );
		OUTPUTVALUE( "PrincipalBusinessActivityCd", FormatXMLBusinessActivityCode(B) );
		OUTPUTVALUE( "BusinessNameLine1Txt", FormatXMLBusinessNameLine1(C) );
		OUTPUTVALUE( "EIN", FormatXMLEIN(D) );

		WITHNEWTAG( "BusinessUSAddress" ) DO
	   BEGIN
			OUTPUTVALUE( "AddressLine1Txt", FormatXMLStreetAddress(EA) );
			OUTPUTVALUE( "CityNm", FormatXMLCity(CITY) );
		END;
		OUTPUTVALUE( "MethodOfAccountingCashInd", F1 );
		OUTPUTVALUE( "MethodOfAccountingAccrualInd", F2 );

	If IsChecked(F3) then
		WITHNEWTAG( "MethodOfAccountingOtherInd" ) DO
		BEGIN
			SETATTRIBUTE( "methodOfAccountingOtherDesc", FormatXMLShortDescription(FD) );
			OutputLiteral ("X");
		END;
		OUTPUTVALUE( "MaterialParticipationInCYInd", FormatXMLBoolean(LIY, LI) );
	If IsChecked(JX) then
		OUTPUTVALUE( "NewBusinessInCurrentYearInd", "X" );
		OUTPUTVALUE( "PaymentRqrFilingForm1099Ind", FormatXMLBoolean(F1099AY, A596) );
		OUTPUTVALUE( "RequiredForm1099FiledInd", FormatXMLBoolean(F1099BY, A598) );
		If IsChecked(GROSSB)then
		OUTPUTVALUE( "StatutoryEmployeeFromW2Ind", "X" );
		OUTPUTVALUE( "TotalGrossReceiptsAmt", L1 );
		OUTPUTVALUE( "ReturnsAndAllowancesAmt", L2 );
		OUTPUTVALUE( "NetGrossReceiptsAmt", L3 );
		OUTPUTVALUE( "GrossProfitAmt", L5 );
		OUTPUTVALUE( "OtherIncomeAmt", L6 );
		OUTPUTVALUE( "GrossIncomeAmt", L7 );
		OUTPUTVALUE( "AdvertisingAmt", L8 );

		OUTPUTVALUE( "CarAndTruckExpensesAmt", L9 );
		OUTPUTVALUE( "CommissionsAndFeesAmt", L10 );
		OUTPUTVALUE( "ContractLaborAmt", L11 );

		OUTPUTVALUE( "DepletionAmt", L12 );
		if (TestFormIs(PartOfReturn, Fschc[copy]:F4562C)) and (L13 > 0) then
		Begin

			WITHNEWTAG( "DeprecAndSect179ExpnsDedAmt" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", F4562cID[copy] );
				SETATTRIBUTE( "referenceDocumentName", "IRS4562" );
				OutputLiteral (L13);
			END;
		end
		else
			OUTPUTVALUE( "DeprecAndSect179ExpnsDedAmt", L13 );
		OUTPUTVALUE( "EmployeeBenefitProgramAmt", L14 );
		OUTPUTVALUE( "InsuranceAmt", L15 );
		OUTPUTVALUE( "MortgageInterestPaidBanksAmt", L16A );
		OUTPUTVALUE( "MortgageInterestPaidOtherAmt", L16B );
		OUTPUTVALUE( "LegalAndProfessionalServiceAmt", L17 );
		OUTPUTVALUE( "OfficeExpensesAmt", L18 );
		OUTPUTVALUE( "PensionProfitSharingPlansAmt", L19 );
		OUTPUTVALUE( "MachineryAndEquipmentRentAmt", L20A );
		OUTPUTVALUE( "OtherBusinessPropertyRentAmt", L20B );
		OUTPUTVALUE( "RepairsAndMaintenanceAmt", L21 );
		OUTPUTVALUE( "SuppliesAmt", L22 );
		OUTPUTVALUE( "TaxesAndLicensesAmt", L23 );
		OUTPUTVALUE( "TravelAmt", L24A );
		OUTPUTVALUE( "MealsAndEntertainmentAmt", L24B );
		OUTPUTVALUE( "UtilitiesAmt", L25 );
		OUTPUTVALUE( "WagesLessEmploymentCreditsAmt", L26 );
		OUTPUTVALUE( "TotalExpensesAmt", L28 );
		OUTPUTVALUE( "TentativeProfitOrLossAmt", L29 );

		if (l30 <> 0 ) THEN
			if (F8829ID[copy] <> 0 ) then
				begin
					WITHNEWTAG( "HomeBusinessExpenseAmt" ) DO
					BEGIN
						SETATTRIBUTE( "referenceDocumentId", F8829ID[copy] );
						SETATTRIBUTE( "referenceDocumentName", "IRS8829" );
						OutputLiteral(l30);
					END;
				end else
				begin
					OUTPUTVALUE("HomeBusinessExpenseAmt", l30);
				end;
		OUTPUTVALUE("TotalAreaOfHomeCnt", SQFOOT);
		OUTPUTVALUE("HomeBusinessUseSquareFeetCnt", HOME);
		if (L31<0)	Then
		WITHNEWTAG( "NetProfitOrLossAmt" ) DO
		BEGIN
			SETATTRIBUTE( "passiveActivityLossLiteralCd", "PAL" );
			SETATTRIBUTE( "passiveActivityLossAmt", L31  );
			OutputLiteral(L31);
		END;

		if(L31>0)or (L31=0)Then
		IF HasValue(L31) and (L31 = 0) THEN OutputValue("NetProfitOrLossAmt", "0") ELSE OutputValue("NetProfitOrLossAmt", L31);
		OUTPUTVALUE( "AllInvestmentIsAtRiskInd", L32A );
		OUTPUTVALUE( "ClosingInventoryCostMethodInd", G1 );
		OUTPUTVALUE( "LowerOfCostOrMarketMethodInd", G2 );

		if isChecked(G3)then
			if (TestFormIs(PartOfReturn, Fschc[copy]:FExpl08)) then
			Begin
				WITHNEWTAG( "OtherClosingInventoryMethodInd" ) DO
				BEGIN
					SETATTRIBUTE( "referenceDocumentId", sSchC1[copy] );
					SETATTRIBUTE( "referenceDocumentName", "OtherMethodUsedToValueClosingInventoryStatement" );
					OutputLiteral("X");
				END;
			end
			else
				OUTPUTVALUE("OtherClosingInventoryMethodInd", "X");
		if (TestFormIs(PartOfReturn, Fschc[copy]:FExpl09)) then
		Begin
			WITHNEWTAG( "ChangeInValuationsInd" ) DO
			BEGIN
				SETATTRIBUTE( "referenceDocumentId", sSchC2[copy]  );
				SETATTRIBUTE( "referenceDocumentName", "ChangeInValuationsStatement" );
				OutputLiteral("true");
			END;
		end
		else
			OUTPUTVALUE("ChangeInValuationsInd",  FormatXMLBoolean(HY, H));

		OUTPUTVALUE("BeginningOfYearInventoryAmt", L35);
		OUTPUTVALUE( "PurchasesLessPersonalItemsAmt", L36 );
		OUTPUTVALUE( "CostOfLaborAmt", L37 );
		OUTPUTVALUE( "MaterialsAndSuppliesAmt", L38 );
		OUTPUTVALUE( "OtherCostsAmt", L39 );
		OUTPUTVALUE( "TotalCostsAmt", L40 );
		OUTPUTVALUE( "EndOfYearInventoryAmt", L41 );
		OUTPUTVALUE( "CostOfGoodsSoldAmt", L42 );
		WITHNEWTAG( "AdditionalVehicleInfoGrp" ) DO
		BEGIN
			OUTPUTVALUE( "VehiclePlacedInServiceDt", FormatXMLDate(L43) );
			OUTPUTVALUE( "BusinessMilesCnt", L44A  );
			OUTPUTVALUE( "CommutingMilesCnt",  L44B  );
			OUTPUTVALUE( "OtherMilesCnt", L44C  );
			OUTPUTVALUE( "VehicleAvailableOffDutyHrsInd", FormatXMLBoolean(L46AY, L46A) );
			OUTPUTVALUE( "AnotherVehicleForPrsnlUseInd", FormatXMLBoolean(L45AY, L45A) );
			OUTPUTVALUE( "EvidenceToSupportDeductionInd", FormatXMLBoolean(L47AY, L47A) );
			OUTPUTVALUE( "EvidenceWrittenInd", FormatXMLBoolean(L47BY, L47B) );
		END;
		DLTCt := LastIndex( PARTV );
		FOR i := 1 TO DLTCt DO
		If  (l48A[i]<>0) THEN
		Begin
		WITHNEWTAG( "OtherExpenseDetail" ) DO
		BEGIN
			OUTPUTVALUE( "Desc", FormatXMLLineExplanation(L48T[i]) );
			OUTPUTVALUE( "Amt", L48A[i] );
		END;
		End;
		OUTPUTVALUE( "TotalOtherExpensesAmt", L48 );

	END;
  end;
END;
