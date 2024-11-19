
// Generated from src/PrystParser.g4 by ANTLR 4.13.2


#include "PrystParserVisitor.h"

#include "PrystParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PrystParserStaticData final {
  PrystParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PrystParserStaticData(const PrystParserStaticData&) = delete;
  PrystParserStaticData(PrystParserStaticData&&) = delete;
  PrystParserStaticData& operator=(const PrystParserStaticData&) = delete;
  PrystParserStaticData& operator=(PrystParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag prystparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PrystParserStaticData> prystparserParserStaticData = nullptr;

void prystparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (prystparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(prystparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PrystParserStaticData>(
    std::vector<std::string>{
      "program", "moduleDecl", "importDecl", "importPath", "declaration", 
      "errorDecl", "functionDecl", "parameters", "parameter", "defaultParam", 
      "block", "statement", "varDecl", "identifierList", "assignment", "ifStmt", 
      "whileStmt", "forStmt", "returnStmt", "tryStmt", "breakStmt", "continueStmt", 
      "expressionStmt", "classDecl", "interfaceDecl", "interfaceMember", 
      "genericParams", "genericArgs", "classMember", "overloadParams", "constructorDecl", 
      "constructorBlock", "type", "qualifiedType", "returnType", "nullableType", 
      "basicType", "arrayType", "mapType", "keyType", "functionType", "typeList", 
      "expression", "primary", "stringInterpolation", "chainedCall", "stringLiteral", 
      "lambdaParams", "arguments", "arrayLiteral", "mapLiteral", "mapEntry", 
      "mapKey", "errorMember"
    },
    std::vector<std::string>{
      "", "", "", "", "'int'", "'float'", "'bool'", "'str'", "'void'", "'fn'", 
      "'let'", "'const'", "'const!'", "'class'", "'interface'", "'extends'", 
      "'implements'", "'return'", "'if'", "'else'", "'while'", "'for'", 
      "'in'", "'import'", "'module'", "'try'", "'catch'", "'finally'", "'as'", 
      "'break'", "'continue'", "'new'", "'map'", "'from'", "'this'", "'null'", 
      "'instanceof'", "'typeof'", "'error'", "'\\u003F\\u003F'", "", "", 
      "", "", "'%'", "'='", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", 
      "'&&'", "'||'", "'!'", "'\\u003F'", "':'", "'->'", "'++'", "'--'", 
      "", "", "'{'", "'}'", "'['", "']'", "';'", "", "", "'::'"
    },
    std::vector<std::string>{
      "", "INTEGER", "FLOAT_LITERAL", "BOOLEAN", "INT", "FLOAT", "BOOL", 
      "STR", "VOID", "FN", "LET", "CONST", "CONST_EXPR", "CLASS", "INTERFACE", 
      "EXTENDS", "IMPLEMENTS", "RETURN", "IF", "ELSE", "WHILE", "FOR", "IN", 
      "IMPORT", "MODULE", "TRY", "CATCH", "FINALLY", "AS", "BREAK", "CONTINUE", 
      "NEW", "MAP", "FROM", "THIS", "NULL_LIT", "INSTANCEOF", "TYPEOF", 
      "ERROR", "NULL_COALESCE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", 
      "ASSIGN", "EQ", "NEQ", "LT", "GT", "LE", "GE", "AND", "OR", "NOT", 
      "QUESTION_MARK", "COLON", "ARROW", "INC", "DEC", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMICOLON", "COMMA", "DOT", 
      "DOUBLE_COLON", "IDENTIFIER", "STRING", "STRING_START", "STRING_MIDDLE", 
      "STRING_END", "WS", "COMMENT", "BLOCK_COMMENT", "INVALID_CHAR", "INVALID_IDENTIFIER", 
      "INTERP_WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,80,867,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,1,0,5,0,110,8,0,10,0,12,0,
  	113,9,0,1,0,5,0,116,8,0,10,0,12,0,119,9,0,1,0,5,0,122,8,0,10,0,12,0,125,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,5,1,133,8,1,10,1,12,1,136,9,1,1,1,1,1,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,156,8,
  	2,10,2,12,2,159,9,2,1,2,1,2,3,2,163,8,2,1,3,1,3,1,3,5,3,168,8,3,10,3,
  	12,3,171,9,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,179,8,4,1,5,1,5,1,5,1,5,3,5,
  	185,8,5,1,5,1,5,1,5,5,5,190,8,5,10,5,12,5,193,9,5,1,5,1,5,1,6,1,6,1,6,
  	3,6,200,8,6,1,6,1,6,3,6,204,8,6,1,6,1,6,1,6,1,7,1,7,3,7,211,8,7,1,7,1,
  	7,1,7,3,7,216,8,7,5,7,218,8,7,10,7,12,7,221,9,7,1,8,1,8,1,8,1,9,1,9,1,
  	9,1,9,1,9,1,10,1,10,5,10,233,8,10,10,10,12,10,236,9,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,251,8,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,277,8,12,1,12,1,12,
  	3,12,281,8,12,1,13,1,13,1,13,5,13,286,8,13,10,13,12,13,289,9,13,1,14,
  	1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,303,8,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,3,17,315,8,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,328,8,17,1,17,
  	3,17,331,8,17,1,17,1,17,3,17,335,8,17,1,17,1,17,3,17,339,8,17,1,18,1,
  	18,3,18,343,8,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,5,19,356,8,19,10,19,12,19,359,9,19,1,19,1,19,3,19,363,8,19,1,20,1,
  	20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,3,23,377,8,23,1,
  	23,1,23,1,23,3,23,382,8,23,3,23,384,8,23,1,23,1,23,1,23,3,23,389,8,23,
  	1,23,1,23,1,23,3,23,394,8,23,5,23,396,8,23,10,23,12,23,399,9,23,3,23,
  	401,8,23,1,23,1,23,1,23,5,23,406,8,23,10,23,12,23,409,9,23,1,23,1,23,
  	1,24,1,24,1,24,3,24,416,8,24,1,24,1,24,1,24,3,24,421,8,24,1,24,1,24,1,
  	24,3,24,426,8,24,5,24,428,8,24,10,24,12,24,431,9,24,3,24,433,8,24,1,24,
  	1,24,5,24,437,8,24,10,24,12,24,440,9,24,1,24,1,24,1,25,1,25,1,25,1,25,
  	3,25,448,8,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,3,25,457,8,25,1,26,1,
  	26,1,26,1,26,5,26,463,8,26,10,26,12,26,466,9,26,1,26,1,26,1,27,1,27,1,
  	27,1,27,5,27,474,8,27,10,27,12,27,477,9,27,1,27,1,27,1,28,3,28,482,8,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,491,8,28,1,28,1,28,3,28,495,
  	8,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,504,8,28,1,28,1,28,1,28,
  	3,28,509,8,28,1,29,1,29,1,29,5,29,514,8,29,10,29,12,29,517,9,29,1,30,
  	1,30,1,30,3,30,522,8,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,
  	1,31,1,31,1,31,5,31,536,8,31,10,31,12,31,539,9,31,1,31,1,31,1,32,1,32,
  	1,32,3,32,546,8,32,1,32,1,32,1,32,1,32,3,32,552,8,32,1,33,1,33,1,33,5,
  	33,557,8,33,10,33,12,33,560,9,33,1,34,1,34,3,34,564,8,34,1,35,1,35,1,
  	35,1,35,1,35,3,35,571,8,35,1,35,1,35,1,36,1,36,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,1,37,5,37,585,8,37,10,37,12,37,588,9,37,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,38,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,40,3,40,605,8,
  	40,1,40,1,40,1,41,1,41,1,41,5,41,612,8,41,10,41,12,41,615,9,41,1,42,1,
  	42,1,42,1,42,1,42,3,42,622,8,42,1,42,1,42,3,42,626,8,42,1,42,1,42,1,42,
  	1,42,1,42,3,42,633,8,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,
  	1,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,651,8,42,1,42,1,42,1,42,1,42,
  	1,42,1,42,3,42,659,8,42,3,42,661,8,42,1,42,1,42,1,42,1,42,1,42,1,42,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,707,8,42,1,42,1,
  	42,3,42,711,8,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,719,8,42,1,42,1,42,
  	3,42,723,8,42,1,42,1,42,1,42,1,42,1,42,1,42,4,42,731,8,42,11,42,12,42,
  	732,1,42,1,42,1,42,1,42,5,42,739,8,42,10,42,12,42,742,9,42,1,43,1,43,
  	1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,3,43,754,8,43,1,44,1,44,1,44,
  	1,44,5,44,760,8,44,10,44,12,44,763,9,44,1,44,1,44,1,45,1,45,1,45,1,45,
  	1,45,1,45,3,45,773,8,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,
  	3,45,784,8,45,1,45,3,45,787,8,45,1,46,1,46,1,47,1,47,1,47,1,47,1,47,1,
  	47,5,47,797,8,47,10,47,12,47,800,9,47,1,48,1,48,1,48,5,48,805,8,48,10,
  	48,12,48,808,9,48,1,49,1,49,1,49,1,49,1,49,1,49,5,49,816,8,49,10,49,12,
  	49,819,9,49,1,49,3,49,822,8,49,1,49,1,49,3,49,826,8,49,1,50,1,50,1,50,
  	1,50,1,50,1,50,5,50,834,8,50,10,50,12,50,837,9,50,1,50,3,50,840,8,50,
  	1,50,1,50,3,50,844,8,50,1,51,1,51,1,51,1,51,1,52,1,52,1,53,1,53,1,53,
  	1,53,1,53,1,53,1,53,1,53,3,53,860,8,53,1,53,1,53,1,53,3,53,865,8,53,1,
  	53,0,2,74,84,54,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,
  	86,88,90,92,94,96,98,100,102,104,106,0,10,1,0,11,12,2,0,4,8,70,70,2,0,
  	4,4,7,7,3,0,41,41,54,54,58,59,1,0,42,44,1,0,40,41,1,0,48,51,1,0,46,47,
  	1,0,58,59,2,0,1,1,71,71,962,0,111,1,0,0,0,2,128,1,0,0,0,4,162,1,0,0,0,
  	6,164,1,0,0,0,8,178,1,0,0,0,10,180,1,0,0,0,12,196,1,0,0,0,14,210,1,0,
  	0,0,16,222,1,0,0,0,18,225,1,0,0,0,20,230,1,0,0,0,22,250,1,0,0,0,24,280,
  	1,0,0,0,26,282,1,0,0,0,28,290,1,0,0,0,30,295,1,0,0,0,32,304,1,0,0,0,34,
  	338,1,0,0,0,36,340,1,0,0,0,38,346,1,0,0,0,40,364,1,0,0,0,42,367,1,0,0,
  	0,44,370,1,0,0,0,46,373,1,0,0,0,48,412,1,0,0,0,50,456,1,0,0,0,52,458,
  	1,0,0,0,54,469,1,0,0,0,56,508,1,0,0,0,58,510,1,0,0,0,60,518,1,0,0,0,62,
  	526,1,0,0,0,64,551,1,0,0,0,66,553,1,0,0,0,68,563,1,0,0,0,70,570,1,0,0,
  	0,72,574,1,0,0,0,74,576,1,0,0,0,76,589,1,0,0,0,78,596,1,0,0,0,80,598,
  	1,0,0,0,82,608,1,0,0,0,84,660,1,0,0,0,86,753,1,0,0,0,88,755,1,0,0,0,90,
  	786,1,0,0,0,92,788,1,0,0,0,94,790,1,0,0,0,96,801,1,0,0,0,98,825,1,0,0,
  	0,100,843,1,0,0,0,102,845,1,0,0,0,104,849,1,0,0,0,106,864,1,0,0,0,108,
  	110,3,2,1,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,
  	0,0,0,112,117,1,0,0,0,113,111,1,0,0,0,114,116,3,4,2,0,115,114,1,0,0,0,
  	116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,123,1,0,0,0,119,117,
  	1,0,0,0,120,122,3,8,4,0,121,120,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,
  	0,123,124,1,0,0,0,124,126,1,0,0,0,125,123,1,0,0,0,126,127,5,0,0,1,127,
  	1,1,0,0,0,128,129,5,24,0,0,129,130,3,6,3,0,130,134,5,62,0,0,131,133,3,
  	8,4,0,132,131,1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,
  	135,137,1,0,0,0,136,134,1,0,0,0,137,138,5,63,0,0,138,3,1,0,0,0,139,140,
  	5,23,0,0,140,141,3,6,3,0,141,142,5,66,0,0,142,163,1,0,0,0,143,144,5,23,
  	0,0,144,145,3,6,3,0,145,146,5,28,0,0,146,147,5,70,0,0,147,148,5,66,0,
  	0,148,163,1,0,0,0,149,150,5,33,0,0,150,151,3,6,3,0,151,152,5,23,0,0,152,
  	157,5,70,0,0,153,154,5,67,0,0,154,156,5,70,0,0,155,153,1,0,0,0,156,159,
  	1,0,0,0,157,155,1,0,0,0,157,158,1,0,0,0,158,160,1,0,0,0,159,157,1,0,0,
  	0,160,161,5,66,0,0,161,163,1,0,0,0,162,139,1,0,0,0,162,143,1,0,0,0,162,
  	149,1,0,0,0,163,5,1,0,0,0,164,169,5,70,0,0,165,166,5,69,0,0,166,168,5,
  	70,0,0,167,165,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,
  	0,170,7,1,0,0,0,171,169,1,0,0,0,172,179,3,12,6,0,173,179,3,46,23,0,174,
  	179,3,48,24,0,175,179,3,10,5,0,176,179,3,24,12,0,177,179,3,38,19,0,178,
  	172,1,0,0,0,178,173,1,0,0,0,178,174,1,0,0,0,178,175,1,0,0,0,178,176,1,
  	0,0,0,178,177,1,0,0,0,179,9,1,0,0,0,180,181,5,38,0,0,181,184,3,66,33,
  	0,182,183,5,15,0,0,183,185,3,66,33,0,184,182,1,0,0,0,184,185,1,0,0,0,
  	185,186,1,0,0,0,186,191,5,62,0,0,187,190,3,60,30,0,188,190,3,106,53,0,
  	189,187,1,0,0,0,189,188,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,
  	1,0,0,0,192,194,1,0,0,0,193,191,1,0,0,0,194,195,5,63,0,0,195,11,1,0,0,
  	0,196,197,3,68,34,0,197,199,5,70,0,0,198,200,3,52,26,0,199,198,1,0,0,
  	0,199,200,1,0,0,0,200,201,1,0,0,0,201,203,5,60,0,0,202,204,3,14,7,0,203,
  	202,1,0,0,0,203,204,1,0,0,0,204,205,1,0,0,0,205,206,5,61,0,0,206,207,
  	3,20,10,0,207,13,1,0,0,0,208,211,3,16,8,0,209,211,3,18,9,0,210,208,1,
  	0,0,0,210,209,1,0,0,0,211,219,1,0,0,0,212,215,5,67,0,0,213,216,3,16,8,
  	0,214,216,3,18,9,0,215,213,1,0,0,0,215,214,1,0,0,0,216,218,1,0,0,0,217,
  	212,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,15,1,
  	0,0,0,221,219,1,0,0,0,222,223,3,64,32,0,223,224,5,70,0,0,224,17,1,0,0,
  	0,225,226,3,64,32,0,226,227,5,70,0,0,227,228,5,45,0,0,228,229,3,84,42,
  	0,229,19,1,0,0,0,230,234,5,62,0,0,231,233,3,22,11,0,232,231,1,0,0,0,233,
  	236,1,0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,237,1,0,0,0,236,234,1,
  	0,0,0,237,238,5,63,0,0,238,21,1,0,0,0,239,251,3,20,10,0,240,251,3,24,
  	12,0,241,251,3,28,14,0,242,251,3,44,22,0,243,251,3,30,15,0,244,251,3,
  	32,16,0,245,251,3,34,17,0,246,251,3,36,18,0,247,251,3,38,19,0,248,251,
  	3,40,20,0,249,251,3,42,21,0,250,239,1,0,0,0,250,240,1,0,0,0,250,241,1,
  	0,0,0,250,242,1,0,0,0,250,243,1,0,0,0,250,244,1,0,0,0,250,245,1,0,0,0,
  	250,246,1,0,0,0,250,247,1,0,0,0,250,248,1,0,0,0,250,249,1,0,0,0,251,23,
  	1,0,0,0,252,253,5,11,0,0,253,254,3,64,32,0,254,255,3,26,13,0,255,256,
  	5,45,0,0,256,257,3,84,42,0,257,258,5,66,0,0,258,281,1,0,0,0,259,260,5,
  	12,0,0,260,261,3,64,32,0,261,262,3,26,13,0,262,263,5,45,0,0,263,264,3,
  	84,42,0,264,265,5,66,0,0,265,281,1,0,0,0,266,267,5,10,0,0,267,268,3,26,
  	13,0,268,269,5,45,0,0,269,270,3,84,42,0,270,271,5,66,0,0,271,281,1,0,
  	0,0,272,273,3,64,32,0,273,276,3,26,13,0,274,275,5,45,0,0,275,277,3,84,
  	42,0,276,274,1,0,0,0,276,277,1,0,0,0,277,278,1,0,0,0,278,279,5,66,0,0,
  	279,281,1,0,0,0,280,252,1,0,0,0,280,259,1,0,0,0,280,266,1,0,0,0,280,272,
  	1,0,0,0,281,25,1,0,0,0,282,287,5,70,0,0,283,284,5,67,0,0,284,286,5,70,
  	0,0,285,283,1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,0,288,
  	27,1,0,0,0,289,287,1,0,0,0,290,291,3,84,42,0,291,292,5,45,0,0,292,293,
  	3,84,42,0,293,294,5,66,0,0,294,29,1,0,0,0,295,296,5,18,0,0,296,297,5,
  	60,0,0,297,298,3,84,42,0,298,299,5,61,0,0,299,302,3,22,11,0,300,301,5,
  	19,0,0,301,303,3,22,11,0,302,300,1,0,0,0,302,303,1,0,0,0,303,31,1,0,0,
  	0,304,305,5,20,0,0,305,306,5,60,0,0,306,307,3,84,42,0,307,308,5,61,0,
  	0,308,309,3,22,11,0,309,33,1,0,0,0,310,311,5,21,0,0,311,314,5,60,0,0,
  	312,315,5,10,0,0,313,315,3,64,32,0,314,312,1,0,0,0,314,313,1,0,0,0,315,
  	316,1,0,0,0,316,317,5,70,0,0,317,318,5,22,0,0,318,319,3,84,42,0,319,320,
  	5,61,0,0,320,321,3,22,11,0,321,339,1,0,0,0,322,323,5,21,0,0,323,327,5,
  	60,0,0,324,328,3,24,12,0,325,328,3,44,22,0,326,328,5,66,0,0,327,324,1,
  	0,0,0,327,325,1,0,0,0,327,326,1,0,0,0,328,330,1,0,0,0,329,331,3,84,42,
  	0,330,329,1,0,0,0,330,331,1,0,0,0,331,332,1,0,0,0,332,334,5,66,0,0,333,
  	335,3,84,42,0,334,333,1,0,0,0,334,335,1,0,0,0,335,336,1,0,0,0,336,337,
  	5,61,0,0,337,339,3,22,11,0,338,310,1,0,0,0,338,322,1,0,0,0,339,35,1,0,
  	0,0,340,342,5,17,0,0,341,343,3,84,42,0,342,341,1,0,0,0,342,343,1,0,0,
  	0,343,344,1,0,0,0,344,345,5,66,0,0,345,37,1,0,0,0,346,347,5,25,0,0,347,
  	357,3,20,10,0,348,349,5,26,0,0,349,350,5,60,0,0,350,351,3,64,32,0,351,
  	352,5,70,0,0,352,353,5,61,0,0,353,354,3,20,10,0,354,356,1,0,0,0,355,348,
  	1,0,0,0,356,359,1,0,0,0,357,355,1,0,0,0,357,358,1,0,0,0,358,362,1,0,0,
  	0,359,357,1,0,0,0,360,361,5,27,0,0,361,363,3,20,10,0,362,360,1,0,0,0,
  	362,363,1,0,0,0,363,39,1,0,0,0,364,365,5,29,0,0,365,366,5,66,0,0,366,
  	41,1,0,0,0,367,368,5,30,0,0,368,369,5,66,0,0,369,43,1,0,0,0,370,371,3,
  	84,42,0,371,372,5,66,0,0,372,45,1,0,0,0,373,374,5,13,0,0,374,376,5,70,
  	0,0,375,377,3,52,26,0,376,375,1,0,0,0,376,377,1,0,0,0,377,383,1,0,0,0,
  	378,379,5,15,0,0,379,381,5,70,0,0,380,382,3,54,27,0,381,380,1,0,0,0,381,
  	382,1,0,0,0,382,384,1,0,0,0,383,378,1,0,0,0,383,384,1,0,0,0,384,400,1,
  	0,0,0,385,386,5,16,0,0,386,388,5,70,0,0,387,389,3,54,27,0,388,387,1,0,
  	0,0,388,389,1,0,0,0,389,397,1,0,0,0,390,391,5,67,0,0,391,393,5,70,0,0,
  	392,394,3,54,27,0,393,392,1,0,0,0,393,394,1,0,0,0,394,396,1,0,0,0,395,
  	390,1,0,0,0,396,399,1,0,0,0,397,395,1,0,0,0,397,398,1,0,0,0,398,401,1,
  	0,0,0,399,397,1,0,0,0,400,385,1,0,0,0,400,401,1,0,0,0,401,402,1,0,0,0,
  	402,407,5,62,0,0,403,406,3,60,30,0,404,406,3,56,28,0,405,403,1,0,0,0,
  	405,404,1,0,0,0,406,409,1,0,0,0,407,405,1,0,0,0,407,408,1,0,0,0,408,410,
  	1,0,0,0,409,407,1,0,0,0,410,411,5,63,0,0,411,47,1,0,0,0,412,413,5,14,
  	0,0,413,415,5,70,0,0,414,416,3,52,26,0,415,414,1,0,0,0,415,416,1,0,0,
  	0,416,432,1,0,0,0,417,418,5,15,0,0,418,420,5,70,0,0,419,421,3,54,27,0,
  	420,419,1,0,0,0,420,421,1,0,0,0,421,429,1,0,0,0,422,423,5,67,0,0,423,
  	425,5,70,0,0,424,426,3,54,27,0,425,424,1,0,0,0,425,426,1,0,0,0,426,428,
  	1,0,0,0,427,422,1,0,0,0,428,431,1,0,0,0,429,427,1,0,0,0,429,430,1,0,0,
  	0,430,433,1,0,0,0,431,429,1,0,0,0,432,417,1,0,0,0,432,433,1,0,0,0,433,
  	434,1,0,0,0,434,438,5,62,0,0,435,437,3,50,25,0,436,435,1,0,0,0,437,440,
  	1,0,0,0,438,436,1,0,0,0,438,439,1,0,0,0,439,441,1,0,0,0,440,438,1,0,0,
  	0,441,442,5,63,0,0,442,49,1,0,0,0,443,444,3,68,34,0,444,445,5,70,0,0,
  	445,447,5,60,0,0,446,448,3,14,7,0,447,446,1,0,0,0,447,448,1,0,0,0,448,
  	449,1,0,0,0,449,450,5,61,0,0,450,451,5,66,0,0,451,457,1,0,0,0,452,453,
  	3,68,34,0,453,454,5,70,0,0,454,455,5,66,0,0,455,457,1,0,0,0,456,443,1,
  	0,0,0,456,452,1,0,0,0,457,51,1,0,0,0,458,459,5,48,0,0,459,464,5,70,0,
  	0,460,461,5,67,0,0,461,463,5,70,0,0,462,460,1,0,0,0,463,466,1,0,0,0,464,
  	462,1,0,0,0,464,465,1,0,0,0,465,467,1,0,0,0,466,464,1,0,0,0,467,468,5,
  	49,0,0,468,53,1,0,0,0,469,470,5,48,0,0,470,475,3,64,32,0,471,472,5,67,
  	0,0,472,474,3,64,32,0,473,471,1,0,0,0,474,477,1,0,0,0,475,473,1,0,0,0,
  	475,476,1,0,0,0,476,478,1,0,0,0,477,475,1,0,0,0,478,479,5,49,0,0,479,
  	55,1,0,0,0,480,482,7,0,0,0,481,480,1,0,0,0,481,482,1,0,0,0,482,483,1,
  	0,0,0,483,484,3,64,32,0,484,485,5,70,0,0,485,486,5,66,0,0,486,509,1,0,
  	0,0,487,488,3,68,34,0,488,490,5,70,0,0,489,491,3,52,26,0,490,489,1,0,
  	0,0,490,491,1,0,0,0,491,492,1,0,0,0,492,494,5,60,0,0,493,495,3,14,7,0,
  	494,493,1,0,0,0,494,495,1,0,0,0,495,496,1,0,0,0,496,497,5,61,0,0,497,
  	498,3,20,10,0,498,509,1,0,0,0,499,500,3,68,34,0,500,501,5,70,0,0,501,
  	503,5,60,0,0,502,504,3,58,29,0,503,502,1,0,0,0,503,504,1,0,0,0,504,505,
  	1,0,0,0,505,506,5,61,0,0,506,507,3,20,10,0,507,509,1,0,0,0,508,481,1,
  	0,0,0,508,487,1,0,0,0,508,499,1,0,0,0,509,57,1,0,0,0,510,515,3,16,8,0,
  	511,512,5,67,0,0,512,514,3,16,8,0,513,511,1,0,0,0,514,517,1,0,0,0,515,
  	513,1,0,0,0,515,516,1,0,0,0,516,59,1,0,0,0,517,515,1,0,0,0,518,519,5,
  	70,0,0,519,521,5,60,0,0,520,522,3,14,7,0,521,520,1,0,0,0,521,522,1,0,
  	0,0,522,523,1,0,0,0,523,524,5,61,0,0,524,525,3,62,31,0,525,61,1,0,0,0,
  	526,537,5,62,0,0,527,528,5,34,0,0,528,529,5,68,0,0,529,530,5,70,0,0,530,
  	531,5,45,0,0,531,532,3,84,42,0,532,533,5,66,0,0,533,536,1,0,0,0,534,536,
  	3,22,11,0,535,527,1,0,0,0,535,534,1,0,0,0,536,539,1,0,0,0,537,535,1,0,
  	0,0,537,538,1,0,0,0,538,540,1,0,0,0,539,537,1,0,0,0,540,541,5,63,0,0,
  	541,63,1,0,0,0,542,552,3,70,35,0,543,545,3,66,33,0,544,546,3,54,27,0,
  	545,544,1,0,0,0,545,546,1,0,0,0,546,552,1,0,0,0,547,552,3,80,40,0,548,
  	552,3,74,37,0,549,552,3,76,38,0,550,552,3,72,36,0,551,542,1,0,0,0,551,
  	543,1,0,0,0,551,547,1,0,0,0,551,548,1,0,0,0,551,549,1,0,0,0,551,550,1,
  	0,0,0,552,65,1,0,0,0,553,558,5,70,0,0,554,555,5,69,0,0,555,557,5,70,0,
  	0,556,554,1,0,0,0,557,560,1,0,0,0,558,556,1,0,0,0,558,559,1,0,0,0,559,
  	67,1,0,0,0,560,558,1,0,0,0,561,564,3,64,32,0,562,564,5,8,0,0,563,561,
  	1,0,0,0,563,562,1,0,0,0,564,69,1,0,0,0,565,571,3,66,33,0,566,571,3,80,
  	40,0,567,571,3,74,37,0,568,571,3,76,38,0,569,571,3,72,36,0,570,565,1,
  	0,0,0,570,566,1,0,0,0,570,567,1,0,0,0,570,568,1,0,0,0,570,569,1,0,0,0,
  	571,572,1,0,0,0,572,573,5,55,0,0,573,71,1,0,0,0,574,575,7,1,0,0,575,73,
  	1,0,0,0,576,577,6,37,-1,0,577,578,3,72,36,0,578,579,5,64,0,0,579,580,
  	5,65,0,0,580,586,1,0,0,0,581,582,10,1,0,0,582,583,5,64,0,0,583,585,5,
  	65,0,0,584,581,1,0,0,0,585,588,1,0,0,0,586,584,1,0,0,0,586,587,1,0,0,
  	0,587,75,1,0,0,0,588,586,1,0,0,0,589,590,5,32,0,0,590,591,5,48,0,0,591,
  	592,3,78,39,0,592,593,5,67,0,0,593,594,3,64,32,0,594,595,5,49,0,0,595,
  	77,1,0,0,0,596,597,7,2,0,0,597,79,1,0,0,0,598,599,5,9,0,0,599,600,5,48,
  	0,0,600,601,3,68,34,0,601,602,5,49,0,0,602,604,5,60,0,0,603,605,3,82,
  	41,0,604,603,1,0,0,0,604,605,1,0,0,0,605,606,1,0,0,0,606,607,5,61,0,0,
  	607,81,1,0,0,0,608,613,3,64,32,0,609,610,5,67,0,0,610,612,3,64,32,0,611,
  	609,1,0,0,0,612,615,1,0,0,0,613,611,1,0,0,0,613,614,1,0,0,0,614,83,1,
  	0,0,0,615,613,1,0,0,0,616,617,6,42,-1,0,617,661,3,86,43,0,618,619,5,31,
  	0,0,619,621,3,66,33,0,620,622,3,54,27,0,621,620,1,0,0,0,621,622,1,0,0,
  	0,622,623,1,0,0,0,623,625,5,60,0,0,624,626,3,96,48,0,625,624,1,0,0,0,
  	625,626,1,0,0,0,626,627,1,0,0,0,627,628,5,61,0,0,628,661,1,0,0,0,629,
  	630,5,70,0,0,630,632,5,60,0,0,631,633,3,96,48,0,632,631,1,0,0,0,632,633,
  	1,0,0,0,633,634,1,0,0,0,634,661,5,61,0,0,635,636,5,37,0,0,636,661,3,84,
  	42,21,637,638,5,60,0,0,638,639,3,64,32,0,639,640,5,61,0,0,640,641,3,84,
  	42,15,641,661,1,0,0,0,642,643,5,60,0,0,643,644,3,84,42,0,644,645,5,61,
  	0,0,645,661,1,0,0,0,646,647,7,3,0,0,647,661,3,84,42,12,648,650,5,60,0,
  	0,649,651,3,94,47,0,650,649,1,0,0,0,650,651,1,0,0,0,651,652,1,0,0,0,652,
  	653,5,61,0,0,653,658,5,57,0,0,654,655,3,68,34,0,655,656,3,20,10,0,656,
  	659,1,0,0,0,657,659,3,84,42,0,658,654,1,0,0,0,658,657,1,0,0,0,659,661,
  	1,0,0,0,660,616,1,0,0,0,660,618,1,0,0,0,660,629,1,0,0,0,660,635,1,0,0,
  	0,660,637,1,0,0,0,660,642,1,0,0,0,660,646,1,0,0,0,660,648,1,0,0,0,661,
  	740,1,0,0,0,662,663,10,10,0,0,663,664,7,4,0,0,664,739,3,84,42,11,665,
  	666,10,9,0,0,666,667,7,5,0,0,667,739,3,84,42,10,668,669,10,8,0,0,669,
  	670,7,6,0,0,670,739,3,84,42,9,671,672,10,7,0,0,672,673,7,7,0,0,673,739,
  	3,84,42,8,674,675,10,6,0,0,675,676,5,39,0,0,676,739,3,84,42,7,677,678,
  	10,5,0,0,678,679,5,52,0,0,679,739,3,84,42,6,680,681,10,4,0,0,681,682,
  	5,53,0,0,682,739,3,84,42,5,683,684,10,3,0,0,684,685,5,55,0,0,685,686,
  	3,84,42,0,686,687,5,56,0,0,687,688,3,84,42,3,688,739,1,0,0,0,689,690,
  	10,2,0,0,690,691,5,45,0,0,691,739,3,84,42,2,692,693,10,22,0,0,693,694,
  	5,36,0,0,694,739,3,64,32,0,695,696,10,20,0,0,696,697,5,68,0,0,697,739,
  	5,70,0,0,698,699,10,19,0,0,699,700,5,55,0,0,700,701,5,68,0,0,701,739,
  	5,70,0,0,702,703,10,18,0,0,703,704,5,68,0,0,704,706,5,70,0,0,705,707,
  	3,54,27,0,706,705,1,0,0,0,706,707,1,0,0,0,707,708,1,0,0,0,708,710,5,60,
  	0,0,709,711,3,96,48,0,710,709,1,0,0,0,710,711,1,0,0,0,711,712,1,0,0,0,
  	712,739,5,61,0,0,713,714,10,17,0,0,714,715,5,55,0,0,715,716,5,68,0,0,
  	716,718,5,70,0,0,717,719,3,54,27,0,718,717,1,0,0,0,718,719,1,0,0,0,719,
  	720,1,0,0,0,720,722,5,60,0,0,721,723,3,96,48,0,722,721,1,0,0,0,722,723,
  	1,0,0,0,723,724,1,0,0,0,724,739,5,61,0,0,725,730,10,16,0,0,726,727,5,
  	64,0,0,727,728,3,84,42,0,728,729,5,65,0,0,729,731,1,0,0,0,730,726,1,0,
  	0,0,731,732,1,0,0,0,732,730,1,0,0,0,732,733,1,0,0,0,733,739,1,0,0,0,734,
  	735,10,14,0,0,735,739,5,54,0,0,736,737,10,11,0,0,737,739,7,8,0,0,738,
  	662,1,0,0,0,738,665,1,0,0,0,738,668,1,0,0,0,738,671,1,0,0,0,738,674,1,
  	0,0,0,738,677,1,0,0,0,738,680,1,0,0,0,738,683,1,0,0,0,738,689,1,0,0,0,
  	738,692,1,0,0,0,738,695,1,0,0,0,738,698,1,0,0,0,738,702,1,0,0,0,738,713,
  	1,0,0,0,738,725,1,0,0,0,738,734,1,0,0,0,738,736,1,0,0,0,739,742,1,0,0,
  	0,740,738,1,0,0,0,740,741,1,0,0,0,741,85,1,0,0,0,742,740,1,0,0,0,743,
  	754,5,34,0,0,744,754,5,70,0,0,745,754,5,1,0,0,746,754,5,2,0,0,747,754,
  	5,71,0,0,748,754,3,88,44,0,749,754,5,3,0,0,750,754,5,35,0,0,751,754,3,
  	98,49,0,752,754,3,100,50,0,753,743,1,0,0,0,753,744,1,0,0,0,753,745,1,
  	0,0,0,753,746,1,0,0,0,753,747,1,0,0,0,753,748,1,0,0,0,753,749,1,0,0,0,
  	753,750,1,0,0,0,753,751,1,0,0,0,753,752,1,0,0,0,754,87,1,0,0,0,755,756,
  	5,72,0,0,756,761,3,84,42,0,757,758,5,73,0,0,758,760,3,84,42,0,759,757,
  	1,0,0,0,760,763,1,0,0,0,761,759,1,0,0,0,761,762,1,0,0,0,762,764,1,0,0,
  	0,763,761,1,0,0,0,764,765,5,74,0,0,765,89,1,0,0,0,766,767,5,68,0,0,767,
  	787,5,70,0,0,768,769,5,68,0,0,769,770,5,70,0,0,770,772,5,60,0,0,771,773,
  	3,96,48,0,772,771,1,0,0,0,772,773,1,0,0,0,773,774,1,0,0,0,774,787,5,61,
  	0,0,775,776,5,55,0,0,776,777,5,68,0,0,777,787,5,70,0,0,778,779,5,55,0,
  	0,779,780,5,68,0,0,780,781,5,70,0,0,781,783,5,60,0,0,782,784,3,96,48,
  	0,783,782,1,0,0,0,783,784,1,0,0,0,784,785,1,0,0,0,785,787,5,61,0,0,786,
  	766,1,0,0,0,786,768,1,0,0,0,786,775,1,0,0,0,786,778,1,0,0,0,787,91,1,
  	0,0,0,788,789,5,71,0,0,789,93,1,0,0,0,790,791,3,64,32,0,791,798,5,70,
  	0,0,792,793,5,67,0,0,793,794,3,64,32,0,794,795,5,70,0,0,795,797,1,0,0,
  	0,796,792,1,0,0,0,797,800,1,0,0,0,798,796,1,0,0,0,798,799,1,0,0,0,799,
  	95,1,0,0,0,800,798,1,0,0,0,801,806,3,84,42,0,802,803,5,67,0,0,803,805,
  	3,84,42,0,804,802,1,0,0,0,805,808,1,0,0,0,806,804,1,0,0,0,806,807,1,0,
  	0,0,807,97,1,0,0,0,808,806,1,0,0,0,809,810,5,64,0,0,810,826,5,65,0,0,
  	811,812,5,64,0,0,812,817,3,84,42,0,813,814,5,67,0,0,814,816,3,84,42,0,
  	815,813,1,0,0,0,816,819,1,0,0,0,817,815,1,0,0,0,817,818,1,0,0,0,818,821,
  	1,0,0,0,819,817,1,0,0,0,820,822,5,67,0,0,821,820,1,0,0,0,821,822,1,0,
  	0,0,822,823,1,0,0,0,823,824,5,65,0,0,824,826,1,0,0,0,825,809,1,0,0,0,
  	825,811,1,0,0,0,826,99,1,0,0,0,827,828,5,62,0,0,828,844,5,63,0,0,829,
  	830,5,62,0,0,830,835,3,102,51,0,831,832,5,67,0,0,832,834,3,102,51,0,833,
  	831,1,0,0,0,834,837,1,0,0,0,835,833,1,0,0,0,835,836,1,0,0,0,836,839,1,
  	0,0,0,837,835,1,0,0,0,838,840,5,67,0,0,839,838,1,0,0,0,839,840,1,0,0,
  	0,840,841,1,0,0,0,841,842,5,63,0,0,842,844,1,0,0,0,843,827,1,0,0,0,843,
  	829,1,0,0,0,844,101,1,0,0,0,845,846,7,9,0,0,846,847,5,56,0,0,847,848,
  	3,84,42,0,848,103,1,0,0,0,849,850,7,9,0,0,850,105,1,0,0,0,851,852,3,64,
  	32,0,852,853,5,70,0,0,853,854,5,66,0,0,854,865,1,0,0,0,855,856,3,68,34,
  	0,856,857,5,70,0,0,857,859,5,60,0,0,858,860,3,14,7,0,859,858,1,0,0,0,
  	859,860,1,0,0,0,860,861,1,0,0,0,861,862,5,61,0,0,862,863,3,20,10,0,863,
  	865,1,0,0,0,864,851,1,0,0,0,864,855,1,0,0,0,865,107,1,0,0,0,94,111,117,
  	123,134,157,162,169,178,184,189,191,199,203,210,215,219,234,250,276,280,
  	287,302,314,327,330,334,338,342,357,362,376,381,383,388,393,397,400,405,
  	407,415,420,425,429,432,438,447,456,464,475,481,490,494,503,508,515,521,
  	535,537,545,551,558,563,570,586,604,613,621,625,632,650,658,660,706,710,
  	718,722,732,738,740,753,761,772,783,786,798,806,817,821,825,835,839,843,
  	859,864
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  prystparserParserStaticData = std::move(staticData);
}

}

PrystParser::PrystParser(TokenStream *input) : PrystParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PrystParser::PrystParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PrystParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *prystparserParserStaticData->atn, prystparserParserStaticData->decisionToDFA, prystparserParserStaticData->sharedContextCache, options);
}

PrystParser::~PrystParser() {
  delete _interpreter;
}

const atn::ATN& PrystParser::getATN() const {
  return *prystparserParserStaticData->atn;
}

std::string PrystParser::getGrammarFileName() const {
  return "PrystParser.g4";
}

const std::vector<std::string>& PrystParser::getRuleNames() const {
  return prystparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& PrystParser::getVocabulary() const {
  return prystparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PrystParser::getSerializedATN() const {
  return prystparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

PrystParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ProgramContext::EOF() {
  return getToken(PrystParser::EOF, 0);
}

std::vector<PrystParser::ModuleDeclContext *> PrystParser::ProgramContext::moduleDecl() {
  return getRuleContexts<PrystParser::ModuleDeclContext>();
}

PrystParser::ModuleDeclContext* PrystParser::ProgramContext::moduleDecl(size_t i) {
  return getRuleContext<PrystParser::ModuleDeclContext>(i);
}

std::vector<PrystParser::ImportDeclContext *> PrystParser::ProgramContext::importDecl() {
  return getRuleContexts<PrystParser::ImportDeclContext>();
}

PrystParser::ImportDeclContext* PrystParser::ProgramContext::importDecl(size_t i) {
  return getRuleContext<PrystParser::ImportDeclContext>(i);
}

std::vector<PrystParser::DeclarationContext *> PrystParser::ProgramContext::declaration() {
  return getRuleContexts<PrystParser::DeclarationContext>();
}

PrystParser::DeclarationContext* PrystParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<PrystParser::DeclarationContext>(i);
}


size_t PrystParser::ProgramContext::getRuleIndex() const {
  return PrystParser::RuleProgram;
}


std::any PrystParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ProgramContext* PrystParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PrystParser::RuleProgram);
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
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::MODULE) {
      setState(108);
      moduleDecl();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::IMPORT

    || _la == PrystParser::FROM) {
      setState(114);
      importDecl();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 279206461424) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(120);
      declaration();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    match(PrystParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclContext ------------------------------------------------------------------

PrystParser::ModuleDeclContext::ModuleDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ModuleDeclContext::MODULE() {
  return getToken(PrystParser::MODULE, 0);
}

PrystParser::ImportPathContext* PrystParser::ModuleDeclContext::importPath() {
  return getRuleContext<PrystParser::ImportPathContext>(0);
}

tree::TerminalNode* PrystParser::ModuleDeclContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::ModuleDeclContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

std::vector<PrystParser::DeclarationContext *> PrystParser::ModuleDeclContext::declaration() {
  return getRuleContexts<PrystParser::DeclarationContext>();
}

PrystParser::DeclarationContext* PrystParser::ModuleDeclContext::declaration(size_t i) {
  return getRuleContext<PrystParser::DeclarationContext>(i);
}


size_t PrystParser::ModuleDeclContext::getRuleIndex() const {
  return PrystParser::RuleModuleDecl;
}


std::any PrystParser::ModuleDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitModuleDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ModuleDeclContext* PrystParser::moduleDecl() {
  ModuleDeclContext *_localctx = _tracker.createInstance<ModuleDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, PrystParser::RuleModuleDecl);
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
    setState(128);
    match(PrystParser::MODULE);
    setState(129);
    importPath();
    setState(130);
    match(PrystParser::LBRACE);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 279206461424) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(131);
      declaration();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    match(PrystParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclContext ------------------------------------------------------------------

PrystParser::ImportDeclContext::ImportDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ImportDeclContext::IMPORT() {
  return getToken(PrystParser::IMPORT, 0);
}

PrystParser::ImportPathContext* PrystParser::ImportDeclContext::importPath() {
  return getRuleContext<PrystParser::ImportPathContext>(0);
}

tree::TerminalNode* PrystParser::ImportDeclContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}

tree::TerminalNode* PrystParser::ImportDeclContext::AS() {
  return getToken(PrystParser::AS, 0);
}

std::vector<tree::TerminalNode *> PrystParser::ImportDeclContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::ImportDeclContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

tree::TerminalNode* PrystParser::ImportDeclContext::FROM() {
  return getToken(PrystParser::FROM, 0);
}

std::vector<tree::TerminalNode *> PrystParser::ImportDeclContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::ImportDeclContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::ImportDeclContext::getRuleIndex() const {
  return PrystParser::RuleImportDecl;
}


std::any PrystParser::ImportDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitImportDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ImportDeclContext* PrystParser::importDecl() {
  ImportDeclContext *_localctx = _tracker.createInstance<ImportDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, PrystParser::RuleImportDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(139);
      match(PrystParser::IMPORT);
      setState(140);
      importPath();
      setState(141);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      match(PrystParser::IMPORT);
      setState(144);
      importPath();
      setState(145);
      match(PrystParser::AS);
      setState(146);
      match(PrystParser::IDENTIFIER);
      setState(147);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(149);
      match(PrystParser::FROM);
      setState(150);
      importPath();
      setState(151);
      match(PrystParser::IMPORT);
      setState(152);
      match(PrystParser::IDENTIFIER);
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PrystParser::COMMA) {
        setState(153);
        match(PrystParser::COMMA);
        setState(154);
        match(PrystParser::IDENTIFIER);
        setState(159);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(160);
      match(PrystParser::SEMICOLON);
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

//----------------- ImportPathContext ------------------------------------------------------------------

PrystParser::ImportPathContext::ImportPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PrystParser::ImportPathContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::ImportPathContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> PrystParser::ImportPathContext::DOUBLE_COLON() {
  return getTokens(PrystParser::DOUBLE_COLON);
}

tree::TerminalNode* PrystParser::ImportPathContext::DOUBLE_COLON(size_t i) {
  return getToken(PrystParser::DOUBLE_COLON, i);
}


size_t PrystParser::ImportPathContext::getRuleIndex() const {
  return PrystParser::RuleImportPath;
}


std::any PrystParser::ImportPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitImportPath(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ImportPathContext* PrystParser::importPath() {
  ImportPathContext *_localctx = _tracker.createInstance<ImportPathContext>(_ctx, getState());
  enterRule(_localctx, 6, PrystParser::RuleImportPath);
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
    setState(164);
    match(PrystParser::IDENTIFIER);
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::DOUBLE_COLON) {
      setState(165);
      match(PrystParser::DOUBLE_COLON);
      setState(166);
      match(PrystParser::IDENTIFIER);
      setState(171);
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

//----------------- DeclarationContext ------------------------------------------------------------------

PrystParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::FunctionDeclContext* PrystParser::DeclarationContext::functionDecl() {
  return getRuleContext<PrystParser::FunctionDeclContext>(0);
}

PrystParser::ClassDeclContext* PrystParser::DeclarationContext::classDecl() {
  return getRuleContext<PrystParser::ClassDeclContext>(0);
}

PrystParser::InterfaceDeclContext* PrystParser::DeclarationContext::interfaceDecl() {
  return getRuleContext<PrystParser::InterfaceDeclContext>(0);
}

PrystParser::ErrorDeclContext* PrystParser::DeclarationContext::errorDecl() {
  return getRuleContext<PrystParser::ErrorDeclContext>(0);
}

PrystParser::VarDeclContext* PrystParser::DeclarationContext::varDecl() {
  return getRuleContext<PrystParser::VarDeclContext>(0);
}

PrystParser::TryStmtContext* PrystParser::DeclarationContext::tryStmt() {
  return getRuleContext<PrystParser::TryStmtContext>(0);
}


size_t PrystParser::DeclarationContext::getRuleIndex() const {
  return PrystParser::RuleDeclaration;
}


std::any PrystParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::DeclarationContext* PrystParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, PrystParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      functionDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(173);
      classDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(174);
      interfaceDecl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(175);
      errorDecl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(176);
      varDecl();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(177);
      tryStmt();
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

//----------------- ErrorDeclContext ------------------------------------------------------------------

PrystParser::ErrorDeclContext::ErrorDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ErrorDeclContext::ERROR() {
  return getToken(PrystParser::ERROR, 0);
}

std::vector<PrystParser::QualifiedTypeContext *> PrystParser::ErrorDeclContext::qualifiedType() {
  return getRuleContexts<PrystParser::QualifiedTypeContext>();
}

PrystParser::QualifiedTypeContext* PrystParser::ErrorDeclContext::qualifiedType(size_t i) {
  return getRuleContext<PrystParser::QualifiedTypeContext>(i);
}

tree::TerminalNode* PrystParser::ErrorDeclContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::ErrorDeclContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

tree::TerminalNode* PrystParser::ErrorDeclContext::EXTENDS() {
  return getToken(PrystParser::EXTENDS, 0);
}

std::vector<PrystParser::ConstructorDeclContext *> PrystParser::ErrorDeclContext::constructorDecl() {
  return getRuleContexts<PrystParser::ConstructorDeclContext>();
}

PrystParser::ConstructorDeclContext* PrystParser::ErrorDeclContext::constructorDecl(size_t i) {
  return getRuleContext<PrystParser::ConstructorDeclContext>(i);
}

std::vector<PrystParser::ErrorMemberContext *> PrystParser::ErrorDeclContext::errorMember() {
  return getRuleContexts<PrystParser::ErrorMemberContext>();
}

PrystParser::ErrorMemberContext* PrystParser::ErrorDeclContext::errorMember(size_t i) {
  return getRuleContext<PrystParser::ErrorMemberContext>(i);
}


size_t PrystParser::ErrorDeclContext::getRuleIndex() const {
  return PrystParser::RuleErrorDecl;
}


std::any PrystParser::ErrorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitErrorDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ErrorDeclContext* PrystParser::errorDecl() {
  ErrorDeclContext *_localctx = _tracker.createInstance<ErrorDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, PrystParser::RuleErrorDecl);
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
    setState(180);
    match(PrystParser::ERROR);
    setState(181);
    qualifiedType();
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::EXTENDS) {
      setState(182);
      match(PrystParser::EXTENDS);
      setState(183);
      qualifiedType();
    }
    setState(186);
    match(PrystParser::LBRACE);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(189);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(187);
        constructorDecl();
        break;
      }

      case 2: {
        setState(188);
        errorMember();
        break;
      }

      default:
        break;
      }
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(PrystParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

PrystParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::ReturnTypeContext* PrystParser::FunctionDeclContext::returnType() {
  return getRuleContext<PrystParser::ReturnTypeContext>(0);
}

tree::TerminalNode* PrystParser::FunctionDeclContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::FunctionDeclContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::FunctionDeclContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::BlockContext* PrystParser::FunctionDeclContext::block() {
  return getRuleContext<PrystParser::BlockContext>(0);
}

PrystParser::GenericParamsContext* PrystParser::FunctionDeclContext::genericParams() {
  return getRuleContext<PrystParser::GenericParamsContext>(0);
}

PrystParser::ParametersContext* PrystParser::FunctionDeclContext::parameters() {
  return getRuleContext<PrystParser::ParametersContext>(0);
}


size_t PrystParser::FunctionDeclContext::getRuleIndex() const {
  return PrystParser::RuleFunctionDecl;
}


std::any PrystParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::FunctionDeclContext* PrystParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, PrystParser::RuleFunctionDecl);
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
    setState(196);
    returnType();
    setState(197);
    match(PrystParser::IDENTIFIER);
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::LT) {
      setState(198);
      genericParams();
    }
    setState(201);
    match(PrystParser::LPAREN);
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(202);
      parameters();
    }
    setState(205);
    match(PrystParser::RPAREN);
    setState(206);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

PrystParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PrystParser::ParameterContext *> PrystParser::ParametersContext::parameter() {
  return getRuleContexts<PrystParser::ParameterContext>();
}

PrystParser::ParameterContext* PrystParser::ParametersContext::parameter(size_t i) {
  return getRuleContext<PrystParser::ParameterContext>(i);
}

std::vector<PrystParser::DefaultParamContext *> PrystParser::ParametersContext::defaultParam() {
  return getRuleContexts<PrystParser::DefaultParamContext>();
}

PrystParser::DefaultParamContext* PrystParser::ParametersContext::defaultParam(size_t i) {
  return getRuleContext<PrystParser::DefaultParamContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::ParametersContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::ParametersContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::ParametersContext::getRuleIndex() const {
  return PrystParser::RuleParameters;
}


std::any PrystParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ParametersContext* PrystParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 14, PrystParser::RuleParameters);
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
    setState(210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(208);
      parameter();
      break;
    }

    case 2: {
      setState(209);
      defaultParam();
      break;
    }

    default:
      break;
    }
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(212);
      match(PrystParser::COMMA);
      setState(215);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(213);
        parameter();
        break;
      }

      case 2: {
        setState(214);
        defaultParam();
        break;
      }

      default:
        break;
      }
      setState(221);
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

