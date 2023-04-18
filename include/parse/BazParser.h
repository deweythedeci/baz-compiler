
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace parse {


class  BazParser : public antlr4::Parser {
public:
  enum {
    WS = 1, EOL = 2, SQUOTE = 3, DQUOTE = 4, BSLASH = 5, SCOMMENT = 6, MCOMMENT = 7, 
    OR = 8, AND = 9, EQUAL = 10, NOTEQUAL = 11, BITLSHIFT = 12, BITRSHIFT = 13, 
    GREATEREQ = 14, LESSEQ = 15, GREATER = 16, LESS = 17, ADD = 18, SUBTRACT = 19, 
    MULTIPLY = 20, DIVIDE = 21, MODULUS = 22, NOT = 23, BITOR = 24, BITAND = 25, 
    BITNOT = 26, BITXOR = 27, ACCESS = 28, ASSIGN = 29, OBRACK = 30, CBRACK = 31, 
    OBRACE = 32, CBRACE = 33, OPAREN = 34, CPAREN = 35, COMMA = 36, COLON = 37, 
    EOS = 38, BOOL = 39, CHAR = 40, INT = 41, LONG = 42, REAL = 43, TRUE = 44, 
    FALSE = 45, VOID = 46, BREAK = 47, RETURN = 48, END = 49, BLOCK = 50, 
    IF = 51, ELSE = 52, DOWHILE = 53, WHILE = 54, FOR = 55, CLASS = 56, 
    SYSCALL = 57, ESCSEQ = 58, ESCLINE = 59, ESCTAB = 60, ESCRET = 61, INTLIT = 62, 
    REALLIT = 63, CHARLIT = 64, STRINGLIT = 65, NAME = 66
  };

  enum {
    RuleProgram = 0, RuleFuncblock = 1, RuleFunc = 2, RuleArg = 3, RuleRettype = 4, 
    RuleClassblock = 5, RuleClass = 6, RuleStmt = 7, RuleDecl = 8, RuleArrdecl = 9, 
    RuleAssign = 10, RuleCallstmt = 11, RuleStmtblock = 12, RuleIfblock = 13, 
    RuleIf = 14, RuleElseif = 15, RuleElse = 16, RuleWhileblock = 17, RuleDowhileblock = 18, 
    RuleWhile = 19, RuleDowhile = 20, RuleForblock = 21, RuleFor = 22, RuleBlock = 23, 
    RuleBreak = 24, RuleEnd = 25, RuleReturn = 26, RuleStmtlist = 27, RuleExp = 28, 
    RuleBoollit = 29, RuleCharlit = 30, RuleIntlit = 31, RuleReallit = 32, 
    RuleStringlit = 33, RuleVariable = 34, RuleType = 35, RuleArraytype = 36, 
    RuleBasetype = 37
  };

  explicit BazParser(antlr4::TokenStream *input);

  BazParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BazParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class FuncblockContext;
  class FuncContext;
  class ArgContext;
  class RettypeContext;
  class ClassblockContext;
  class ClassContext;
  class StmtContext;
  class DeclContext;
  class ArrdeclContext;
  class AssignContext;
  class CallstmtContext;
  class StmtblockContext;
  class IfblockContext;
  class IfContext;
  class ElseifContext;
  class ElseContext;
  class WhileblockContext;
  class DowhileblockContext;
  class WhileContext;
  class DowhileContext;
  class ForblockContext;
  class ForContext;
  class BlockContext;
  class BreakContext;
  class EndContext;
  class ReturnContext;
  class StmtlistContext;
  class ExpContext;
  class BoollitContext;
  class CharlitContext;
  class IntlitContext;
  class ReallitContext;
  class StringlitContext;
  class VariableContext;
  class TypeContext;
  class ArraytypeContext;
  class BasetypeContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncblockContext *> funcblock();
    FuncblockContext* funcblock(size_t i);
    std::vector<ClassblockContext *> classblock();
    ClassblockContext* classblock(size_t i);
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOS();
    antlr4::tree::TerminalNode* EOS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  FuncblockContext : public antlr4::ParserRuleContext {
  public:
    FuncblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncContext *func();
    std::vector<antlr4::tree::TerminalNode *> EOS();
    antlr4::tree::TerminalNode* EOS(size_t i);
    StmtlistContext *stmtlist();
    EndContext *end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncblockContext* funcblock();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RettypeContext *rettype();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OPAREN();
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    antlr4::tree::TerminalNode *CPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  RettypeContext : public antlr4::ParserRuleContext {
  public:
    RettypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *VOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RettypeContext* rettype();

  class  ClassblockContext : public antlr4::ParserRuleContext {
  public:
    ClassblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassContext *class_();
    std::vector<antlr4::tree::TerminalNode *> EOS();
    antlr4::tree::TerminalNode* EOS(size_t i);
    EndContext *end();
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassblockContext* classblock();

  class  ClassContext : public antlr4::ParserRuleContext {
  public:
    ClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassContext* class_();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    AssignContext *assign();
    CallstmtContext *callstmt();
    StmtblockContext *stmtblock();
    IfblockContext *ifblock();
    WhileblockContext *whileblock();
    DowhileblockContext *dowhileblock();
    ForblockContext *forblock();
    ReturnContext *return_();
    BreakContext *break_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    VariableContext *variable();
    ArrdeclContext *arrdecl();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpContext *exp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  ArrdeclContext : public antlr4::ParserRuleContext {
  public:
    ArrdeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CBRACK();
    antlr4::tree::TerminalNode* CBRACK(size_t i);
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OBRACK();
    antlr4::tree::TerminalNode* OBRACK(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrdeclContext* arrdecl();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  CallstmtContext : public antlr4::ParserRuleContext {
  public:
    CallstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallstmtContext* callstmt();

  class  StmtblockContext : public antlr4::ParserRuleContext {
  public:
    StmtblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *EOS();
    StmtlistContext *stmtlist();
    EndContext *end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtblockContext* stmtblock();

  class  IfblockContext : public antlr4::ParserRuleContext {
  public:
    IfblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfContext *if_();
    std::vector<antlr4::tree::TerminalNode *> EOS();
    antlr4::tree::TerminalNode* EOS(size_t i);
    std::vector<StmtlistContext *> stmtlist();
    StmtlistContext* stmtlist(size_t i);
    EndContext *end();
    std::vector<ElseifContext *> elseif();
    ElseifContext* elseif(size_t i);
    ElseContext *else_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfblockContext* ifblock();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPAREN();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfContext* if_();

  class  ElseifContext : public antlr4::ParserRuleContext {
  public:
    ElseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPAREN();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseifContext* elseif();

  class  ElseContext : public antlr4::ParserRuleContext {
  public:
    ElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseContext* else_();

  class  WhileblockContext : public antlr4::ParserRuleContext {
  public:
    WhileblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhileContext *while_();
    antlr4::tree::TerminalNode *EOS();
    StmtlistContext *stmtlist();
    EndContext *end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileblockContext* whileblock();

  class  DowhileblockContext : public antlr4::ParserRuleContext {
  public:
    DowhileblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DowhileContext *dowhile();
    antlr4::tree::TerminalNode *EOS();
    StmtlistContext *stmtlist();
    EndContext *end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DowhileblockContext* dowhileblock();

  class  WhileContext : public antlr4::ParserRuleContext {
  public:
    WhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *OPAREN();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileContext* while_();

  class  DowhileContext : public antlr4::ParserRuleContext {
  public:
    DowhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOWHILE();
    antlr4::tree::TerminalNode *OPAREN();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DowhileContext* dowhile();

  class  ForblockContext : public antlr4::ParserRuleContext {
  public:
    ForblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForContext *for_();
    antlr4::tree::TerminalNode *EOS();
    StmtlistContext *stmtlist();
    EndContext *end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForblockContext* forblock();

  class  ForContext : public antlr4::ParserRuleContext {
  public:
    ForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COLON();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForContext* for_();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLOCK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  BreakContext : public antlr4::ParserRuleContext {
  public:
    BreakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakContext* break_();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndContext* end();

  class  ReturnContext : public antlr4::ParserRuleContext {
  public:
    ReturnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnContext* return_();

  class  StmtlistContext : public antlr4::ParserRuleContext {
  public:
    StmtlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOS();
    antlr4::tree::TerminalNode* EOS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtlistContext* stmtlist();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *BITNOT();
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *CPAREN();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *OBRACE();
    antlr4::tree::TerminalNode *CBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    BoollitContext *boollit();
    CharlitContext *charlit();
    IntlitContext *intlit();
    ReallitContext *reallit();
    StringlitContext *stringlit();
    VariableContext *variable();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *BITOR();
    antlr4::tree::TerminalNode *BITXOR();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESSEQ();
    antlr4::tree::TerminalNode *GREATEREQ();
    antlr4::tree::TerminalNode *BITLSHIFT();
    antlr4::tree::TerminalNode *BITRSHIFT();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULUS();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *OBRACK();
    antlr4::tree::TerminalNode *CBRACK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  BoollitContext : public antlr4::ParserRuleContext {
  public:
    BoollitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *TRUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoollitContext* boollit();

  class  CharlitContext : public antlr4::ParserRuleContext {
  public:
    CharlitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARLIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharlitContext* charlit();

  class  IntlitContext : public antlr4::ParserRuleContext {
  public:
    IntlitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTLIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntlitContext* intlit();

  class  ReallitContext : public antlr4::ParserRuleContext {
  public:
    ReallitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REALLIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReallitContext* reallit();

  class  StringlitContext : public antlr4::ParserRuleContext {
  public:
    StringlitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGLIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringlitContext* stringlit();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *NAME();
    ArraytypeContext *arraytype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  ArraytypeContext : public antlr4::ParserRuleContext {
  public:
    ArraytypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasetypeContext *basetype();
    std::vector<antlr4::tree::TerminalNode *> OBRACK();
    antlr4::tree::TerminalNode* OBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CBRACK();
    antlr4::tree::TerminalNode* CBRACK(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArraytypeContext* arraytype();

  class  BasetypeContext : public antlr4::ParserRuleContext {
  public:
    BasetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasetypeContext* basetype();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expSempred(ExpContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace parse
