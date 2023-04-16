
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BazParser.h"


namespace parse {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by BazParser.
 */
class  BazVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BazParser.
   */
    virtual std::any visitProgram(BazParser::ProgramContext *context) = 0;

    virtual std::any visitFuncblock(BazParser::FuncblockContext *context) = 0;

    virtual std::any visitFunc(BazParser::FuncContext *context) = 0;

    virtual std::any visitArg(BazParser::ArgContext *context) = 0;

    virtual std::any visitRettype(BazParser::RettypeContext *context) = 0;

    virtual std::any visitClassblock(BazParser::ClassblockContext *context) = 0;

    virtual std::any visitClass(BazParser::ClassContext *context) = 0;

    virtual std::any visitStmt(BazParser::StmtContext *context) = 0;

    virtual std::any visitDecl(BazParser::DeclContext *context) = 0;

    virtual std::any visitArrdecl(BazParser::ArrdeclContext *context) = 0;

    virtual std::any visitAssign(BazParser::AssignContext *context) = 0;

    virtual std::any visitCallstmt(BazParser::CallstmtContext *context) = 0;

    virtual std::any visitStmtblock(BazParser::StmtblockContext *context) = 0;

    virtual std::any visitIfblock(BazParser::IfblockContext *context) = 0;

    virtual std::any visitIf(BazParser::IfContext *context) = 0;

    virtual std::any visitElseif(BazParser::ElseifContext *context) = 0;

    virtual std::any visitElse(BazParser::ElseContext *context) = 0;

    virtual std::any visitWhileblock(BazParser::WhileblockContext *context) = 0;

    virtual std::any visitDowhileblock(BazParser::DowhileblockContext *context) = 0;

    virtual std::any visitWhile(BazParser::WhileContext *context) = 0;

    virtual std::any visitDowhile(BazParser::DowhileContext *context) = 0;

    virtual std::any visitForblock(BazParser::ForblockContext *context) = 0;

    virtual std::any visitFor(BazParser::ForContext *context) = 0;

    virtual std::any visitBlock(BazParser::BlockContext *context) = 0;

    virtual std::any visitBreak(BazParser::BreakContext *context) = 0;

    virtual std::any visitEnd(BazParser::EndContext *context) = 0;

    virtual std::any visitReturn(BazParser::ReturnContext *context) = 0;

    virtual std::any visitStmtlist(BazParser::StmtlistContext *context) = 0;

    virtual std::any visitExp(BazParser::ExpContext *context) = 0;

    virtual std::any visitLiteral(BazParser::LiteralContext *context) = 0;

    virtual std::any visitBoollit(BazParser::BoollitContext *context) = 0;

    virtual std::any visitCharlit(BazParser::CharlitContext *context) = 0;

    virtual std::any visitIntlit(BazParser::IntlitContext *context) = 0;

    virtual std::any visitReallit(BazParser::ReallitContext *context) = 0;

    virtual std::any visitStringlit(BazParser::StringlitContext *context) = 0;

    virtual std::any visitVariable(BazParser::VariableContext *context) = 0;

    virtual std::any visitType(BazParser::TypeContext *context) = 0;

    virtual std::any visitArraytype(BazParser::ArraytypeContext *context) = 0;

    virtual std::any visitBasetype(BazParser::BasetypeContext *context) = 0;


};

}  // namespace parse