//----------------- ParameterContext ------------------------------------------------------------------

PrystParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::TypeContext* PrystParser::ParameterContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::ParameterContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}


size_t PrystParser::ParameterContext::getRuleIndex() const {
  return PrystParser::RuleParameter;
}


std::any PrystParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ParameterContext* PrystParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 16, PrystParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    type();
    setState(223);
    match(PrystParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultParamContext ------------------------------------------------------------------

PrystParser::DefaultParamContext::DefaultParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::TypeContext* PrystParser::DefaultParamContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::DefaultParamContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::DefaultParamContext::ASSIGN() {
  return getToken(PrystParser::ASSIGN, 0);
}

PrystParser::ExpressionContext* PrystParser::DefaultParamContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}


size_t PrystParser::DefaultParamContext::getRuleIndex() const {
  return PrystParser::RuleDefaultParam;
}


std::any PrystParser::DefaultParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitDefaultParam(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::DefaultParamContext* PrystParser::defaultParam() {
  DefaultParamContext *_localctx = _tracker.createInstance<DefaultParamContext>(_ctx, getState());
  enterRule(_localctx, 18, PrystParser::RuleDefaultParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    type();
    setState(226);
    match(PrystParser::IDENTIFIER);
    setState(227);
    match(PrystParser::ASSIGN);
    setState(228);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PrystParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::BlockContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::BlockContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

std::vector<PrystParser::StatementContext *> PrystParser::BlockContext::statement() {
  return getRuleContexts<PrystParser::StatementContext>();
}

PrystParser::StatementContext* PrystParser::BlockContext::statement(size_t i) {
  return getRuleContext<PrystParser::StatementContext>(i);
}


size_t PrystParser::BlockContext::getRuleIndex() const {
  return PrystParser::RuleBlock;
}


std::any PrystParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::BlockContext* PrystParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, PrystParser::RuleBlock);
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
    setState(230);
    match(PrystParser::LBRACE);
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6647315446090833918) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 449) != 0)) {
      setState(231);
      statement();
      setState(236);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(237);
    match(PrystParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PrystParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::BlockContext* PrystParser::StatementContext::block() {
  return getRuleContext<PrystParser::BlockContext>(0);
}

PrystParser::VarDeclContext* PrystParser::StatementContext::varDecl() {
  return getRuleContext<PrystParser::VarDeclContext>(0);
}

PrystParser::AssignmentContext* PrystParser::StatementContext::assignment() {
  return getRuleContext<PrystParser::AssignmentContext>(0);
}

PrystParser::ExpressionStmtContext* PrystParser::StatementContext::expressionStmt() {
  return getRuleContext<PrystParser::ExpressionStmtContext>(0);
}

PrystParser::IfStmtContext* PrystParser::StatementContext::ifStmt() {
  return getRuleContext<PrystParser::IfStmtContext>(0);
}

PrystParser::WhileStmtContext* PrystParser::StatementContext::whileStmt() {
  return getRuleContext<PrystParser::WhileStmtContext>(0);
}

PrystParser::ForStmtContext* PrystParser::StatementContext::forStmt() {
  return getRuleContext<PrystParser::ForStmtContext>(0);
}

PrystParser::ReturnStmtContext* PrystParser::StatementContext::returnStmt() {
  return getRuleContext<PrystParser::ReturnStmtContext>(0);
}

PrystParser::TryStmtContext* PrystParser::StatementContext::tryStmt() {
  return getRuleContext<PrystParser::TryStmtContext>(0);
}

PrystParser::BreakStmtContext* PrystParser::StatementContext::breakStmt() {
  return getRuleContext<PrystParser::BreakStmtContext>(0);
}

PrystParser::ContinueStmtContext* PrystParser::StatementContext::continueStmt() {
  return getRuleContext<PrystParser::ContinueStmtContext>(0);
}


size_t PrystParser::StatementContext::getRuleIndex() const {
  return PrystParser::RuleStatement;
}


std::any PrystParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::StatementContext* PrystParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, PrystParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(239);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(240);
      varDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(241);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(242);
      expressionStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(243);
      ifStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(244);
      whileStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(245);
      forStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(246);
      returnStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(247);
      tryStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(248);
      breakStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(249);
      continueStmt();
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

//----------------- VarDeclContext ------------------------------------------------------------------

PrystParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::VarDeclContext::CONST() {
  return getToken(PrystParser::CONST, 0);
}

PrystParser::TypeContext* PrystParser::VarDeclContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

PrystParser::IdentifierListContext* PrystParser::VarDeclContext::identifierList() {
  return getRuleContext<PrystParser::IdentifierListContext>(0);
}

tree::TerminalNode* PrystParser::VarDeclContext::ASSIGN() {
  return getToken(PrystParser::ASSIGN, 0);
}

PrystParser::ExpressionContext* PrystParser::VarDeclContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::VarDeclContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}

tree::TerminalNode* PrystParser::VarDeclContext::CONST_EXPR() {
  return getToken(PrystParser::CONST_EXPR, 0);
}

tree::TerminalNode* PrystParser::VarDeclContext::LET() {
  return getToken(PrystParser::LET, 0);
}


size_t PrystParser::VarDeclContext::getRuleIndex() const {
  return PrystParser::RuleVarDecl;
}


std::any PrystParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::VarDeclContext* PrystParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, PrystParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PrystParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(252);
        match(PrystParser::CONST);
        setState(253);
        type();
        setState(254);
        identifierList();
        setState(255);
        match(PrystParser::ASSIGN);
        setState(256);
        expression(0);
        setState(257);
        match(PrystParser::SEMICOLON);
        break;
      }

      case PrystParser::CONST_EXPR: {
        enterOuterAlt(_localctx, 2);
        setState(259);
        match(PrystParser::CONST_EXPR);
        setState(260);
        type();
        setState(261);
        identifierList();
        setState(262);
        match(PrystParser::ASSIGN);
        setState(263);
        expression(0);
        setState(264);
        match(PrystParser::SEMICOLON);
        break;
      }

      case PrystParser::LET: {
        enterOuterAlt(_localctx, 3);
        setState(266);
        match(PrystParser::LET);
        setState(267);
        identifierList();
        setState(268);
        match(PrystParser::ASSIGN);
        setState(269);
        expression(0);
        setState(270);
        match(PrystParser::SEMICOLON);
        break;
      }

      case PrystParser::INT:
      case PrystParser::FLOAT:
      case PrystParser::BOOL:
      case PrystParser::STR:
      case PrystParser::VOID:
      case PrystParser::FN:
      case PrystParser::MAP:
      case PrystParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(272);
        type();
        setState(273);
        identifierList();
        setState(276);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PrystParser::ASSIGN) {
          setState(274);
          match(PrystParser::ASSIGN);
          setState(275);
          expression(0);
        }
        setState(278);
        match(PrystParser::SEMICOLON);
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

