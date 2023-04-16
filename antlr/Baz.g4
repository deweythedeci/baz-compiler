grammar Baz;

import BazLexer;

program: (funcblock | classblock | decl EOS)*; 

// function definition
funcblock: func EOS stmtlist end EOS;
func: rettype NAME OPAREN arg (COMMA arg)*? CPAREN;
arg: type NAME;
rettype: type | VOID;

// class definition
classblock: class EOS (decl EOS)* end EOS;
class: CLASS NAME;

// statements
stmt: decl
    | assign
    | callstmt
    | stmtblock
    | ifblock
    | whileblock
    | dowhileblock
    | forblock
    | return
    | break;

// declaration/assignment
decl: type variable arrdecl?
    | type variable ASSIGN exp;
arrdecl: (CBRACK exp OBRACK)+;
assign: exp (COMMA exp)* ASSIGN exp;

// function call
callstmt: exp;

// statement block
stmtblock: block EOS stmtlist end;

// if block
ifblock: if EOS stmtlist (elseif EOS stmtlist)* (else EOS stmtlist)? end;
if: IF OPAREN exp CPAREN;
elseif: ELSE IF OPAREN exp CPAREN;
else: ELSE;

// while block
whileblock: while EOS stmtlist end;
dowhileblock: dowhile EOS stmtlist end;
while: WHILE OPAREN exp CPAREN;
dowhile: DOWHILE OPAREN exp CPAREN;

// for block
forblock: for EOS stmtlist end;
for: FOR OPAREN stmt EOS stmt EOS stmt CPAREN;

// control statements
block: BLOCK;
break: BREAK;
end: END;
return: RETURN (exp (COMMA exp)*)?;

// lists
stmtlist: (stmt EOS)*;

// expressions
exp: exp OR exp
    | exp AND exp
    | exp BITAND exp
    | exp BITOR exp
    | exp BITXOR exp
    | exp EQUAL exp | exp NOTEQUAL exp
    | exp LESS exp | exp GREATER exp | exp LESSEQ exp | exp GREATEREQ exp
    | exp BITLSHIFT exp | exp BITRSHIFT
    | exp ADD exp | exp SUBTRACT exp
    | exp MULTIPLY exp | exp DIVIDE exp | exp MODULUS exp
    | ADD exp | SUBTRACT exp | NOT exp | BITNOT exp
    | OPAREN exp CPAREN
    | NAME OPAREN exp CPAREN | exp ACCESS exp | exp OBRACK exp CBRACK
    | OBRACE exp (COMMA exp)* CBRACE
    | literal
    | variable;
literal: boollit | charlit | intlit | reallit | stringlit;

// literals
boollit: FALSE | TRUE;
charlit: CHARLIT;
intlit: INTLIT;
reallit: REALLIT;
stringlit: STRINGLIT;
variable: NAME;

// types
type: BOOL | CHAR | INT | LONG | REAL | NAME | arraytype;
arraytype: basetype (OBRACK CBRACK)+;
basetype: BOOL | CHAR | INT | LONG | REAL | NAME;