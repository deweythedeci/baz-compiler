
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace parse {


class  BazLexer : public antlr4::Lexer {
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

  explicit BazLexer(antlr4::CharStream *input);

  ~BazLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void ESCLINEAction(antlr4::RuleContext *context, size_t actionIndex);
  void ESCTABAction(antlr4::RuleContext *context, size_t actionIndex);
  void ESCRETAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace parse
