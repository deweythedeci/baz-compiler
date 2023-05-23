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
    std::cout << std::string(10, '-') << "parser" << std::string(10, '-') << std::endl;
    tree->accept(&visitor);

    std::cout << std::string(10, '-') << "lexer" << std::string(10, '-') << std::endl;
    for (auto token : tokens.getTokens()) {
        std::string tokenName = lexer.getVocabulary().getDisplayName(token->getType());
        std::cout << "Token: " << tokenName << ", Text: " << token->getText() << std::endl;
    }

    return 0;
}