//----------------- IdentifierListContext ------------------------------------------------------------------

PrystParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PrystParser::IdentifierListContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::IdentifierListContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> PrystParser::IdentifierListContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::IdentifierListContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::IdentifierListContext::getRuleIndex() const {
  return PrystParser::RuleIdentifierList;
}


std::any PrystParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::IdentifierListContext* PrystParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 26, PrystParser::RuleIdentifierList);
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
    setState(282);
    match(PrystParser::IDENTIFIER);
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(283);
      match(PrystParser::COMMA);
      setState(284);
      match(PrystParser::IDENTIFIER);
      setState(289);
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

//----------------- AssignmentContext ------------------------------------------------------------------

PrystParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PrystParser::ExpressionContext *> PrystParser::AssignmentContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::AssignmentContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::AssignmentContext::ASSIGN() {
  return getToken(PrystParser::ASSIGN, 0);
}

tree::TerminalNode* PrystParser::AssignmentContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}


size_t PrystParser::AssignmentContext::getRuleIndex() const {
  return PrystParser::RuleAssignment;
}


std::any PrystParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::AssignmentContext* PrystParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 28, PrystParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    expression(0);
    setState(291);
    match(PrystParser::ASSIGN);
    setState(292);
    expression(0);
    setState(293);
    match(PrystParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

PrystParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::IfStmtContext::IF() {
  return getToken(PrystParser::IF, 0);
}

tree::TerminalNode* PrystParser::IfStmtContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

PrystParser::ExpressionContext* PrystParser::IfStmtContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::IfStmtContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

std::vector<PrystParser::StatementContext *> PrystParser::IfStmtContext::statement() {
  return getRuleContexts<PrystParser::StatementContext>();
}

PrystParser::StatementContext* PrystParser::IfStmtContext::statement(size_t i) {
  return getRuleContext<PrystParser::StatementContext>(i);
}

tree::TerminalNode* PrystParser::IfStmtContext::ELSE() {
  return getToken(PrystParser::ELSE, 0);
}


size_t PrystParser::IfStmtContext::getRuleIndex() const {
  return PrystParser::RuleIfStmt;
}


std::any PrystParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::IfStmtContext* PrystParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, PrystParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(PrystParser::IF);
    setState(296);
    match(PrystParser::LPAREN);
    setState(297);
    expression(0);
    setState(298);
    match(PrystParser::RPAREN);
    setState(299);
    statement();
    setState(302);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(300);
      match(PrystParser::ELSE);
      setState(301);
      statement();
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

//----------------- WhileStmtContext ------------------------------------------------------------------

PrystParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::WhileStmtContext::WHILE() {
  return getToken(PrystParser::WHILE, 0);
}

tree::TerminalNode* PrystParser::WhileStmtContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

PrystParser::ExpressionContext* PrystParser::WhileStmtContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::WhileStmtContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::StatementContext* PrystParser::WhileStmtContext::statement() {
  return getRuleContext<PrystParser::StatementContext>(0);
}


size_t PrystParser::WhileStmtContext::getRuleIndex() const {
  return PrystParser::RuleWhileStmt;
}


std::any PrystParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::WhileStmtContext* PrystParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, PrystParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(PrystParser::WHILE);
    setState(305);
    match(PrystParser::LPAREN);
    setState(306);
    expression(0);
    setState(307);
    match(PrystParser::RPAREN);
    setState(308);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

PrystParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ForStmtContext::FOR() {
  return getToken(PrystParser::FOR, 0);
}

tree::TerminalNode* PrystParser::ForStmtContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::ForStmtContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::ForStmtContext::IN() {
  return getToken(PrystParser::IN, 0);
}

std::vector<PrystParser::ExpressionContext *> PrystParser::ForStmtContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::ForStmtContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::ForStmtContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::StatementContext* PrystParser::ForStmtContext::statement() {
  return getRuleContext<PrystParser::StatementContext>(0);
}

tree::TerminalNode* PrystParser::ForStmtContext::LET() {
  return getToken(PrystParser::LET, 0);
}

PrystParser::TypeContext* PrystParser::ForStmtContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> PrystParser::ForStmtContext::SEMICOLON() {
  return getTokens(PrystParser::SEMICOLON);
}

tree::TerminalNode* PrystParser::ForStmtContext::SEMICOLON(size_t i) {
  return getToken(PrystParser::SEMICOLON, i);
}

PrystParser::VarDeclContext* PrystParser::ForStmtContext::varDecl() {
  return getRuleContext<PrystParser::VarDeclContext>(0);
}

PrystParser::ExpressionStmtContext* PrystParser::ForStmtContext::expressionStmt() {
  return getRuleContext<PrystParser::ExpressionStmtContext>(0);
}


size_t PrystParser::ForStmtContext::getRuleIndex() const {
  return PrystParser::RuleForStmt;
}


std::any PrystParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ForStmtContext* PrystParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, PrystParser::RuleForStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(338);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(310);
      match(PrystParser::FOR);
      setState(311);
      match(PrystParser::LPAREN);
      setState(314);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PrystParser::LET: {
          setState(312);
          match(PrystParser::LET);
          break;
        }

        case PrystParser::INT:
        case PrystParser::FLOAT:
        case PrystParser::BOOL:
        case PrystParser::STR:
        case PrystParser::VOID:
        case PrystParser::FN:
        case PrystParser::MAP:
        case PrystParser::IDENTIFIER: {
          setState(313);
          type();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(316);
      match(PrystParser::IDENTIFIER);
      setState(317);
      match(PrystParser::IN);
      setState(318);
      expression(0);
      setState(319);
      match(PrystParser::RPAREN);
      setState(320);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(322);
      match(PrystParser::FOR);
      setState(323);
      match(PrystParser::LPAREN);
      setState(327);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(324);
        varDecl();
        break;
      }

      case 2: {
        setState(325);
        expressionStmt();
        break;
      }

      case 3: {
        setState(326);
        match(PrystParser::SEMICOLON);
        break;
      }

      default:
        break;
      }
      setState(330);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 449) != 0)) {
        setState(329);
        expression(0);
      }
      setState(332);
      match(PrystParser::SEMICOLON);
      setState(334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 449) != 0)) {
        setState(333);
        expression(0);
      }
      setState(336);
      match(PrystParser::RPAREN);
      setState(337);
      statement();
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

//----------------- ReturnStmtContext ------------------------------------------------------------------

PrystParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ReturnStmtContext::RETURN() {
  return getToken(PrystParser::RETURN, 0);
}

tree::TerminalNode* PrystParser::ReturnStmtContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}

PrystParser::ExpressionContext* PrystParser::ReturnStmtContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}


size_t PrystParser::ReturnStmtContext::getRuleIndex() const {
  return PrystParser::RuleReturnStmt;
}


