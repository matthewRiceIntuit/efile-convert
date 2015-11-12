
XMLConverter S2015US1041	EFXML;
PROCEDURE IRS4952Output(docID : FText);


FORM FSCHJ;

VAR
	i,n			: Index;
	HBenTotal   :   Finteger;

BEGIN
		If (L14A[i] > ["A".."I"])and (L14D[i]<>0)Then
			Begin
                OUTPUTVALUE( "F1041K1OtherCd", L14A[i] );
                OUTPUTVALUE( "F1041K1OtherAmt", L14D[i] );
		    End;

		for i:=1 to 5 do
					OUTPUTVALUE( "DistributableNetIncomeAmt", L6[i] );


END;
