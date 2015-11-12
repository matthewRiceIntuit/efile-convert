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