std::any PrystParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ReturnStmtContext* PrystParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, PrystParser::RuleReturnStmt);
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
    setState(340);
    match(PrystParser::RETURN);
    setState(342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 449) != 0)) {
      setState(341);
      expression(0);
    }
    setState(344);
    match(PrystParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStmtContext ------------------------------------------------------------------

PrystParser::TryStmtContext::TryStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::TryStmtContext::TRY() {
  return getToken(PrystParser::TRY, 0);
}

std::vector<PrystParser::BlockContext *> PrystParser::TryStmtContext::block() {
  return getRuleContexts<PrystParser::BlockContext>();
}

PrystParser::BlockContext* PrystParser::TryStmtContext::block(size_t i) {
  return getRuleContext<PrystParser::BlockContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::TryStmtContext::CATCH() {
  return getTokens(PrystParser::CATCH);
}

tree::TerminalNode* PrystParser::TryStmtContext::CATCH(size_t i) {
  return getToken(PrystParser::CATCH, i);
}

std::vector<tree::TerminalNode *> PrystParser::TryStmtContext::LPAREN() {
  return getTokens(PrystParser::LPAREN);
}

tree::TerminalNode* PrystParser::TryStmtContext::LPAREN(size_t i) {
  return getToken(PrystParser::LPAREN, i);
}

std::vector<PrystParser::TypeContext *> PrystParser::TryStmtContext::type() {
  return getRuleContexts<PrystParser::TypeContext>();
}

PrystParser::TypeContext* PrystParser::TryStmtContext::type(size_t i) {
  return getRuleContext<PrystParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::TryStmtContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::TryStmtContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> PrystParser::TryStmtContext::RPAREN() {
  return getTokens(PrystParser::RPAREN);
}

tree::TerminalNode* PrystParser::TryStmtContext::RPAREN(size_t i) {
  return getToken(PrystParser::RPAREN, i);
}

tree::TerminalNode* PrystParser::TryStmtContext::FINALLY() {
  return getToken(PrystParser::FINALLY, 0);
}


size_t PrystParser::TryStmtContext::getRuleIndex() const {
  return PrystParser::RuleTryStmt;
}


std::any PrystParser::TryStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitTryStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::TryStmtContext* PrystParser::tryStmt() {
  TryStmtContext *_localctx = _tracker.createInstance<TryStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, PrystParser::RuleTryStmt);
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
    setState(346);
    match(PrystParser::TRY);
    setState(347);
    block();
    setState(357);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::CATCH) {
      setState(348);
      match(PrystParser::CATCH);
      setState(349);
      match(PrystParser::LPAREN);
      setState(350);
      type();
      setState(351);
      match(PrystParser::IDENTIFIER);
      setState(352);
      match(PrystParser::RPAREN);
      setState(353);
      block();
      setState(359);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::FINALLY) {
      setState(360);
      match(PrystParser::FINALLY);
      setState(361);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

PrystParser::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::BreakStmtContext::BREAK() {
  return getToken(PrystParser::BREAK, 0);
}

tree::TerminalNode* PrystParser::BreakStmtContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}


size_t PrystParser::BreakStmtContext::getRuleIndex() const {
  return PrystParser::RuleBreakStmt;
}


std::any PrystParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::BreakStmtContext* PrystParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, PrystParser::RuleBreakStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    match(PrystParser::BREAK);
    setState(365);
    match(PrystParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStmtContext ------------------------------------------------------------------

PrystParser::ContinueStmtContext::ContinueStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ContinueStmtContext::CONTINUE() {
  return getToken(PrystParser::CONTINUE, 0);
}

tree::TerminalNode* PrystParser::ContinueStmtContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}


size_t PrystParser::ContinueStmtContext::getRuleIndex() const {
  return PrystParser::RuleContinueStmt;
}


std::any PrystParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ContinueStmtContext* PrystParser::continueStmt() {
  ContinueStmtContext *_localctx = _tracker.createInstance<ContinueStmtContext>(_ctx, getState());
  enterRule(_localctx, 42, PrystParser::RuleContinueStmt);

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
    match(PrystParser::CONTINUE);
    setState(368);
    match(PrystParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStmtContext ------------------------------------------------------------------

PrystParser::ExpressionStmtContext::ExpressionStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::ExpressionContext* PrystParser::ExpressionStmtContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::ExpressionStmtContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}


size_t PrystParser::ExpressionStmtContext::getRuleIndex() const {
  return PrystParser::RuleExpressionStmt;
}


std::any PrystParser::ExpressionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ExpressionStmtContext* PrystParser::expressionStmt() {
  ExpressionStmtContext *_localctx = _tracker.createInstance<ExpressionStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, PrystParser::RuleExpressionStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    expression(0);
    setState(371);
    match(PrystParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclContext ------------------------------------------------------------------

PrystParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ClassDeclContext::CLASS() {
  return getToken(PrystParser::CLASS, 0);
}

std::vector<tree::TerminalNode *> PrystParser::ClassDeclContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::ClassDeclContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

tree::TerminalNode* PrystParser::ClassDeclContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::ClassDeclContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

PrystParser::GenericParamsContext* PrystParser::ClassDeclContext::genericParams() {
  return getRuleContext<PrystParser::GenericParamsContext>(0);
}

tree::TerminalNode* PrystParser::ClassDeclContext::EXTENDS() {
  return getToken(PrystParser::EXTENDS, 0);
}

tree::TerminalNode* PrystParser::ClassDeclContext::IMPLEMENTS() {
  return getToken(PrystParser::IMPLEMENTS, 0);
}

std::vector<PrystParser::ConstructorDeclContext *> PrystParser::ClassDeclContext::constructorDecl() {
  return getRuleContexts<PrystParser::ConstructorDeclContext>();
}

PrystParser::ConstructorDeclContext* PrystParser::ClassDeclContext::constructorDecl(size_t i) {
  return getRuleContext<PrystParser::ConstructorDeclContext>(i);
}

std::vector<PrystParser::ClassMemberContext *> PrystParser::ClassDeclContext::classMember() {
  return getRuleContexts<PrystParser::ClassMemberContext>();
}

PrystParser::ClassMemberContext* PrystParser::ClassDeclContext::classMember(size_t i) {
  return getRuleContext<PrystParser::ClassMemberContext>(i);
}

std::vector<PrystParser::GenericArgsContext *> PrystParser::ClassDeclContext::genericArgs() {
  return getRuleContexts<PrystParser::GenericArgsContext>();
}

PrystParser::GenericArgsContext* PrystParser::ClassDeclContext::genericArgs(size_t i) {
  return getRuleContext<PrystParser::GenericArgsContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::ClassDeclContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::ClassDeclContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::ClassDeclContext::getRuleIndex() const {
  return PrystParser::RuleClassDecl;
}


std::any PrystParser::ClassDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitClassDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ClassDeclContext* PrystParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 46, PrystParser::RuleClassDecl);
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
    setState(373);
    match(PrystParser::CLASS);
    setState(374);
    match(PrystParser::IDENTIFIER);
    setState(376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::LT) {
      setState(375);
      genericParams();
    }
    setState(383);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::EXTENDS) {
      setState(378);
      match(PrystParser::EXTENDS);
      setState(379);
      match(PrystParser::IDENTIFIER);
      setState(381);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(380);
        genericArgs();
      }
    }
    setState(400);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::IMPLEMENTS) {
      setState(385);
      match(PrystParser::IMPLEMENTS);
      setState(386);
      match(PrystParser::IDENTIFIER);
      setState(388);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(387);
        genericArgs();
      }
      setState(397);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PrystParser::COMMA) {
        setState(390);
        match(PrystParser::COMMA);
        setState(391);
        match(PrystParser::IDENTIFIER);
        setState(393);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PrystParser::LT) {
          setState(392);
          genericArgs();
        }
        setState(399);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(402);
    match(PrystParser::LBRACE);
    setState(407);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294974448) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(405);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(403);
        constructorDecl();
        break;
      }

      case 2: {
        setState(404);
        classMember();
        break;
      }

      default:
        break;
      }
      setState(409);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(410);
    match(PrystParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclContext ------------------------------------------------------------------

PrystParser::InterfaceDeclContext::InterfaceDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::InterfaceDeclContext::INTERFACE() {
  return getToken(PrystParser::INTERFACE, 0);
}

std::vector<tree::TerminalNode *> PrystParser::InterfaceDeclContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::InterfaceDeclContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

tree::TerminalNode* PrystParser::InterfaceDeclContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::InterfaceDeclContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

PrystParser::GenericParamsContext* PrystParser::InterfaceDeclContext::genericParams() {
  return getRuleContext<PrystParser::GenericParamsContext>(0);
}

tree::TerminalNode* PrystParser::InterfaceDeclContext::EXTENDS() {
  return getToken(PrystParser::EXTENDS, 0);
}

std::vector<PrystParser::InterfaceMemberContext *> PrystParser::InterfaceDeclContext::interfaceMember() {
  return getRuleContexts<PrystParser::InterfaceMemberContext>();
}

PrystParser::InterfaceMemberContext* PrystParser::InterfaceDeclContext::interfaceMember(size_t i) {
  return getRuleContext<PrystParser::InterfaceMemberContext>(i);
}

std::vector<PrystParser::GenericArgsContext *> PrystParser::InterfaceDeclContext::genericArgs() {
  return getRuleContexts<PrystParser::GenericArgsContext>();
}

PrystParser::GenericArgsContext* PrystParser::InterfaceDeclContext::genericArgs(size_t i) {
  return getRuleContext<PrystParser::GenericArgsContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::InterfaceDeclContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::InterfaceDeclContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::InterfaceDeclContext::getRuleIndex() const {
  return PrystParser::RuleInterfaceDecl;
}


std::any PrystParser::InterfaceDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::InterfaceDeclContext* PrystParser::interfaceDecl() {
  InterfaceDeclContext *_localctx = _tracker.createInstance<InterfaceDeclContext>(_ctx, getState());
  enterRule(_localctx, 48, PrystParser::RuleInterfaceDecl);
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
    setState(412);
    match(PrystParser::INTERFACE);
    setState(413);
    match(PrystParser::IDENTIFIER);
    setState(415);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::LT) {
      setState(414);
      genericParams();
    }
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::EXTENDS) {
      setState(417);
      match(PrystParser::EXTENDS);
      setState(418);
      match(PrystParser::IDENTIFIER);
      setState(420);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(419);
        genericArgs();
      }
      setState(429);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PrystParser::COMMA) {
        setState(422);
        match(PrystParser::COMMA);
        setState(423);
        match(PrystParser::IDENTIFIER);
        setState(425);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PrystParser::LT) {
          setState(424);
          genericArgs();
        }
        setState(431);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(434);
    match(PrystParser::LBRACE);
    setState(438);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(435);
      interfaceMember();
      setState(440);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(441);
    match(PrystParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberContext ------------------------------------------------------------------

PrystParser::InterfaceMemberContext::InterfaceMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::ReturnTypeContext* PrystParser::InterfaceMemberContext::returnType() {
  return getRuleContext<PrystParser::ReturnTypeContext>(0);
}

tree::TerminalNode* PrystParser::InterfaceMemberContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::InterfaceMemberContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::InterfaceMemberContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

tree::TerminalNode* PrystParser::InterfaceMemberContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}

PrystParser::ParametersContext* PrystParser::InterfaceMemberContext::parameters() {
  return getRuleContext<PrystParser::ParametersContext>(0);
}


size_t PrystParser::InterfaceMemberContext::getRuleIndex() const {
  return PrystParser::RuleInterfaceMember;
}


