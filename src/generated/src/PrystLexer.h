
// Generated from src/PrystLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace pryst::parser {


class  PrystLexer : public antlr4::Lexer {
public:
  enum {
    INTEGER = 1, FLOAT_LITERAL = 2, BOOLEAN = 3, INT = 4, FLOAT = 5, BOOL = 6, 
    STR = 7, VOID = 8, FN = 9, LET = 10, CONST = 11, CONST_EXPR = 12, CLASS = 13, 
    INTERFACE = 14, EXTENDS = 15, IMPLEMENTS = 16, RETURN = 17, IF = 18, 
    ELSE = 19, WHILE = 20, FOR = 21, IN = 22, IMPORT = 23, MODULE = 24, 
    TRY = 25, CATCH = 26, FINALLY = 27, AS = 28, BREAK = 29, CONTINUE = 30, 
    NEW = 31, MAP = 32, FROM = 33, THIS = 34, NULL_LIT = 35, ERROR = 36, 
    NULL_COALESCE = 37, PLUS = 38, MINUS = 39, STAR = 40, SLASH = 41, PERCENT = 42, 
    ASSIGN = 43, EQ = 44, NEQ = 45, LT = 46, GT = 47, LE = 48, GE = 49, 
    AND = 50, OR = 51, NOT = 52, QUESTION_MARK = 53, COLON = 54, ARROW = 55, 
    INC = 56, DEC = 57, LPAREN = 58, RPAREN = 59, LBRACE = 60, RBRACE = 61, 
    LBRACK = 62, RBRACK = 63, SEMICOLON = 64, COMMA = 65, DOT = 66, DOUBLE_COLON = 67, 
    IDENTIFIER = 68, STRING = 69, STRING_START = 70, STRING_MIDDLE = 71, 
    STRING_END = 72, WS = 73, COMMENT = 74, BLOCK_COMMENT = 75, INVALID_CHAR = 76, 
    INVALID_IDENTIFIER = 77, INTERP_WS = 78
  };

  enum {
    INTERPOLATION = 1
  };

  PrystLexer(antlr4::CharStream *input);
  ~PrystLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace pryst::parser
