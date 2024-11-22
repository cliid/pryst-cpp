
// Generated from /home/ubuntu/attachments/pryst/src/PrystLexer.g4 by ANTLR 4.13.2

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
    TYPEOF = 37, ERROR = 38, PRINT = 39, NULL_COALESCE = 40, PLUS = 41, 
    MINUS = 42, STAR = 43, SLASH = 44, PERCENT = 45, ASSIGN = 46, EQ = 47, 
    NEQ = 48, LT = 49, GT = 50, LE = 51, GE = 52, AND = 53, OR = 54, NOT = 55, 
    QUESTION_MARK = 56, COLON = 57, ARROW = 58, INC = 59, DEC = 60, LPAREN = 61, 
    RPAREN = 62, LBRACE = 63, RBRACE = 64, LBRACK = 65, RBRACK = 66, SEMICOLON = 67, 
    COMMA = 68, DOT = 69, DOUBLE_COLON = 70, IDENTIFIER = 71, STRING = 72, 
    STRING_START = 73, STRING_MIDDLE = 74, STRING_END = 75, WS = 76, COMMENT = 77, 
    BLOCK_COMMENT = 78, INVALID_CHAR = 79, INVALID_IDENTIFIER = 80, INTERP_WS = 81
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
