
#pragma once

#include "antlr4-runtime/antlr4-runtime.h"
#include "parse/BazVisitor.h"

namespace parse {

class PrintVisitor : public BazVisitor {
private:
	int indent = 0;
public:
	std::any visitProgram(BazParser::ProgramContext *ctx);

    std::any visitFuncblock(BazParser::FuncblockContext *ctx);

    std::any visitFunc(BazParser::FuncContext *ctx);

    std::any visitArg(BazParser::ArgContext *ctx);

    std::any visitRettype(BazParser::RettypeContext *ctx);

    std::any visitClassblock(BazParser::ClassblockContext *ctx);

    std::any visitClass(BazParser::ClassContext *ctx);

    std::any visitStmt(BazParser::StmtContext *ctx);

    std::any visitDecl(BazParser::DeclContext *ctx);

    std::any visitArrdecl(BazParser::ArrdeclContext *ctx);

    std::any visitAssign(BazParser::AssignContext *ctx);

    std::any visitCallstmt(BazParser::CallstmtContext *ctx);

    std::any visitStmtblock(BazParser::StmtblockContext *ctx);

    std::any visitIfblock(BazParser::IfblockContext *ctx);

    std::any visitIf(BazParser::IfContext *ctx);

    std::any visitElseif(BazParser::ElseifContext *ctx);

    std::any visitElse(BazParser::ElseContext *ctx);

    std::any visitWhileblock(BazParser::WhileblockContext *ctx);

    std::any visitDowhileblock(BazParser::DowhileblockContext *ctx);

    std::any visitWhile(BazParser::WhileContext *ctx);

    std::any visitDowhile(BazParser::DowhileContext *ctx);

    std::any visitForblock(BazParser::ForblockContext *ctx);

    std::any visitFor(BazParser::ForContext *ctx);

    std::any visitBlock(BazParser::BlockContext *ctx);

    std::any visitBreak(BazParser::BreakContext *ctx);

    std::any visitEnd(BazParser::EndContext *ctx);

    std::any visitReturn(BazParser::ReturnContext *ctx);

    std::any visitStmtlist(BazParser::StmtlistContext *ctx);

    std::any visitExp(BazParser::ExpContext *ctx);

    std::any visitBoollit(BazParser::BoollitContext *ctx);

    std::any visitCharlit(BazParser::CharlitContext *ctx);

    std::any visitIntlit(BazParser::IntlitContext *ctx);

    std::any visitReallit(BazParser::ReallitContext *ctx);

    std::any visitStringlit(BazParser::StringlitContext *ctx);

    std::any visitVariable(BazParser::VariableContext *ctx);

    std::any visitType(BazParser::TypeContext *ctx);

    std::any visitArraytype(BazParser::ArraytypeContext *ctx);

    std::any visitBasetype(BazParser::BasetypeContext *ctx);

};

}