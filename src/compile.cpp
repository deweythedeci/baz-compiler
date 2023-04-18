#include <stdlib.h>
#include <fstream>
#include <iostream>

#include "antlr4-runtime/antlr4-runtime.h"
#include "parse/BazLexer.h"
#include "parse/BazParser.h"
#include "parse/print_visitor.h"

int main(int argc, char** argv){
    
    // check args
    if(argc < 3){
        std::printf("usage: %s file.baz file.out\n", argv[0]);
        return 1;
    }

    // open file
    std::ifstream stream;
    stream.open(argv[1]);
    if(!stream.is_open()){
        std::cerr << "Failed to source file." << std::endl;
        return 1;
    }

    // generate parse tree
    antlr4::ANTLRInputStream input(stream);
    parse::BazLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    parse::BazParser parser(&tokens);

    // visit parse tree
    antlr4::tree::ParseTree* tree = parser.program();
    parse::PrintVisitor visitor;
    tree->accept(&visitor);

    return 0;
}