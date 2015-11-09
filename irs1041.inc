
XMLConverter S2015US1041	EFXML;
VAR

TotDocCt	: FText;

PROCEDURE IRS1041Output(docID : FText);

FORM F1041P12;


BEGIN
	WITHNEWTAG( "IRS1041" ) DO
	BEGIN
		SETATTRIBUTE( "documentId", F1041ID );
		SETATTRIBUTE( "softwareId", "15000271" );

        OUTPUTVALUE( "InterestIncomeAmt", L1 );
        OUTPUTVALUE( "OrdinaryDividendsAmt", L2 );
        OUTPUTVALUE( "QualifiedDividendsAmt", L2B );
        OUTPUTVALUE( "NetSTCapitalGainAmt", L3 );
        OUTPUTVALUE( "NetLTCapitalGainAmt", L4A );
        OUTPUTVALUE( "Collectibles28PercentGainAmt", L4B );
        OUTPUTVALUE( "UnrecapturedSection1250GainAmt", L4C );
        OUTPUTVALUE( "OtherPortfolioIncomeLossAmt", L5 );
        OUTPUTVALUE( "OrdinaryBusinessIncomeAmt", L6 );
        OUTPUTVALUE( "TotalOtherIncomeAmt", L8 );
        OUTPUTVALUE( "TotalIncomeAmt", L9 );

  	End;
End;
