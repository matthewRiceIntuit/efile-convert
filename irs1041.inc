
FUNCTION CountryCode(_country : FText) : FText;
VAR
	hCCode : FText;

BEGIN
    CASE UPPERCASE(_country) of
        "AFGHANISTAN"					   				: 	hCCode := "AF";
        "AKROTIRI"							: 	hCCode := "AX";
    END;

	CountryCode := hCCode;
END;
