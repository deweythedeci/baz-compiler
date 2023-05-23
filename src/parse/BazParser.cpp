
// Generated from antlr/Baz.g4 by ANTLR 4.13.0


#include "BazVisitor.h"

#include "BazParser.h"


using namespace antlrcpp;
using namespace parse;

using namespace antlr4;

namespace {

struct BazParserStaticData final {
  BazParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BazParserStaticData(const BazParserStaticData&) = delete;
  BazParserStaticData(BazParserStaticData&&) = delete;
  BazParserStaticData& operator=(const BazParserStaticData&) = delete;
  BazParserStaticData& operator=(BazParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag bazParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BazParserStaticData *bazParserStaticData = nullptr;

void bazParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (bazParserStaticData != nullptr) {
    return;
  }
#else
  assert(bazParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BazParserStaticData>(
    std::vector<std::string>{
      "program", "funcblock", "func", "arg", "rettype", "classblock", "class", 
      "stmt", "decl", "arrdecl", "assign", "callstmt", "stmtblock", "ifblock", 
      "if", "elseif", "else", "whileblock", "dowhileblock", "while", "dowhile", 
      "forblock", "for", "block", "break", "end", "return", "stmtlist", 
      "exp", "boollit", "charlit", "intlit", "reallit", "stringlit", "variable", 
      "type", "arraytype", "basetype"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "'n'", "'t'", "'r'", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'''", "'\"'", 
      "'\\'"
    },
    std::vector<std::string>{
      "", "STRINGLIT", "NAME", "REALLIT", "CHARLIT", "INTLIT", "ESCSEQ", 
      "ESCLINE", "ESCTAB", "ESCRET", "SCOMMENT", "MCOMMENT", "OR", "AND", 
      "EQUAL", "NOTEQUAL", "BITLSHIFT", "BITRSHIFT", "GREATEREQ", "LESSEQ", 
      "GREATER", "LESS", "ADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "MODULUS", 
      "NOT", "BITOR", "BITAND", "BITNOT", "BITXOR", "ACCESS", "ASSIGN", 
      "OBRACK", "CBRACK", "OBRACE", "CBRACE", "OPAREN", "CPAREN", "COMMA", 
      "COLON", "EOS", "BOOL", "CHAR", "INT", "LONG", "REAL", "TRUE", "FALSE", 
      "VOID", "BREAK", "RETURN", "END", "BLOCK", "IF", "ELSE", "DOWHILE", 
      "WHILE", "FOR", "CLASS", "WS", "EOL", "SQUOTE", "DQUOTE", "BSLASH"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,65,390,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,1,0,1,0,1,0,1,0,1,0,5,0,82,8,0,10,0,12,0,85,9,
  	0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,99,8,2,10,2,12,
  	2,102,9,2,3,2,104,8,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,3,4,113,8,4,1,5,1,5,
  	1,5,1,5,1,5,5,5,120,8,5,10,5,12,5,123,9,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,141,8,7,1,8,1,8,1,8,3,8,146,8,
  	8,1,8,1,8,1,8,1,8,1,8,3,8,153,8,8,1,9,1,9,1,9,1,9,4,9,159,8,9,11,9,12,
  	9,160,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,5,13,181,8,13,10,13,12,13,184,9,13,1,13,1,13,
  	1,13,1,13,3,13,190,8,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,24,1,24,
  	1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,5,27,251,8,27,10,27,12,27,254,
  	9,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,5,28,278,8,28,10,28,12,28,
  	281,9,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,291,8,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,5,28,355,8,28,10,28,12,28,358,9,28,1,29,1,29,1,
  	30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,35,1,35,1,
  	35,1,35,1,35,3,35,379,8,35,1,36,1,36,1,36,4,36,384,8,36,11,36,12,36,385,
  	1,37,1,37,1,37,0,1,56,38,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,0,2,1,
  	0,48,49,2,0,2,2,43,47,413,0,83,1,0,0,0,2,86,1,0,0,0,4,92,1,0,0,0,6,107,
  	1,0,0,0,8,112,1,0,0,0,10,114,1,0,0,0,12,127,1,0,0,0,14,140,1,0,0,0,16,
  	152,1,0,0,0,18,158,1,0,0,0,20,162,1,0,0,0,22,166,1,0,0,0,24,168,1,0,0,
  	0,26,173,1,0,0,0,28,193,1,0,0,0,30,198,1,0,0,0,32,204,1,0,0,0,34,206,
  	1,0,0,0,36,211,1,0,0,0,38,216,1,0,0,0,40,221,1,0,0,0,42,226,1,0,0,0,44,
  	231,1,0,0,0,46,238,1,0,0,0,48,240,1,0,0,0,50,242,1,0,0,0,52,244,1,0,0,
  	0,54,252,1,0,0,0,56,290,1,0,0,0,58,359,1,0,0,0,60,361,1,0,0,0,62,363,
  	1,0,0,0,64,365,1,0,0,0,66,367,1,0,0,0,68,369,1,0,0,0,70,378,1,0,0,0,72,
  	380,1,0,0,0,74,387,1,0,0,0,76,82,3,2,1,0,77,82,3,10,5,0,78,79,3,16,8,
  	0,79,80,5,42,0,0,80,82,1,0,0,0,81,76,1,0,0,0,81,77,1,0,0,0,81,78,1,0,
  	0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,1,1,0,0,0,85,83,1,0,
  	0,0,86,87,3,4,2,0,87,88,5,42,0,0,88,89,3,54,27,0,89,90,3,50,25,0,90,91,
  	5,42,0,0,91,3,1,0,0,0,92,93,3,8,4,0,93,94,5,2,0,0,94,103,5,38,0,0,95,
  	100,3,6,3,0,96,97,5,40,0,0,97,99,3,6,3,0,98,96,1,0,0,0,99,102,1,0,0,0,
  	100,98,1,0,0,0,100,101,1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,103,95,
  	1,0,0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,106,5,39,0,0,106,5,1,0,0,
  	0,107,108,3,70,35,0,108,109,5,2,0,0,109,7,1,0,0,0,110,113,3,70,35,0,111,
  	113,5,50,0,0,112,110,1,0,0,0,112,111,1,0,0,0,113,9,1,0,0,0,114,115,3,
  	12,6,0,115,121,5,42,0,0,116,117,3,16,8,0,117,118,5,42,0,0,118,120,1,0,
  	0,0,119,116,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,
  	124,1,0,0,0,123,121,1,0,0,0,124,125,3,50,25,0,125,126,5,42,0,0,126,11,
  	1,0,0,0,127,128,5,60,0,0,128,129,5,2,0,0,129,13,1,0,0,0,130,141,3,16,
  	8,0,131,141,3,20,10,0,132,141,3,22,11,0,133,141,3,24,12,0,134,141,3,26,
  	13,0,135,141,3,34,17,0,136,141,3,36,18,0,137,141,3,42,21,0,138,141,3,
  	52,26,0,139,141,3,48,24,0,140,130,1,0,0,0,140,131,1,0,0,0,140,132,1,0,
  	0,0,140,133,1,0,0,0,140,134,1,0,0,0,140,135,1,0,0,0,140,136,1,0,0,0,140,
  	137,1,0,0,0,140,138,1,0,0,0,140,139,1,0,0,0,141,15,1,0,0,0,142,143,3,
  	70,35,0,143,145,3,68,34,0,144,146,3,18,9,0,145,144,1,0,0,0,145,146,1,
  	0,0,0,146,153,1,0,0,0,147,148,3,70,35,0,148,149,3,68,34,0,149,150,5,33,
  	0,0,150,151,3,56,28,0,151,153,1,0,0,0,152,142,1,0,0,0,152,147,1,0,0,0,
  	153,17,1,0,0,0,154,155,5,35,0,0,155,156,3,56,28,0,156,157,5,34,0,0,157,
  	159,1,0,0,0,158,154,1,0,0,0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,
  	0,0,0,161,19,1,0,0,0,162,163,3,56,28,0,163,164,5,33,0,0,164,165,3,56,
  	28,0,165,21,1,0,0,0,166,167,3,56,28,0,167,23,1,0,0,0,168,169,3,46,23,
  	0,169,170,5,42,0,0,170,171,3,54,27,0,171,172,3,50,25,0,172,25,1,0,0,0,
  	173,174,3,28,14,0,174,175,5,42,0,0,175,182,3,54,27,0,176,177,3,30,15,
  	0,177,178,5,42,0,0,178,179,3,54,27,0,179,181,1,0,0,0,180,176,1,0,0,0,
  	181,184,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,189,1,0,0,0,184,182,
  	1,0,0,0,185,186,3,32,16,0,186,187,5,42,0,0,187,188,3,54,27,0,188,190,
  	1,0,0,0,189,185,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,0,191,192,3,50,
  	25,0,192,27,1,0,0,0,193,194,5,55,0,0,194,195,5,38,0,0,195,196,3,56,28,
  	0,196,197,5,39,0,0,197,29,1,0,0,0,198,199,5,56,0,0,199,200,5,55,0,0,200,
  	201,5,38,0,0,201,202,3,56,28,0,202,203,5,39,0,0,203,31,1,0,0,0,204,205,
  	5,56,0,0,205,33,1,0,0,0,206,207,3,38,19,0,207,208,5,42,0,0,208,209,3,
  	54,27,0,209,210,3,50,25,0,210,35,1,0,0,0,211,212,3,40,20,0,212,213,5,
  	42,0,0,213,214,3,54,27,0,214,215,3,50,25,0,215,37,1,0,0,0,216,217,5,58,
  	0,0,217,218,5,38,0,0,218,219,3,56,28,0,219,220,5,39,0,0,220,39,1,0,0,
  	0,221,222,5,57,0,0,222,223,5,38,0,0,223,224,3,56,28,0,224,225,5,39,0,
  	0,225,41,1,0,0,0,226,227,3,44,22,0,227,228,5,42,0,0,228,229,3,54,27,0,
  	229,230,3,50,25,0,230,43,1,0,0,0,231,232,5,59,0,0,232,233,5,38,0,0,233,
  	234,5,2,0,0,234,235,5,41,0,0,235,236,3,56,28,0,236,237,5,39,0,0,237,45,
  	1,0,0,0,238,239,5,54,0,0,239,47,1,0,0,0,240,241,5,51,0,0,241,49,1,0,0,
  	0,242,243,5,53,0,0,243,51,1,0,0,0,244,245,5,52,0,0,245,246,3,56,28,0,
  	246,53,1,0,0,0,247,248,3,14,7,0,248,249,5,42,0,0,249,251,1,0,0,0,250,
  	247,1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,55,1,
  	0,0,0,254,252,1,0,0,0,255,256,6,28,-1,0,256,257,5,22,0,0,257,291,3,56,
  	28,15,258,259,5,23,0,0,259,291,3,56,28,14,260,261,5,27,0,0,261,291,3,
  	56,28,13,262,263,5,30,0,0,263,291,3,56,28,12,264,265,5,38,0,0,265,266,
  	3,56,28,0,266,267,5,39,0,0,267,291,1,0,0,0,268,269,5,2,0,0,269,270,5,
  	38,0,0,270,271,3,56,28,0,271,272,5,39,0,0,272,291,1,0,0,0,273,274,5,36,
  	0,0,274,279,3,56,28,0,275,276,5,40,0,0,276,278,3,56,28,0,277,275,1,0,
  	0,0,278,281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,282,1,0,0,0,281,
  	279,1,0,0,0,282,283,5,37,0,0,283,291,1,0,0,0,284,291,3,58,29,0,285,291,
  	3,60,30,0,286,291,3,62,31,0,287,291,3,64,32,0,288,291,3,66,33,0,289,291,
  	3,68,34,0,290,255,1,0,0,0,290,258,1,0,0,0,290,260,1,0,0,0,290,262,1,0,
  	0,0,290,264,1,0,0,0,290,268,1,0,0,0,290,273,1,0,0,0,290,284,1,0,0,0,290,
  	285,1,0,0,0,290,286,1,0,0,0,290,287,1,0,0,0,290,288,1,0,0,0,290,289,1,
  	0,0,0,291,356,1,0,0,0,292,293,10,33,0,0,293,294,5,12,0,0,294,355,3,56,
  	28,34,295,296,10,32,0,0,296,297,5,13,0,0,297,355,3,56,28,33,298,299,10,
  	31,0,0,299,300,5,29,0,0,300,355,3,56,28,32,301,302,10,30,0,0,302,303,
  	5,28,0,0,303,355,3,56,28,31,304,305,10,29,0,0,305,306,5,31,0,0,306,355,
  	3,56,28,30,307,308,10,28,0,0,308,309,5,14,0,0,309,355,3,56,28,29,310,
  	311,10,27,0,0,311,312,5,15,0,0,312,355,3,56,28,28,313,314,10,26,0,0,314,
  	315,5,21,0,0,315,355,3,56,28,27,316,317,10,25,0,0,317,318,5,20,0,0,318,
  	355,3,56,28,26,319,320,10,24,0,0,320,321,5,19,0,0,321,355,3,56,28,25,
  	322,323,10,23,0,0,323,324,5,18,0,0,324,355,3,56,28,24,325,326,10,22,0,
  	0,326,327,5,16,0,0,327,355,3,56,28,23,328,329,10,21,0,0,329,330,5,17,
  	0,0,330,355,3,56,28,22,331,332,10,20,0,0,332,333,5,22,0,0,333,355,3,56,
  	28,21,334,335,10,19,0,0,335,336,5,23,0,0,336,355,3,56,28,20,337,338,10,
  	18,0,0,338,339,5,24,0,0,339,355,3,56,28,19,340,341,10,17,0,0,341,342,
  	5,25,0,0,342,355,3,56,28,18,343,344,10,16,0,0,344,345,5,26,0,0,345,355,
  	3,56,28,17,346,347,10,9,0,0,347,348,5,32,0,0,348,355,3,56,28,10,349,350,
  	10,8,0,0,350,351,5,34,0,0,351,352,3,56,28,0,352,353,5,35,0,0,353,355,
  	1,0,0,0,354,292,1,0,0,0,354,295,1,0,0,0,354,298,1,0,0,0,354,301,1,0,0,
  	0,354,304,1,0,0,0,354,307,1,0,0,0,354,310,1,0,0,0,354,313,1,0,0,0,354,
  	316,1,0,0,0,354,319,1,0,0,0,354,322,1,0,0,0,354,325,1,0,0,0,354,328,1,
  	0,0,0,354,331,1,0,0,0,354,334,1,0,0,0,354,337,1,0,0,0,354,340,1,0,0,0,
  	354,343,1,0,0,0,354,346,1,0,0,0,354,349,1,0,0,0,355,358,1,0,0,0,356,354,
  	1,0,0,0,356,357,1,0,0,0,357,57,1,0,0,0,358,356,1,0,0,0,359,360,7,0,0,
  	0,360,59,1,0,0,0,361,362,5,4,0,0,362,61,1,0,0,0,363,364,5,5,0,0,364,63,
  	1,0,0,0,365,366,5,3,0,0,366,65,1,0,0,0,367,368,5,1,0,0,368,67,1,0,0,0,
  	369,370,5,2,0,0,370,69,1,0,0,0,371,379,5,43,0,0,372,379,5,44,0,0,373,
  	379,5,45,0,0,374,379,5,46,0,0,375,379,5,47,0,0,376,379,5,2,0,0,377,379,
  	3,72,36,0,378,371,1,0,0,0,378,372,1,0,0,0,378,373,1,0,0,0,378,374,1,0,
  	0,0,378,375,1,0,0,0,378,376,1,0,0,0,378,377,1,0,0,0,379,71,1,0,0,0,380,
  	383,3,74,37,0,381,382,5,34,0,0,382,384,5,35,0,0,383,381,1,0,0,0,384,385,
  	1,0,0,0,385,383,1,0,0,0,385,386,1,0,0,0,386,73,1,0,0,0,387,388,7,1,0,
  	0,388,75,1,0,0,0,19,81,83,100,103,112,121,140,145,152,160,182,189,252,
  	279,290,354,356,378,385
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  bazParserStaticData = staticData.release();
}

}

BazParser::BazParser(TokenStream *input) : BazParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BazParser::BazParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BazParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *bazParserStaticData->atn, bazParserStaticData->decisionToDFA, bazParserStaticData->sharedContextCache, options);
}

BazParser::~BazParser() {
  delete _interpreter;
}

const atn::ATN& BazParser::getATN() const {
  return *bazParserStaticData->atn;
}

std::string BazParser::getGrammarFileName() const {
  return "Baz.g4";
}

const std::vector<std::string>& BazParser::getRuleNames() const {
  return bazParserStaticData->ruleNames;
}

const dfa::Vocabulary& BazParser::getVocabulary() const {
  return bazParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BazParser::getSerializedATN() const {
  return bazParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

BazParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BazParser::FuncblockContext *> BazParser::ProgramContext::funcblock() {
  return getRuleContexts<BazParser::FuncblockContext>();
}

BazParser::FuncblockContext* BazParser::ProgramContext::funcblock(size_t i) {
  return getRuleContext<BazParser::FuncblockContext>(i);
}

std::vector<BazParser::ClassblockContext *> BazParser::ProgramContext::classblock() {
  return getRuleContexts<BazParser::ClassblockContext>();
}

BazParser::ClassblockContext* BazParser::ProgramContext::classblock(size_t i) {
  return getRuleContext<BazParser::ClassblockContext>(i);
}

std::vector<BazParser::DeclContext *> BazParser::ProgramContext::decl() {
  return getRuleContexts<BazParser::DeclContext>();
}

BazParser::DeclContext* BazParser::ProgramContext::decl(size_t i) {
  return getRuleContext<BazParser::DeclContext>(i);
}

std::vector<tree::TerminalNode *> BazParser::ProgramContext::EOS() {
  return getTokens(BazParser::EOS);
}

tree::TerminalNode* BazParser::ProgramContext::EOS(size_t i) {
  return getToken(BazParser::EOS, i);
}


size_t BazParser::ProgramContext::getRuleIndex() const {
  return BazParser::RuleProgram;
}


std::any BazParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ProgramContext* BazParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BazParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1154320083397378052) != 0)) {
      setState(81);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(76);
        funcblock();
        break;
      }

      case 2: {
        setState(77);
        classblock();
        break;
      }

      case 3: {
        setState(78);
        decl();
        setState(79);
        match(BazParser::EOS);
        break;
      }

      default:
        break;
      }
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncblockContext ------------------------------------------------------------------

BazParser::FuncblockContext::FuncblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::FuncContext* BazParser::FuncblockContext::func() {
  return getRuleContext<BazParser::FuncContext>(0);
}

std::vector<tree::TerminalNode *> BazParser::FuncblockContext::EOS() {
  return getTokens(BazParser::EOS);
}

tree::TerminalNode* BazParser::FuncblockContext::EOS(size_t i) {
  return getToken(BazParser::EOS, i);
}

BazParser::StmtlistContext* BazParser::FuncblockContext::stmtlist() {
  return getRuleContext<BazParser::StmtlistContext>(0);
}

BazParser::EndContext* BazParser::FuncblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}


size_t BazParser::FuncblockContext::getRuleIndex() const {
  return BazParser::RuleFuncblock;
}


std::any BazParser::FuncblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitFuncblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::FuncblockContext* BazParser::funcblock() {
  FuncblockContext *_localctx = _tracker.createInstance<FuncblockContext>(_ctx, getState());
  enterRule(_localctx, 2, BazParser::RuleFuncblock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    func();
    setState(87);
    match(BazParser::EOS);
    setState(88);
    stmtlist();
    setState(89);
    end();
    setState(90);
    match(BazParser::EOS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

BazParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::RettypeContext* BazParser::FuncContext::rettype() {
  return getRuleContext<BazParser::RettypeContext>(0);
}

tree::TerminalNode* BazParser::FuncContext::NAME() {
  return getToken(BazParser::NAME, 0);
}

tree::TerminalNode* BazParser::FuncContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

tree::TerminalNode* BazParser::FuncContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}

std::vector<BazParser::ArgContext *> BazParser::FuncContext::arg() {
  return getRuleContexts<BazParser::ArgContext>();
}

BazParser::ArgContext* BazParser::FuncContext::arg(size_t i) {
  return getRuleContext<BazParser::ArgContext>(i);
}

std::vector<tree::TerminalNode *> BazParser::FuncContext::COMMA() {
  return getTokens(BazParser::COMMA);
}

tree::TerminalNode* BazParser::FuncContext::COMMA(size_t i) {
  return getToken(BazParser::COMMA, i);
}


size_t BazParser::FuncContext::getRuleIndex() const {
  return BazParser::RuleFunc;
}


std::any BazParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

BazParser::FuncContext* BazParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 4, BazParser::RuleFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    rettype();
    setState(93);
    match(BazParser::NAME);
    setState(94);
    match(BazParser::OPAREN);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 272678883688452) != 0)) {
      setState(95);
      arg();
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BazParser::COMMA) {
        setState(96);
        match(BazParser::COMMA);
        setState(97);
        arg();
        setState(102);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(105);
    match(BazParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

BazParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::TypeContext* BazParser::ArgContext::type() {
  return getRuleContext<BazParser::TypeContext>(0);
}

tree::TerminalNode* BazParser::ArgContext::NAME() {
  return getToken(BazParser::NAME, 0);
}


size_t BazParser::ArgContext::getRuleIndex() const {
  return BazParser::RuleArg;
}


std::any BazParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ArgContext* BazParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 6, BazParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    type();
    setState(108);
    match(BazParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RettypeContext ------------------------------------------------------------------

BazParser::RettypeContext::RettypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::TypeContext* BazParser::RettypeContext::type() {
  return getRuleContext<BazParser::TypeContext>(0);
}

tree::TerminalNode* BazParser::RettypeContext::VOID() {
  return getToken(BazParser::VOID, 0);
}


size_t BazParser::RettypeContext::getRuleIndex() const {
  return BazParser::RuleRettype;
}


std::any BazParser::RettypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitRettype(this);
  else
    return visitor->visitChildren(this);
}

BazParser::RettypeContext* BazParser::rettype() {
  RettypeContext *_localctx = _tracker.createInstance<RettypeContext>(_ctx, getState());
  enterRule(_localctx, 8, BazParser::RuleRettype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BazParser::NAME:
      case BazParser::BOOL:
      case BazParser::CHAR:
      case BazParser::INT:
      case BazParser::LONG:
      case BazParser::REAL: {
        enterOuterAlt(_localctx, 1);
        setState(110);
        type();
        break;
      }

      case BazParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(111);
        match(BazParser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassblockContext ------------------------------------------------------------------

BazParser::ClassblockContext::ClassblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::ClassContext* BazParser::ClassblockContext::class_() {
  return getRuleContext<BazParser::ClassContext>(0);
}

std::vector<tree::TerminalNode *> BazParser::ClassblockContext::EOS() {
  return getTokens(BazParser::EOS);
}

tree::TerminalNode* BazParser::ClassblockContext::EOS(size_t i) {
  return getToken(BazParser::EOS, i);
}

BazParser::EndContext* BazParser::ClassblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}

std::vector<BazParser::DeclContext *> BazParser::ClassblockContext::decl() {
  return getRuleContexts<BazParser::DeclContext>();
}

BazParser::DeclContext* BazParser::ClassblockContext::decl(size_t i) {
  return getRuleContext<BazParser::DeclContext>(i);
}


size_t BazParser::ClassblockContext::getRuleIndex() const {
  return BazParser::RuleClassblock;
}


std::any BazParser::ClassblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitClassblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ClassblockContext* BazParser::classblock() {
  ClassblockContext *_localctx = _tracker.createInstance<ClassblockContext>(_ctx, getState());
  enterRule(_localctx, 10, BazParser::RuleClassblock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    class_();
    setState(115);
    match(BazParser::EOS);
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 272678883688452) != 0)) {
      setState(116);
      decl();
      setState(117);
      match(BazParser::EOS);
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124);
    end();
    setState(125);
    match(BazParser::EOS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassContext ------------------------------------------------------------------

BazParser::ClassContext::ClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ClassContext::CLASS() {
  return getToken(BazParser::CLASS, 0);
}

tree::TerminalNode* BazParser::ClassContext::NAME() {
  return getToken(BazParser::NAME, 0);
}


size_t BazParser::ClassContext::getRuleIndex() const {
  return BazParser::RuleClass;
}


std::any BazParser::ClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitClass(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ClassContext* BazParser::class_() {
  ClassContext *_localctx = _tracker.createInstance<ClassContext>(_ctx, getState());
  enterRule(_localctx, 12, BazParser::RuleClass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(BazParser::CLASS);
    setState(128);
    match(BazParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

BazParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::DeclContext* BazParser::StmtContext::decl() {
  return getRuleContext<BazParser::DeclContext>(0);
}

BazParser::AssignContext* BazParser::StmtContext::assign() {
  return getRuleContext<BazParser::AssignContext>(0);
}

BazParser::CallstmtContext* BazParser::StmtContext::callstmt() {
  return getRuleContext<BazParser::CallstmtContext>(0);
}

BazParser::StmtblockContext* BazParser::StmtContext::stmtblock() {
  return getRuleContext<BazParser::StmtblockContext>(0);
}

BazParser::IfblockContext* BazParser::StmtContext::ifblock() {
  return getRuleContext<BazParser::IfblockContext>(0);
}

BazParser::WhileblockContext* BazParser::StmtContext::whileblock() {
  return getRuleContext<BazParser::WhileblockContext>(0);
}

BazParser::DowhileblockContext* BazParser::StmtContext::dowhileblock() {
  return getRuleContext<BazParser::DowhileblockContext>(0);
}

BazParser::ForblockContext* BazParser::StmtContext::forblock() {
  return getRuleContext<BazParser::ForblockContext>(0);
}

BazParser::ReturnContext* BazParser::StmtContext::return_() {
  return getRuleContext<BazParser::ReturnContext>(0);
}

BazParser::BreakContext* BazParser::StmtContext::break_() {
  return getRuleContext<BazParser::BreakContext>(0);
}


size_t BazParser::StmtContext::getRuleIndex() const {
  return BazParser::RuleStmt;
}


std::any BazParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

BazParser::StmtContext* BazParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 14, BazParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      callstmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(133);
      stmtblock();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(134);
      ifblock();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(135);
      whileblock();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(136);
      dowhileblock();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(137);
      forblock();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(138);
      return_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(139);
      break_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

BazParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::TypeContext* BazParser::DeclContext::type() {
  return getRuleContext<BazParser::TypeContext>(0);
}

BazParser::VariableContext* BazParser::DeclContext::variable() {
  return getRuleContext<BazParser::VariableContext>(0);
}

BazParser::ArrdeclContext* BazParser::DeclContext::arrdecl() {
  return getRuleContext<BazParser::ArrdeclContext>(0);
}

tree::TerminalNode* BazParser::DeclContext::ASSIGN() {
  return getToken(BazParser::ASSIGN, 0);
}

BazParser::ExpContext* BazParser::DeclContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}


size_t BazParser::DeclContext::getRuleIndex() const {
  return BazParser::RuleDecl;
}


std::any BazParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

BazParser::DeclContext* BazParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 16, BazParser::RuleDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      type();
      setState(143);
      variable();
      setState(145);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BazParser::CBRACK) {
        setState(144);
        arrdecl();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(147);
      type();
      setState(148);
      variable();
      setState(149);
      match(BazParser::ASSIGN);
      setState(150);
      exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrdeclContext ------------------------------------------------------------------

BazParser::ArrdeclContext::ArrdeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BazParser::ArrdeclContext::CBRACK() {
  return getTokens(BazParser::CBRACK);
}

tree::TerminalNode* BazParser::ArrdeclContext::CBRACK(size_t i) {
  return getToken(BazParser::CBRACK, i);
}

std::vector<BazParser::ExpContext *> BazParser::ArrdeclContext::exp() {
  return getRuleContexts<BazParser::ExpContext>();
}

BazParser::ExpContext* BazParser::ArrdeclContext::exp(size_t i) {
  return getRuleContext<BazParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> BazParser::ArrdeclContext::OBRACK() {
  return getTokens(BazParser::OBRACK);
}

tree::TerminalNode* BazParser::ArrdeclContext::OBRACK(size_t i) {
  return getToken(BazParser::OBRACK, i);
}


size_t BazParser::ArrdeclContext::getRuleIndex() const {
  return BazParser::RuleArrdecl;
}


std::any BazParser::ArrdeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitArrdecl(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ArrdeclContext* BazParser::arrdecl() {
  ArrdeclContext *_localctx = _tracker.createInstance<ArrdeclContext>(_ctx, getState());
  enterRule(_localctx, 18, BazParser::RuleArrdecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(154);
      match(BazParser::CBRACK);
      setState(155);
      exp(0);
      setState(156);
      match(BazParser::OBRACK);
      setState(160); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BazParser::CBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

BazParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BazParser::ExpContext *> BazParser::AssignContext::exp() {
  return getRuleContexts<BazParser::ExpContext>();
}

BazParser::ExpContext* BazParser::AssignContext::exp(size_t i) {
  return getRuleContext<BazParser::ExpContext>(i);
}

tree::TerminalNode* BazParser::AssignContext::ASSIGN() {
  return getToken(BazParser::ASSIGN, 0);
}


size_t BazParser::AssignContext::getRuleIndex() const {
  return BazParser::RuleAssign;
}


std::any BazParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

BazParser::AssignContext* BazParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 20, BazParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    exp(0);
    setState(163);
    match(BazParser::ASSIGN);
    setState(164);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallstmtContext ------------------------------------------------------------------

BazParser::CallstmtContext::CallstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::ExpContext* BazParser::CallstmtContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}


size_t BazParser::CallstmtContext::getRuleIndex() const {
  return BazParser::RuleCallstmt;
}


std::any BazParser::CallstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitCallstmt(this);
  else
    return visitor->visitChildren(this);
}

BazParser::CallstmtContext* BazParser::callstmt() {
  CallstmtContext *_localctx = _tracker.createInstance<CallstmtContext>(_ctx, getState());
  enterRule(_localctx, 22, BazParser::RuleCallstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtblockContext ------------------------------------------------------------------

BazParser::StmtblockContext::StmtblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::BlockContext* BazParser::StmtblockContext::block() {
  return getRuleContext<BazParser::BlockContext>(0);
}

tree::TerminalNode* BazParser::StmtblockContext::EOS() {
  return getToken(BazParser::EOS, 0);
}

BazParser::StmtlistContext* BazParser::StmtblockContext::stmtlist() {
  return getRuleContext<BazParser::StmtlistContext>(0);
}

BazParser::EndContext* BazParser::StmtblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}


size_t BazParser::StmtblockContext::getRuleIndex() const {
  return BazParser::RuleStmtblock;
}


std::any BazParser::StmtblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitStmtblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::StmtblockContext* BazParser::stmtblock() {
  StmtblockContext *_localctx = _tracker.createInstance<StmtblockContext>(_ctx, getState());
  enterRule(_localctx, 24, BazParser::RuleStmtblock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    block();
    setState(169);
    match(BazParser::EOS);
    setState(170);
    stmtlist();
    setState(171);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfblockContext ------------------------------------------------------------------

BazParser::IfblockContext::IfblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::IfContext* BazParser::IfblockContext::if_() {
  return getRuleContext<BazParser::IfContext>(0);
}

std::vector<tree::TerminalNode *> BazParser::IfblockContext::EOS() {
  return getTokens(BazParser::EOS);
}

tree::TerminalNode* BazParser::IfblockContext::EOS(size_t i) {
  return getToken(BazParser::EOS, i);
}

std::vector<BazParser::StmtlistContext *> BazParser::IfblockContext::stmtlist() {
  return getRuleContexts<BazParser::StmtlistContext>();
}

BazParser::StmtlistContext* BazParser::IfblockContext::stmtlist(size_t i) {
  return getRuleContext<BazParser::StmtlistContext>(i);
}

BazParser::EndContext* BazParser::IfblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}

std::vector<BazParser::ElseifContext *> BazParser::IfblockContext::elseif() {
  return getRuleContexts<BazParser::ElseifContext>();
}

BazParser::ElseifContext* BazParser::IfblockContext::elseif(size_t i) {
  return getRuleContext<BazParser::ElseifContext>(i);
}

BazParser::ElseContext* BazParser::IfblockContext::else_() {
  return getRuleContext<BazParser::ElseContext>(0);
}


size_t BazParser::IfblockContext::getRuleIndex() const {
  return BazParser::RuleIfblock;
}


std::any BazParser::IfblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitIfblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::IfblockContext* BazParser::ifblock() {
  IfblockContext *_localctx = _tracker.createInstance<IfblockContext>(_ctx, getState());
  enterRule(_localctx, 26, BazParser::RuleIfblock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(173);
    if_();
    setState(174);
    match(BazParser::EOS);
    setState(175);
    stmtlist();
    setState(182);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(176);
        elseif();
        setState(177);
        match(BazParser::EOS);
        setState(178);
        stmtlist(); 
      }
      setState(184);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BazParser::ELSE) {
      setState(185);
      else_();
      setState(186);
      match(BazParser::EOS);
      setState(187);
      stmtlist();
    }
    setState(191);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

BazParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::IfContext::IF() {
  return getToken(BazParser::IF, 0);
}

tree::TerminalNode* BazParser::IfContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

BazParser::ExpContext* BazParser::IfContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}

tree::TerminalNode* BazParser::IfContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}


size_t BazParser::IfContext::getRuleIndex() const {
  return BazParser::RuleIf;
}


std::any BazParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

BazParser::IfContext* BazParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 28, BazParser::RuleIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(BazParser::IF);
    setState(194);
    match(BazParser::OPAREN);
    setState(195);
    exp(0);
    setState(196);
    match(BazParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseifContext ------------------------------------------------------------------

BazParser::ElseifContext::ElseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ElseifContext::ELSE() {
  return getToken(BazParser::ELSE, 0);
}

tree::TerminalNode* BazParser::ElseifContext::IF() {
  return getToken(BazParser::IF, 0);
}

tree::TerminalNode* BazParser::ElseifContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

BazParser::ExpContext* BazParser::ElseifContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}

tree::TerminalNode* BazParser::ElseifContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}


size_t BazParser::ElseifContext::getRuleIndex() const {
  return BazParser::RuleElseif;
}


std::any BazParser::ElseifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitElseif(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ElseifContext* BazParser::elseif() {
  ElseifContext *_localctx = _tracker.createInstance<ElseifContext>(_ctx, getState());
  enterRule(_localctx, 30, BazParser::RuleElseif);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(BazParser::ELSE);
    setState(199);
    match(BazParser::IF);
    setState(200);
    match(BazParser::OPAREN);
    setState(201);
    exp(0);
    setState(202);
    match(BazParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseContext ------------------------------------------------------------------

BazParser::ElseContext::ElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ElseContext::ELSE() {
  return getToken(BazParser::ELSE, 0);
}


size_t BazParser::ElseContext::getRuleIndex() const {
  return BazParser::RuleElse;
}


std::any BazParser::ElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitElse(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ElseContext* BazParser::else_() {
  ElseContext *_localctx = _tracker.createInstance<ElseContext>(_ctx, getState());
  enterRule(_localctx, 32, BazParser::RuleElse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(BazParser::ELSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileblockContext ------------------------------------------------------------------

BazParser::WhileblockContext::WhileblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::WhileContext* BazParser::WhileblockContext::while_() {
  return getRuleContext<BazParser::WhileContext>(0);
}

tree::TerminalNode* BazParser::WhileblockContext::EOS() {
  return getToken(BazParser::EOS, 0);
}

BazParser::StmtlistContext* BazParser::WhileblockContext::stmtlist() {
  return getRuleContext<BazParser::StmtlistContext>(0);
}

BazParser::EndContext* BazParser::WhileblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}


size_t BazParser::WhileblockContext::getRuleIndex() const {
  return BazParser::RuleWhileblock;
}


std::any BazParser::WhileblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitWhileblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::WhileblockContext* BazParser::whileblock() {
  WhileblockContext *_localctx = _tracker.createInstance<WhileblockContext>(_ctx, getState());
  enterRule(_localctx, 34, BazParser::RuleWhileblock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    while_();
    setState(207);
    match(BazParser::EOS);
    setState(208);
    stmtlist();
    setState(209);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DowhileblockContext ------------------------------------------------------------------

BazParser::DowhileblockContext::DowhileblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::DowhileContext* BazParser::DowhileblockContext::dowhile() {
  return getRuleContext<BazParser::DowhileContext>(0);
}

tree::TerminalNode* BazParser::DowhileblockContext::EOS() {
  return getToken(BazParser::EOS, 0);
}

BazParser::StmtlistContext* BazParser::DowhileblockContext::stmtlist() {
  return getRuleContext<BazParser::StmtlistContext>(0);
}

BazParser::EndContext* BazParser::DowhileblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}


size_t BazParser::DowhileblockContext::getRuleIndex() const {
  return BazParser::RuleDowhileblock;
}


std::any BazParser::DowhileblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitDowhileblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::DowhileblockContext* BazParser::dowhileblock() {
  DowhileblockContext *_localctx = _tracker.createInstance<DowhileblockContext>(_ctx, getState());
  enterRule(_localctx, 36, BazParser::RuleDowhileblock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    dowhile();
    setState(212);
    match(BazParser::EOS);
    setState(213);
    stmtlist();
    setState(214);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

BazParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::WhileContext::WHILE() {
  return getToken(BazParser::WHILE, 0);
}

tree::TerminalNode* BazParser::WhileContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

BazParser::ExpContext* BazParser::WhileContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}

tree::TerminalNode* BazParser::WhileContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}


size_t BazParser::WhileContext::getRuleIndex() const {
  return BazParser::RuleWhile;
}


std::any BazParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

BazParser::WhileContext* BazParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 38, BazParser::RuleWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(BazParser::WHILE);
    setState(217);
    match(BazParser::OPAREN);
    setState(218);
    exp(0);
    setState(219);
    match(BazParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DowhileContext ------------------------------------------------------------------

BazParser::DowhileContext::DowhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::DowhileContext::DOWHILE() {
  return getToken(BazParser::DOWHILE, 0);
}

tree::TerminalNode* BazParser::DowhileContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

BazParser::ExpContext* BazParser::DowhileContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}

tree::TerminalNode* BazParser::DowhileContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}


size_t BazParser::DowhileContext::getRuleIndex() const {
  return BazParser::RuleDowhile;
}


std::any BazParser::DowhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitDowhile(this);
  else
    return visitor->visitChildren(this);
}

BazParser::DowhileContext* BazParser::dowhile() {
  DowhileContext *_localctx = _tracker.createInstance<DowhileContext>(_ctx, getState());
  enterRule(_localctx, 40, BazParser::RuleDowhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(BazParser::DOWHILE);
    setState(222);
    match(BazParser::OPAREN);
    setState(223);
    exp(0);
    setState(224);
    match(BazParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForblockContext ------------------------------------------------------------------

BazParser::ForblockContext::ForblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::ForContext* BazParser::ForblockContext::for_() {
  return getRuleContext<BazParser::ForContext>(0);
}

tree::TerminalNode* BazParser::ForblockContext::EOS() {
  return getToken(BazParser::EOS, 0);
}

BazParser::StmtlistContext* BazParser::ForblockContext::stmtlist() {
  return getRuleContext<BazParser::StmtlistContext>(0);
}

BazParser::EndContext* BazParser::ForblockContext::end() {
  return getRuleContext<BazParser::EndContext>(0);
}


size_t BazParser::ForblockContext::getRuleIndex() const {
  return BazParser::RuleForblock;
}


std::any BazParser::ForblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitForblock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ForblockContext* BazParser::forblock() {
  ForblockContext *_localctx = _tracker.createInstance<ForblockContext>(_ctx, getState());
  enterRule(_localctx, 42, BazParser::RuleForblock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    for_();
    setState(227);
    match(BazParser::EOS);
    setState(228);
    stmtlist();
    setState(229);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForContext ------------------------------------------------------------------

BazParser::ForContext::ForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ForContext::FOR() {
  return getToken(BazParser::FOR, 0);
}

tree::TerminalNode* BazParser::ForContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

tree::TerminalNode* BazParser::ForContext::NAME() {
  return getToken(BazParser::NAME, 0);
}

tree::TerminalNode* BazParser::ForContext::COLON() {
  return getToken(BazParser::COLON, 0);
}

BazParser::ExpContext* BazParser::ForContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}

tree::TerminalNode* BazParser::ForContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}


size_t BazParser::ForContext::getRuleIndex() const {
  return BazParser::RuleFor;
}


std::any BazParser::ForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitFor(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ForContext* BazParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 44, BazParser::RuleFor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(BazParser::FOR);
    setState(232);
    match(BazParser::OPAREN);
    setState(233);
    match(BazParser::NAME);
    setState(234);
    match(BazParser::COLON);
    setState(235);
    exp(0);
    setState(236);
    match(BazParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

BazParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::BlockContext::BLOCK() {
  return getToken(BazParser::BLOCK, 0);
}


size_t BazParser::BlockContext::getRuleIndex() const {
  return BazParser::RuleBlock;
}


std::any BazParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

BazParser::BlockContext* BazParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 46, BazParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(BazParser::BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakContext ------------------------------------------------------------------

BazParser::BreakContext::BreakContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::BreakContext::BREAK() {
  return getToken(BazParser::BREAK, 0);
}


size_t BazParser::BreakContext::getRuleIndex() const {
  return BazParser::RuleBreak;
}


std::any BazParser::BreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitBreak(this);
  else
    return visitor->visitChildren(this);
}

BazParser::BreakContext* BazParser::break_() {
  BreakContext *_localctx = _tracker.createInstance<BreakContext>(_ctx, getState());
  enterRule(_localctx, 48, BazParser::RuleBreak);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(BazParser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndContext ------------------------------------------------------------------

BazParser::EndContext::EndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::EndContext::END() {
  return getToken(BazParser::END, 0);
}


size_t BazParser::EndContext::getRuleIndex() const {
  return BazParser::RuleEnd;
}


std::any BazParser::EndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitEnd(this);
  else
    return visitor->visitChildren(this);
}

BazParser::EndContext* BazParser::end() {
  EndContext *_localctx = _tracker.createInstance<EndContext>(_ctx, getState());
  enterRule(_localctx, 50, BazParser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(BazParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

BazParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ReturnContext::RETURN() {
  return getToken(BazParser::RETURN, 0);
}

BazParser::ExpContext* BazParser::ReturnContext::exp() {
  return getRuleContext<BazParser::ExpContext>(0);
}


size_t BazParser::ReturnContext::getRuleIndex() const {
  return BazParser::RuleReturn;
}


std::any BazParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ReturnContext* BazParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 52, BazParser::RuleReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(BazParser::RETURN);
    setState(245);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtlistContext ------------------------------------------------------------------

BazParser::StmtlistContext::StmtlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BazParser::StmtContext *> BazParser::StmtlistContext::stmt() {
  return getRuleContexts<BazParser::StmtContext>();
}

BazParser::StmtContext* BazParser::StmtlistContext::stmt(size_t i) {
  return getRuleContext<BazParser::StmtContext>(i);
}

std::vector<tree::TerminalNode *> BazParser::StmtlistContext::EOS() {
  return getTokens(BazParser::EOS);
}

tree::TerminalNode* BazParser::StmtlistContext::EOS(size_t i) {
  return getToken(BazParser::EOS, i);
}


size_t BazParser::StmtlistContext::getRuleIndex() const {
  return BazParser::RuleStmtlist;
}


std::any BazParser::StmtlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitStmtlist(this);
  else
    return visitor->visitChildren(this);
}

BazParser::StmtlistContext* BazParser::stmtlist() {
  StmtlistContext *_localctx = _tracker.createInstance<StmtlistContext>(_ctx, getState());
  enterRule(_localctx, 54, BazParser::RuleStmtlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1070722360132239422) != 0)) {
      setState(247);
      stmt();
      setState(248);
      match(BazParser::EOS);
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

BazParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ExpContext::ADD() {
  return getToken(BazParser::ADD, 0);
}

std::vector<BazParser::ExpContext *> BazParser::ExpContext::exp() {
  return getRuleContexts<BazParser::ExpContext>();
}

BazParser::ExpContext* BazParser::ExpContext::exp(size_t i) {
  return getRuleContext<BazParser::ExpContext>(i);
}

tree::TerminalNode* BazParser::ExpContext::SUBTRACT() {
  return getToken(BazParser::SUBTRACT, 0);
}

tree::TerminalNode* BazParser::ExpContext::NOT() {
  return getToken(BazParser::NOT, 0);
}

tree::TerminalNode* BazParser::ExpContext::BITNOT() {
  return getToken(BazParser::BITNOT, 0);
}

tree::TerminalNode* BazParser::ExpContext::OPAREN() {
  return getToken(BazParser::OPAREN, 0);
}

tree::TerminalNode* BazParser::ExpContext::CPAREN() {
  return getToken(BazParser::CPAREN, 0);
}

tree::TerminalNode* BazParser::ExpContext::NAME() {
  return getToken(BazParser::NAME, 0);
}

tree::TerminalNode* BazParser::ExpContext::OBRACE() {
  return getToken(BazParser::OBRACE, 0);
}

tree::TerminalNode* BazParser::ExpContext::CBRACE() {
  return getToken(BazParser::CBRACE, 0);
}

std::vector<tree::TerminalNode *> BazParser::ExpContext::COMMA() {
  return getTokens(BazParser::COMMA);
}

tree::TerminalNode* BazParser::ExpContext::COMMA(size_t i) {
  return getToken(BazParser::COMMA, i);
}

BazParser::BoollitContext* BazParser::ExpContext::boollit() {
  return getRuleContext<BazParser::BoollitContext>(0);
}

BazParser::CharlitContext* BazParser::ExpContext::charlit() {
  return getRuleContext<BazParser::CharlitContext>(0);
}

BazParser::IntlitContext* BazParser::ExpContext::intlit() {
  return getRuleContext<BazParser::IntlitContext>(0);
}

BazParser::ReallitContext* BazParser::ExpContext::reallit() {
  return getRuleContext<BazParser::ReallitContext>(0);
}

BazParser::StringlitContext* BazParser::ExpContext::stringlit() {
  return getRuleContext<BazParser::StringlitContext>(0);
}

BazParser::VariableContext* BazParser::ExpContext::variable() {
  return getRuleContext<BazParser::VariableContext>(0);
}

tree::TerminalNode* BazParser::ExpContext::OR() {
  return getToken(BazParser::OR, 0);
}

tree::TerminalNode* BazParser::ExpContext::AND() {
  return getToken(BazParser::AND, 0);
}

tree::TerminalNode* BazParser::ExpContext::BITAND() {
  return getToken(BazParser::BITAND, 0);
}

tree::TerminalNode* BazParser::ExpContext::BITOR() {
  return getToken(BazParser::BITOR, 0);
}

tree::TerminalNode* BazParser::ExpContext::BITXOR() {
  return getToken(BazParser::BITXOR, 0);
}

tree::TerminalNode* BazParser::ExpContext::EQUAL() {
  return getToken(BazParser::EQUAL, 0);
}

tree::TerminalNode* BazParser::ExpContext::NOTEQUAL() {
  return getToken(BazParser::NOTEQUAL, 0);
}

tree::TerminalNode* BazParser::ExpContext::LESS() {
  return getToken(BazParser::LESS, 0);
}

tree::TerminalNode* BazParser::ExpContext::GREATER() {
  return getToken(BazParser::GREATER, 0);
}

tree::TerminalNode* BazParser::ExpContext::LESSEQ() {
  return getToken(BazParser::LESSEQ, 0);
}

tree::TerminalNode* BazParser::ExpContext::GREATEREQ() {
  return getToken(BazParser::GREATEREQ, 0);
}

tree::TerminalNode* BazParser::ExpContext::BITLSHIFT() {
  return getToken(BazParser::BITLSHIFT, 0);
}

tree::TerminalNode* BazParser::ExpContext::BITRSHIFT() {
  return getToken(BazParser::BITRSHIFT, 0);
}

tree::TerminalNode* BazParser::ExpContext::MULTIPLY() {
  return getToken(BazParser::MULTIPLY, 0);
}

tree::TerminalNode* BazParser::ExpContext::DIVIDE() {
  return getToken(BazParser::DIVIDE, 0);
}

tree::TerminalNode* BazParser::ExpContext::MODULUS() {
  return getToken(BazParser::MODULUS, 0);
}

tree::TerminalNode* BazParser::ExpContext::ACCESS() {
  return getToken(BazParser::ACCESS, 0);
}

tree::TerminalNode* BazParser::ExpContext::OBRACK() {
  return getToken(BazParser::OBRACK, 0);
}

tree::TerminalNode* BazParser::ExpContext::CBRACK() {
  return getToken(BazParser::CBRACK, 0);
}


size_t BazParser::ExpContext::getRuleIndex() const {
  return BazParser::RuleExp;
}


std::any BazParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}


BazParser::ExpContext* BazParser::exp() {
   return exp(0);
}

BazParser::ExpContext* BazParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BazParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  BazParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, BazParser::RuleExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(256);
      match(BazParser::ADD);
      setState(257);
      exp(15);
      break;
    }

    case 2: {
      setState(258);
      match(BazParser::SUBTRACT);
      setState(259);
      exp(14);
      break;
    }

    case 3: {
      setState(260);
      match(BazParser::NOT);
      setState(261);
      exp(13);
      break;
    }

    case 4: {
      setState(262);
      match(BazParser::BITNOT);
      setState(263);
      exp(12);
      break;
    }

    case 5: {
      setState(264);
      match(BazParser::OPAREN);
      setState(265);
      exp(0);
      setState(266);
      match(BazParser::CPAREN);
      break;
    }

    case 6: {
      setState(268);
      match(BazParser::NAME);
      setState(269);
      match(BazParser::OPAREN);
      setState(270);
      exp(0);
      setState(271);
      match(BazParser::CPAREN);
      break;
    }

    case 7: {
      setState(273);
      match(BazParser::OBRACE);
      setState(274);
      exp(0);
      setState(279);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BazParser::COMMA) {
        setState(275);
        match(BazParser::COMMA);
        setState(276);
        exp(0);
        setState(281);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(282);
      match(BazParser::CBRACE);
      break;
    }

    case 8: {
      setState(284);
      boollit();
      break;
    }

    case 9: {
      setState(285);
      charlit();
      break;
    }

    case 10: {
      setState(286);
      intlit();
      break;
    }

    case 11: {
      setState(287);
      reallit();
      break;
    }

    case 12: {
      setState(288);
      stringlit();
      break;
    }

    case 13: {
      setState(289);
      variable();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(356);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(354);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(292);

          if (!(precpred(_ctx, 33))) throw FailedPredicateException(this, "precpred(_ctx, 33)");
          setState(293);
          match(BazParser::OR);
          setState(294);
          exp(34);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(295);

          if (!(precpred(_ctx, 32))) throw FailedPredicateException(this, "precpred(_ctx, 32)");
          setState(296);
          match(BazParser::AND);
          setState(297);
          exp(33);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(298);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(299);
          match(BazParser::BITAND);
          setState(300);
          exp(32);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(301);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(302);
          match(BazParser::BITOR);
          setState(303);
          exp(31);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(304);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(305);
          match(BazParser::BITXOR);
          setState(306);
          exp(30);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(307);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(308);
          match(BazParser::EQUAL);
          setState(309);
          exp(29);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(310);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(311);
          match(BazParser::NOTEQUAL);
          setState(312);
          exp(28);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(313);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(314);
          match(BazParser::LESS);
          setState(315);
          exp(27);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(316);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(317);
          match(BazParser::GREATER);
          setState(318);
          exp(26);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(319);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(320);
          match(BazParser::LESSEQ);
          setState(321);
          exp(25);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(322);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(323);
          match(BazParser::GREATEREQ);
          setState(324);
          exp(24);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(325);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(326);
          match(BazParser::BITLSHIFT);
          setState(327);
          exp(23);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(328);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(329);
          match(BazParser::BITRSHIFT);
          setState(330);
          exp(22);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(331);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(332);
          match(BazParser::ADD);
          setState(333);
          exp(21);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(334);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(335);
          match(BazParser::SUBTRACT);
          setState(336);
          exp(20);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(337);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(338);
          match(BazParser::MULTIPLY);
          setState(339);
          exp(19);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(340);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(341);
          match(BazParser::DIVIDE);
          setState(342);
          exp(18);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(343);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(344);
          match(BazParser::MODULUS);
          setState(345);
          exp(17);
          break;
        }

        case 19: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(346);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(347);
          match(BazParser::ACCESS);
          setState(348);
          exp(10);
          break;
        }

        case 20: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(349);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(350);
          match(BazParser::OBRACK);
          setState(351);
          exp(0);
          setState(352);
          match(BazParser::CBRACK);
          break;
        }

        default:
          break;
        } 
      }
      setState(358);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BoollitContext ------------------------------------------------------------------

BazParser::BoollitContext::BoollitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::BoollitContext::FALSE() {
  return getToken(BazParser::FALSE, 0);
}

tree::TerminalNode* BazParser::BoollitContext::TRUE() {
  return getToken(BazParser::TRUE, 0);
}


size_t BazParser::BoollitContext::getRuleIndex() const {
  return BazParser::RuleBoollit;
}


std::any BazParser::BoollitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitBoollit(this);
  else
    return visitor->visitChildren(this);
}

BazParser::BoollitContext* BazParser::boollit() {
  BoollitContext *_localctx = _tracker.createInstance<BoollitContext>(_ctx, getState());
  enterRule(_localctx, 58, BazParser::RuleBoollit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    _la = _input->LA(1);
    if (!(_la == BazParser::TRUE

    || _la == BazParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharlitContext ------------------------------------------------------------------

BazParser::CharlitContext::CharlitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::CharlitContext::CHARLIT() {
  return getToken(BazParser::CHARLIT, 0);
}


size_t BazParser::CharlitContext::getRuleIndex() const {
  return BazParser::RuleCharlit;
}


std::any BazParser::CharlitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitCharlit(this);
  else
    return visitor->visitChildren(this);
}

BazParser::CharlitContext* BazParser::charlit() {
  CharlitContext *_localctx = _tracker.createInstance<CharlitContext>(_ctx, getState());
  enterRule(_localctx, 60, BazParser::RuleCharlit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(BazParser::CHARLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntlitContext ------------------------------------------------------------------

BazParser::IntlitContext::IntlitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::IntlitContext::INTLIT() {
  return getToken(BazParser::INTLIT, 0);
}


size_t BazParser::IntlitContext::getRuleIndex() const {
  return BazParser::RuleIntlit;
}


std::any BazParser::IntlitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitIntlit(this);
  else
    return visitor->visitChildren(this);
}

BazParser::IntlitContext* BazParser::intlit() {
  IntlitContext *_localctx = _tracker.createInstance<IntlitContext>(_ctx, getState());
  enterRule(_localctx, 62, BazParser::RuleIntlit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(BazParser::INTLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReallitContext ------------------------------------------------------------------

BazParser::ReallitContext::ReallitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::ReallitContext::REALLIT() {
  return getToken(BazParser::REALLIT, 0);
}


size_t BazParser::ReallitContext::getRuleIndex() const {
  return BazParser::RuleReallit;
}


std::any BazParser::ReallitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitReallit(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ReallitContext* BazParser::reallit() {
  ReallitContext *_localctx = _tracker.createInstance<ReallitContext>(_ctx, getState());
  enterRule(_localctx, 64, BazParser::RuleReallit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    match(BazParser::REALLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringlitContext ------------------------------------------------------------------

BazParser::StringlitContext::StringlitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::StringlitContext::STRINGLIT() {
  return getToken(BazParser::STRINGLIT, 0);
}


size_t BazParser::StringlitContext::getRuleIndex() const {
  return BazParser::RuleStringlit;
}


std::any BazParser::StringlitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitStringlit(this);
  else
    return visitor->visitChildren(this);
}

BazParser::StringlitContext* BazParser::stringlit() {
  StringlitContext *_localctx = _tracker.createInstance<StringlitContext>(_ctx, getState());
  enterRule(_localctx, 66, BazParser::RuleStringlit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    match(BazParser::STRINGLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

BazParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::VariableContext::NAME() {
  return getToken(BazParser::NAME, 0);
}


size_t BazParser::VariableContext::getRuleIndex() const {
  return BazParser::RuleVariable;
}


std::any BazParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

BazParser::VariableContext* BazParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 68, BazParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    match(BazParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

BazParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::TypeContext::BOOL() {
  return getToken(BazParser::BOOL, 0);
}

tree::TerminalNode* BazParser::TypeContext::CHAR() {
  return getToken(BazParser::CHAR, 0);
}

tree::TerminalNode* BazParser::TypeContext::INT() {
  return getToken(BazParser::INT, 0);
}

tree::TerminalNode* BazParser::TypeContext::LONG() {
  return getToken(BazParser::LONG, 0);
}

tree::TerminalNode* BazParser::TypeContext::REAL() {
  return getToken(BazParser::REAL, 0);
}

tree::TerminalNode* BazParser::TypeContext::NAME() {
  return getToken(BazParser::NAME, 0);
}

BazParser::ArraytypeContext* BazParser::TypeContext::arraytype() {
  return getRuleContext<BazParser::ArraytypeContext>(0);
}


size_t BazParser::TypeContext::getRuleIndex() const {
  return BazParser::RuleType;
}


std::any BazParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

BazParser::TypeContext* BazParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 70, BazParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(371);
      match(BazParser::BOOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(372);
      match(BazParser::CHAR);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(373);
      match(BazParser::INT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(374);
      match(BazParser::LONG);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(375);
      match(BazParser::REAL);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(376);
      match(BazParser::NAME);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(377);
      arraytype();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraytypeContext ------------------------------------------------------------------

BazParser::ArraytypeContext::ArraytypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BazParser::BasetypeContext* BazParser::ArraytypeContext::basetype() {
  return getRuleContext<BazParser::BasetypeContext>(0);
}

std::vector<tree::TerminalNode *> BazParser::ArraytypeContext::OBRACK() {
  return getTokens(BazParser::OBRACK);
}

tree::TerminalNode* BazParser::ArraytypeContext::OBRACK(size_t i) {
  return getToken(BazParser::OBRACK, i);
}

std::vector<tree::TerminalNode *> BazParser::ArraytypeContext::CBRACK() {
  return getTokens(BazParser::CBRACK);
}

tree::TerminalNode* BazParser::ArraytypeContext::CBRACK(size_t i) {
  return getToken(BazParser::CBRACK, i);
}


size_t BazParser::ArraytypeContext::getRuleIndex() const {
  return BazParser::RuleArraytype;
}


std::any BazParser::ArraytypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitArraytype(this);
  else
    return visitor->visitChildren(this);
}

BazParser::ArraytypeContext* BazParser::arraytype() {
  ArraytypeContext *_localctx = _tracker.createInstance<ArraytypeContext>(_ctx, getState());
  enterRule(_localctx, 72, BazParser::RuleArraytype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    basetype();
    setState(383); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(381);
      match(BazParser::OBRACK);
      setState(382);
      match(BazParser::CBRACK);
      setState(385); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BazParser::OBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasetypeContext ------------------------------------------------------------------

BazParser::BasetypeContext::BasetypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BazParser::BasetypeContext::BOOL() {
  return getToken(BazParser::BOOL, 0);
}

tree::TerminalNode* BazParser::BasetypeContext::CHAR() {
  return getToken(BazParser::CHAR, 0);
}

tree::TerminalNode* BazParser::BasetypeContext::INT() {
  return getToken(BazParser::INT, 0);
}

tree::TerminalNode* BazParser::BasetypeContext::LONG() {
  return getToken(BazParser::LONG, 0);
}

tree::TerminalNode* BazParser::BasetypeContext::REAL() {
  return getToken(BazParser::REAL, 0);
}

tree::TerminalNode* BazParser::BasetypeContext::NAME() {
  return getToken(BazParser::NAME, 0);
}


size_t BazParser::BasetypeContext::getRuleIndex() const {
  return BazParser::RuleBasetype;
}


std::any BazParser::BasetypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BazVisitor*>(visitor))
    return parserVisitor->visitBasetype(this);
  else
    return visitor->visitChildren(this);
}

BazParser::BasetypeContext* BazParser::basetype() {
  BasetypeContext *_localctx = _tracker.createInstance<BasetypeContext>(_ctx, getState());
  enterRule(_localctx, 74, BazParser::RuleBasetype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 272678883688452) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BazParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 28: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BazParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 33);
    case 1: return precpred(_ctx, 32);
    case 2: return precpred(_ctx, 31);
    case 3: return precpred(_ctx, 30);
    case 4: return precpred(_ctx, 29);
    case 5: return precpred(_ctx, 28);
    case 6: return precpred(_ctx, 27);
    case 7: return precpred(_ctx, 26);
    case 8: return precpred(_ctx, 25);
    case 9: return precpred(_ctx, 24);
    case 10: return precpred(_ctx, 23);
    case 11: return precpred(_ctx, 22);
    case 12: return precpred(_ctx, 21);
    case 13: return precpred(_ctx, 20);
    case 14: return precpred(_ctx, 19);
    case 15: return precpred(_ctx, 18);
    case 16: return precpred(_ctx, 17);
    case 17: return precpred(_ctx, 16);
    case 18: return precpred(_ctx, 9);
    case 19: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void BazParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  bazParserInitialize();
#else
  ::antlr4::internal::call_once(bazParserOnceFlag, bazParserInitialize);
#endif
}
