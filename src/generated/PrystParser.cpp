
// Generated from /home/ubuntu/attachments/pryst/src/PrystParser.g4 by ANTLR 4.13.2


#include "PrystParserVisitor.h"

#include "PrystParser.h"


using namespace antlrcpp;
using namespace pryst;

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
      "printStmt", "expressionStmt", "classDecl", "interfaceDecl", "interfaceMember", 
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
      "'instanceof'", "'typeof'", "'error'", "'print'", "'\\u003F\\u003F'", 
      "", "", "", "", "'%'", "'='", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'&&'", "'||'", "'!'", "'\\u003F'", "':'", "'->'", "'++'", 
      "'--'", "", "", "'{'", "'}'", "'['", "']'", "';'", "", "", "'::'"
    },
    std::vector<std::string>{
      "", "INTEGER", "FLOAT_LITERAL", "BOOLEAN", "INT", "FLOAT", "BOOL", 
      "STR", "VOID", "FN", "LET", "CONST", "CONST_EXPR", "CLASS", "INTERFACE", 
      "EXTENDS", "IMPLEMENTS", "RETURN", "IF", "ELSE", "WHILE", "FOR", "IN", 
      "IMPORT", "MODULE", "TRY", "CATCH", "FINALLY", "AS", "BREAK", "CONTINUE", 
      "NEW", "MAP", "FROM", "THIS", "NULL_LIT", "INSTANCEOF", "TYPEOF", 
      "ERROR", "PRINT", "NULL_COALESCE", "PLUS", "MINUS", "STAR", "SLASH", 
      "PERCENT", "ASSIGN", "EQ", "NEQ", "LT", "GT", "LE", "GE", "AND", "OR", 
      "NOT", "QUESTION_MARK", "COLON", "ARROW", "INC", "DEC", "LPAREN", 
      "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMICOLON", "COMMA", 
      "DOT", "DOUBLE_COLON", "IDENTIFIER", "STRING", "STRING_START", "STRING_MIDDLE", 
      "STRING_END", "WS", "COMMENT", "BLOCK_COMMENT", "INVALID_CHAR", "INVALID_IDENTIFIER", 
      "INTERP_WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,81,876,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,1,0,5,0,112,8,0,
  	10,0,12,0,115,9,0,1,0,5,0,118,8,0,10,0,12,0,121,9,0,1,0,5,0,124,8,0,10,
  	0,12,0,127,9,0,1,0,1,0,1,1,1,1,1,1,1,1,5,1,135,8,1,10,1,12,1,138,9,1,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,5,2,158,8,2,10,2,12,2,161,9,2,1,2,1,2,3,2,165,8,2,1,3,1,3,1,3,5,3,170,
  	8,3,10,3,12,3,173,9,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,181,8,4,1,5,1,5,1,5,
  	1,5,3,5,187,8,5,1,5,1,5,1,5,5,5,192,8,5,10,5,12,5,195,9,5,1,5,1,5,1,6,
  	1,6,1,6,3,6,202,8,6,1,6,1,6,3,6,206,8,6,1,6,1,6,1,6,1,7,1,7,3,7,213,8,
  	7,1,7,1,7,1,7,3,7,218,8,7,5,7,220,8,7,10,7,12,7,223,9,7,1,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,9,1,10,1,10,5,10,235,8,10,10,10,12,10,238,9,10,1,10,1,
  	10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,254,
  	8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,280,8,12,
  	1,12,1,12,3,12,284,8,12,1,13,1,13,1,13,5,13,289,8,13,10,13,12,13,292,
  	9,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,
  	306,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,3,17,318,8,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,331,8,
  	17,1,17,3,17,334,8,17,1,17,1,17,3,17,338,8,17,1,17,1,17,3,17,342,8,17,
  	1,18,1,18,3,18,346,8,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,5,19,359,8,19,10,19,12,19,362,9,19,1,19,1,19,3,19,366,8,19,
  	1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,24,1,24,1,24,3,24,386,8,24,1,24,1,24,1,24,3,24,391,8,24,3,24,393,
  	8,24,1,24,1,24,1,24,3,24,398,8,24,1,24,1,24,1,24,3,24,403,8,24,5,24,405,
  	8,24,10,24,12,24,408,9,24,3,24,410,8,24,1,24,1,24,1,24,5,24,415,8,24,
  	10,24,12,24,418,9,24,1,24,1,24,1,25,1,25,1,25,3,25,425,8,25,1,25,1,25,
  	1,25,3,25,430,8,25,1,25,1,25,1,25,3,25,435,8,25,5,25,437,8,25,10,25,12,
  	25,440,9,25,3,25,442,8,25,1,25,1,25,5,25,446,8,25,10,25,12,25,449,9,25,
  	1,25,1,25,1,26,1,26,1,26,1,26,3,26,457,8,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,3,26,466,8,26,1,27,1,27,1,27,1,27,5,27,472,8,27,10,27,12,27,
  	475,9,27,1,27,1,27,1,28,1,28,1,28,1,28,5,28,483,8,28,10,28,12,28,486,
  	9,28,1,28,1,28,1,29,3,29,491,8,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	3,29,500,8,29,1,29,1,29,3,29,504,8,29,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,3,29,513,8,29,1,29,1,29,1,29,3,29,518,8,29,1,30,1,30,1,30,5,30,523,
  	8,30,10,30,12,30,526,9,30,1,31,1,31,1,31,3,31,531,8,31,1,31,1,31,1,31,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,5,32,545,8,32,10,32,12,32,
  	548,9,32,1,32,1,32,1,33,1,33,1,33,3,33,555,8,33,1,33,1,33,1,33,1,33,3,
  	33,561,8,33,1,34,1,34,1,34,5,34,566,8,34,10,34,12,34,569,9,34,1,35,1,
  	35,3,35,573,8,35,1,36,1,36,1,36,1,36,1,36,3,36,580,8,36,1,36,1,36,1,37,
  	1,37,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,5,38,594,8,38,10,38,12,38,
  	597,9,38,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,41,1,41,1,41,
  	1,41,1,41,1,41,3,41,614,8,41,1,41,1,41,1,42,1,42,1,42,5,42,621,8,42,10,
  	42,12,42,624,9,42,1,43,1,43,1,43,1,43,1,43,3,43,631,8,43,1,43,1,43,3,
  	43,635,8,43,1,43,1,43,1,43,1,43,1,43,3,43,642,8,43,1,43,1,43,1,43,1,43,
  	1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,3,43,660,
  	8,43,1,43,1,43,1,43,1,43,1,43,1,43,3,43,668,8,43,3,43,670,8,43,1,43,1,
  	43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,
  	43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,
  	43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,
  	43,3,43,716,8,43,1,43,1,43,3,43,720,8,43,1,43,1,43,1,43,1,43,1,43,1,43,
  	3,43,728,8,43,1,43,1,43,3,43,732,8,43,1,43,1,43,1,43,1,43,1,43,1,43,4,
  	43,740,8,43,11,43,12,43,741,1,43,1,43,1,43,1,43,5,43,748,8,43,10,43,12,
  	43,751,9,43,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,3,44,763,
  	8,44,1,45,1,45,1,45,1,45,5,45,769,8,45,10,45,12,45,772,9,45,1,45,1,45,
  	1,46,1,46,1,46,1,46,1,46,1,46,3,46,782,8,46,1,46,1,46,1,46,1,46,1,46,
  	1,46,1,46,1,46,1,46,3,46,793,8,46,1,46,3,46,796,8,46,1,47,1,47,1,48,1,
  	48,1,48,1,48,1,48,1,48,5,48,806,8,48,10,48,12,48,809,9,48,1,49,1,49,1,
  	49,5,49,814,8,49,10,49,12,49,817,9,49,1,50,1,50,1,50,1,50,1,50,1,50,5,
  	50,825,8,50,10,50,12,50,828,9,50,1,50,3,50,831,8,50,1,50,1,50,3,50,835,
  	8,50,1,51,1,51,1,51,1,51,1,51,1,51,5,51,843,8,51,10,51,12,51,846,9,51,
  	1,51,3,51,849,8,51,1,51,1,51,3,51,853,8,51,1,52,1,52,1,52,1,52,1,53,1,
  	53,1,54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,3,54,869,8,54,1,54,1,54,1,
  	54,3,54,874,8,54,1,54,0,2,76,86,55,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,0,10,1,
  	0,11,12,2,0,4,8,71,71,2,0,4,4,7,7,3,0,42,42,55,55,59,60,1,0,43,45,1,0,
  	41,42,1,0,49,52,1,0,47,48,1,0,59,60,2,0,1,1,72,72,971,0,113,1,0,0,0,2,
  	130,1,0,0,0,4,164,1,0,0,0,6,166,1,0,0,0,8,180,1,0,0,0,10,182,1,0,0,0,
  	12,198,1,0,0,0,14,212,1,0,0,0,16,224,1,0,0,0,18,227,1,0,0,0,20,232,1,
  	0,0,0,22,253,1,0,0,0,24,283,1,0,0,0,26,285,1,0,0,0,28,293,1,0,0,0,30,
  	298,1,0,0,0,32,307,1,0,0,0,34,341,1,0,0,0,36,343,1,0,0,0,38,349,1,0,0,
  	0,40,367,1,0,0,0,42,370,1,0,0,0,44,373,1,0,0,0,46,379,1,0,0,0,48,382,
  	1,0,0,0,50,421,1,0,0,0,52,465,1,0,0,0,54,467,1,0,0,0,56,478,1,0,0,0,58,
  	517,1,0,0,0,60,519,1,0,0,0,62,527,1,0,0,0,64,535,1,0,0,0,66,560,1,0,0,
  	0,68,562,1,0,0,0,70,572,1,0,0,0,72,579,1,0,0,0,74,583,1,0,0,0,76,585,
  	1,0,0,0,78,598,1,0,0,0,80,605,1,0,0,0,82,607,1,0,0,0,84,617,1,0,0,0,86,
  	669,1,0,0,0,88,762,1,0,0,0,90,764,1,0,0,0,92,795,1,0,0,0,94,797,1,0,0,
  	0,96,799,1,0,0,0,98,810,1,0,0,0,100,834,1,0,0,0,102,852,1,0,0,0,104,854,
  	1,0,0,0,106,858,1,0,0,0,108,873,1,0,0,0,110,112,3,2,1,0,111,110,1,0,0,
  	0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,119,1,0,0,0,115,
  	113,1,0,0,0,116,118,3,4,2,0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,
  	0,0,0,119,120,1,0,0,0,120,125,1,0,0,0,121,119,1,0,0,0,122,124,3,8,4,0,
  	123,122,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,128,
  	1,0,0,0,127,125,1,0,0,0,128,129,5,0,0,1,129,1,1,0,0,0,130,131,5,24,0,
  	0,131,132,3,6,3,0,132,136,5,63,0,0,133,135,3,8,4,0,134,133,1,0,0,0,135,
  	138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,139,1,0,0,0,138,136,1,
  	0,0,0,139,140,5,64,0,0,140,3,1,0,0,0,141,142,5,23,0,0,142,143,3,6,3,0,
  	143,144,5,67,0,0,144,165,1,0,0,0,145,146,5,23,0,0,146,147,3,6,3,0,147,
  	148,5,28,0,0,148,149,5,71,0,0,149,150,5,67,0,0,150,165,1,0,0,0,151,152,
  	5,33,0,0,152,153,3,6,3,0,153,154,5,23,0,0,154,159,5,71,0,0,155,156,5,
  	68,0,0,156,158,5,71,0,0,157,155,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,
  	0,159,160,1,0,0,0,160,162,1,0,0,0,161,159,1,0,0,0,162,163,5,67,0,0,163,
  	165,1,0,0,0,164,141,1,0,0,0,164,145,1,0,0,0,164,151,1,0,0,0,165,5,1,0,
  	0,0,166,171,5,71,0,0,167,168,5,70,0,0,168,170,5,71,0,0,169,167,1,0,0,
  	0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,7,1,0,0,0,173,171,
  	1,0,0,0,174,181,3,12,6,0,175,181,3,48,24,0,176,181,3,50,25,0,177,181,
  	3,10,5,0,178,181,3,24,12,0,179,181,3,38,19,0,180,174,1,0,0,0,180,175,
  	1,0,0,0,180,176,1,0,0,0,180,177,1,0,0,0,180,178,1,0,0,0,180,179,1,0,0,
  	0,181,9,1,0,0,0,182,183,5,38,0,0,183,186,3,68,34,0,184,185,5,15,0,0,185,
  	187,3,68,34,0,186,184,1,0,0,0,186,187,1,0,0,0,187,188,1,0,0,0,188,193,
  	5,63,0,0,189,192,3,62,31,0,190,192,3,108,54,0,191,189,1,0,0,0,191,190,
  	1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,196,1,0,0,
  	0,195,193,1,0,0,0,196,197,5,64,0,0,197,11,1,0,0,0,198,199,3,70,35,0,199,
  	201,5,71,0,0,200,202,3,54,27,0,201,200,1,0,0,0,201,202,1,0,0,0,202,203,
  	1,0,0,0,203,205,5,61,0,0,204,206,3,14,7,0,205,204,1,0,0,0,205,206,1,0,
  	0,0,206,207,1,0,0,0,207,208,5,62,0,0,208,209,3,20,10,0,209,13,1,0,0,0,
  	210,213,3,16,8,0,211,213,3,18,9,0,212,210,1,0,0,0,212,211,1,0,0,0,213,
  	221,1,0,0,0,214,217,5,68,0,0,215,218,3,16,8,0,216,218,3,18,9,0,217,215,
  	1,0,0,0,217,216,1,0,0,0,218,220,1,0,0,0,219,214,1,0,0,0,220,223,1,0,0,
  	0,221,219,1,0,0,0,221,222,1,0,0,0,222,15,1,0,0,0,223,221,1,0,0,0,224,
  	225,3,66,33,0,225,226,5,71,0,0,226,17,1,0,0,0,227,228,3,66,33,0,228,229,
  	5,71,0,0,229,230,5,46,0,0,230,231,3,86,43,0,231,19,1,0,0,0,232,236,5,
  	63,0,0,233,235,3,22,11,0,234,233,1,0,0,0,235,238,1,0,0,0,236,234,1,0,
  	0,0,236,237,1,0,0,0,237,239,1,0,0,0,238,236,1,0,0,0,239,240,5,64,0,0,
  	240,21,1,0,0,0,241,254,3,20,10,0,242,254,3,24,12,0,243,254,3,28,14,0,
  	244,254,3,46,23,0,245,254,3,30,15,0,246,254,3,32,16,0,247,254,3,34,17,
  	0,248,254,3,36,18,0,249,254,3,38,19,0,250,254,3,40,20,0,251,254,3,42,
  	21,0,252,254,3,44,22,0,253,241,1,0,0,0,253,242,1,0,0,0,253,243,1,0,0,
  	0,253,244,1,0,0,0,253,245,1,0,0,0,253,246,1,0,0,0,253,247,1,0,0,0,253,
  	248,1,0,0,0,253,249,1,0,0,0,253,250,1,0,0,0,253,251,1,0,0,0,253,252,1,
  	0,0,0,254,23,1,0,0,0,255,256,5,11,0,0,256,257,3,66,33,0,257,258,3,26,
  	13,0,258,259,5,46,0,0,259,260,3,86,43,0,260,261,5,67,0,0,261,284,1,0,
  	0,0,262,263,5,12,0,0,263,264,3,66,33,0,264,265,3,26,13,0,265,266,5,46,
  	0,0,266,267,3,86,43,0,267,268,5,67,0,0,268,284,1,0,0,0,269,270,5,10,0,
  	0,270,271,3,26,13,0,271,272,5,46,0,0,272,273,3,86,43,0,273,274,5,67,0,
  	0,274,284,1,0,0,0,275,276,3,66,33,0,276,279,3,26,13,0,277,278,5,46,0,
  	0,278,280,3,86,43,0,279,277,1,0,0,0,279,280,1,0,0,0,280,281,1,0,0,0,281,
  	282,5,67,0,0,282,284,1,0,0,0,283,255,1,0,0,0,283,262,1,0,0,0,283,269,
  	1,0,0,0,283,275,1,0,0,0,284,25,1,0,0,0,285,290,5,71,0,0,286,287,5,68,
  	0,0,287,289,5,71,0,0,288,286,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,
  	290,291,1,0,0,0,291,27,1,0,0,0,292,290,1,0,0,0,293,294,3,86,43,0,294,
  	295,5,46,0,0,295,296,3,86,43,0,296,297,5,67,0,0,297,29,1,0,0,0,298,299,
  	5,18,0,0,299,300,5,61,0,0,300,301,3,86,43,0,301,302,5,62,0,0,302,305,
  	3,22,11,0,303,304,5,19,0,0,304,306,3,22,11,0,305,303,1,0,0,0,305,306,
  	1,0,0,0,306,31,1,0,0,0,307,308,5,20,0,0,308,309,5,61,0,0,309,310,3,86,
  	43,0,310,311,5,62,0,0,311,312,3,22,11,0,312,33,1,0,0,0,313,314,5,21,0,
  	0,314,317,5,61,0,0,315,318,5,10,0,0,316,318,3,66,33,0,317,315,1,0,0,0,
  	317,316,1,0,0,0,318,319,1,0,0,0,319,320,5,71,0,0,320,321,5,22,0,0,321,
  	322,3,86,43,0,322,323,5,62,0,0,323,324,3,22,11,0,324,342,1,0,0,0,325,
  	326,5,21,0,0,326,330,5,61,0,0,327,331,3,24,12,0,328,331,3,46,23,0,329,
  	331,5,67,0,0,330,327,1,0,0,0,330,328,1,0,0,0,330,329,1,0,0,0,331,333,
  	1,0,0,0,332,334,3,86,43,0,333,332,1,0,0,0,333,334,1,0,0,0,334,335,1,0,
  	0,0,335,337,5,67,0,0,336,338,3,86,43,0,337,336,1,0,0,0,337,338,1,0,0,
  	0,338,339,1,0,0,0,339,340,5,62,0,0,340,342,3,22,11,0,341,313,1,0,0,0,
  	341,325,1,0,0,0,342,35,1,0,0,0,343,345,5,17,0,0,344,346,3,86,43,0,345,
  	344,1,0,0,0,345,346,1,0,0,0,346,347,1,0,0,0,347,348,5,67,0,0,348,37,1,
  	0,0,0,349,350,5,25,0,0,350,360,3,20,10,0,351,352,5,26,0,0,352,353,5,61,
  	0,0,353,354,3,66,33,0,354,355,5,71,0,0,355,356,5,62,0,0,356,357,3,20,
  	10,0,357,359,1,0,0,0,358,351,1,0,0,0,359,362,1,0,0,0,360,358,1,0,0,0,
  	360,361,1,0,0,0,361,365,1,0,0,0,362,360,1,0,0,0,363,364,5,27,0,0,364,
  	366,3,20,10,0,365,363,1,0,0,0,365,366,1,0,0,0,366,39,1,0,0,0,367,368,
  	5,29,0,0,368,369,5,67,0,0,369,41,1,0,0,0,370,371,5,30,0,0,371,372,5,67,
  	0,0,372,43,1,0,0,0,373,374,5,39,0,0,374,375,5,61,0,0,375,376,3,86,43,
  	0,376,377,5,62,0,0,377,378,5,67,0,0,378,45,1,0,0,0,379,380,3,86,43,0,
  	380,381,5,67,0,0,381,47,1,0,0,0,382,383,5,13,0,0,383,385,5,71,0,0,384,
  	386,3,54,27,0,385,384,1,0,0,0,385,386,1,0,0,0,386,392,1,0,0,0,387,388,
  	5,15,0,0,388,390,5,71,0,0,389,391,3,56,28,0,390,389,1,0,0,0,390,391,1,
  	0,0,0,391,393,1,0,0,0,392,387,1,0,0,0,392,393,1,0,0,0,393,409,1,0,0,0,
  	394,395,5,16,0,0,395,397,5,71,0,0,396,398,3,56,28,0,397,396,1,0,0,0,397,
  	398,1,0,0,0,398,406,1,0,0,0,399,400,5,68,0,0,400,402,5,71,0,0,401,403,
  	3,56,28,0,402,401,1,0,0,0,402,403,1,0,0,0,403,405,1,0,0,0,404,399,1,0,
  	0,0,405,408,1,0,0,0,406,404,1,0,0,0,406,407,1,0,0,0,407,410,1,0,0,0,408,
  	406,1,0,0,0,409,394,1,0,0,0,409,410,1,0,0,0,410,411,1,0,0,0,411,416,5,
  	63,0,0,412,415,3,62,31,0,413,415,3,58,29,0,414,412,1,0,0,0,414,413,1,
  	0,0,0,415,418,1,0,0,0,416,414,1,0,0,0,416,417,1,0,0,0,417,419,1,0,0,0,
  	418,416,1,0,0,0,419,420,5,64,0,0,420,49,1,0,0,0,421,422,5,14,0,0,422,
  	424,5,71,0,0,423,425,3,54,27,0,424,423,1,0,0,0,424,425,1,0,0,0,425,441,
  	1,0,0,0,426,427,5,15,0,0,427,429,5,71,0,0,428,430,3,56,28,0,429,428,1,
  	0,0,0,429,430,1,0,0,0,430,438,1,0,0,0,431,432,5,68,0,0,432,434,5,71,0,
  	0,433,435,3,56,28,0,434,433,1,0,0,0,434,435,1,0,0,0,435,437,1,0,0,0,436,
  	431,1,0,0,0,437,440,1,0,0,0,438,436,1,0,0,0,438,439,1,0,0,0,439,442,1,
  	0,0,0,440,438,1,0,0,0,441,426,1,0,0,0,441,442,1,0,0,0,442,443,1,0,0,0,
  	443,447,5,63,0,0,444,446,3,52,26,0,445,444,1,0,0,0,446,449,1,0,0,0,447,
  	445,1,0,0,0,447,448,1,0,0,0,448,450,1,0,0,0,449,447,1,0,0,0,450,451,5,
  	64,0,0,451,51,1,0,0,0,452,453,3,70,35,0,453,454,5,71,0,0,454,456,5,61,
  	0,0,455,457,3,14,7,0,456,455,1,0,0,0,456,457,1,0,0,0,457,458,1,0,0,0,
  	458,459,5,62,0,0,459,460,5,67,0,0,460,466,1,0,0,0,461,462,3,70,35,0,462,
  	463,5,71,0,0,463,464,5,67,0,0,464,466,1,0,0,0,465,452,1,0,0,0,465,461,
  	1,0,0,0,466,53,1,0,0,0,467,468,5,49,0,0,468,473,5,71,0,0,469,470,5,68,
  	0,0,470,472,5,71,0,0,471,469,1,0,0,0,472,475,1,0,0,0,473,471,1,0,0,0,
  	473,474,1,0,0,0,474,476,1,0,0,0,475,473,1,0,0,0,476,477,5,50,0,0,477,
  	55,1,0,0,0,478,479,5,49,0,0,479,484,3,66,33,0,480,481,5,68,0,0,481,483,
  	3,66,33,0,482,480,1,0,0,0,483,486,1,0,0,0,484,482,1,0,0,0,484,485,1,0,
  	0,0,485,487,1,0,0,0,486,484,1,0,0,0,487,488,5,50,0,0,488,57,1,0,0,0,489,
  	491,7,0,0,0,490,489,1,0,0,0,490,491,1,0,0,0,491,492,1,0,0,0,492,493,3,
  	66,33,0,493,494,5,71,0,0,494,495,5,67,0,0,495,518,1,0,0,0,496,497,3,70,
  	35,0,497,499,5,71,0,0,498,500,3,54,27,0,499,498,1,0,0,0,499,500,1,0,0,
  	0,500,501,1,0,0,0,501,503,5,61,0,0,502,504,3,14,7,0,503,502,1,0,0,0,503,
  	504,1,0,0,0,504,505,1,0,0,0,505,506,5,62,0,0,506,507,3,20,10,0,507,518,
  	1,0,0,0,508,509,3,70,35,0,509,510,5,71,0,0,510,512,5,61,0,0,511,513,3,
  	60,30,0,512,511,1,0,0,0,512,513,1,0,0,0,513,514,1,0,0,0,514,515,5,62,
  	0,0,515,516,3,20,10,0,516,518,1,0,0,0,517,490,1,0,0,0,517,496,1,0,0,0,
  	517,508,1,0,0,0,518,59,1,0,0,0,519,524,3,16,8,0,520,521,5,68,0,0,521,
  	523,3,16,8,0,522,520,1,0,0,0,523,526,1,0,0,0,524,522,1,0,0,0,524,525,
  	1,0,0,0,525,61,1,0,0,0,526,524,1,0,0,0,527,528,5,71,0,0,528,530,5,61,
  	0,0,529,531,3,14,7,0,530,529,1,0,0,0,530,531,1,0,0,0,531,532,1,0,0,0,
  	532,533,5,62,0,0,533,534,3,64,32,0,534,63,1,0,0,0,535,546,5,63,0,0,536,
  	537,5,34,0,0,537,538,5,69,0,0,538,539,5,71,0,0,539,540,5,46,0,0,540,541,
  	3,86,43,0,541,542,5,67,0,0,542,545,1,0,0,0,543,545,3,22,11,0,544,536,
  	1,0,0,0,544,543,1,0,0,0,545,548,1,0,0,0,546,544,1,0,0,0,546,547,1,0,0,
  	0,547,549,1,0,0,0,548,546,1,0,0,0,549,550,5,64,0,0,550,65,1,0,0,0,551,
  	561,3,72,36,0,552,554,3,68,34,0,553,555,3,56,28,0,554,553,1,0,0,0,554,
  	555,1,0,0,0,555,561,1,0,0,0,556,561,3,82,41,0,557,561,3,76,38,0,558,561,
  	3,78,39,0,559,561,3,74,37,0,560,551,1,0,0,0,560,552,1,0,0,0,560,556,1,
  	0,0,0,560,557,1,0,0,0,560,558,1,0,0,0,560,559,1,0,0,0,561,67,1,0,0,0,
  	562,567,5,71,0,0,563,564,5,70,0,0,564,566,5,71,0,0,565,563,1,0,0,0,566,
  	569,1,0,0,0,567,565,1,0,0,0,567,568,1,0,0,0,568,69,1,0,0,0,569,567,1,
  	0,0,0,570,573,3,66,33,0,571,573,5,8,0,0,572,570,1,0,0,0,572,571,1,0,0,
  	0,573,71,1,0,0,0,574,580,3,68,34,0,575,580,3,82,41,0,576,580,3,76,38,
  	0,577,580,3,78,39,0,578,580,3,74,37,0,579,574,1,0,0,0,579,575,1,0,0,0,
  	579,576,1,0,0,0,579,577,1,0,0,0,579,578,1,0,0,0,580,581,1,0,0,0,581,582,
  	5,56,0,0,582,73,1,0,0,0,583,584,7,1,0,0,584,75,1,0,0,0,585,586,6,38,-1,
  	0,586,587,3,74,37,0,587,588,5,65,0,0,588,589,5,66,0,0,589,595,1,0,0,0,
  	590,591,10,1,0,0,591,592,5,65,0,0,592,594,5,66,0,0,593,590,1,0,0,0,594,
  	597,1,0,0,0,595,593,1,0,0,0,595,596,1,0,0,0,596,77,1,0,0,0,597,595,1,
  	0,0,0,598,599,5,32,0,0,599,600,5,49,0,0,600,601,3,80,40,0,601,602,5,68,
  	0,0,602,603,3,66,33,0,603,604,5,50,0,0,604,79,1,0,0,0,605,606,7,2,0,0,
  	606,81,1,0,0,0,607,608,5,9,0,0,608,609,5,49,0,0,609,610,3,70,35,0,610,
  	611,5,50,0,0,611,613,5,61,0,0,612,614,3,84,42,0,613,612,1,0,0,0,613,614,
  	1,0,0,0,614,615,1,0,0,0,615,616,5,62,0,0,616,83,1,0,0,0,617,622,3,66,
  	33,0,618,619,5,68,0,0,619,621,3,66,33,0,620,618,1,0,0,0,621,624,1,0,0,
  	0,622,620,1,0,0,0,622,623,1,0,0,0,623,85,1,0,0,0,624,622,1,0,0,0,625,
  	626,6,43,-1,0,626,670,3,88,44,0,627,628,5,31,0,0,628,630,3,68,34,0,629,
  	631,3,56,28,0,630,629,1,0,0,0,630,631,1,0,0,0,631,632,1,0,0,0,632,634,
  	5,61,0,0,633,635,3,98,49,0,634,633,1,0,0,0,634,635,1,0,0,0,635,636,1,
  	0,0,0,636,637,5,62,0,0,637,670,1,0,0,0,638,639,5,71,0,0,639,641,5,61,
  	0,0,640,642,3,98,49,0,641,640,1,0,0,0,641,642,1,0,0,0,642,643,1,0,0,0,
  	643,670,5,62,0,0,644,645,5,37,0,0,645,670,3,86,43,21,646,647,5,61,0,0,
  	647,648,3,66,33,0,648,649,5,62,0,0,649,650,3,86,43,15,650,670,1,0,0,0,
  	651,652,5,61,0,0,652,653,3,86,43,0,653,654,5,62,0,0,654,670,1,0,0,0,655,
  	656,7,3,0,0,656,670,3,86,43,12,657,659,5,61,0,0,658,660,3,96,48,0,659,
  	658,1,0,0,0,659,660,1,0,0,0,660,661,1,0,0,0,661,662,5,62,0,0,662,667,
  	5,58,0,0,663,664,3,70,35,0,664,665,3,20,10,0,665,668,1,0,0,0,666,668,
  	3,86,43,0,667,663,1,0,0,0,667,666,1,0,0,0,668,670,1,0,0,0,669,625,1,0,
  	0,0,669,627,1,0,0,0,669,638,1,0,0,0,669,644,1,0,0,0,669,646,1,0,0,0,669,
  	651,1,0,0,0,669,655,1,0,0,0,669,657,1,0,0,0,670,749,1,0,0,0,671,672,10,
  	10,0,0,672,673,7,4,0,0,673,748,3,86,43,11,674,675,10,9,0,0,675,676,7,
  	5,0,0,676,748,3,86,43,10,677,678,10,8,0,0,678,679,7,6,0,0,679,748,3,86,
  	43,9,680,681,10,7,0,0,681,682,7,7,0,0,682,748,3,86,43,8,683,684,10,6,
  	0,0,684,685,5,40,0,0,685,748,3,86,43,7,686,687,10,5,0,0,687,688,5,53,
  	0,0,688,748,3,86,43,6,689,690,10,4,0,0,690,691,5,54,0,0,691,748,3,86,
  	43,5,692,693,10,3,0,0,693,694,5,56,0,0,694,695,3,86,43,0,695,696,5,57,
  	0,0,696,697,3,86,43,3,697,748,1,0,0,0,698,699,10,2,0,0,699,700,5,46,0,
  	0,700,748,3,86,43,2,701,702,10,22,0,0,702,703,5,36,0,0,703,748,3,66,33,
  	0,704,705,10,20,0,0,705,706,5,69,0,0,706,748,5,71,0,0,707,708,10,19,0,
  	0,708,709,5,56,0,0,709,710,5,69,0,0,710,748,5,71,0,0,711,712,10,18,0,
  	0,712,713,5,69,0,0,713,715,5,71,0,0,714,716,3,56,28,0,715,714,1,0,0,0,
  	715,716,1,0,0,0,716,717,1,0,0,0,717,719,5,61,0,0,718,720,3,98,49,0,719,
  	718,1,0,0,0,719,720,1,0,0,0,720,721,1,0,0,0,721,748,5,62,0,0,722,723,
  	10,17,0,0,723,724,5,56,0,0,724,725,5,69,0,0,725,727,5,71,0,0,726,728,
  	3,56,28,0,727,726,1,0,0,0,727,728,1,0,0,0,728,729,1,0,0,0,729,731,5,61,
  	0,0,730,732,3,98,49,0,731,730,1,0,0,0,731,732,1,0,0,0,732,733,1,0,0,0,
  	733,748,5,62,0,0,734,739,10,16,0,0,735,736,5,65,0,0,736,737,3,86,43,0,
  	737,738,5,66,0,0,738,740,1,0,0,0,739,735,1,0,0,0,740,741,1,0,0,0,741,
  	739,1,0,0,0,741,742,1,0,0,0,742,748,1,0,0,0,743,744,10,14,0,0,744,748,
  	5,55,0,0,745,746,10,11,0,0,746,748,7,8,0,0,747,671,1,0,0,0,747,674,1,
  	0,0,0,747,677,1,0,0,0,747,680,1,0,0,0,747,683,1,0,0,0,747,686,1,0,0,0,
  	747,689,1,0,0,0,747,692,1,0,0,0,747,698,1,0,0,0,747,701,1,0,0,0,747,704,
  	1,0,0,0,747,707,1,0,0,0,747,711,1,0,0,0,747,722,1,0,0,0,747,734,1,0,0,
  	0,747,743,1,0,0,0,747,745,1,0,0,0,748,751,1,0,0,0,749,747,1,0,0,0,749,
  	750,1,0,0,0,750,87,1,0,0,0,751,749,1,0,0,0,752,763,5,34,0,0,753,763,5,
  	71,0,0,754,763,5,1,0,0,755,763,5,2,0,0,756,763,5,72,0,0,757,763,3,90,
  	45,0,758,763,5,3,0,0,759,763,5,35,0,0,760,763,3,100,50,0,761,763,3,102,
  	51,0,762,752,1,0,0,0,762,753,1,0,0,0,762,754,1,0,0,0,762,755,1,0,0,0,
  	762,756,1,0,0,0,762,757,1,0,0,0,762,758,1,0,0,0,762,759,1,0,0,0,762,760,
  	1,0,0,0,762,761,1,0,0,0,763,89,1,0,0,0,764,765,5,73,0,0,765,770,3,86,
  	43,0,766,767,5,74,0,0,767,769,3,86,43,0,768,766,1,0,0,0,769,772,1,0,0,
  	0,770,768,1,0,0,0,770,771,1,0,0,0,771,773,1,0,0,0,772,770,1,0,0,0,773,
  	774,5,75,0,0,774,91,1,0,0,0,775,776,5,69,0,0,776,796,5,71,0,0,777,778,
  	5,69,0,0,778,779,5,71,0,0,779,781,5,61,0,0,780,782,3,98,49,0,781,780,
  	1,0,0,0,781,782,1,0,0,0,782,783,1,0,0,0,783,796,5,62,0,0,784,785,5,56,
  	0,0,785,786,5,69,0,0,786,796,5,71,0,0,787,788,5,56,0,0,788,789,5,69,0,
  	0,789,790,5,71,0,0,790,792,5,61,0,0,791,793,3,98,49,0,792,791,1,0,0,0,
  	792,793,1,0,0,0,793,794,1,0,0,0,794,796,5,62,0,0,795,775,1,0,0,0,795,
  	777,1,0,0,0,795,784,1,0,0,0,795,787,1,0,0,0,796,93,1,0,0,0,797,798,5,
  	72,0,0,798,95,1,0,0,0,799,800,3,66,33,0,800,807,5,71,0,0,801,802,5,68,
  	0,0,802,803,3,66,33,0,803,804,5,71,0,0,804,806,1,0,0,0,805,801,1,0,0,
  	0,806,809,1,0,0,0,807,805,1,0,0,0,807,808,1,0,0,0,808,97,1,0,0,0,809,
  	807,1,0,0,0,810,815,3,86,43,0,811,812,5,68,0,0,812,814,3,86,43,0,813,
  	811,1,0,0,0,814,817,1,0,0,0,815,813,1,0,0,0,815,816,1,0,0,0,816,99,1,
  	0,0,0,817,815,1,0,0,0,818,819,5,65,0,0,819,835,5,66,0,0,820,821,5,65,
  	0,0,821,826,3,86,43,0,822,823,5,68,0,0,823,825,3,86,43,0,824,822,1,0,
  	0,0,825,828,1,0,0,0,826,824,1,0,0,0,826,827,1,0,0,0,827,830,1,0,0,0,828,
  	826,1,0,0,0,829,831,5,68,0,0,830,829,1,0,0,0,830,831,1,0,0,0,831,832,
  	1,0,0,0,832,833,5,66,0,0,833,835,1,0,0,0,834,818,1,0,0,0,834,820,1,0,
  	0,0,835,101,1,0,0,0,836,837,5,63,0,0,837,853,5,64,0,0,838,839,5,63,0,
  	0,839,844,3,104,52,0,840,841,5,68,0,0,841,843,3,104,52,0,842,840,1,0,
  	0,0,843,846,1,0,0,0,844,842,1,0,0,0,844,845,1,0,0,0,845,848,1,0,0,0,846,
  	844,1,0,0,0,847,849,5,68,0,0,848,847,1,0,0,0,848,849,1,0,0,0,849,850,
  	1,0,0,0,850,851,5,64,0,0,851,853,1,0,0,0,852,836,1,0,0,0,852,838,1,0,
  	0,0,853,103,1,0,0,0,854,855,7,9,0,0,855,856,5,57,0,0,856,857,3,86,43,
  	0,857,105,1,0,0,0,858,859,7,9,0,0,859,107,1,0,0,0,860,861,3,66,33,0,861,
  	862,5,71,0,0,862,863,5,67,0,0,863,874,1,0,0,0,864,865,3,70,35,0,865,866,
  	5,71,0,0,866,868,5,61,0,0,867,869,3,14,7,0,868,867,1,0,0,0,868,869,1,
  	0,0,0,869,870,1,0,0,0,870,871,5,62,0,0,871,872,3,20,10,0,872,874,1,0,
  	0,0,873,860,1,0,0,0,873,864,1,0,0,0,874,109,1,0,0,0,94,113,119,125,136,
  	159,164,171,180,186,191,193,201,205,212,217,221,236,253,279,283,290,305,
  	317,330,333,337,341,345,360,365,385,390,392,397,402,406,409,414,416,424,
  	429,434,438,441,447,456,465,473,484,490,499,503,512,517,524,530,544,546,
  	554,560,567,572,579,595,613,622,630,634,641,659,667,669,715,719,727,731,
  	741,747,749,762,770,781,792,795,807,815,826,830,834,844,848,852,868,873
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
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::MODULE) {
      setState(110);
      moduleDecl();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::IMPORT

    || _la == PrystParser::FROM) {
      setState(116);
      importDecl();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 279206461424) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(122);
      declaration();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
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
    setState(130);
    match(PrystParser::MODULE);
    setState(131);
    importPath();
    setState(132);
    match(PrystParser::LBRACE);
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 279206461424) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(133);
      declaration();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
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
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(141);
      match(PrystParser::IMPORT);
      setState(142);
      importPath();
      setState(143);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(PrystParser::IMPORT);
      setState(146);
      importPath();
      setState(147);
      match(PrystParser::AS);
      setState(148);
      match(PrystParser::IDENTIFIER);
      setState(149);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(151);
      match(PrystParser::FROM);
      setState(152);
      importPath();
      setState(153);
      match(PrystParser::IMPORT);
      setState(154);
      match(PrystParser::IDENTIFIER);
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PrystParser::COMMA) {
        setState(155);
        match(PrystParser::COMMA);
        setState(156);
        match(PrystParser::IDENTIFIER);
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(162);
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
    setState(166);
    match(PrystParser::IDENTIFIER);
    setState(171);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::DOUBLE_COLON) {
      setState(167);
      match(PrystParser::DOUBLE_COLON);
      setState(168);
      match(PrystParser::IDENTIFIER);
      setState(173);
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
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(174);
      functionDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(175);
      classDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(176);
      interfaceDecl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(177);
      errorDecl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(178);
      varDecl();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(179);
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
    setState(182);
    match(PrystParser::ERROR);
    setState(183);
    qualifiedType();
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::EXTENDS) {
      setState(184);
      match(PrystParser::EXTENDS);
      setState(185);
      qualifiedType();
    }
    setState(188);
    match(PrystParser::LBRACE);
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(191);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(189);
        constructorDecl();
        break;
      }

      case 2: {
        setState(190);
        errorMember();
        break;
      }

      default:
        break;
      }
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
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
    setState(198);
    returnType();
    setState(199);
    match(PrystParser::IDENTIFIER);
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::LT) {
      setState(200);
      genericParams();
    }
    setState(203);
    match(PrystParser::LPAREN);
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(204);
      parameters();
    }
    setState(207);
    match(PrystParser::RPAREN);
    setState(208);
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
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(210);
      parameter();
      break;
    }

    case 2: {
      setState(211);
      defaultParam();
      break;
    }

    default:
      break;
    }
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(214);
      match(PrystParser::COMMA);
      setState(217);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(215);
        parameter();
        break;
      }

      case 2: {
        setState(216);
        defaultParam();
        break;
      }

      default:
        break;
      }
      setState(223);
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
    setState(224);
    type();
    setState(225);
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
    setState(227);
    type();
    setState(228);
    match(PrystParser::IDENTIFIER);
    setState(229);
    match(PrystParser::ASSIGN);
    setState(230);
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
    setState(232);
    match(PrystParser::LBRACE);
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -5152112828840796162) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 449) != 0)) {
      setState(233);
      statement();
      setState(238);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(239);
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

PrystParser::PrintStmtContext* PrystParser::StatementContext::printStmt() {
  return getRuleContext<PrystParser::PrintStmtContext>(0);
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
    setState(253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(242);
      varDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(243);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(244);
      expressionStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(245);
      ifStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(246);
      whileStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(247);
      forStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(248);
      returnStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(249);
      tryStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(250);
      breakStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(251);
      continueStmt();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(252);
      printStmt();
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
    setState(283);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PrystParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(255);
        match(PrystParser::CONST);
        setState(256);
        type();
        setState(257);
        identifierList();
        setState(258);
        match(PrystParser::ASSIGN);
        setState(259);
        expression(0);
        setState(260);
        match(PrystParser::SEMICOLON);
        break;
      }

      case PrystParser::CONST_EXPR: {
        enterOuterAlt(_localctx, 2);
        setState(262);
        match(PrystParser::CONST_EXPR);
        setState(263);
        type();
        setState(264);
        identifierList();
        setState(265);
        match(PrystParser::ASSIGN);
        setState(266);
        expression(0);
        setState(267);
        match(PrystParser::SEMICOLON);
        break;
      }

      case PrystParser::LET: {
        enterOuterAlt(_localctx, 3);
        setState(269);
        match(PrystParser::LET);
        setState(270);
        identifierList();
        setState(271);
        match(PrystParser::ASSIGN);
        setState(272);
        expression(0);
        setState(273);
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
        setState(275);
        type();
        setState(276);
        identifierList();
        setState(279);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PrystParser::ASSIGN) {
          setState(277);
          match(PrystParser::ASSIGN);
          setState(278);
          expression(0);
        }
        setState(281);
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
    setState(285);
    match(PrystParser::IDENTIFIER);
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(286);
      match(PrystParser::COMMA);
      setState(287);
      match(PrystParser::IDENTIFIER);
      setState(292);
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
    setState(293);
    expression(0);
    setState(294);
    match(PrystParser::ASSIGN);
    setState(295);
    expression(0);
    setState(296);
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
    setState(298);
    match(PrystParser::IF);
    setState(299);
    match(PrystParser::LPAREN);
    setState(300);
    expression(0);
    setState(301);
    match(PrystParser::RPAREN);
    setState(302);
    statement();
    setState(305);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(303);
      match(PrystParser::ELSE);
      setState(304);
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
    setState(307);
    match(PrystParser::WHILE);
    setState(308);
    match(PrystParser::LPAREN);
    setState(309);
    expression(0);
    setState(310);
    match(PrystParser::RPAREN);
    setState(311);
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
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(313);
      match(PrystParser::FOR);
      setState(314);
      match(PrystParser::LPAREN);
      setState(317);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PrystParser::LET: {
          setState(315);
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
          setState(316);
          type();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(319);
      match(PrystParser::IDENTIFIER);
      setState(320);
      match(PrystParser::IN);
      setState(321);
      expression(0);
      setState(322);
      match(PrystParser::RPAREN);
      setState(323);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(325);
      match(PrystParser::FOR);
      setState(326);
      match(PrystParser::LPAREN);
      setState(330);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(327);
        varDecl();
        break;
      }

      case 2: {
        setState(328);
        expressionStmt();
        break;
      }

      case 3: {
        setState(329);
        match(PrystParser::SEMICOLON);
        break;
      }

      default:
        break;
      }
      setState(333);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 449) != 0)) {
        setState(332);
        expression(0);
      }
      setState(335);
      match(PrystParser::SEMICOLON);
      setState(337);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 449) != 0)) {
        setState(336);
        expression(0);
      }
      setState(339);
      match(PrystParser::RPAREN);
      setState(340);
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
    setState(343);
    match(PrystParser::RETURN);
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 449) != 0)) {
      setState(344);
      expression(0);
    }
    setState(347);
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
    setState(349);
    match(PrystParser::TRY);
    setState(350);
    block();
    setState(360);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::CATCH) {
      setState(351);
      match(PrystParser::CATCH);
      setState(352);
      match(PrystParser::LPAREN);
      setState(353);
      type();
      setState(354);
      match(PrystParser::IDENTIFIER);
      setState(355);
      match(PrystParser::RPAREN);
      setState(356);
      block();
      setState(362);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(365);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::FINALLY) {
      setState(363);
      match(PrystParser::FINALLY);
      setState(364);
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
    setState(367);
    match(PrystParser::BREAK);
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
    setState(370);
    match(PrystParser::CONTINUE);
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

//----------------- PrintStmtContext ------------------------------------------------------------------

PrystParser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PrystParser::PrintStmtContext::PRINT() {
  return getToken(PrystParser::PRINT, 0);
}

tree::TerminalNode* PrystParser::PrintStmtContext::LPAREN() {
  return getToken(PrystParser::LPAREN, 0);
}

PrystParser::ExpressionContext* PrystParser::PrintStmtContext::expression() {
  return getRuleContext<PrystParser::ExpressionContext>(0);
}

tree::TerminalNode* PrystParser::PrintStmtContext::RPAREN() {
  return getToken(PrystParser::RPAREN, 0);
}

tree::TerminalNode* PrystParser::PrintStmtContext::SEMICOLON() {
  return getToken(PrystParser::SEMICOLON, 0);
}


size_t PrystParser::PrintStmtContext::getRuleIndex() const {
  return PrystParser::RulePrintStmt;
}


std::any PrystParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::PrintStmtContext* PrystParser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, PrystParser::RulePrintStmt);

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
    match(PrystParser::PRINT);
    setState(374);
    match(PrystParser::LPAREN);
    setState(375);
    expression(0);
    setState(376);
    match(PrystParser::RPAREN);
    setState(377);
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
  enterRule(_localctx, 46, PrystParser::RuleExpressionStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    expression(0);
    setState(380);
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
  enterRule(_localctx, 48, PrystParser::RuleClassDecl);
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
    setState(382);
    match(PrystParser::CLASS);
    setState(383);
    match(PrystParser::IDENTIFIER);
    setState(385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::LT) {
      setState(384);
      genericParams();
    }
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::EXTENDS) {
      setState(387);
      match(PrystParser::EXTENDS);
      setState(388);
      match(PrystParser::IDENTIFIER);
      setState(390);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(389);
        genericArgs();
      }
    }
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::IMPLEMENTS) {
      setState(394);
      match(PrystParser::IMPLEMENTS);
      setState(395);
      match(PrystParser::IDENTIFIER);
      setState(397);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(396);
        genericArgs();
      }
      setState(406);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PrystParser::COMMA) {
        setState(399);
        match(PrystParser::COMMA);
        setState(400);
        match(PrystParser::IDENTIFIER);
        setState(402);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PrystParser::LT) {
          setState(401);
          genericArgs();
        }
        setState(408);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(411);
    match(PrystParser::LBRACE);
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294974448) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(414);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(412);
        constructorDecl();
        break;
      }

      case 2: {
        setState(413);
        classMember();
        break;
      }

      default:
        break;
      }
      setState(418);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(419);
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
  enterRule(_localctx, 50, PrystParser::RuleInterfaceDecl);
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
    setState(421);
    match(PrystParser::INTERFACE);
    setState(422);
    match(PrystParser::IDENTIFIER);
    setState(424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::LT) {
      setState(423);
      genericParams();
    }
    setState(441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PrystParser::EXTENDS) {
      setState(426);
      match(PrystParser::EXTENDS);
      setState(427);
      match(PrystParser::IDENTIFIER);
      setState(429);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(428);
        genericArgs();
      }
      setState(438);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PrystParser::COMMA) {
        setState(431);
        match(PrystParser::COMMA);
        setState(432);
        match(PrystParser::IDENTIFIER);
        setState(434);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PrystParser::LT) {
          setState(433);
          genericArgs();
        }
        setState(440);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(443);
    match(PrystParser::LBRACE);
    setState(447);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(444);
      interfaceMember();
      setState(449);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(450);
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
  enterRule(_localctx, 52, PrystParser::RuleInterfaceMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(465);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(452);
      returnType();
      setState(453);
      match(PrystParser::IDENTIFIER);
      setState(454);
      match(PrystParser::LPAREN);
      setState(456);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(455);
        parameters();
      }
      setState(458);
      match(PrystParser::RPAREN);
      setState(459);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(461);
      returnType();
      setState(462);
      match(PrystParser::IDENTIFIER);
      setState(463);
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
  enterRule(_localctx, 54, PrystParser::RuleGenericParams);
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
    setState(467);
    match(PrystParser::LT);
    setState(468);
    match(PrystParser::IDENTIFIER);
    setState(473);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(469);
      match(PrystParser::COMMA);
      setState(470);
      match(PrystParser::IDENTIFIER);
      setState(475);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(476);
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
  enterRule(_localctx, 56, PrystParser::RuleGenericArgs);
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
    setState(478);
    match(PrystParser::LT);
    setState(479);
    type();
    setState(484);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(480);
      match(PrystParser::COMMA);
      setState(481);
      type();
      setState(486);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(487);
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
  enterRule(_localctx, 58, PrystParser::RuleClassMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(490);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::CONST

      || _la == PrystParser::CONST_EXPR) {
        setState(489);
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
      setState(492);
      type();
      setState(493);
      match(PrystParser::IDENTIFIER);
      setState(494);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(496);
      returnType();
      setState(497);
      match(PrystParser::IDENTIFIER);
      setState(499);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(498);
        genericParams();
      }
      setState(501);
      match(PrystParser::LPAREN);
      setState(503);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(502);
        parameters();
      }
      setState(505);
      match(PrystParser::RPAREN);
      setState(506);
      block();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(508);
      returnType();
      setState(509);
      match(PrystParser::IDENTIFIER);
      setState(510);
      match(PrystParser::LPAREN);
      setState(512);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(511);
        overloadParams();
      }
      setState(514);
      match(PrystParser::RPAREN);
      setState(515);
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
  enterRule(_localctx, 60, PrystParser::RuleOverloadParams);
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
    setState(519);
    parameter();
    setState(524);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(520);
      match(PrystParser::COMMA);
      setState(521);
      parameter();
      setState(526);
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
  enterRule(_localctx, 62, PrystParser::RuleConstructorDecl);
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
    setState(527);
    match(PrystParser::IDENTIFIER);
    setState(528);
    match(PrystParser::LPAREN);
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(529);
      parameters();
    }
    setState(532);
    match(PrystParser::RPAREN);
    setState(533);
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
  enterRule(_localctx, 64, PrystParser::RuleConstructorBlock);
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
    setState(535);
    match(PrystParser::LBRACE);
    setState(546);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -5152112828840796162) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 449) != 0)) {
      setState(544);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
      case 1: {
        setState(536);
        match(PrystParser::THIS);
        setState(537);
        match(PrystParser::DOT);
        setState(538);
        match(PrystParser::IDENTIFIER);
        setState(539);
        match(PrystParser::ASSIGN);
        setState(540);
        expression(0);
        setState(541);
        match(PrystParser::SEMICOLON);
        break;
      }

      case 2: {
        setState(543);
        statement();
        break;
      }

      default:
        break;
      }
      setState(548);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(549);
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
  enterRule(_localctx, 66, PrystParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(560);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(551);
      nullableType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(552);
      qualifiedType();
      setState(554);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
      case 1: {
        setState(553);
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
      setState(556);
      functionType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(557);
      arrayType(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(558);
      mapType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(559);
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
  enterRule(_localctx, 68, PrystParser::RuleQualifiedType);

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
    setState(562);
    match(PrystParser::IDENTIFIER);
    setState(567);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(563);
        match(PrystParser::DOUBLE_COLON);
        setState(564);
        match(PrystParser::IDENTIFIER); 
      }
      setState(569);
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
  enterRule(_localctx, 70, PrystParser::RuleReturnType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(572);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(570);
      type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(571);
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
  enterRule(_localctx, 72, PrystParser::RuleNullableType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(574);
      qualifiedType();
      break;
    }

    case 2: {
      setState(575);
      functionType();
      break;
    }

    case 3: {
      setState(576);
      arrayType(0);
      break;
    }

    case 4: {
      setState(577);
      mapType();
      break;
    }

    case 5: {
      setState(578);
      basicType();
      break;
    }

    default:
      break;
    }
    setState(581);
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
  enterRule(_localctx, 74, PrystParser::RuleBasicType);
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
    setState(583);
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
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, PrystParser::RuleArrayType, precedence);

    

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
    setState(586);
    basicType();
    setState(587);
    match(PrystParser::LBRACK);
    setState(588);
    match(PrystParser::RBRACK);
    _ctx->stop = _input->LT(-1);
    setState(595);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArrayTypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArrayType);
        setState(590);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(591);
        match(PrystParser::LBRACK);
        setState(592);
        match(PrystParser::RBRACK); 
      }
      setState(597);
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
  enterRule(_localctx, 78, PrystParser::RuleMapType);

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
    match(PrystParser::MAP);
    setState(599);
    match(PrystParser::LT);
    setState(600);
    keyType();
    setState(601);
    match(PrystParser::COMMA);
    setState(602);
    type();
    setState(603);
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
  enterRule(_localctx, 80, PrystParser::RuleKeyType);
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
    setState(605);
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
  enterRule(_localctx, 82, PrystParser::RuleFunctionType);
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
    setState(607);
    match(PrystParser::FN);
    setState(608);
    match(PrystParser::LT);
    setState(609);
    returnType();
    setState(610);
    match(PrystParser::GT);
    setState(611);
    match(PrystParser::LPAREN);
    setState(613);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
      setState(612);
      typeList();
    }
    setState(615);
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
  enterRule(_localctx, 84, PrystParser::RuleTypeList);
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
    setState(617);
    type();
    setState(622);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(618);
      match(PrystParser::COMMA);
      setState(619);
      type();
      setState(624);
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
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, PrystParser::RuleExpression, precedence);

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
    setState(669);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrimaryExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(626);
      primary();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ConstructorExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(627);
      match(PrystParser::NEW);
      setState(628);
      qualifiedType();
      setState(630);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(629);
        genericArgs();
      }
      setState(632);
      match(PrystParser::LPAREN);
      setState(634);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 449) != 0)) {
        setState(633);
        arguments();
      }
      setState(636);
      match(PrystParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(638);
      match(PrystParser::IDENTIFIER);
      setState(639);
      match(PrystParser::LPAREN);
      setState(641);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 449) != 0)) {
        setState(640);
        arguments();
      }
      setState(643);
      match(PrystParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<TypeofExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(644);
      match(PrystParser::TYPEOF);
      setState(645);
      expression(21);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CastExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(646);
      match(PrystParser::LPAREN);
      setState(647);
      type();
      setState(648);
      match(PrystParser::RPAREN);
      setState(649);
      expression(15);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(651);
      match(PrystParser::LPAREN);
      setState(652);
      expression(0);
      setState(653);
      match(PrystParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(655);
      antlrcpp::downCast<PrefixExprContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1765415451975745536) != 0))) {
        antlrcpp::downCast<PrefixExprContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(656);
      expression(12);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<LambdaExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(657);
      match(PrystParser::LPAREN);
      setState(659);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(658);
        lambdaParams();
      }
      setState(661);
      match(PrystParser::RPAREN);
      setState(662);
      match(PrystParser::ARROW);
      setState(667);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(663);
        returnType();
        setState(664);
        block();
        break;
      }

      case 2: {
        setState(666);
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
    setState(749);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(747);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(671);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(672);
          antlrcpp::downCast<MultiplicativeExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 61572651155456) != 0))) {
            antlrcpp::downCast<MultiplicativeExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(673);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(674);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(675);
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
          setState(676);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(677);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(678);
          antlrcpp::downCast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8444249301319680) != 0))) {
            antlrcpp::downCast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(679);
          expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(680);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(681);
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
          setState(682);
          expression(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NullCoalesceExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(683);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(684);
          match(PrystParser::NULL_COALESCE);
          setState(685);
          expression(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicalAndExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(686);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(687);
          match(PrystParser::AND);
          setState(688);
          expression(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LogicalOrExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(689);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(690);
          match(PrystParser::OR);
          setState(691);
          expression(5);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ConditionalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(692);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(693);
          match(PrystParser::QUESTION_MARK);
          setState(694);
          expression(0);
          setState(695);
          match(PrystParser::COLON);
          setState(696);
          expression(3);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AssignmentExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(698);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(699);
          match(PrystParser::ASSIGN);
          setState(700);
          expression(2);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<InstanceofExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(701);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(702);
          match(PrystParser::INSTANCEOF);
          setState(703);
          type();
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<MemberAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(704);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(705);
          match(PrystParser::DOT);
          setState(706);
          match(PrystParser::IDENTIFIER);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NullableChainContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(707);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(708);
          match(PrystParser::QUESTION_MARK);
          setState(709);
          match(PrystParser::DOT);
          setState(710);
          match(PrystParser::IDENTIFIER);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<MethodCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(711);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(712);
          match(PrystParser::DOT);
          setState(713);
          match(PrystParser::IDENTIFIER);
          setState(715);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == PrystParser::LT) {
            setState(714);
            genericArgs();
          }
          setState(717);
          match(PrystParser::LPAREN);
          setState(719);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & 449) != 0)) {
            setState(718);
            arguments();
          }
          setState(721);
          match(PrystParser::RPAREN);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<NullableMethodCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(722);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(723);
          match(PrystParser::QUESTION_MARK);
          setState(724);
          match(PrystParser::DOT);
          setState(725);
          match(PrystParser::IDENTIFIER);
          setState(727);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == PrystParser::LT) {
            setState(726);
            genericArgs();
          }
          setState(729);
          match(PrystParser::LPAREN);
          setState(731);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & 449) != 0)) {
            setState(730);
            arguments();
          }
          setState(733);
          match(PrystParser::RPAREN);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<ArrayAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(734);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(739); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(735);
                    match(PrystParser::LBRACK);
                    setState(736);
                    expression(0);
                    setState(737);
                    match(PrystParser::RBRACK);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(741); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<NonNullAssertExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(743);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(744);
          match(PrystParser::NOT);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<PostfixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(745);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(746);
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
      setState(751);
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
  enterRule(_localctx, 88, PrystParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(762);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PrystParser::THIS: {
        enterOuterAlt(_localctx, 1);
        setState(752);
        match(PrystParser::THIS);
        break;
      }

      case PrystParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(753);
        match(PrystParser::IDENTIFIER);
        break;
      }

      case PrystParser::INTEGER: {
        enterOuterAlt(_localctx, 3);
        setState(754);
        match(PrystParser::INTEGER);
        break;
      }

      case PrystParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(755);
        match(PrystParser::FLOAT_LITERAL);
        break;
      }

      case PrystParser::STRING: {
        enterOuterAlt(_localctx, 5);
        setState(756);
        match(PrystParser::STRING);
        break;
      }

      case PrystParser::STRING_START: {
        enterOuterAlt(_localctx, 6);
        setState(757);
        stringInterpolation();
        break;
      }

      case PrystParser::BOOLEAN: {
        enterOuterAlt(_localctx, 7);
        setState(758);
        match(PrystParser::BOOLEAN);
        break;
      }

      case PrystParser::NULL_LIT: {
        enterOuterAlt(_localctx, 8);
        setState(759);
        match(PrystParser::NULL_LIT);
        break;
      }

      case PrystParser::LBRACK: {
        enterOuterAlt(_localctx, 9);
        setState(760);
        arrayLiteral();
        break;
      }

      case PrystParser::LBRACE: {
        enterOuterAlt(_localctx, 10);
        setState(761);
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
  enterRule(_localctx, 90, PrystParser::RuleStringInterpolation);
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
    setState(764);
    match(PrystParser::STRING_START);
    setState(765);
    expression(0);
    setState(770);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::STRING_MIDDLE) {
      setState(766);
      match(PrystParser::STRING_MIDDLE);
      setState(767);
      expression(0);
      setState(772);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(773);
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
  enterRule(_localctx, 92, PrystParser::RuleChainedCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(795);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(775);
      match(PrystParser::DOT);
      setState(776);
      match(PrystParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(777);
      match(PrystParser::DOT);
      setState(778);
      match(PrystParser::IDENTIFIER);
      setState(779);
      match(PrystParser::LPAREN);
      setState(781);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 449) != 0)) {
        setState(780);
        arguments();
      }
      setState(783);
      match(PrystParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(784);
      match(PrystParser::QUESTION_MARK);
      setState(785);
      match(PrystParser::DOT);
      setState(786);
      match(PrystParser::IDENTIFIER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(787);
      match(PrystParser::QUESTION_MARK);
      setState(788);
      match(PrystParser::DOT);
      setState(789);
      match(PrystParser::IDENTIFIER);
      setState(790);
      match(PrystParser::LPAREN);
      setState(792);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -5152113384539291634) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 449) != 0)) {
        setState(791);
        arguments();
      }
      setState(794);
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
  enterRule(_localctx, 94, PrystParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(797);
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
  enterRule(_localctx, 96, PrystParser::RuleLambdaParams);
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
    setState(799);
    type();
    setState(800);
    match(PrystParser::IDENTIFIER);
    setState(807);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(801);
      match(PrystParser::COMMA);
      setState(802);
      type();
      setState(803);
      match(PrystParser::IDENTIFIER);
      setState(809);
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
  enterRule(_localctx, 98, PrystParser::RuleArguments);
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
    setState(810);
    expression(0);
    setState(815);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(811);
      match(PrystParser::COMMA);
      setState(812);
      expression(0);
      setState(817);
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
  enterRule(_localctx, 100, PrystParser::RuleArrayLiteral);
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
    setState(834);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrystParser::EmptyArrayLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(818);
      match(PrystParser::LBRACK);
      setState(819);
      match(PrystParser::RBRACK);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PrystParser::NonEmptyArrayLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(820);
      match(PrystParser::LBRACK);
      setState(821);
      expression(0);
      setState(826);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(822);
          match(PrystParser::COMMA);
          setState(823);
          expression(0); 
        }
        setState(828);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      }
      setState(830);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::COMMA) {
        setState(829);
        match(PrystParser::COMMA);
      }
      setState(832);
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
  enterRule(_localctx, 102, PrystParser::RuleMapLiteral);
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
    setState(852);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrystParser::EmptyMapLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(836);
      match(PrystParser::LBRACE);
      setState(837);
      match(PrystParser::RBRACE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PrystParser::NonEmptyMapLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(838);
      match(PrystParser::LBRACE);
      setState(839);
      mapEntry();
      setState(844);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(840);
          match(PrystParser::COMMA);
          setState(841);
          mapEntry(); 
        }
        setState(846);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      }
      setState(848);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::COMMA) {
        setState(847);
        match(PrystParser::COMMA);
      }
      setState(850);
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
  enterRule(_localctx, 104, PrystParser::RuleMapEntry);
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
    setState(854);
    _la = _input->LA(1);
    if (!(_la == PrystParser::INTEGER || _la == PrystParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(855);
    match(PrystParser::COLON);
    setState(856);
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
  enterRule(_localctx, 106, PrystParser::RuleMapKey);
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
    setState(858);
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
  enterRule(_localctx, 108, PrystParser::RuleErrorMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(873);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(860);
      type();
      setState(861);
      match(PrystParser::IDENTIFIER);
      setState(862);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(864);
      returnType();
      setState(865);
      match(PrystParser::IDENTIFIER);
      setState(866);
      match(PrystParser::LPAREN);
      setState(868);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4294968304) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(867);
        parameters();
      }
      setState(870);
      match(PrystParser::RPAREN);
      setState(871);
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
    case 38: return arrayTypeSempred(antlrcpp::downCast<ArrayTypeContext *>(context), predicateIndex);
    case 43: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
