
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BazListener.h"


namespace parse {

/**
 * This class provides an empty implementation of BazListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BazBaseListener : public BazListener {
public:

  virtual void enterProgram(BazParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(BazParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFuncblock(BazParser::FuncblockContext * /*ctx*/) override { }
  virtual void exitFuncblock(BazParser::FuncblockContext * /*ctx*/) override { }

  virtual void enterFunc(BazParser::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(BazParser::FuncContext * /*ctx*/) override { }

  virtual void enterArg(BazParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(BazParser::ArgContext * /*ctx*/) override { }

  virtual void enterRettype(BazParser::RettypeContext * /*ctx*/) override { }
  virtual void exitRettype(BazParser::RettypeContext * /*ctx*/) override { }

  virtual void enterClassblock(BazParser::ClassblockContext * /*ctx*/) override { }
  virtual void exitClassblock(BazParser::ClassblockContext * /*ctx*/) override { }

  virtual void enterClass(BazParser::ClassContext * /*ctx*/) override { }
  virtual void exitClass(BazParser::ClassContext * /*ctx*/) override { }

  virtual void enterStmt(BazParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(BazParser::StmtContext * /*ctx*/) override { }

  virtual void enterDecl(BazParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(BazParser::DeclContext * /*ctx*/) override { }

  virtual void enterArrdecl(BazParser::ArrdeclContext * /*ctx*/) override { }
  virtual void exitArrdecl(BazParser::ArrdeclContext * /*ctx*/) override { }

  virtual void enterAssign(BazParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(BazParser::AssignContext * /*ctx*/) override { }

  virtual void enterCallstmt(BazParser::CallstmtContext * /*ctx*/) override { }
  virtual void exitCallstmt(BazParser::CallstmtContext * /*ctx*/) override { }

  virtual void enterStmtblock(BazParser::StmtblockContext * /*ctx*/) override { }
  virtual void exitStmtblock(BazParser::StmtblockContext * /*ctx*/) override { }

  virtual void enterIfblock(BazParser::IfblockContext * /*ctx*/) override { }
  virtual void exitIfblock(BazParser::IfblockContext * /*ctx*/) override { }

  virtual void enterIf(BazParser::IfContext * /*ctx*/) override { }
  virtual void exitIf(BazParser::IfContext * /*ctx*/) override { }

  virtual void enterElseif(BazParser::ElseifContext * /*ctx*/) override { }
  virtual void exitElseif(BazParser::ElseifContext * /*ctx*/) override { }

  virtual void enterElse(BazParser::ElseContext * /*ctx*/) override { }
  virtual void exitElse(BazParser::ElseContext * /*ctx*/) override { }

  virtual void enterWhileblock(BazParser::WhileblockContext * /*ctx*/) override { }
  virtual void exitWhileblock(BazParser::WhileblockContext * /*ctx*/) override { }

  virtual void enterDowhileblock(BazParser::DowhileblockContext * /*ctx*/) override { }
  virtual void exitDowhileblock(BazParser::DowhileblockContext * /*ctx*/) override { }

  virtual void enterWhile(BazParser::WhileContext * /*ctx*/) override { }
  virtual void exitWhile(BazParser::WhileContext * /*ctx*/) override { }

  virtual void enterDowhile(BazParser::DowhileContext * /*ctx*/) override { }
  virtual void exitDowhile(BazParser::DowhileContext * /*ctx*/) override { }

  virtual void enterForblock(BazParser::ForblockContext * /*ctx*/) override { }
  virtual void exitForblock(BazParser::ForblockContext * /*ctx*/) override { }

  virtual void enterFor(BazParser::ForContext * /*ctx*/) override { }
  virtual void exitFor(BazParser::ForContext * /*ctx*/) override { }

  virtual void enterBlock(BazParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(BazParser::BlockContext * /*ctx*/) override { }

  virtual void enterBreak(BazParser::BreakContext * /*ctx*/) override { }
  virtual void exitBreak(BazParser::BreakContext * /*ctx*/) override { }

  virtual void enterEnd(BazParser::EndContext * /*ctx*/) override { }
  virtual void exitEnd(BazParser::EndContext * /*ctx*/) override { }

  virtual void enterReturn(BazParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(BazParser::ReturnContext * /*ctx*/) override { }

  virtual void enterStmtlist(BazParser::StmtlistContext * /*ctx*/) override { }
  virtual void exitStmtlist(BazParser::StmtlistContext * /*ctx*/) override { }

  virtual void enterExp(BazParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(BazParser::ExpContext * /*ctx*/) override { }

  virtual void enterLiteral(BazParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(BazParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBoollit(BazParser::BoollitContext * /*ctx*/) override { }
  virtual void exitBoollit(BazParser::BoollitContext * /*ctx*/) override { }

  virtual void enterCharlit(BazParser::CharlitContext * /*ctx*/) override { }
  virtual void exitCharlit(BazParser::CharlitContext * /*ctx*/) override { }

  virtual void enterIntlit(BazParser::IntlitContext * /*ctx*/) override { }
  virtual void exitIntlit(BazParser::IntlitContext * /*ctx*/) override { }

  virtual void enterReallit(BazParser::ReallitContext * /*ctx*/) override { }
  virtual void exitReallit(BazParser::ReallitContext * /*ctx*/) override { }

  virtual void enterStringlit(BazParser::StringlitContext * /*ctx*/) override { }
  virtual void exitStringlit(BazParser::StringlitContext * /*ctx*/) override { }

  virtual void enterVariable(BazParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(BazParser::VariableContext * /*ctx*/) override { }

  virtual void enterType(BazParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(BazParser::TypeContext * /*ctx*/) override { }

  virtual void enterArraytype(BazParser::ArraytypeContext * /*ctx*/) override { }
  virtual void exitArraytype(BazParser::ArraytypeContext * /*ctx*/) override { }

  virtual void enterBasetype(BazParser::BasetypeContext * /*ctx*/) override { }
  virtual void exitBasetype(BazParser::BasetypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace parse
