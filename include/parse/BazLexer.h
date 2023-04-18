
// Generated from antlr/Baz.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace parse {


class  BazLexer : public antlr4::Lexer {
public:
  enum {
    INTLIT = 1, REALLIT = 2, CHARLIT = 3, STRINGLIT = 4, NAME = 5, WS = 6, 
    EOL = 7, SQUOTE = 8, DQUOTE = 9, BSLASH = 10, SCOMMENT = 11, MCOMMENT = 12, 
    OR = 13, AND = 14, EQUAL = 15, NOTEQUAL = 16, BITLSHIFT = 17, BITRSHIFT = 18, 
    GREATEREQ = 19, LESSEQ = 20, GREATER = 21, LESS = 22, ADD = 23, SUBTRACT = 24, 
    MULTIPLY = 25, DIVIDE = 26, MODULUS = 27, NOT = 28, BITOR = 29, BITAND = 30, 
    BITNOT = 31, BITXOR = 32, ACCESS = 33, ASSIGN = 34, OBRACK = 35, CBRACK = 36, 
    OBRACE = 37, CBRACE = 38, OPAREN = 39, CPAREN = 40, COMMA = 41, COLON = 42, 
    EOS = 43, BOOL = 44, CHAR = 45, INT = 46, LONG = 47, REAL = 48, TRUE = 49, 
    FALSE = 50, VOID = 51, BREAK = 52, RETURN = 53, END = 54, BLOCK = 55, 
    IF = 56, ELSE = 57, DOWHILE = 58, WHILE = 59, FOR = 60, CLASS = 61, 
    ESCSEQ = 62, ESCLINE = 63, ESCTAB = 64, ESCRET = 65
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
