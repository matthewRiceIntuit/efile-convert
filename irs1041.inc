

PROCEDURE Form4136Output(docID : FText);

FORM F4136;

VAR
     LastOne	: Index;
     i		    : Integer;

BEGIN

    If IsChecked(SCHF[j]:FASSF[k].ENSDAY) and IsChecked(SCHF[j]:FASSF[k].ESPY) and (Substring(SCHF[j]:FASSF[k].DTPS,7,4) = 2015 ) Then
    Begin
            hElectOut := True;
            Break;
    End;
END;