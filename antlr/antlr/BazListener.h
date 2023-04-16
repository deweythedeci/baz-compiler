
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BazParser.h"


namespace parse {

/**
 * This interface defines an abstract listener for a parse tree produced by BazParser.
 */
class  BazListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(BazParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(BazParser::ProgramContext *ctx) = 0;

  virtual void enterFuncblock(BazParser::FuncblockContext *ctx) = 0;
  virtual void exitFuncblock(BazParser::FuncblockContext *ctx) = 0;

  virtual void enterFunc(BazParser::FuncContext *ctx) = 0;
  virtual void exitFunc(BazParser::FuncContext *ctx) = 0;

  virtual void enterArg(BazParser::ArgContext *ctx) = 0;
  virtual void exitArg(BazParser::ArgContext *ctx) = 0;

  virtual void enterRettype(BazParser::RettypeContext *ctx) = 0;
  virtual void exitRettype(BazParser::RettypeContext *ctx) = 0;

  virtual void enterClassblock(BazParser::ClassblockContext *ctx) = 0;
  virtual void exitClassblock(BazParser::ClassblockContext *ctx) = 0;

  virtual void enterClass(BazParser::ClassContext *ctx) = 0;
  virtual void exitClass(BazParser::ClassContext *ctx) = 0;

  virtual void enterStmt(BazParser::StmtContext *ctx) = 0;
  virtual void exitStmt(BazParser::StmtContext *ctx) = 0;

  virtual void enterDecl(BazParser::DeclContext *ctx) = 0;
  virtual void exitDecl(BazParser::DeclContext *ctx) = 0;

  virtual void enterArrdecl(BazParser::ArrdeclContext *ctx) = 0;
  virtual void exitArrdecl(BazParser::ArrdeclContext *ctx) = 0;

  virtual void enterAssign(BazParser::AssignContext *ctx) = 0;
  virtual void exitAssign(BazParser::AssignContext *ctx) = 0;

  virtual void enterCallstmt(BazParser::CallstmtContext *ctx) = 0;
  virtual void exitCallstmt(BazParser::CallstmtContext *ctx) = 0;

  virtual void enterStmtblock(BazParser::StmtblockContext *ctx) = 0;
  virtual void exitStmtblock(BazParser::StmtblockContext *ctx) = 0;

  virtual void enterIfblock(BazParser::IfblockContext *ctx) = 0;
  virtual void exitIfblock(BazParser::IfblockContext *ctx) = 0;

  virtual void enterIf(BazParser::IfContext *ctx) = 0;
  virtual void exitIf(BazParser::IfContext *ctx) = 0;

  virtual void enterElseif(BazParser::ElseifContext *ctx) = 0;
  virtual void exitElseif(BazParser::ElseifContext *ctx) = 0;

  virtual void enterElse(BazParser::ElseContext *ctx) = 0;
  virtual void exitElse(BazParser::ElseContext *ctx) = 0;

  virtual void enterWhileblock(BazParser::WhileblockContext *ctx) = 0;
  virtual void exitWhileblock(BazParser::WhileblockContext *ctx) = 0;

  virtual void enterDowhileblock(BazParser::DowhileblockContext *ctx) = 0;
  virtual void exitDowhileblock(BazParser::DowhileblockContext *ctx) = 0;

  virtual void enterWhile(BazParser::WhileContext *ctx) = 0;
  virtual void exitWhile(BazParser::WhileContext *ctx) = 0;

  virtual void enterDowhile(BazParser::DowhileContext *ctx) = 0;
  virtual void exitDowhile(BazParser::DowhileContext *ctx) = 0;

  virtual void enterForblock(BazParser::ForblockContext *ctx) = 0;
  virtual void exitForblock(BazParser::ForblockContext *ctx) = 0;

  virtual void enterFor(BazParser::ForContext *ctx) = 0;
  virtual void exitFor(BazParser::ForContext *ctx) = 0;

  virtual void enterBlock(BazParser::BlockContext *ctx) = 0;
  virtual void exitBlock(BazParser::BlockContext *ctx) = 0;

  virtual void enterBreak(BazParser::BreakContext *ctx) = 0;
  virtual void exitBreak(BazParser::BreakContext *ctx) = 0;

  virtual void enterEnd(BazParser::EndContext *ctx) = 0;
  virtual void exitEnd(BazParser::EndContext *ctx) = 0;

  virtual void enterReturn(BazParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(BazParser::ReturnContext *ctx) = 0;

  virtual void enterStmtlist(BazParser::StmtlistContext *ctx) = 0;
  virtual void exitStmtlist(BazParser::StmtlistContext *ctx) = 0;

  virtual void enterExp(BazParser::ExpContext *ctx) = 0;
  virtual void exitExp(BazParser::ExpContext *ctx) = 0;

  virtual void enterLiteral(BazParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(BazParser::LiteralContext *ctx) = 0;

  virtual void enterBoollit(BazParser::BoollitContext *ctx) = 0;
  virtual void exitBoollit(BazParser::BoollitContext *ctx) = 0;

  virtual void enterCharlit(BazParser::CharlitContext *ctx) = 0;
  virtual void exitCharlit(BazParser::CharlitContext *ctx) = 0;

  virtual void enterIntlit(BazParser::IntlitContext *ctx) = 0;
  virtual void exitIntlit(BazParser::IntlitContext *ctx) = 0;

  virtual void enterReallit(BazParser::ReallitContext *ctx) = 0;
  virtual void exitReallit(BazParser::ReallitContext *ctx) = 0;

  virtual void enterStringlit(BazParser::StringlitContext *ctx) = 0;
  virtual void exitStringlit(BazParser::StringlitContext *ctx) = 0;

  virtual void enterVariable(BazParser::VariableContext *ctx) = 0;
  virtual void exitVariable(BazParser::VariableContext *ctx) = 0;

  virtual void enterType(BazParser::TypeContext *ctx) = 0;
  virtual void exitType(BazParser::TypeContext *ctx) = 0;

  virtual void enterArraytype(BazParser::ArraytypeContext *ctx) = 0;
  virtual void exitArraytype(BazParser::ArraytypeContext *ctx) = 0;

  virtual void enterBasetype(BazParser::BasetypeContext *ctx) = 0;
  virtual void exitBasetype(BazParser::BasetypeContext *ctx) = 0;


};

}  // namespace parse
