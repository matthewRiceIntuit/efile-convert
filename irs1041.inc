
XMLConverter S2015US1041	EFXML;
VAR

TotDocCt	: FText;
PROCEDURE IRS1040ScheduleEOutput( docid: ftext);

FORM Fsche2;



BEGIN
					case Fsche1[y].type[c]  of
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

					end;
END;