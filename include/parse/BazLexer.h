
// Generated from antlr/Baz.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace parse {


class  BazLexer : public antlr4::Lexer {
public:
  enum {
    STRINGLIT = 1, NAME = 2, REALLIT = 3, CHARLIT = 4, INTLIT = 5, ESCSEQ = 6, 
    ESCLINE = 7, ESCTAB = 8, ESCRET = 9, SCOMMENT = 10, MCOMMENT = 11, OR = 12, 
    AND = 13, EQUAL = 14, NOTEQUAL = 15, BITLSHIFT = 16, BITRSHIFT = 17, 
    GREATEREQ = 18, LESSEQ = 19, GREATER = 20, LESS = 21, ADD = 22, SUBTRACT = 23, 
    MULTIPLY = 24, DIVIDE = 25, MODULUS = 26, NOT = 27, BITOR = 28, BITAND = 29, 
    BITNOT = 30, BITXOR = 31, ACCESS = 32, ASSIGN = 33, OBRACK = 34, CBRACK = 35, 
    OBRACE = 36, CBRACE = 37, OPAREN = 38, CPAREN = 39, COMMA = 40, COLON = 41, 
    EOS = 42, BOOL = 43, CHAR = 44, INT = 45, LONG = 46, REAL = 47, TRUE = 48, 
    FALSE = 49, VOID = 50, BREAK = 51, RETURN = 52, END = 53, BLOCK = 54, 
    IF = 55, ELSE = 56, DOWHILE = 57, WHILE = 58, FOR = 59, CLASS = 60, 
    WS = 61, EOL = 62, SQUOTE = 63, DQUOTE = 64, BSLASH = 65
  };

  explicit BazLexer(antlr4::CharStream *input);

  ~BazLexer() override;


      bool isKeyword(const std::string& s) {
          std::unordered_set<std::string> keywords {
              "bool", "char", "int", "long", "real", "true", "false", "void", "return", "block", "end", "if", "else", "dowhile", "while", "for", "break", "class"
          };
          return keywords.count(s) > 0;
      }


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
  void NAMEAction(antlr4::RuleContext *context, size_t actionIndex);
  void ESCLINEAction(antlr4::RuleContext *context, size_t actionIndex);
  void ESCTABAction(antlr4::RuleContext *context, size_t actionIndex);
  void ESCRETAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace parse
