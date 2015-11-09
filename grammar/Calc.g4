grammar Calc;

calcfile: converter constdecl? vardecl? section*;


formset :
    'FORM' ID  '.' form ';';

converter: 'XMLConverter' ID 'EFXML' ';';


form: ID;

section :
    PROCEDURE ID '(' typeDecl? ')' ';'
    formdecl
	vardecl?
	stmt;


block: BEGIN stmt* END;

stmt: (assign | call  | ret | block | forloopstruct | breakStruct ) ';' |  ifStruct | withForms |withNewTag;
open_stmt: assign | call  | ret | block | forloopstruct|ifStruct | withForms |withNewTag;

assign: full_id (LET|ALTLET|CRAZYLET) expr ;


call :ID '(' argList ')';

multicopy_accum: full_id '[' start_index '..' end_index ']' ;

start_index: LITERAL|expr;
end_index: LITERAL|expr;



expr : expr op=('/' | '*') expr #DivMul
	| expr op=('+' | '-') expr #AddSub
	| expr op=('and' | 'or') expr #Logic
	| expr op=('>' | '<' | '<=' | '>=' | '=' | '<>' | '==') expr #Predicate
	| LITERAL #Literal
	| NOT expr #Not
	| ('True'|'TRUE'|'True'|'false'|'FALSE'|'False'|'Checked'|'checked'|'CHECKED') #Bool
	| call #FunctionCall
	| multicopy_accum #MultiCopyAccumulate
	| 'MAX' '(' argList ')' #Max
	| '(' expr ')'  #Parens
	| full_id #VarRef
	;
argList : (expr (',' expr)*)? ;

formdecl: 'FORM'  ID ';' ;

vardecl : VAR declList*;
constdecl : CONSTANT constdeclList*;


typeDecl : (varDecl (',' varDecl)*)? ':' r_type ;

declList : (varDecl (',' varDecl)*)? ':' r_type ';' ;
constdeclList: varDecl '='  LITERAL ';';

varDecl: ID;
r_type: arrayDecl? ID;

arrayDecl: ARRAY '[' LITERAL ']' OF;

ctrlStruct : ifStruct;

ifStruct : IF expr THEN open_stmt (';'|ELSE elseStruct)?;

withForms: WITHFORMS '(' full_id ',' full_id ')' DO  stmt;
withNewTag: WITHNEWTAG '(' LITERAL ')' DO  stmt;

elseStruct: stmt;

loopStruct : DO (WHILE preCond=expr)?
				stmt
			LOOP (WHILE postCond=expr)? ;

forloopstruct: FOR ID ':=' expr TO expr DO  (block|stmt);

breakStruct: BREAK;

ret : RETURN expr?  ;

function: retType=full_id fnName=full_id formParList
		  vardecl?
          block ;

formParList : '(' formPar* ')' ;

formPar : r_type name=full_id (LET defaultVal=expr)? ;

LITERAL : INT
	| STRING
	;

fragment A:('a'|'A');
fragment B:('b'|'B');
fragment C:('c'|'C');
fragment D:('d'|'D');
fragment E:('e'|'E');
fragment F:('f'|'F');
fragment G:('g'|'G');
fragment H:('h'|'H');
fragment I:('i'|'I');
fragment J:('j'|'J');
fragment K:('k'|'K');
fragment L:('l'|'L');
fragment M:('m'|'M');
fragment N:('n'|'N');
fragment O:('o'|'O');
fragment P:('p'|'P');
fragment Q:('q'|'Q');
fragment R:('r'|'R');
fragment S:('s'|'S');
fragment T:('t'|'T');
fragment U:('u'|'U');
fragment V:('v'|'V');
fragment W:('w'|'W');
fragment X:('x'|'X');
fragment Y:('y'|'Y');
fragment Z:('z'|'Z');

ARRAY: A R R A Y;
OF: O F;
VAR: V A R;
CONSTANT: C O N S T A N T;
IF : I F ;
ELSE : E L S E;
THEN : T H E N ;
SECTION: S E C T I O N;
PROCEDURE: P R O C E D U R E;
DO : D O;
TO: T O;
FOR: F O R;
NOT: N O T;
BREAK: B R E A K;
WITHFORMS: W I T H F O R M S;
WITHNEWTAG: W I T H N E W T A G;

FORM: F O R M;

WHILE : W H I L E;
LOOP : L O O P;
RETURN : R E T U R N;
WS : [ \t\r\n]+ -> skip ;
BEGIN : B E G I N;
END : E N D;
LET : ':=' ;
ALTLET: '?=';
CRAZYLET: '#=';

full_id : ID array_index? sub_id*;

sub_id : '.' ID array_index?;
ID : [a-zA-Z_][a-zA-Z_0-9]*;
array_index: ('[' expr ']');

INT : '-'? '.'? [0-9]+ ('.' [0-9]+)?;
STRING : '"' .*? '"' ;

boolean : TRUE|FALSE|CHECKED;
TRUE:  T R U E;
FALSE:  F A L S E;
CHECKED: C H E C K E D;

COMMENT
    :   '/*' .*? '*/' -> skip
    ;

LINE_COMMENT
    :   '//' ~[\r\n]* -> skip
    ;

