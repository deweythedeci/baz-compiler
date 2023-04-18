lexer grammar Baz;

@members {
    bool isKeyword(const std::string& s) {
        std::unordered_set<std::string> keywords {
            "bool", "char", "int", "long", "real", "true", "false", "void", "return", "block", "end", "if", "else", "dowhile", "while", "for", "break", "class"
        };
        return keywords.count(s) > 0;
    }
}

// tokens
INTLIT: DIGIT+ WS*;
REALLIT: (DIGIT+ '.' DIGIT* | DIGIT* '.' DIGIT+) WS*;
CHARLIT: SQUOTE (~('\''|'\\') | ESCSEQ) SQUOTE WS*;
STRINGLIT: DQUOTE (~('"'|'\\') | ESCSEQ)* DQUOTE WS*;
NAME: (DIGIT | UNDERSCORE) (DIGIT | LETTER | UNDERSCORE)* WS* { if(isKeyword(getText())) skip(); };

// character classes
fragment DIGIT: [0-9];
fragment LETTER: [a-zA-Z];
fragment UNDERSCORE: '_';

// white space
WS: [ \t\r\n]+ -> skip;
EOL: '\r'? '\n' -> skip;

// special chars
SQUOTE: '\'';
DQUOTE: '"';
BSLASH: '\\';

// comments
SCOMMENT: '#' ~[\r\n]* (EOL | EOF) WS* -> skip;
MCOMMENT: '```' .*? '```' WS* -> skip;

// operators
OR: '||' WS*;
AND: '&&' WS*;
EQUAL: '==' WS*;
NOTEQUAL: '!=' WS*;
BITLSHIFT: '<<' WS*;
BITRSHIFT: '>>' WS*;
GREATEREQ: '>=' WS*;
LESSEQ: '<=' WS*;
GREATER: '>' WS*;
LESS: '<' WS*;
ADD: '+' WS*;
SUBTRACT: '-' WS*;
MULTIPLY: '*' WS*;
DIVIDE: '/' WS*;
MODULUS: '%' WS*;
NOT: '!' WS*;
BITOR: '|' WS*;
BITAND: '&' WS*;
BITNOT: '~' WS*;
BITXOR: '^' WS*;
ACCESS: '.' WS*;
ASSIGN: '=' WS*;
OBRACK: '[' WS*;
CBRACK: ']' WS*;
OBRACE: '{' WS*;
CBRACE: '}' WS*;

OPAREN: '(' WS* -> skip;
CPAREN: ')' WS* -> skip;
COMMA: ',' WS* -> skip;
COLON: ':' WS* -> skip;
EOS: ';' WS* -> skip;

// keywords
BOOL: 'bool' WS*;
CHAR: 'char' WS*;
INT: 'int' WS*;
LONG: 'long' WS*;
REAL: 'real' WS*;
TRUE: 'true' WS*;
FALSE: 'false' WS*;
VOID: 'void' WS*;

// skipped keywords
BREAK: 'break' WS* -> skip;
RETURN: 'return' WS* -> skip;
END: 'end' WS* -> skip;
BLOCK: 'block' WS* -> skip;
IF: 'if' WS* -> skip;
ELSE: 'else' WS* -> skip;
DOWHILE: 'dowhile' WS* -> skip;
WHILE: 'while' WS* -> skip;
FOR: 'for' WS* -> skip;
CLASS: 'class' WS* -> skip;

// escape sequence
ESCSEQ: BSLASH ([\\'"] | ESCLINE | ESCTAB | ESCRET);
ESCLINE: 'n' { setText("\n"); };
ESCTAB: 't' { setText("\t"); };
ESCRET: 'r' { setText("\r"); };