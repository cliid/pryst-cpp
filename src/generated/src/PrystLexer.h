
// Generated from src/PrystLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace pryst {


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

  explicit PrystLexer(antlr4::CharStream *input);

  ~PrystLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace pryst
