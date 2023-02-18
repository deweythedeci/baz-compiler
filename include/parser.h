#include <stdlib.h>
#include <peglib.h>
using namespace std;

void parse(string code){
    peg::parser parser(R"(

        # comment
        comment <- '#' printable* nl

        # characters
        printable <- [\x20-\x7e]
        letter <- [a-zA-Z]
        number <- [0-9]
        id_start <- letter / number / '_'

        # whitespace
        ws <- [ \t]*
        nl <- '\n' / '\r\n' / 'r'
    )");
}