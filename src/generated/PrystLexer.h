
// Generated from /home/ubuntu/workspace/pryst-cpp/src/PrystLexer.g4 by ANTLR 4.13.2

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
    NEW = 31, MAP = 32, FROM = 33, THIS = 34, NULL_LIT = 35, INSTANCEOF = 36, 
    TYPEOF = 37, ERROR = 38, NULL_COALESCE = 39, PLUS = 40, MINUS = 41, 
    STAR = 42, SLASH = 43, PERCENT = 44, ASSIGN = 45, EQ = 46, NEQ = 47, 
    LT = 48, GT = 49, LE = 50, GE = 51, AND = 52, OR = 53, NOT = 54, QUESTION_MARK = 55, 
    COLON = 56, ARROW = 57, INC = 58, DEC = 59, LPAREN = 60, RPAREN = 61, 
    LBRACE = 62, RBRACE = 63, LBRACK = 64, RBRACK = 65, SEMICOLON = 66, 
    COMMA = 67, DOT = 68, DOUBLE_COLON = 69, IDENTIFIER = 70, STRING = 71, 
    STRING_START = 72, STRING_MIDDLE = 73, STRING_END = 74, WS = 75, COMMENT = 76, 
    BLOCK_COMMENT = 77, INVALID_CHAR = 78, INVALID_IDENTIFIER = 79, INTERP_WS = 80
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