std::any PrystParser::InterfaceMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMember(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::InterfaceMemberContext* PrystParser::interfaceMember() {
  InterfaceMemberContext *_localctx = _tracker.createInstance<InterfaceMemberContext>(_ctx, getState());
  enterRule(_localctx, 50, PrystParser::RuleInterfaceMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(456);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      returnType();
      setState(444);
      match(PrystParser::IDENTIFIER);
      setState(445);
      match(PrystParser::LPAREN);
      setState(447);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(446);
        parameters();
      }
      setState(449);
      match(PrystParser::RPAREN);
      setState(450);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(452);
      returnType();
      setState(453);
      match(PrystParser::IDENTIFIER);
      setState(454);
      match(PrystParser::SEMICOLON);
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

//----------------- GenericParamsContext ------------------------------------------------------------------

PrystParser::GenericParamsContext::GenericParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::GenericParamsContext::LT() {
  return getToken(PrystParser::LT, 0);
}

std::vector<tree::TerminalNode *> PrystParser::GenericParamsContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::GenericParamsContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

tree::TerminalNode* PrystParser::GenericParamsContext::GT() {
  return getToken(PrystParser::GT, 0);
}

std::vector<tree::TerminalNode *> PrystParser::GenericParamsContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::GenericParamsContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::GenericParamsContext::getRuleIndex() const {
  return PrystParser::RuleGenericParams;
}


std::any PrystParser::GenericParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitGenericParams(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::GenericParamsContext* PrystParser::genericParams() {
  GenericParamsContext *_localctx = _tracker.createInstance<GenericParamsContext>(_ctx, getState());
  enterRule(_localctx, 52, PrystParser::RuleGenericParams);
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
    setState(458);
    match(PrystParser::LT);
    setState(459);
    match(PrystParser::IDENTIFIER);
    setState(464);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(460);
      match(PrystParser::COMMA);
      setState(461);
      match(PrystParser::IDENTIFIER);
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(467);
    match(PrystParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericArgsContext ------------------------------------------------------------------

PrystParser::GenericArgsContext::GenericArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::GenericArgsContext::LT() {
  return getToken(PrystParser::LT, 0);
}

std::vector<PrystParser::TypeContext *> PrystParser::GenericArgsContext::type() {
  return getRuleContexts<PrystParser::TypeContext>();
}

PrystParser::TypeContext* PrystParser::GenericArgsContext::type(size_t i) {
  return getRuleContext<PrystParser::TypeContext>(i);
}

tree::TerminalNode* PrystParser::GenericArgsContext::GT() {
  return getToken(PrystParser::GT, 0);
}

std::vector<tree::TerminalNode *> PrystParser::GenericArgsContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::GenericArgsContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::GenericArgsContext::getRuleIndex() const {
  return PrystParser::RuleGenericArgs;
}


std::any PrystParser::GenericArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitGenericArgs(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::GenericArgsContext* PrystParser::genericArgs() {
  GenericArgsContext *_localctx = _tracker.createInstance<GenericArgsContext>(_ctx, getState());
  enterRule(_localctx, 54, PrystParser::RuleGenericArgs);
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
    setState(469);
    match(PrystParser::LT);
    setState(470);
    type();
    setState(475);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(471);
      match(PrystParser::COMMA);
      setState(472);
      type();
      setState(477);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(478);
    match(PrystParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberContext ------------------------------------------------------------------

PrystParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::TypeContext* PrystParser::ClassMemberContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::ClassMemberContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::ClassMemberContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}

tree::TerminalNode* PrystParser::ClassMemberContext::CONST() {
  return getToken(PrystParser::CONST, 0);
}

tree::TerminalNode* PrystParser::ClassMemberContext::CONST_EXPR() {
  return getToken(PrystParser::CONST_EXPR, 0);
}

PrystParser::ReturnTypeContext* PrystParser::ClassMemberContext::returnType() {
  return getRuleContext<PrystParser::ReturnTypeContext>(0);
}

tree::TerminalNode* PrystParser::ClassMemberContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::ClassMemberContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::BlockContext* PrystParser::ClassMemberContext::block() {
  return getRuleContext<PrystParser::BlockContext>(0);
}

PrystParser::GenericParamsContext* PrystParser::ClassMemberContext::genericParams() {
  return getRuleContext<PrystParser::GenericParamsContext>(0);
}

PrystParser::ParametersContext* PrystParser::ClassMemberContext::parameters() {
  return getRuleContext<PrystParser::ParametersContext>(0);
}

PrystParser::OverloadParamsContext* PrystParser::ClassMemberContext::overloadParams() {
  return getRuleContext<PrystParser::OverloadParamsContext>(0);
}


size_t PrystParser::ClassMemberContext::getRuleIndex() const {
  return PrystParser::RuleClassMember;
}


std::any PrystParser::ClassMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitClassMember(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ClassMemberContext* PrystParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 56, PrystParser::RuleClassMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(508);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::CONST

      || _la == PrystParser::CONST_EXPR) {
        setState(480);
        _la = _input->LA(1);
        if (!(_la == PrystParser::CONST

        || _la == PrystParser::CONST_EXPR)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(483);
      type();
      setState(484);
      match(PrystParser::IDENTIFIER);
      setState(485);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(487);
      returnType();
      setState(488);
      match(PrystParser::IDENTIFIER);
      setState(490);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(489);
        genericParams();
      }
      setState(492);
      match(PrystParser::LPAREN);
      setState(494);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(493);
        parameters();
      }
      setState(496);
      match(PrystParser::RPAREN);
      setState(497);
      block();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(499);
      returnType();
      setState(500);
      match(PrystParser::IDENTIFIER);
      setState(501);
      match(PrystParser::LPAREN);
      setState(503);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(502);
        overloadParams();
      }
      setState(505);
      match(PrystParser::RPAREN);
      setState(506);
      block();
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

//----------------- OverloadParamsContext ------------------------------------------------------------------

PrystParser::OverloadParamsContext::OverloadParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PrystParser::ParameterContext *> PrystParser::OverloadParamsContext::parameter() {
  return getRuleContexts<PrystParser::ParameterContext>();
}

PrystParser::ParameterContext* PrystParser::OverloadParamsContext::parameter(size_t i) {
  return getRuleContext<PrystParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::OverloadParamsContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::OverloadParamsContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::OverloadParamsContext::getRuleIndex() const {
  return PrystParser::RuleOverloadParams;
}


std::any PrystParser::OverloadParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitOverloadParams(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::OverloadParamsContext* PrystParser::overloadParams() {
  OverloadParamsContext *_localctx = _tracker.createInstance<OverloadParamsContext>(_ctx, getState());
  enterRule(_localctx, 58, PrystParser::RuleOverloadParams);
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
    setState(510);
    parameter();
    setState(515);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(511);
      match(PrystParser::COMMA);
      setState(512);
      parameter();
      setState(517);
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

//----------------- ConstructorDeclContext ------------------------------------------------------------------

PrystParser::ConstructorDeclContext::ConstructorDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ConstructorDeclContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::ConstructorDeclContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::ConstructorDeclContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::ConstructorBlockContext* PrystParser::ConstructorDeclContext::constructorBlock() {
  return getRuleContext<PrystParser::ConstructorBlockContext>(0);
}

PrystParser::ParametersContext* PrystParser::ConstructorDeclContext::parameters() {
  return getRuleContext<PrystParser::ParametersContext>(0);
}


size_t PrystParser::ConstructorDeclContext::getRuleIndex() const {
  return PrystParser::RuleConstructorDecl;
}


std::any PrystParser::ConstructorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ConstructorDeclContext* PrystParser::constructorDecl() {
  ConstructorDeclContext *_localctx = _tracker.createInstance<ConstructorDeclContext>(_ctx, getState());
  enterRule(_localctx, 60, PrystParser::RuleConstructorDecl);
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
    setState(518);
    match(PrystParser::IDENTIFIER);
    setState(519);
    match(PrystParser::LPAREN);
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(520);
      parameters();
    }
    setState(523);
    match(PrystParser::RPAREN);
    setState(524);
    constructorBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorBlockContext ------------------------------------------------------------------

PrystParser::ConstructorBlockContext::ConstructorBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> PrystParser::ConstructorBlockContext::THIS() {
  return getTokens(PrystParser::THIS);
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::THIS(size_t i) {
  return getToken(PrystParser::THIS, i);
}

std::vector<tree::TerminalNode *> PrystParser::ConstructorBlockContext::DOT() {
  return getTokens(PrystParser::DOT);
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::DOT(size_t i) {
  return getToken(PrystParser::DOT, i);
}

std::vector<tree::TerminalNode *> PrystParser::ConstructorBlockContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> PrystParser::ConstructorBlockContext::ASSIGN() {
  return getTokens(PrystParser::ASSIGN);
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::ASSIGN(size_t i) {
  return getToken(PrystParser::ASSIGN, i);
}

std::vector<PrystParser::ExpressionContext *> PrystParser::ConstructorBlockContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::ConstructorBlockContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::ConstructorBlockContext::SEMICOLON() {
  return getTokens(PrystParser::SEMICOLON);
}

tree::TerminalNode* PrystParser::ConstructorBlockContext::SEMICOLON(size_t i) {
  return getToken(PrystParser::SEMICOLON, i);
}

std::vector<PrystParser::StatementContext *> PrystParser::ConstructorBlockContext::statement() {
  return getRuleContexts<PrystParser::StatementContext>();
}

PrystParser::StatementContext* PrystParser::ConstructorBlockContext::statement(size_t i) {
  return getRuleContext<PrystParser::StatementContext>(i);
}


size_t PrystParser::ConstructorBlockContext::getRuleIndex() const {
  return PrystParser::RuleConstructorBlock;
}


std::any PrystParser::ConstructorBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConstructorBlock(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ConstructorBlockContext* PrystParser::constructorBlock() {
  ConstructorBlockContext *_localctx = _tracker.createInstance<ConstructorBlockContext>(_ctx, getState());
  enterRule(_localctx, 62, PrystParser::RuleConstructorBlock);
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
    setState(526);
    match(PrystParser::LBRACE);
    setState(537);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6647315446090833918) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 449) != 0)) {
      setState(535);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
      case 1: {
        setState(527);
        match(PrystParser::THIS);
        setState(528);
        match(PrystParser::DOT);
        setState(529);
        match(PrystParser::IDENTIFIER);
        setState(530);
        match(PrystParser::ASSIGN);
        setState(531);
        expression(0);
        setState(532);
        match(PrystParser::SEMICOLON);
        break;
      }

      case 2: {
        setState(534);
        statement();
        break;
      }

      default:
        break;
      }
      setState(539);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(540);
    match(PrystParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

PrystParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::NullableTypeContext* PrystParser::TypeContext::nullableType() {
  return getRuleContext<PrystParser::NullableTypeContext>(0);
}

PrystParser::QualifiedTypeContext* PrystParser::TypeContext::qualifiedType() {
  return getRuleContext<PrystParser::QualifiedTypeContext>(0);
}

PrystParser::GenericArgsContext* PrystParser::TypeContext::genericArgs() {
  return getRuleContext<PrystParser::GenericArgsContext>(0);
}

PrystParser::FunctionTypeContext* PrystParser::TypeContext::functionType() {
  return getRuleContext<PrystParser::FunctionTypeContext>(0);
}

PrystParser::ArrayTypeContext* PrystParser::TypeContext::arrayType() {
  return getRuleContext<PrystParser::ArrayTypeContext>(0);
}

PrystParser::MapTypeContext* PrystParser::TypeContext::mapType() {
  return getRuleContext<PrystParser::MapTypeContext>(0);
}

PrystParser::BasicTypeContext* PrystParser::TypeContext::basicType() {
  return getRuleContext<PrystParser::BasicTypeContext>(0);
}


size_t PrystParser::TypeContext::getRuleIndex() const {
  return PrystParser::RuleType;
}


std::any PrystParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::TypeContext* PrystParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 64, PrystParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(551);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(542);
      nullableType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(543);
      qualifiedType();
      setState(545);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
      case 1: {
        setState(544);
        genericArgs();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(547);
      functionType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(548);
      arrayType(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(549);
      mapType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(550);
      basicType();
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

//----------------- QualifiedTypeContext ------------------------------------------------------------------

PrystParser::QualifiedTypeContext::QualifiedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PrystParser::QualifiedTypeContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::QualifiedTypeContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> PrystParser::QualifiedTypeContext::DOUBLE_COLON() {
  return getTokens(PrystParser::DOUBLE_COLON);
}

tree::TerminalNode* PrystParser::QualifiedTypeContext::DOUBLE_COLON(size_t i) {
  return getToken(PrystParser::DOUBLE_COLON, i);
}


size_t PrystParser::QualifiedTypeContext::getRuleIndex() const {
  return PrystParser::RuleQualifiedType;
}


std::any PrystParser::QualifiedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::QualifiedTypeContext* PrystParser::qualifiedType() {
  QualifiedTypeContext *_localctx = _tracker.createInstance<QualifiedTypeContext>(_ctx, getState());
  enterRule(_localctx, 66, PrystParser::RuleQualifiedType);

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
    setState(553);
    match(PrystParser::IDENTIFIER);
    setState(558);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(554);
        match(PrystParser::DOUBLE_COLON);
        setState(555);
        match(PrystParser::IDENTIFIER); 
      }
      setState(560);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnTypeContext ------------------------------------------------------------------

PrystParser::ReturnTypeContext::ReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::TypeContext* PrystParser::ReturnTypeContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::ReturnTypeContext::VOID() {
  return getToken(PrystParser::VOID, 0);
}


size_t PrystParser::ReturnTypeContext::getRuleIndex() const {
  return PrystParser::RuleReturnType;
}


std::any PrystParser::ReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitReturnType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ReturnTypeContext* PrystParser::returnType() {
  ReturnTypeContext *_localctx = _tracker.createInstance<ReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 68, PrystParser::RuleReturnType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(563);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(561);
      type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(562);
      match(PrystParser::VOID);
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

//----------------- NullableTypeContext ------------------------------------------------------------------

PrystParser::NullableTypeContext::NullableTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::NullableTypeContext::QUESTION_MARK() {
  return getToken(PrystParser::QUESTION_MARK, 0);
}

PrystParser::QualifiedTypeContext* PrystParser::NullableTypeContext::qualifiedType() {
  return getRuleContext<PrystParser::QualifiedTypeContext>(0);
}

PrystParser::FunctionTypeContext* PrystParser::NullableTypeContext::functionType() {
  return getRuleContext<PrystParser::FunctionTypeContext>(0);
}

PrystParser::ArrayTypeContext* PrystParser::NullableTypeContext::arrayType() {
  return getRuleContext<PrystParser::ArrayTypeContext>(0);
}

PrystParser::MapTypeContext* PrystParser::NullableTypeContext::mapType() {
  return getRuleContext<PrystParser::MapTypeContext>(0);
}

PrystParser::BasicTypeContext* PrystParser::NullableTypeContext::basicType() {
  return getRuleContext<PrystParser::BasicTypeContext>(0);
}


size_t PrystParser::NullableTypeContext::getRuleIndex() const {
  return PrystParser::RuleNullableType;
}


std::any PrystParser::NullableTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNullableType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::NullableTypeContext* PrystParser::nullableType() {
  NullableTypeContext *_localctx = _tracker.createInstance<NullableTypeContext>(_ctx, getState());
  enterRule(_localctx, 70, PrystParser::RuleNullableType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(565);
      qualifiedType();
      break;
    }

    case 2: {
      setState(566);
      functionType();
      break;
    }

    case 3: {
      setState(567);
      arrayType(0);
      break;
    }

    case 4: {
      setState(568);
      mapType();
      break;
    }

    case 5: {
      setState(569);
      basicType();
      break;
    }

    default:
      break;
    }
    setState(572);
    match(PrystParser::QUESTION_MARK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

PrystParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::BasicTypeContext::STR() {
  return getToken(PrystParser::STR, 0);
}

tree::TerminalNode* PrystParser::BasicTypeContext::INT() {
  return getToken(PrystParser::INT, 0);
}

tree::TerminalNode* PrystParser::BasicTypeContext::FLOAT() {
  return getToken(PrystParser::FLOAT, 0);
}

tree::TerminalNode* PrystParser::BasicTypeContext::BOOL() {
  return getToken(PrystParser::BOOL, 0);
}

tree::TerminalNode* PrystParser::BasicTypeContext::VOID() {
  return getToken(PrystParser::VOID, 0);
}

tree::TerminalNode* PrystParser::BasicTypeContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}


size_t PrystParser::BasicTypeContext::getRuleIndex() const {
  return PrystParser::RuleBasicType;
}


std::any PrystParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitBasicType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::BasicTypeContext* PrystParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 72, PrystParser::RuleBasicType);
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
    setState(574);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 496) != 0) || _la == PrystParser::IDENTIFIER)) {
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

//----------------- ArrayTypeContext ------------------------------------------------------------------

PrystParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::BasicTypeContext* PrystParser::ArrayTypeContext::basicType() {
  return getRuleContext<PrystParser::BasicTypeContext>(0);
}

tree::TerminalNode* PrystParser::ArrayTypeContext::LBRACK() {
  return getToken(PrystParser::LBRACK, 0);
}

tree::TerminalNode* PrystParser::ArrayTypeContext::RBRACK() {
  return getToken(PrystParser::RBRACK, 0);
}

PrystParser::ArrayTypeContext* PrystParser::ArrayTypeContext::arrayType() {
  return getRuleContext<PrystParser::ArrayTypeContext>(0);
}


size_t PrystParser::ArrayTypeContext::getRuleIndex() const {
  return PrystParser::RuleArrayType;
}


std::any PrystParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}


PrystParser::ArrayTypeContext* PrystParser::arrayType() {
   return arrayType(0);
}

PrystParser::ArrayTypeContext* PrystParser::arrayType(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PrystParser::ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, parentState);
  PrystParser::ArrayTypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, PrystParser::RuleArrayType, precedence);

    

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
    setState(577);
    basicType();
    setState(578);
    match(PrystParser::LBRACK);
    setState(579);
    match(PrystParser::RBRACK);
    _ctx->stop = _input->LT(-1);
    setState(586);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArrayTypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArrayType);
        setState(581);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(582);
        match(PrystParser::LBRACK);
        setState(583);
        match(PrystParser::RBRACK); 
      }
      setState(588);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MapTypeContext ------------------------------------------------------------------

PrystParser::MapTypeContext::MapTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::MapTypeContext::MAP() {
  return getToken(PrystParser::MAP, 0);
}

tree::TerminalNode* PrystParser::MapTypeContext::LT() {
  return getToken(PrystParser::LT, 0);
}

PrystParser::KeyTypeContext* PrystParser::MapTypeContext::keyType() {
  return getRuleContext<PrystParser::KeyTypeContext>(0);
}

tree::TerminalNode* PrystParser::MapTypeContext::COMMA() {
  return getToken(PrystParser::COMMA, 0);
}

PrystParser::TypeContext* PrystParser::MapTypeContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::MapTypeContext::GT() {
  return getToken(PrystParser::GT, 0);
}


size_t PrystParser::MapTypeContext::getRuleIndex() const {
  return PrystParser::RuleMapType;
}


std::any PrystParser::MapTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMapType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::MapTypeContext* PrystParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 76, PrystParser::RuleMapType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    match(PrystParser::MAP);
    setState(590);
    match(PrystParser::LT);
    setState(591);
    keyType();
    setState(592);
    match(PrystParser::COMMA);
    setState(593);
    type();
    setState(594);
    match(PrystParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyTypeContext ------------------------------------------------------------------

PrystParser::KeyTypeContext::KeyTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::KeyTypeContext::STR() {
  return getToken(PrystParser::STR, 0);
}

tree::TerminalNode* PrystParser::KeyTypeContext::INT() {
  return getToken(PrystParser::INT, 0);
}


size_t PrystParser::KeyTypeContext::getRuleIndex() const {
  return PrystParser::RuleKeyType;
}


std::any PrystParser::KeyTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitKeyType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::KeyTypeContext* PrystParser::keyType() {
  KeyTypeContext *_localctx = _tracker.createInstance<KeyTypeContext>(_ctx, getState());
  enterRule(_localctx, 78, PrystParser::RuleKeyType);
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
    setState(596);
    _la = _input->LA(1);
    if (!(_la == PrystParser::INT

    || _la == PrystParser::STR)) {
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

//----------------- FunctionTypeContext ------------------------------------------------------------------

PrystParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::FunctionTypeContext::FN() {
  return getToken(PrystParser::FN, 0);
}

tree::TerminalNode* PrystParser::FunctionTypeContext::LT() {
  return getToken(PrystParser::LT, 0);
}

PrystParser::ReturnTypeContext* PrystParser::FunctionTypeContext::returnType() {
  return getRuleContext<PrystParser::ReturnTypeContext>(0);
}

tree::TerminalNode* PrystParser::FunctionTypeContext::GT() {
  return getToken(PrystParser::GT, 0);
}

tree::TerminalNode* PrystParser::FunctionTypeContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::FunctionTypeContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::TypeListContext* PrystParser::FunctionTypeContext::typeList() {
  return getRuleContext<PrystParser::TypeListContext>(0);
}


size_t PrystParser::FunctionTypeContext::getRuleIndex() const {
  return PrystParser::RuleFunctionType;
}


std::any PrystParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::FunctionTypeContext* PrystParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 80, PrystParser::RuleFunctionType);
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
    setState(598);
    match(PrystParser::FN);
    setState(599);
    match(PrystParser::LT);
    setState(600);
    returnType();
    setState(601);
    match(PrystParser::GT);
    setState(602);
    match(PrystParser::LPAREN);
    setState(604);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(603);
      typeList();
    }
    setState(606);
    match(PrystParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

PrystParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PrystParser::TypeContext *> PrystParser::TypeListContext::type() {
  return getRuleContexts<PrystParser::TypeContext>();
}

PrystParser::TypeContext* PrystParser::TypeListContext::type(size_t i) {
  return getRuleContext<PrystParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::TypeListContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::TypeListContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::TypeListContext::getRuleIndex() const {
  return PrystParser::RuleTypeList;
}


std::any PrystParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::TypeListContext* PrystParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 82, PrystParser::RuleTypeList);
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
    setState(608);
    type();
    setState(613);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(609);
      match(PrystParser::COMMA);
      setState(610);
      type();
      setState(615);
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

//----------------- ExpressionContext ------------------------------------------------------------------

PrystParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PrystParser::ExpressionContext::getRuleIndex() const {
  return PrystParser::RuleExpression;
}

void PrystParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignmentExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::AssignmentExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::AssignmentExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::AssignmentExprContext::ASSIGN() {
  return getToken(PrystParser::ASSIGN, 0);
}

PrystParser::AssignmentExprContext::AssignmentExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::AssignmentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstanceofExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::InstanceofExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::InstanceofExprContext::INSTANCEOF() {
  return getToken(PrystParser::INSTANCEOF, 0);
}

PrystParser::TypeContext* PrystParser::InstanceofExprContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

PrystParser::InstanceofExprContext::InstanceofExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::InstanceofExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitInstanceofExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CastExprContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::CastExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

PrystParser::TypeContext* PrystParser::CastExprContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::CastExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::ExpressionContext* PrystParser::CastExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

PrystParser::CastExprContext::CastExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::CastExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitCastExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeofExprContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::TypeofExprContext::TYPEOF() {
  return getToken(PrystParser::TYPEOF, 0);
}

PrystParser::ExpressionContext* PrystParser::TypeofExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

PrystParser::TypeofExprContext::TypeofExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::TypeofExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitTypeofExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::AdditiveExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::AdditiveExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::AdditiveExprContext::PLUS() {
  return getToken(PrystParser::PLUS, 0);
}

tree::TerminalNode* PrystParser::AdditiveExprContext::MINUS() {
  return getToken(PrystParser::MINUS, 0);
}

PrystParser::AdditiveExprContext::AdditiveExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::AdditiveExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::ParenExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

PrystParser::ExpressionContext* PrystParser::ParenExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::ParenExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullableChainContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::NullableChainContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::NullableChainContext::QUESTION_MARK() {
  return getToken(PrystParser::QUESTION_MARK, 0);
}

tree::TerminalNode* PrystParser::NullableChainContext::DOT() {
  return getToken(PrystParser::DOT, 0);
}

tree::TerminalNode* PrystParser::NullableChainContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

PrystParser::NullableChainContext::NullableChainContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::NullableChainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNullableChain(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MethodCallExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::MethodCallExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::MethodCallExprContext::DOT() {
  return getToken(PrystParser::DOT, 0);
}

tree::TerminalNode* PrystParser::MethodCallExprContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::MethodCallExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::MethodCallExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::GenericArgsContext* PrystParser::MethodCallExprContext::genericArgs() {
  return getRuleContext<PrystParser::GenericArgsContext>(0);
}

PrystParser::ArgumentsContext* PrystParser::MethodCallExprContext::arguments() {
  return getRuleContext<PrystParser::ArgumentsContext>(0);
}

PrystParser::MethodCallExprContext::MethodCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::MethodCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMethodCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayAccessExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::ArrayAccessExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::ArrayAccessExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::ArrayAccessExprContext::LBRACK() {
  return getTokens(PrystParser::LBRACK);
}

tree::TerminalNode* PrystParser::ArrayAccessExprContext::LBRACK(size_t i) {
  return getToken(PrystParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> PrystParser::ArrayAccessExprContext::RBRACK() {
  return getTokens(PrystParser::RBRACK);
}

tree::TerminalNode* PrystParser::ArrayAccessExprContext::RBRACK(size_t i) {
  return getToken(PrystParser::RBRACK, i);
}

PrystParser::ArrayAccessExprContext::ArrayAccessExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::ArrayAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitArrayAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryExprContext ------------------------------------------------------------------

PrystParser::PrimaryContext* PrystParser::PrimaryExprContext::primary() {
  return getRuleContext<PrystParser::PrimaryContext>(0);
}

PrystParser::PrimaryExprContext::PrimaryExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::PrimaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LambdaExprContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::LambdaExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::LambdaExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

tree::TerminalNode* PrystParser::LambdaExprContext::ARROW() {
  return getToken(PrystParser::ARROW, 0);
}

PrystParser::ReturnTypeContext* PrystParser::LambdaExprContext::returnType() {
  return getRuleContext<PrystParser::ReturnTypeContext>(0);
}

PrystParser::BlockContext* PrystParser::LambdaExprContext::block() {
  return getRuleContext<PrystParser::BlockContext>(0);
}

PrystParser::ExpressionContext* PrystParser::LambdaExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

PrystParser::LambdaParamsContext* PrystParser::LambdaExprContext::lambdaParams() {
  return getRuleContext<PrystParser::LambdaParamsContext>(0);
}

PrystParser::LambdaExprContext::LambdaExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::LambdaExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitLambdaExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExprContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::FunctionCallExprContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::FunctionCallExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::FunctionCallExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::ArgumentsContext* PrystParser::FunctionCallExprContext::arguments() {
  return getRuleContext<PrystParser::ArgumentsContext>(0);
}

PrystParser::FunctionCallExprContext::FunctionCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::FunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberAccessExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::MemberAccessExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::MemberAccessExprContext::DOT() {
  return getToken(PrystParser::DOT, 0);
}

tree::TerminalNode* PrystParser::MemberAccessExprContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

PrystParser::MemberAccessExprContext::MemberAccessExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::MemberAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMemberAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostfixExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::PostfixExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::PostfixExprContext::INC() {
  return getToken(PrystParser::INC, 0);
}

tree::TerminalNode* PrystParser::PostfixExprContext::DEC() {
  return getToken(PrystParser::DEC, 0);
}

PrystParser::PostfixExprContext::PostfixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::PostfixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConditionalExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::ConditionalExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::ConditionalExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::ConditionalExprContext::QUESTION_MARK() {
  return getToken(PrystParser::QUESTION_MARK, 0);
}

tree::TerminalNode* PrystParser::ConditionalExprContext::COLON() {
  return getToken(PrystParser::COLON, 0);
}

PrystParser::ConditionalExprContext::ConditionalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::ConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalAndExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::LogicalAndExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::LogicalAndExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::LogicalAndExprContext::AND() {
  return getToken(PrystParser::AND, 0);
}

PrystParser::LogicalAndExprContext::LogicalAndExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::LogicalAndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullCoalesceExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::NullCoalesceExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::NullCoalesceExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::NullCoalesceExprContext::NULL_COALESCE() {
  return getToken(PrystParser::NULL_COALESCE, 0);
}

PrystParser::NullCoalesceExprContext::NullCoalesceExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::NullCoalesceExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNullCoalesceExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::RelationalExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::RelationalExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::RelationalExprContext::LT() {
  return getToken(PrystParser::LT, 0);
}

tree::TerminalNode* PrystParser::RelationalExprContext::GT() {
  return getToken(PrystParser::GT, 0);
}

tree::TerminalNode* PrystParser::RelationalExprContext::LE() {
  return getToken(PrystParser::LE, 0);
}

tree::TerminalNode* PrystParser::RelationalExprContext::GE() {
  return getToken(PrystParser::GE, 0);
}

PrystParser::RelationalExprContext::RelationalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullableMethodCallExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::NullableMethodCallExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::NullableMethodCallExprContext::QUESTION_MARK() {
  return getToken(PrystParser::QUESTION_MARK, 0);
}

tree::TerminalNode* PrystParser::NullableMethodCallExprContext::DOT() {
  return getToken(PrystParser::DOT, 0);
}

tree::TerminalNode* PrystParser::NullableMethodCallExprContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::NullableMethodCallExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::NullableMethodCallExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::GenericArgsContext* PrystParser::NullableMethodCallExprContext::genericArgs() {
  return getRuleContext<PrystParser::GenericArgsContext>(0);
}

PrystParser::ArgumentsContext* PrystParser::NullableMethodCallExprContext::arguments() {
  return getRuleContext<PrystParser::ArgumentsContext>(0);
}

PrystParser::NullableMethodCallExprContext::NullableMethodCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::NullableMethodCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNullableMethodCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalOrExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::LogicalOrExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::LogicalOrExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::LogicalOrExprContext::OR() {
  return getToken(PrystParser::OR, 0);
}

PrystParser::LogicalOrExprContext::LogicalOrExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::LogicalOrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrefixExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::PrefixExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::PrefixExprContext::NOT() {
  return getToken(PrystParser::NOT, 0);
}

tree::TerminalNode* PrystParser::PrefixExprContext::MINUS() {
  return getToken(PrystParser::MINUS, 0);
}

tree::TerminalNode* PrystParser::PrefixExprContext::INC() {
  return getToken(PrystParser::INC, 0);
}

tree::TerminalNode* PrystParser::PrefixExprContext::DEC() {
  return getToken(PrystParser::DEC, 0);
}

PrystParser::PrefixExprContext::PrefixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::PrefixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPrefixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstructorExprContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::ConstructorExprContext::NEW() {
  return getToken(PrystParser::NEW, 0);
}

PrystParser::QualifiedTypeContext* PrystParser::ConstructorExprContext::qualifiedType() {
  return getRuleContext<PrystParser::QualifiedTypeContext>(0);
}

tree::TerminalNode* PrystParser::ConstructorExprContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::ConstructorExprContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::GenericArgsContext* PrystParser::ConstructorExprContext::genericArgs() {
  return getRuleContext<PrystParser::GenericArgsContext>(0);
}

PrystParser::ArgumentsContext* PrystParser::ConstructorExprContext::arguments() {
  return getRuleContext<PrystParser::ArgumentsContext>(0);
}

PrystParser::ConstructorExprContext::ConstructorExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::ConstructorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConstructorExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonNullAssertExprContext ------------------------------------------------------------------

PrystParser::ExpressionContext* PrystParser::NonNullAssertExprContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::NonNullAssertExprContext::NOT() {
  return getToken(PrystParser::NOT, 0);
}

PrystParser::NonNullAssertExprContext::NonNullAssertExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::NonNullAssertExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNonNullAssertExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::MultiplicativeExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::MultiplicativeExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::MultiplicativeExprContext::STAR() {
  return getToken(PrystParser::STAR, 0);
}

tree::TerminalNode* PrystParser::MultiplicativeExprContext::SLASH() {
  return getToken(PrystParser::SLASH, 0);
}

tree::TerminalNode* PrystParser::MultiplicativeExprContext::PERCENT() {
  return getToken(PrystParser::PERCENT, 0);
}

PrystParser::MultiplicativeExprContext::MultiplicativeExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::MultiplicativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExprContext ------------------------------------------------------------------

std::vector<PrystParser::ExpressionContext *> PrystParser::EqualityExprContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::EqualityExprContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::EqualityExprContext::EQ() {
  return getToken(PrystParser::EQ, 0);
}

tree::TerminalNode* PrystParser::EqualityExprContext::NEQ() {
  return getToken(PrystParser::NEQ, 0);
}

PrystParser::EqualityExprContext::EqualityExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any PrystParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ExpressionContext* PrystParser::expression() {
   return expression(0);
}

PrystParser::ExpressionContext* PrystParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PrystParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  PrystParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, PrystParser::RuleExpression, precedence);

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
    setState(660);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrimaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(617);
      primary();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ConstructorExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(618);
      match(PrystParser::NEW);
      setState(619);
      qualifiedType();
      setState(621);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(620);
        genericArgs();
      }
      setState(623);
      match(PrystParser::LPAREN);
      setState(625);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 449) != 0)) {
        setState(624);
        arguments();
      }
      setState(627);
      match(PrystParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(629);
      match(PrystParser::IDENTIFIER);
      setState(630);
      match(PrystParser::LPAREN);
      setState(632);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 449) != 0)) {
        setState(631);
        arguments();
      }
      setState(634);
      match(PrystParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<TypeofExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(635);
      match(PrystParser::TYPEOF);
      setState(636);
      expression(21);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CastExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(637);
      match(PrystParser::LPAREN);
      setState(638);
      type();
      setState(639);
      match(PrystParser::RPAREN);
      setState(640);
      expression(15);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(642);
      match(PrystParser::LPAREN);
      setState(643);
      expression(0);
      setState(644);
      match(PrystParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(646);
      antlrcpp::downCast<PrefixExprContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 882707725987872768) != 0))) {
        antlrcpp::downCast<PrefixExprContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(647);
      expression(12);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<LambdaExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(648);
      match(PrystParser::LPAREN);
      setState(650);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(649);
        lambdaParams();
      }
      setState(652);
      match(PrystParser::RPAREN);
      setState(653);
      match(PrystParser::ARROW);
      setState(658);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(654);
        returnType();
        setState(655);
        block();
        break;
      }

      case 2: {
        setState(657);
        expression(0);
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(740);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(738);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(662);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(663);
          antlrcpp::downCast<MultiplicativeExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 30786325577728) != 0))) {
            antlrcpp::downCast<MultiplicativeExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(664);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(665);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(666);
          antlrcpp::downCast<AdditiveExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PrystParser::PLUS

          || _la == PrystParser::MINUS)) {
            antlrcpp::downCast<AdditiveExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(667);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(668);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(669);
          antlrcpp::downCast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4222124650659840) != 0))) {
            antlrcpp::downCast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(670);
          expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(671);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(672);
          antlrcpp::downCast<EqualityExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PrystParser::EQ

          || _la == PrystParser::NEQ)) {
            antlrcpp::downCast<EqualityExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(673);
          expression(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NullCoalesceExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(674);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(675);
          match(PrystParser::NULL_COALESCE);
          setState(676);
          expression(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicalAndExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(677);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(678);
          match(PrystParser::AND);
          setState(679);
          expression(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LogicalOrExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(680);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(681);
          match(PrystParser::OR);
          setState(682);
          expression(5);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ConditionalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(683);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(684);
          match(PrystParser::QUESTION_MARK);
          setState(685);
          expression(0);
          setState(686);
          match(PrystParser::COLON);
          setState(687);
          expression(3);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AssignmentExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(689);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(690);
          match(PrystParser::ASSIGN);
          setState(691);
          expression(2);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<InstanceofExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(692);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(693);
          match(PrystParser::INSTANCEOF);
          setState(694);
          type();
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<MemberAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(695);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(696);
          match(PrystParser::DOT);
          setState(697);
          match(PrystParser::IDENTIFIER);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NullableChainContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(698);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(699);
          match(PrystParser::QUESTION_MARK);
          setState(700);
          match(PrystParser::DOT);
          setState(701);
          match(PrystParser::IDENTIFIER);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<MethodCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(702);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(703);
          match(PrystParser::DOT);
          setState(704);
          match(PrystParser::IDENTIFIER);
          setState(706);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == PrystParser::LT) {
            setState(705);
            genericArgs();
          }
          setState(708);
          match(PrystParser::LPAREN);
          setState(710);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & 449) != 0)) {
            setState(709);
            arguments();
          }
          setState(712);
          match(PrystParser::RPAREN);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<NullableMethodCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(713);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(714);
          match(PrystParser::QUESTION_MARK);
          setState(715);
          match(PrystParser::DOT);
          setState(716);
          match(PrystParser::IDENTIFIER);
          setState(718);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == PrystParser::LT) {
            setState(717);
            genericArgs();
          }
          setState(720);
          match(PrystParser::LPAREN);
          setState(722);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & 449) != 0)) {
            setState(721);
            arguments();
          }
          setState(724);
          match(PrystParser::RPAREN);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<ArrayAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(725);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(730); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(726);
                    match(PrystParser::LBRACK);
                    setState(727);
                    expression(0);
                    setState(728);
                    match(PrystParser::RBRACK);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(732); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<NonNullAssertExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(734);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(735);
          match(PrystParser::NOT);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<PostfixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(736);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(737);
          antlrcpp::downCast<PostfixExprContext *>(_localctx)->postfix = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PrystParser::INC

          || _la == PrystParser::DEC)) {
            antlrcpp::downCast<PostfixExprContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(742);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

PrystParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::PrimaryContext::THIS() {
  return getToken(PrystParser::THIS, 0);
}

tree::TerminalNode* PrystParser::PrimaryContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::PrimaryContext::INTEGER() {
  return getToken(PrystParser::INTEGER, 0);
}

tree::TerminalNode* PrystParser::PrimaryContext::FLOAT_LITERAL() {
  return getToken(PrystParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* PrystParser::PrimaryContext::STRING() {
  return getToken(PrystParser::STRING, 0);
}

PrystParser::StringInterpolationContext* PrystParser::PrimaryContext::stringInterpolation() {
  return getRuleContext<PrystParser::StringInterpolationContext>(0);
}

tree::TerminalNode* PrystParser::PrimaryContext::BOOLEAN() {
  return getToken(PrystParser::BOOLEAN, 0);
}

tree::TerminalNode* PrystParser::PrimaryContext::NULL_LIT() {
  return getToken(PrystParser::NULL_LIT, 0);
}

PrystParser::ArrayLiteralContext* PrystParser::PrimaryContext::arrayLiteral() {
  return getRuleContext<PrystParser::ArrayLiteralContext>(0);
}

PrystParser::MapLiteralContext* PrystParser::PrimaryContext::mapLiteral() {
  return getRuleContext<PrystParser::MapLiteralContext>(0);
}


size_t PrystParser::PrimaryContext::getRuleIndex() const {
  return PrystParser::RulePrimary;
}


std::any PrystParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::PrimaryContext* PrystParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 86, PrystParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(753);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PrystParser::THIS: {
        enterOuterAlt(_localctx, 1);
        setState(743);
        match(PrystParser::THIS);
        break;
      }

      case PrystParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(744);
        match(PrystParser::IDENTIFIER);
        break;
      }

      case PrystParser::INTEGER: {
        enterOuterAlt(_localctx, 3);
        setState(745);
        match(PrystParser::INTEGER);
        break;
      }

      case PrystParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(746);
        match(PrystParser::FLOAT_LITERAL);
        break;
      }

      case PrystParser::STRING: {
        enterOuterAlt(_localctx, 5);
        setState(747);
        match(PrystParser::STRING);
        break;
      }

      case PrystParser::STRING_START: {
        enterOuterAlt(_localctx, 6);
        setState(748);
        stringInterpolation();
        break;
      }

      case PrystParser::BOOLEAN: {
        enterOuterAlt(_localctx, 7);
        setState(749);
        match(PrystParser::BOOLEAN);
        break;
      }

      case PrystParser::NULL_LIT: {
        enterOuterAlt(_localctx, 8);
        setState(750);
        match(PrystParser::NULL_LIT);
        break;
      }

      case PrystParser::LBRACK: {
        enterOuterAlt(_localctx, 9);
        setState(751);
        arrayLiteral();
        break;
      }

      case PrystParser::LBRACE: {
        enterOuterAlt(_localctx, 10);
        setState(752);
        mapLiteral();
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

//----------------- StringInterpolationContext ------------------------------------------------------------------

PrystParser::StringInterpolationContext::StringInterpolationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::StringInterpolationContext::STRING_START() {
  return getToken(PrystParser::STRING_START, 0);
}

std::vector<PrystParser::ExpressionContext *> PrystParser::StringInterpolationContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::StringInterpolationContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::StringInterpolationContext::STRING_END() {
  return getToken(PrystParser::STRING_END, 0);
}

std::vector<tree::TerminalNode *> PrystParser::StringInterpolationContext::STRING_MIDDLE() {
  return getTokens(PrystParser::STRING_MIDDLE);
}

tree::TerminalNode* PrystParser::StringInterpolationContext::STRING_MIDDLE(size_t i) {
  return getToken(PrystParser::STRING_MIDDLE, i);
}


size_t PrystParser::StringInterpolationContext::getRuleIndex() const {
  return PrystParser::RuleStringInterpolation;
}


std::any PrystParser::StringInterpolationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitStringInterpolation(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::StringInterpolationContext* PrystParser::stringInterpolation() {
  StringInterpolationContext *_localctx = _tracker.createInstance<StringInterpolationContext>(_ctx, getState());
  enterRule(_localctx, 88, PrystParser::RuleStringInterpolation);
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
    setState(755);
    match(PrystParser::STRING_START);
    setState(756);
    expression(0);
    setState(761);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::STRING_MIDDLE) {
      setState(757);
      match(PrystParser::STRING_MIDDLE);
      setState(758);
      expression(0);
      setState(763);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(764);
    match(PrystParser::STRING_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChainedCallContext ------------------------------------------------------------------

PrystParser::ChainedCallContext::ChainedCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::ChainedCallContext::DOT() {
  return getToken(PrystParser::DOT, 0);
}

tree::TerminalNode* PrystParser::ChainedCallContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::ChainedCallContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::ChainedCallContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::ArgumentsContext* PrystParser::ChainedCallContext::arguments() {
  return getRuleContext<PrystParser::ArgumentsContext>(0);
}

tree::TerminalNode* PrystParser::ChainedCallContext::QUESTION_MARK() {
  return getToken(PrystParser::QUESTION_MARK, 0);
}


size_t PrystParser::ChainedCallContext::getRuleIndex() const {
  return PrystParser::RuleChainedCall;
}


std::any PrystParser::ChainedCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitChainedCall(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ChainedCallContext* PrystParser::chainedCall() {
  ChainedCallContext *_localctx = _tracker.createInstance<ChainedCallContext>(_ctx, getState());
  enterRule(_localctx, 90, PrystParser::RuleChainedCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(786);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(766);
      match(PrystParser::DOT);
      setState(767);
      match(PrystParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(768);
      match(PrystParser::DOT);
      setState(769);
      match(PrystParser::IDENTIFIER);
      setState(770);
      match(PrystParser::LPAREN);
      setState(772);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 449) != 0)) {
        setState(771);
        arguments();
      }
      setState(774);
      match(PrystParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(775);
      match(PrystParser::QUESTION_MARK);
      setState(776);
      match(PrystParser::DOT);
      setState(777);
      match(PrystParser::IDENTIFIER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(778);
      match(PrystParser::QUESTION_MARK);
      setState(779);
      match(PrystParser::DOT);
      setState(780);
      match(PrystParser::IDENTIFIER);
      setState(781);
      match(PrystParser::LPAREN);
      setState(783);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 6647315440148152334) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 449) != 0)) {
        setState(782);
        arguments();
      }
      setState(785);
      match(PrystParser::RPAREN);
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

//----------------- StringLiteralContext ------------------------------------------------------------------

PrystParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::StringLiteralContext::STRING() {
  return getToken(PrystParser::STRING, 0);
}


size_t PrystParser::StringLiteralContext::getRuleIndex() const {
  return PrystParser::RuleStringLiteral;
}


std::any PrystParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::StringLiteralContext* PrystParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 92, PrystParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(788);
    match(PrystParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParamsContext ------------------------------------------------------------------

PrystParser::LambdaParamsContext::LambdaParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PrystParser::TypeContext *> PrystParser::LambdaParamsContext::type() {
  return getRuleContexts<PrystParser::TypeContext>();
}

PrystParser::TypeContext* PrystParser::LambdaParamsContext::type(size_t i) {
  return getRuleContext<PrystParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::LambdaParamsContext::IDENTIFIER() {
  return getTokens(PrystParser::IDENTIFIER);
}

tree::TerminalNode* PrystParser::LambdaParamsContext::IDENTIFIER(size_t i) {
  return getToken(PrystParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> PrystParser::LambdaParamsContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::LambdaParamsContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::LambdaParamsContext::getRuleIndex() const {
  return PrystParser::RuleLambdaParams;
}


std::any PrystParser::LambdaParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitLambdaParams(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::LambdaParamsContext* PrystParser::lambdaParams() {
  LambdaParamsContext *_localctx = _tracker.createInstance<LambdaParamsContext>(_ctx, getState());
  enterRule(_localctx, 94, PrystParser::RuleLambdaParams);
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
    setState(790);
    type();
    setState(791);
    match(PrystParser::IDENTIFIER);
    setState(798);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(792);
      match(PrystParser::COMMA);
      setState(793);
      type();
      setState(794);
      match(PrystParser::IDENTIFIER);
      setState(800);
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

//----------------- ArgumentsContext ------------------------------------------------------------------

PrystParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PrystParser::ExpressionContext *> PrystParser::ArgumentsContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::ArgumentsContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PrystParser::ArgumentsContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::ArgumentsContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}


size_t PrystParser::ArgumentsContext::getRuleIndex() const {
  return PrystParser::RuleArguments;
}


std::any PrystParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ArgumentsContext* PrystParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 96, PrystParser::RuleArguments);
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
    setState(801);
    expression(0);
    setState(806);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(802);
      match(PrystParser::COMMA);
      setState(803);
      expression(0);
      setState(808);
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

//----------------- ArrayLiteralContext ------------------------------------------------------------------

PrystParser::ArrayLiteralContext::ArrayLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PrystParser::ArrayLiteralContext::getRuleIndex() const {
  return PrystParser::RuleArrayLiteral;
}

void PrystParser::ArrayLiteralContext::copyFrom(ArrayLiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NonEmptyArrayLiteralContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::NonEmptyArrayLiteralContext::LBRACK() {
  return getToken(PrystParser::LBRACK, 0);
}

std::vector<PrystParser::ExpressionContext *> PrystParser::NonEmptyArrayLiteralContext::expression() {
  return getRuleContexts<PrystParser::ExpressionContext>();
}

PrystParser::ExpressionContext* PrystParser::NonEmptyArrayLiteralContext::expression(size_t i) {
  return getRuleContext<PrystParser::ExpressionContext>(i);
}

tree::TerminalNode* PrystParser::NonEmptyArrayLiteralContext::RBRACK() {
  return getToken(PrystParser::RBRACK, 0);
}

std::vector<tree::TerminalNode *> PrystParser::NonEmptyArrayLiteralContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::NonEmptyArrayLiteralContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}

PrystParser::NonEmptyArrayLiteralContext::NonEmptyArrayLiteralContext(ArrayLiteralContext *ctx) { copyFrom(ctx); }


std::any PrystParser::NonEmptyArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNonEmptyArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyArrayLiteralContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::EmptyArrayLiteralContext::LBRACK() {
  return getToken(PrystParser::LBRACK, 0);
}

tree::TerminalNode* PrystParser::EmptyArrayLiteralContext::RBRACK() {
  return getToken(PrystParser::RBRACK, 0);
}

PrystParser::EmptyArrayLiteralContext::EmptyArrayLiteralContext(ArrayLiteralContext *ctx) { copyFrom(ctx); }


std::any PrystParser::EmptyArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitEmptyArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}
PrystParser::ArrayLiteralContext* PrystParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 98, PrystParser::RuleArrayLiteral);
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
    setState(825);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrystParser::EmptyArrayLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(809);
      match(PrystParser::LBRACK);
      setState(810);
      match(PrystParser::RBRACK);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PrystParser::NonEmptyArrayLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(811);
      match(PrystParser::LBRACK);
      setState(812);
      expression(0);
      setState(817);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(813);
          match(PrystParser::COMMA);
          setState(814);
          expression(0); 
        }
        setState(819);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      }
      setState(821);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::COMMA) {
        setState(820);
        match(PrystParser::COMMA);
      }
      setState(823);
      match(PrystParser::RBRACK);
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

//----------------- MapLiteralContext ------------------------------------------------------------------

PrystParser::MapLiteralContext::MapLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PrystParser::MapLiteralContext::getRuleIndex() const {
  return PrystParser::RuleMapLiteral;
}

void PrystParser::MapLiteralContext::copyFrom(MapLiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NonEmptyMapLiteralContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::NonEmptyMapLiteralContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

std::vector<PrystParser::MapEntryContext *> PrystParser::NonEmptyMapLiteralContext::mapEntry() {
  return getRuleContexts<PrystParser::MapEntryContext>();
}

PrystParser::MapEntryContext* PrystParser::NonEmptyMapLiteralContext::mapEntry(size_t i) {
  return getRuleContext<PrystParser::MapEntryContext>(i);
}

tree::TerminalNode* PrystParser::NonEmptyMapLiteralContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> PrystParser::NonEmptyMapLiteralContext::COMMA() {
  return getTokens(PrystParser::COMMA);
}

tree::TerminalNode* PrystParser::NonEmptyMapLiteralContext::COMMA(size_t i) {
  return getToken(PrystParser::COMMA, i);
}

PrystParser::NonEmptyMapLiteralContext::NonEmptyMapLiteralContext(MapLiteralContext *ctx) { copyFrom(ctx); }


std::any PrystParser::NonEmptyMapLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNonEmptyMapLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyMapLiteralContext ------------------------------------------------------------------

tree::TerminalNode* PrystParser::EmptyMapLiteralContext::LBRACE() {
  return getToken(PrystParser::LBRACE, 0);
}

tree::TerminalNode* PrystParser::EmptyMapLiteralContext::RBRACE() {
  return getToken(PrystParser::RBRACE, 0);
}

PrystParser::EmptyMapLiteralContext::EmptyMapLiteralContext(MapLiteralContext *ctx) { copyFrom(ctx); }


std::any PrystParser::EmptyMapLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitEmptyMapLiteral(this);
  else
    return visitor->visitChildren(this);
}
PrystParser::MapLiteralContext* PrystParser::mapLiteral() {
  MapLiteralContext *_localctx = _tracker.createInstance<MapLiteralContext>(_ctx, getState());
  enterRule(_localctx, 100, PrystParser::RuleMapLiteral);
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
    setState(843);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrystParser::EmptyMapLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(827);
      match(PrystParser::LBRACE);
      setState(828);
      match(PrystParser::RBRACE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PrystParser::NonEmptyMapLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(829);
      match(PrystParser::LBRACE);
      setState(830);
      mapEntry();
      setState(835);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(831);
          match(PrystParser::COMMA);
          setState(832);
          mapEntry(); 
        }
        setState(837);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      }
      setState(839);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::COMMA) {
        setState(838);
        match(PrystParser::COMMA);
      }
      setState(841);
      match(PrystParser::RBRACE);
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

//----------------- MapEntryContext ------------------------------------------------------------------

PrystParser::MapEntryContext::MapEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::MapEntryContext::COLON() {
  return getToken(PrystParser::COLON, 0);
}

PrystParser::ExpressionContext* PrystParser::MapEntryContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::MapEntryContext::STRING() {
  return getToken(PrystParser::STRING, 0);
}

tree::TerminalNode* PrystParser::MapEntryContext::INTEGER() {
  return getToken(PrystParser::INTEGER, 0);
}


size_t PrystParser::MapEntryContext::getRuleIndex() const {
  return PrystParser::RuleMapEntry;
}


std::any PrystParser::MapEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMapEntry(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::MapEntryContext* PrystParser::mapEntry() {
  MapEntryContext *_localctx = _tracker.createInstance<MapEntryContext>(_ctx, getState());
  enterRule(_localctx, 102, PrystParser::RuleMapEntry);
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
    setState(845);
    _la = _input->LA(1);
    if (!(_la == PrystParser::INTEGER || _la == PrystParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(846);
    match(PrystParser::COLON);
    setState(847);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapKeyContext ------------------------------------------------------------------

PrystParser::MapKeyContext::MapKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::MapKeyContext::STRING() {
  return getToken(PrystParser::STRING, 0);
}

tree::TerminalNode* PrystParser::MapKeyContext::INTEGER() {
  return getToken(PrystParser::INTEGER, 0);
}


size_t PrystParser::MapKeyContext::getRuleIndex() const {
  return PrystParser::RuleMapKey;
}


std::any PrystParser::MapKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMapKey(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::MapKeyContext* PrystParser::mapKey() {
  MapKeyContext *_localctx = _tracker.createInstance<MapKeyContext>(_ctx, getState());
  enterRule(_localctx, 104, PrystParser::RuleMapKey);
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
    setState(849);
    _la = _input->LA(1);
    if (!(_la == PrystParser::INTEGER || _la == PrystParser::STRING)) {
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

//----------------- ErrorMemberContext ------------------------------------------------------------------

PrystParser::ErrorMemberContext::ErrorMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PrystParser::TypeContext* PrystParser::ErrorMemberContext::type() {
  return getRuleContext<PrystParser::TypeContext>(0);
}

tree::TerminalNode* PrystParser::ErrorMemberContext::IDENTIFIER() {
  return getToken(PrystParser::IDENTIFIER, 0);
}

tree::TerminalNode* PrystParser::ErrorMemberContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}

PrystParser::ReturnTypeContext* PrystParser::ErrorMemberContext::returnType() {
  return getRuleContext<PrystParser::ReturnTypeContext>(0);
}

tree::TerminalNode* PrystParser::ErrorMemberContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

tree::TerminalNode* PrystParser::ErrorMemberContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

PrystParser::BlockContext* PrystParser::ErrorMemberContext::block() {
  return getRuleContext<PrystParser::BlockContext>(0);
}

PrystParser::ParametersContext* PrystParser::ErrorMemberContext::parameters() {
  return getRuleContext<PrystParser::ParametersContext>(0);
}


size_t PrystParser::ErrorMemberContext::getRuleIndex() const {
  return PrystParser::RuleErrorMember;
}


std::any PrystParser::ErrorMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitErrorMember(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ErrorMemberContext* PrystParser::errorMember() {
  ErrorMemberContext *_localctx = _tracker.createInstance<ErrorMemberContext>(_ctx, getState());
  enterRule(_localctx, 106, PrystParser::RuleErrorMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(864);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(851);
      type();
      setState(852);
      match(PrystParser::IDENTIFIER);
      setState(853);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(855);
      returnType();
      setState(856);
      match(PrystParser::IDENTIFIER);
      setState(857);
      match(PrystParser::LPAREN);
      setState(859);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(858);
        parameters();
      }
      setState(861);
      match(PrystParser::RPAREN);
      setState(862);
      block();
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

bool PrystParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 37: return arrayTypeSempred(antlrcpp::downCast<ArrayTypeContext *>(context), predicateIndex);
    case 42: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PrystParser::arrayTypeSempred(ArrayTypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool PrystParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 22);
    case 11: return precpred(_ctx, 20);
    case 12: return precpred(_ctx, 19);
    case 13: return precpred(_ctx, 18);
    case 14: return precpred(_ctx, 17);
    case 15: return precpred(_ctx, 16);
    case 16: return precpred(_ctx, 14);
    case 17: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

void PrystParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  prystparserParserInitialize();
#else
  ::antlr4::internal::call_once(prystparserParserOnceFlag, prystparserParserInitialize);
#endif
}
