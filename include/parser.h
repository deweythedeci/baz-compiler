#include <stdlib.h>
#include <peglib.h>
using namespace std;
using namespace peg;

void parse(string code){
    parser parser(R"(
        # characters
        letter <- [a-zA-Z]
        number <- [0-9]
        id_char <- letter / number / '_'

        # whitespace
        ws <- [ \t]* / nl
        nl <- '\n' / '\r\n' / 'r' / !.

        # tokens
        id <- (!number id_char) id_char* ws*

        # comments
        comment <- '#' (!nl .)* nl / '```' .* '```'
    )");

    parser[]

    parser.parse(" ")
}