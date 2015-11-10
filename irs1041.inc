
XMLConverter S2015US1041	EFXML;
VAR

TotDocCt	: FText;
PROCEDURE IRS1040ScheduleEOutput( docid: ftext);

FORM Fsche2;

VAR
	DLTCt, FormCount			: Index;
	c, copy, i, j, x, y			: Integer;
	PSNameTag, PSNameValue,
	hTypeTag, hType,hNameSpc	: FText;

BEGIN
					case Fsche1[y].type[c] of
						1:
							begin
								hType := "SINGLE FAMILY RESIDENCE";
							end;
						2:
							begin
								hType := "MULTI-FAMILY RESIDENCE";
							end;
						3:
							begin
								hType := "VACATION/SHORT-TERM RENTAL";
							end;
						4:
							begin
								hType := "COMMERCIAL";
							end;
						5:
							begin
								hType := "LAND";
							end;
						6:
							begin
								hType := "ROYALTIES";
							end;
						7:
							begin
								hType := "SELF-RENTAL";
							end;
						8:
							begin
								hType := FormatXMLShortDescription(Fsche1[y].L1A[c]) ;
								hTypeTag := "OtherPropertyTypeDesc" ;
							end;
					end;
END;