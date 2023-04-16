
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BazVisitor.h"


namespace parse {

/**
 * This class provides an empty implementation of BazVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BazBaseVisitor : public BazVisitor {
public:

  virtual std::any visitProgram(BazParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncblock(BazParser::FuncblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(BazParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(BazParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRettype(BazParser::RettypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassblock(BazParser::ClassblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass(BazParser::ClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(BazParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(BazParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrdecl(BazParser::ArrdeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(BazParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallstmt(BazParser::CallstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtblock(BazParser::StmtblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfblock(BazParser::IfblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(BazParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseif(BazParser::ElseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse(BazParser::ElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileblock(BazParser::WhileblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDowhileblock(BazParser::DowhileblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile(BazParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDowhile(BazParser::DowhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForblock(BazParser::ForblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(BazParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(BazParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak(BazParser::BreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd(BazParser::EndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(BazParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtlist(BazParser::StmtlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(BazParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(BazParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoollit(BazParser::BoollitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharlit(BazParser::CharlitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntlit(BazParser::IntlitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReallit(BazParser::ReallitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringlit(BazParser::StringlitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(BazParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(BazParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArraytype(BazParser::ArraytypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasetype(BazParser::BasetypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace parse
