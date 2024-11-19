
// Generated from src/PrystLexer.g4 by ANTLR 4.13.2


#include "PrystLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PrystLexerStaticData final {
  PrystLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PrystLexerStaticData(const PrystLexerStaticData&) = delete;
  PrystLexerStaticData(PrystLexerStaticData&&) = delete;
  PrystLexerStaticData& operator=(const PrystLexerStaticData&) = delete;
  PrystLexerStaticData& operator=(PrystLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag prystlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PrystLexerStaticData> prystlexerLexerStaticData = nullptr;

void prystlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (prystlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(prystlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PrystLexerStaticData>(
    std::vector<std::string>{
      "INTEGER", "FLOAT_LITERAL", "BOOLEAN", "INT", "FLOAT", "BOOL", "STR", 
      "VOID", "FN", "LET", "CONST", "CONST_EXPR", "CLASS", "INTERFACE", 
      "EXTENDS", "IMPLEMENTS", "RETURN", "IF", "ELSE", "WHILE", "FOR", "IN", 
      "IMPORT", "MODULE", "TRY", "CATCH", "FINALLY", "AS", "BREAK", "CONTINUE", 
      "NEW", "MAP", "FROM", "THIS", "NULL_LIT", "INSTANCEOF", "TYPEOF", 
      "ERROR", "NULL_COALESCE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", 
      "ASSIGN", "EQ", "NEQ", "LT", "GT", "LE", "GE", "AND", "OR", "NOT", 
      "QUESTION_MARK", "COLON", "ARROW", "INC", "DEC", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMICOLON", "COMMA", "DOT", 
      "DOUBLE_COLON", "IDENTIFIER", "STRING", "STRING_START", "STRING_MIDDLE", 
      "STRING_END", "WS", "COMMENT", "BLOCK_COMMENT", "INVALID_CHAR", "INVALID_IDENTIFIER", 
      "INTERP_WS", "INTERP_LPAREN", "INTERP_RPAREN", "INTERP_PLUS", "INTERP_MINUS", 
      "INTERP_STAR", "INTERP_SLASH", "INTERP_DOT", "INTERP_COMMA", "INTERP_IDENTIFIER", 
      "INTERP_INTEGER", "INTERP_STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE", "INTERPOLATION"
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
  	4,0,80,672,6,-1,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,
  	2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,
  	13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,
  	20,2,21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,
  	27,2,28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,
  	34,2,35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,
  	41,2,42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,
  	48,2,49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,
  	55,2,56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,
  	62,2,63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,
  	69,2,70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,
  	76,2,77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,
  	83,2,84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,
  	90,1,0,4,0,186,8,0,11,0,12,0,187,1,1,4,1,191,8,1,11,1,12,1,192,1,1,1,
  	1,4,1,197,8,1,11,1,12,1,198,1,1,1,1,3,1,203,8,1,1,1,4,1,206,8,1,11,1,
  	12,1,207,3,1,210,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,221,8,2,
  	1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,
  	6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,18,
  	1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,
  	1,30,1,31,1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,
  	1,33,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,35,
  	1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,
  	1,37,1,37,1,38,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,
  	1,43,1,44,1,44,1,45,1,45,1,45,1,46,1,46,1,46,1,47,1,47,1,48,1,48,1,49,
  	1,49,1,49,1,50,1,50,1,50,1,51,1,51,1,51,1,52,1,52,1,52,1,53,1,53,1,54,
  	1,54,1,55,1,55,1,56,1,56,1,56,1,57,1,57,1,57,1,58,1,58,1,58,1,59,1,59,
  	1,60,1,60,1,61,1,61,1,62,1,62,1,63,1,63,1,64,1,64,1,65,1,65,1,66,1,66,
  	1,67,1,67,1,68,1,68,1,68,1,69,1,69,5,69,502,8,69,10,69,12,69,505,9,69,
  	1,70,1,70,1,70,1,70,5,70,511,8,70,10,70,12,70,514,9,70,1,70,1,70,1,71,
  	1,71,1,71,1,71,5,71,522,8,71,10,71,12,71,525,9,71,1,71,1,71,1,71,1,71,
  	1,71,1,72,1,72,1,72,1,72,5,72,536,8,72,10,72,12,72,539,9,72,1,72,1,72,
  	1,72,1,72,1,72,1,73,1,73,1,73,1,73,5,73,550,8,73,10,73,12,73,553,9,73,
  	1,73,1,73,1,73,1,73,1,74,4,74,560,8,74,11,74,12,74,561,1,74,1,74,1,75,
  	1,75,1,75,1,75,5,75,570,8,75,10,75,12,75,573,9,75,1,75,1,75,1,76,1,76,
  	1,76,1,76,5,76,581,8,76,10,76,12,76,584,9,76,1,76,1,76,1,76,1,76,1,76,
  	1,77,1,77,1,77,1,77,1,78,1,78,1,78,5,78,598,8,78,10,78,12,78,601,9,78,
  	1,78,1,78,1,79,4,79,606,8,79,11,79,12,79,607,1,79,1,79,1,80,1,80,1,80,
  	1,80,1,81,1,81,1,81,1,81,1,82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,84,
  	1,84,1,84,1,84,1,85,1,85,1,85,1,85,1,86,1,86,1,86,1,86,1,87,1,87,1,87,
  	1,87,1,88,1,88,5,88,646,8,88,10,88,12,88,649,9,88,1,88,1,88,1,89,4,89,
  	654,8,89,11,89,12,89,655,1,89,1,89,1,90,1,90,1,90,1,90,5,90,664,8,90,
  	10,90,12,90,667,9,90,1,90,1,90,1,90,1,90,1,582,0,91,2,1,4,2,6,3,8,4,10,
  	5,12,6,14,7,16,8,18,9,20,10,22,11,24,12,26,13,28,14,30,15,32,16,34,17,
  	36,18,38,19,40,20,42,21,44,22,46,23,48,24,50,25,52,26,54,27,56,28,58,
  	29,60,30,62,31,64,32,66,33,68,34,70,35,72,36,74,37,76,38,78,39,80,40,
  	82,41,84,42,86,43,88,44,90,45,92,46,94,47,96,48,98,49,100,50,102,51,104,
  	52,106,53,108,54,110,55,112,56,114,57,116,58,118,59,120,60,122,61,124,
  	62,126,63,128,64,130,65,132,66,134,67,136,68,138,69,140,70,142,71,144,
  	72,146,73,148,74,150,75,152,76,154,77,156,78,158,79,160,80,162,0,164,
  	0,166,0,168,0,170,0,172,0,174,0,176,0,178,0,180,0,182,0,2,0,1,9,1,0,48,
  	57,2,0,69,69,101,101,2,0,43,43,45,45,3,0,65,90,95,95,97,122,4,0,48,57,
  	65,90,95,95,97,122,4,0,10,10,13,13,34,34,92,92,6,0,10,10,13,13,34,34,
  	36,36,92,92,123,123,3,0,9,10,13,13,32,32,2,0,10,10,13,13,695,0,2,1,0,
  	0,0,0,4,1,0,0,0,0,6,1,0,0,0,0,8,1,0,0,0,0,10,1,0,0,0,0,12,1,0,0,0,0,14,
  	1,0,0,0,0,16,1,0,0,0,0,18,1,0,0,0,0,20,1,0,0,0,0,22,1,0,0,0,0,24,1,0,
  	0,0,0,26,1,0,0,0,0,28,1,0,0,0,0,30,1,0,0,0,0,32,1,0,0,0,0,34,1,0,0,0,
  	0,36,1,0,0,0,0,38,1,0,0,0,0,40,1,0,0,0,0,42,1,0,0,0,0,44,1,0,0,0,0,46,
  	1,0,0,0,0,48,1,0,0,0,0,50,1,0,0,0,0,52,1,0,0,0,0,54,1,0,0,0,0,56,1,0,
  	0,0,0,58,1,0,0,0,0,60,1,0,0,0,0,62,1,0,0,0,0,64,1,0,0,0,0,66,1,0,0,0,
  	0,68,1,0,0,0,0,70,1,0,0,0,0,72,1,0,0,0,0,74,1,0,0,0,0,76,1,0,0,0,0,78,
  	1,0,0,0,0,80,1,0,0,0,0,82,1,0,0,0,0,84,1,0,0,0,0,86,1,0,0,0,0,88,1,0,
  	0,0,0,90,1,0,0,0,0,92,1,0,0,0,0,94,1,0,0,0,0,96,1,0,0,0,0,98,1,0,0,0,
  	0,100,1,0,0,0,0,102,1,0,0,0,0,104,1,0,0,0,0,106,1,0,0,0,0,108,1,0,0,0,
  	0,110,1,0,0,0,0,112,1,0,0,0,0,114,1,0,0,0,0,116,1,0,0,0,0,118,1,0,0,0,
  	0,120,1,0,0,0,0,122,1,0,0,0,0,124,1,0,0,0,0,126,1,0,0,0,0,128,1,0,0,0,
  	0,130,1,0,0,0,0,132,1,0,0,0,0,134,1,0,0,0,0,136,1,0,0,0,0,138,1,0,0,0,
  	0,140,1,0,0,0,0,142,1,0,0,0,0,144,1,0,0,0,0,146,1,0,0,0,0,148,1,0,0,0,
  	0,150,1,0,0,0,0,152,1,0,0,0,0,154,1,0,0,0,0,156,1,0,0,0,0,158,1,0,0,0,
  	1,160,1,0,0,0,1,162,1,0,0,0,1,164,1,0,0,0,1,166,1,0,0,0,1,168,1,0,0,0,
  	1,170,1,0,0,0,1,172,1,0,0,0,1,174,1,0,0,0,1,176,1,0,0,0,1,178,1,0,0,0,
  	1,180,1,0,0,0,1,182,1,0,0,0,2,185,1,0,0,0,4,190,1,0,0,0,6,220,1,0,0,0,
  	8,222,1,0,0,0,10,226,1,0,0,0,12,232,1,0,0,0,14,237,1,0,0,0,16,241,1,0,
  	0,0,18,246,1,0,0,0,20,249,1,0,0,0,22,253,1,0,0,0,24,259,1,0,0,0,26,266,
  	1,0,0,0,28,272,1,0,0,0,30,282,1,0,0,0,32,290,1,0,0,0,34,301,1,0,0,0,36,
  	308,1,0,0,0,38,311,1,0,0,0,40,316,1,0,0,0,42,322,1,0,0,0,44,326,1,0,0,
  	0,46,329,1,0,0,0,48,336,1,0,0,0,50,343,1,0,0,0,52,347,1,0,0,0,54,353,
  	1,0,0,0,56,361,1,0,0,0,58,364,1,0,0,0,60,370,1,0,0,0,62,379,1,0,0,0,64,
  	383,1,0,0,0,66,387,1,0,0,0,68,392,1,0,0,0,70,397,1,0,0,0,72,402,1,0,0,
  	0,74,413,1,0,0,0,76,420,1,0,0,0,78,426,1,0,0,0,80,429,1,0,0,0,82,431,
  	1,0,0,0,84,433,1,0,0,0,86,435,1,0,0,0,88,437,1,0,0,0,90,439,1,0,0,0,92,
  	441,1,0,0,0,94,444,1,0,0,0,96,447,1,0,0,0,98,449,1,0,0,0,100,451,1,0,
  	0,0,102,454,1,0,0,0,104,457,1,0,0,0,106,460,1,0,0,0,108,463,1,0,0,0,110,
  	465,1,0,0,0,112,467,1,0,0,0,114,469,1,0,0,0,116,472,1,0,0,0,118,475,1,
  	0,0,0,120,478,1,0,0,0,122,480,1,0,0,0,124,482,1,0,0,0,126,484,1,0,0,0,
  	128,486,1,0,0,0,130,488,1,0,0,0,132,490,1,0,0,0,134,492,1,0,0,0,136,494,
  	1,0,0,0,138,496,1,0,0,0,140,499,1,0,0,0,142,506,1,0,0,0,144,517,1,0,0,
  	0,146,531,1,0,0,0,148,545,1,0,0,0,150,559,1,0,0,0,152,565,1,0,0,0,154,
  	576,1,0,0,0,156,590,1,0,0,0,158,594,1,0,0,0,160,605,1,0,0,0,162,611,1,
  	0,0,0,164,615,1,0,0,0,166,619,1,0,0,0,168,623,1,0,0,0,170,627,1,0,0,0,
  	172,631,1,0,0,0,174,635,1,0,0,0,176,639,1,0,0,0,178,643,1,0,0,0,180,653,
  	1,0,0,0,182,659,1,0,0,0,184,186,7,0,0,0,185,184,1,0,0,0,186,187,1,0,0,
  	0,187,185,1,0,0,0,187,188,1,0,0,0,188,3,1,0,0,0,189,191,7,0,0,0,190,189,
  	1,0,0,0,191,192,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,194,1,0,0,
  	0,194,196,5,46,0,0,195,197,7,0,0,0,196,195,1,0,0,0,197,198,1,0,0,0,198,
  	196,1,0,0,0,198,199,1,0,0,0,199,209,1,0,0,0,200,202,7,1,0,0,201,203,7,
  	2,0,0,202,201,1,0,0,0,202,203,1,0,0,0,203,205,1,0,0,0,204,206,7,0,0,0,
  	205,204,1,0,0,0,206,207,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,210,
  	1,0,0,0,209,200,1,0,0,0,209,210,1,0,0,0,210,5,1,0,0,0,211,212,5,116,0,
  	0,212,213,5,114,0,0,213,214,5,117,0,0,214,221,5,101,0,0,215,216,5,102,
  	0,0,216,217,5,97,0,0,217,218,5,108,0,0,218,219,5,115,0,0,219,221,5,101,
  	0,0,220,211,1,0,0,0,220,215,1,0,0,0,221,7,1,0,0,0,222,223,5,105,0,0,223,
  	224,5,110,0,0,224,225,5,116,0,0,225,9,1,0,0,0,226,227,5,102,0,0,227,228,
  	5,108,0,0,228,229,5,111,0,0,229,230,5,97,0,0,230,231,5,116,0,0,231,11,
  	1,0,0,0,232,233,5,98,0,0,233,234,5,111,0,0,234,235,5,111,0,0,235,236,
  	5,108,0,0,236,13,1,0,0,0,237,238,5,115,0,0,238,239,5,116,0,0,239,240,
  	5,114,0,0,240,15,1,0,0,0,241,242,5,118,0,0,242,243,5,111,0,0,243,244,
  	5,105,0,0,244,245,5,100,0,0,245,17,1,0,0,0,246,247,5,102,0,0,247,248,
  	5,110,0,0,248,19,1,0,0,0,249,250,5,108,0,0,250,251,5,101,0,0,251,252,
  	5,116,0,0,252,21,1,0,0,0,253,254,5,99,0,0,254,255,5,111,0,0,255,256,5,
  	110,0,0,256,257,5,115,0,0,257,258,5,116,0,0,258,23,1,0,0,0,259,260,5,
  	99,0,0,260,261,5,111,0,0,261,262,5,110,0,0,262,263,5,115,0,0,263,264,
  	5,116,0,0,264,265,5,33,0,0,265,25,1,0,0,0,266,267,5,99,0,0,267,268,5,
  	108,0,0,268,269,5,97,0,0,269,270,5,115,0,0,270,271,5,115,0,0,271,27,1,
  	0,0,0,272,273,5,105,0,0,273,274,5,110,0,0,274,275,5,116,0,0,275,276,5,
  	101,0,0,276,277,5,114,0,0,277,278,5,102,0,0,278,279,5,97,0,0,279,280,
  	5,99,0,0,280,281,5,101,0,0,281,29,1,0,0,0,282,283,5,101,0,0,283,284,5,
  	120,0,0,284,285,5,116,0,0,285,286,5,101,0,0,286,287,5,110,0,0,287,288,
  	5,100,0,0,288,289,5,115,0,0,289,31,1,0,0,0,290,291,5,105,0,0,291,292,
  	5,109,0,0,292,293,5,112,0,0,293,294,5,108,0,0,294,295,5,101,0,0,295,296,
  	5,109,0,0,296,297,5,101,0,0,297,298,5,110,0,0,298,299,5,116,0,0,299,300,
  	5,115,0,0,300,33,1,0,0,0,301,302,5,114,0,0,302,303,5,101,0,0,303,304,
  	5,116,0,0,304,305,5,117,0,0,305,306,5,114,0,0,306,307,5,110,0,0,307,35,
  	1,0,0,0,308,309,5,105,0,0,309,310,5,102,0,0,310,37,1,0,0,0,311,312,5,
  	101,0,0,312,313,5,108,0,0,313,314,5,115,0,0,314,315,5,101,0,0,315,39,
  	1,0,0,0,316,317,5,119,0,0,317,318,5,104,0,0,318,319,5,105,0,0,319,320,
  	5,108,0,0,320,321,5,101,0,0,321,41,1,0,0,0,322,323,5,102,0,0,323,324,
  	5,111,0,0,324,325,5,114,0,0,325,43,1,0,0,0,326,327,5,105,0,0,327,328,
  	5,110,0,0,328,45,1,0,0,0,329,330,5,105,0,0,330,331,5,109,0,0,331,332,
  	5,112,0,0,332,333,5,111,0,0,333,334,5,114,0,0,334,335,5,116,0,0,335,47,
  	1,0,0,0,336,337,5,109,0,0,337,338,5,111,0,0,338,339,5,100,0,0,339,340,
  	5,117,0,0,340,341,5,108,0,0,341,342,5,101,0,0,342,49,1,0,0,0,343,344,
  	5,116,0,0,344,345,5,114,0,0,345,346,5,121,0,0,346,51,1,0,0,0,347,348,
  	5,99,0,0,348,349,5,97,0,0,349,350,5,116,0,0,350,351,5,99,0,0,351,352,
  	5,104,0,0,352,53,1,0,0,0,353,354,5,102,0,0,354,355,5,105,0,0,355,356,
  	5,110,0,0,356,357,5,97,0,0,357,358,5,108,0,0,358,359,5,108,0,0,359,360,
  	5,121,0,0,360,55,1,0,0,0,361,362,5,97,0,0,362,363,5,115,0,0,363,57,1,
  	0,0,0,364,365,5,98,0,0,365,366,5,114,0,0,366,367,5,101,0,0,367,368,5,
  	97,0,0,368,369,5,107,0,0,369,59,1,0,0,0,370,371,5,99,0,0,371,372,5,111,
  	0,0,372,373,5,110,0,0,373,374,5,116,0,0,374,375,5,105,0,0,375,376,5,110,
  	0,0,376,377,5,117,0,0,377,378,5,101,0,0,378,61,1,0,0,0,379,380,5,110,
  	0,0,380,381,5,101,0,0,381,382,5,119,0,0,382,63,1,0,0,0,383,384,5,109,
  	0,0,384,385,5,97,0,0,385,386,5,112,0,0,386,65,1,0,0,0,387,388,5,102,0,
  	0,388,389,5,114,0,0,389,390,5,111,0,0,390,391,5,109,0,0,391,67,1,0,0,
  	0,392,393,5,116,0,0,393,394,5,104,0,0,394,395,5,105,0,0,395,396,5,115,
  	0,0,396,69,1,0,0,0,397,398,5,110,0,0,398,399,5,117,0,0,399,400,5,108,
  	0,0,400,401,5,108,0,0,401,71,1,0,0,0,402,403,5,105,0,0,403,404,5,110,
  	0,0,404,405,5,115,0,0,405,406,5,116,0,0,406,407,5,97,0,0,407,408,5,110,
  	0,0,408,409,5,99,0,0,409,410,5,101,0,0,410,411,5,111,0,0,411,412,5,102,
  	0,0,412,73,1,0,0,0,413,414,5,116,0,0,414,415,5,121,0,0,415,416,5,112,
  	0,0,416,417,5,101,0,0,417,418,5,111,0,0,418,419,5,102,0,0,419,75,1,0,
  	0,0,420,421,5,101,0,0,421,422,5,114,0,0,422,423,5,114,0,0,423,424,5,111,
  	0,0,424,425,5,114,0,0,425,77,1,0,0,0,426,427,5,63,0,0,427,428,5,63,0,
  	0,428,79,1,0,0,0,429,430,5,43,0,0,430,81,1,0,0,0,431,432,5,45,0,0,432,
  	83,1,0,0,0,433,434,5,42,0,0,434,85,1,0,0,0,435,436,5,47,0,0,436,87,1,
  	0,0,0,437,438,5,37,0,0,438,89,1,0,0,0,439,440,5,61,0,0,440,91,1,0,0,0,
  	441,442,5,61,0,0,442,443,5,61,0,0,443,93,1,0,0,0,444,445,5,33,0,0,445,
  	446,5,61,0,0,446,95,1,0,0,0,447,448,5,60,0,0,448,97,1,0,0,0,449,450,5,
  	62,0,0,450,99,1,0,0,0,451,452,5,60,0,0,452,453,5,61,0,0,453,101,1,0,0,
  	0,454,455,5,62,0,0,455,456,5,61,0,0,456,103,1,0,0,0,457,458,5,38,0,0,
  	458,459,5,38,0,0,459,105,1,0,0,0,460,461,5,124,0,0,461,462,5,124,0,0,
  	462,107,1,0,0,0,463,464,5,33,0,0,464,109,1,0,0,0,465,466,5,63,0,0,466,
  	111,1,0,0,0,467,468,5,58,0,0,468,113,1,0,0,0,469,470,5,45,0,0,470,471,
  	5,62,0,0,471,115,1,0,0,0,472,473,5,43,0,0,473,474,5,43,0,0,474,117,1,
  	0,0,0,475,476,5,45,0,0,476,477,5,45,0,0,477,119,1,0,0,0,478,479,5,40,
  	0,0,479,121,1,0,0,0,480,481,5,41,0,0,481,123,1,0,0,0,482,483,5,123,0,
  	0,483,125,1,0,0,0,484,485,5,125,0,0,485,127,1,0,0,0,486,487,5,91,0,0,
  	487,129,1,0,0,0,488,489,5,93,0,0,489,131,1,0,0,0,490,491,5,59,0,0,491,
  	133,1,0,0,0,492,493,5,44,0,0,493,135,1,0,0,0,494,495,5,46,0,0,495,137,
  	1,0,0,0,496,497,5,58,0,0,497,498,5,58,0,0,498,139,1,0,0,0,499,503,7,3,
  	0,0,500,502,7,4,0,0,501,500,1,0,0,0,502,505,1,0,0,0,503,501,1,0,0,0,503,
  	504,1,0,0,0,504,141,1,0,0,0,505,503,1,0,0,0,506,512,5,34,0,0,507,511,
  	8,5,0,0,508,509,5,92,0,0,509,511,9,0,0,0,510,507,1,0,0,0,510,508,1,0,
  	0,0,511,514,1,0,0,0,512,510,1,0,0,0,512,513,1,0,0,0,513,515,1,0,0,0,514,
  	512,1,0,0,0,515,516,5,34,0,0,516,143,1,0,0,0,517,523,5,34,0,0,518,522,
  	8,6,0,0,519,520,5,92,0,0,520,522,9,0,0,0,521,518,1,0,0,0,521,519,1,0,
  	0,0,522,525,1,0,0,0,523,521,1,0,0,0,523,524,1,0,0,0,524,526,1,0,0,0,525,
  	523,1,0,0,0,526,527,5,36,0,0,527,528,5,123,0,0,528,529,1,0,0,0,529,530,
  	6,71,0,0,530,145,1,0,0,0,531,537,5,125,0,0,532,536,8,6,0,0,533,534,5,
  	92,0,0,534,536,9,0,0,0,535,532,1,0,0,0,535,533,1,0,0,0,536,539,1,0,0,
  	0,537,535,1,0,0,0,537,538,1,0,0,0,538,540,1,0,0,0,539,537,1,0,0,0,540,
  	541,5,36,0,0,541,542,5,123,0,0,542,543,1,0,0,0,543,544,6,72,0,0,544,147,
  	1,0,0,0,545,551,5,125,0,0,546,550,8,6,0,0,547,548,5,92,0,0,548,550,9,
  	0,0,0,549,546,1,0,0,0,549,547,1,0,0,0,550,553,1,0,0,0,551,549,1,0,0,0,
  	551,552,1,0,0,0,552,554,1,0,0,0,553,551,1,0,0,0,554,555,5,34,0,0,555,
  	556,1,0,0,0,556,557,6,73,1,0,557,149,1,0,0,0,558,560,7,7,0,0,559,558,
  	1,0,0,0,560,561,1,0,0,0,561,559,1,0,0,0,561,562,1,0,0,0,562,563,1,0,0,
  	0,563,564,6,74,2,0,564,151,1,0,0,0,565,566,5,47,0,0,566,567,5,47,0,0,
  	567,571,1,0,0,0,568,570,8,8,0,0,569,568,1,0,0,0,570,573,1,0,0,0,571,569,
  	1,0,0,0,571,572,1,0,0,0,572,574,1,0,0,0,573,571,1,0,0,0,574,575,6,75,
  	2,0,575,153,1,0,0,0,576,577,5,47,0,0,577,578,5,42,0,0,578,582,1,0,0,0,
  	579,581,9,0,0,0,580,579,1,0,0,0,581,584,1,0,0,0,582,583,1,0,0,0,582,580,
  	1,0,0,0,583,585,1,0,0,0,584,582,1,0,0,0,585,586,5,42,0,0,586,587,5,47,
  	0,0,587,588,1,0,0,0,588,589,6,76,2,0,589,155,1,0,0,0,590,591,9,0,0,0,
  	591,592,1,0,0,0,592,593,6,77,2,0,593,157,1,0,0,0,594,595,7,0,0,0,595,
  	599,7,3,0,0,596,598,7,4,0,0,597,596,1,0,0,0,598,601,1,0,0,0,599,597,1,
  	0,0,0,599,600,1,0,0,0,600,602,1,0,0,0,601,599,1,0,0,0,602,603,6,78,2,
  	0,603,159,1,0,0,0,604,606,7,7,0,0,605,604,1,0,0,0,606,607,1,0,0,0,607,
  	605,1,0,0,0,607,608,1,0,0,0,608,609,1,0,0,0,609,610,6,79,2,0,610,161,
  	1,0,0,0,611,612,5,40,0,0,612,613,1,0,0,0,613,614,6,80,3,0,614,163,1,0,
  	0,0,615,616,5,41,0,0,616,617,1,0,0,0,617,618,6,81,4,0,618,165,1,0,0,0,
  	619,620,5,43,0,0,620,621,1,0,0,0,621,622,6,82,5,0,622,167,1,0,0,0,623,
  	624,5,45,0,0,624,625,1,0,0,0,625,626,6,83,6,0,626,169,1,0,0,0,627,628,
  	5,42,0,0,628,629,1,0,0,0,629,630,6,84,7,0,630,171,1,0,0,0,631,632,5,47,
  	0,0,632,633,1,0,0,0,633,634,6,85,8,0,634,173,1,0,0,0,635,636,5,46,0,0,
  	636,637,1,0,0,0,637,638,6,86,9,0,638,175,1,0,0,0,639,640,5,44,0,0,640,
  	641,1,0,0,0,641,642,6,87,10,0,642,177,1,0,0,0,643,647,7,3,0,0,644,646,
  	7,4,0,0,645,644,1,0,0,0,646,649,1,0,0,0,647,645,1,0,0,0,647,648,1,0,0,
  	0,648,650,1,0,0,0,649,647,1,0,0,0,650,651,6,88,11,0,651,179,1,0,0,0,652,
  	654,7,0,0,0,653,652,1,0,0,0,654,655,1,0,0,0,655,653,1,0,0,0,655,656,1,
  	0,0,0,656,657,1,0,0,0,657,658,6,89,12,0,658,181,1,0,0,0,659,665,5,34,
  	0,0,660,664,8,5,0,0,661,662,5,92,0,0,662,664,9,0,0,0,663,660,1,0,0,0,
  	663,661,1,0,0,0,664,667,1,0,0,0,665,663,1,0,0,0,665,666,1,0,0,0,666,668,
  	1,0,0,0,667,665,1,0,0,0,668,669,5,34,0,0,669,670,1,0,0,0,670,671,6,90,
  	13,0,671,183,1,0,0,0,27,0,1,187,192,198,202,207,209,220,503,510,512,521,
  	523,535,537,549,551,561,571,582,599,607,647,655,663,665,14,5,1,0,4,0,
  	0,6,0,0,7,60,0,7,61,0,7,40,0,7,41,0,7,42,0,7,43,0,7,68,0,7,67,0,7,70,
  	0,7,1,0,7,71,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  prystlexerLexerStaticData = std::move(staticData);
}

}

PrystLexer::PrystLexer(CharStream *input) : Lexer(input) {
  PrystLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *prystlexerLexerStaticData->atn, prystlexerLexerStaticData->decisionToDFA, prystlexerLexerStaticData->sharedContextCache);
}

PrystLexer::~PrystLexer() {
  delete _interpreter;
}

std::string PrystLexer::getGrammarFileName() const {
  return "PrystLexer.g4";
}

const std::vector<std::string>& PrystLexer::getRuleNames() const {
  return prystlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PrystLexer::getChannelNames() const {
  return prystlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PrystLexer::getModeNames() const {
  return prystlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PrystLexer::getVocabulary() const {
  return prystlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PrystLexer::getSerializedATN() const {
  return prystlexerLexerStaticData->serializedATN;
}

const atn::ATN& PrystLexer::getATN() const {
  return *prystlexerLexerStaticData->atn;
}




void PrystLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  prystlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(prystlexerLexerOnceFlag, prystlexerLexerInitialize);
#endif
}
