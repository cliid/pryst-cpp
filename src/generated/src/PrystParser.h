
// Generated from src/PrystParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  PrystParser : public antlr4::Parser {
public:
  enum {
    INTEGER = 1, FLOAT_LITERAL = 2, BOOLEAN = 3, INT = 4, FLOAT = 5, BOOL = 6, 
    STR = 7, VOID = 8, FN = 9, LET = 10, CONST = 11, CONST_EXPR = 12, CLASS = 13, 
    INTERFACE = 14, EXTENDS = 15, IMPLEMENTS = 16, RETURN = 17, IF = 18, 
    ELSE = 19, WHILE = 20, FOR = 21, IN = 22, IMPORT = 23, MODULE = 24, 
    TRY = 25, CATCH = 26, FINALLY = 27, AS = 28, BREAK = 29, CONTINUE = 30, 
    NEW = 31, MAP = 32, FROM = 33, THIS = 34, NULL_LIT = 35, OPEN = 36, 
    FILE = 37, ERROR = 38, NULL_COALESCE = 39, PLUS = 40, MINUS = 41, STAR = 42, 
    SLASH = 43, PERCENT = 44, ASSIGN = 45, EQ = 46, NEQ = 47, LT = 48, GT = 49, 
    LE = 50, GE = 51, AND = 52, OR = 53, NOT = 54, QUESTION_MARK = 55, COLON = 56, 
    ARROW = 57, INC = 58, DEC = 59, LPAREN = 60, RPAREN = 61, LBRACE = 62, 
    RBRACE = 63, LBRACK = 64, RBRACK = 65, SEMICOLON = 66, COMMA = 67, DOT = 68, 
    DOUBLE_COLON = 69, READ = 70, WRITE = 71, READ_TO_STRING = 72, WRITE_ALL = 73, 
    CLOSE = 74, IDENTIFIER = 75, STRING = 76, STRING_START = 77, STRING_MIDDLE = 78, 
    STRING_END = 79, WS = 80, COMMENT = 81, BLOCK_COMMENT = 82, INVALID_CHAR = 83, 
    INVALID_IDENTIFIER = 84, INTERP_WS = 85
  };

  enum {
    RuleProgram = 0, RuleModuleDecl = 1, RuleImportDecl = 2, RuleImportPath = 3, 
    RuleDeclaration = 4, RuleErrorDecl = 5, RuleFunctionDecl = 6, RuleParameters = 7, 
    RuleParameter = 8, RuleDefaultParam = 9, RuleBlock = 10, RuleStatement = 11, 
    RuleVarDecl = 12, RuleIdentifierList = 13, RuleAssignment = 14, RuleIfStmt = 15, 
    RuleWhileStmt = 16, RuleForStmt = 17, RuleReturnStmt = 18, RuleTryStmt = 19, 
    RuleBreakStmt = 20, RuleContinueStmt = 21, RuleExpressionStmt = 22, 
    RuleClassDecl = 23, RuleInterfaceDecl = 24, RuleInterfaceMember = 25, 
    RuleGenericParams = 26, RuleGenericArgs = 27, RuleClassMember = 28, 
    RuleOverloadParams = 29, RuleConstructorDecl = 30, RuleConstructorBlock = 31, 
    RuleType = 32, RuleQualifiedType = 33, RuleReturnType = 34, RuleNullableType = 35, 
    RuleBasicType = 36, RuleArrayType = 37, RuleMapType = 38, RuleKeyType = 39, 
    RuleFunctionType = 40, RuleTypeList = 41, RuleExpression = 42, RulePrimary = 43, 
    RuleStringInterpolation = 44, RuleChainedCall = 45, RuleStringLiteral = 46, 
    RuleLambdaParams = 47, RuleArguments = 48, RuleArrayLiteral = 49, RuleMapLiteral = 50, 
    RuleMapEntry = 51, RuleMapKey = 52, RuleErrorMember = 53
  };

  explicit PrystParser(antlr4::TokenStream *input);

  PrystParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PrystParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class ModuleDeclContext;
  class ImportDeclContext;
  class ImportPathContext;
  class DeclarationContext;
  class ErrorDeclContext;
  class FunctionDeclContext;
  class ParametersContext;
  class ParameterContext;
  class DefaultParamContext;
  class BlockContext;
  class StatementContext;
  class VarDeclContext;
  class IdentifierListContext;
  class AssignmentContext;
  class IfStmtContext;
  class WhileStmtContext;
  class ForStmtContext;
  class ReturnStmtContext;
  class TryStmtContext;
  class BreakStmtContext;
  class ContinueStmtContext;
  class ExpressionStmtContext;
  class ClassDeclContext;
  class InterfaceDeclContext;
  class InterfaceMemberContext;
  class GenericParamsContext;
  class GenericArgsContext;
  class ClassMemberContext;
  class OverloadParamsContext;
  class ConstructorDeclContext;
  class ConstructorBlockContext;
  class TypeContext;
  class QualifiedTypeContext;
  class ReturnTypeContext;
  class NullableTypeContext;
  class BasicTypeContext;
  class ArrayTypeContext;
  class MapTypeContext;
  class KeyTypeContext;
  class FunctionTypeContext;
  class TypeListContext;
  class ExpressionContext;
  class PrimaryContext;
  class StringInterpolationContext;
  class ChainedCallContext;
  class StringLiteralContext;
  class LambdaParamsContext;
  class ArgumentsContext;
  class ArrayLiteralContext;
  class MapLiteralContext;
  class MapEntryContext;
  class MapKeyContext;
  class ErrorMemberContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ModuleDeclContext *> moduleDecl();
    ModuleDeclContext* moduleDecl(size_t i);
    std::vector<ImportDeclContext *> importDecl();
    ImportDeclContext* importDecl(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ModuleDeclContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    ImportPathContext *importPath();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDeclContext* moduleDecl();

  class  ImportDeclContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    ImportPathContext *importPath();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDeclContext* importDecl();

  class  ImportPathContext : public antlr4::ParserRuleContext {
  public:
    ImportPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOUBLE_COLON();
    antlr4::tree::TerminalNode* DOUBLE_COLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportPathContext* importPath();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclContext *functionDecl();
    ClassDeclContext *classDecl();
    InterfaceDeclContext *interfaceDecl();
    ErrorDeclContext *errorDecl();
    VarDeclContext *varDecl();
    TryStmtContext *tryStmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ErrorDeclContext : public antlr4::ParserRuleContext {
  public:
    ErrorDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR();
    std::vector<QualifiedTypeContext *> qualifiedType();
    QualifiedTypeContext* qualifiedType(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<ConstructorDeclContext *> constructorDecl();
    ConstructorDeclContext* constructorDecl(size_t i);
    std::vector<ErrorMemberContext *> errorMember();
    ErrorMemberContext* errorMember(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorDeclContext* errorDecl();

  class  FunctionDeclContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    GenericParamsContext *genericParams();
    ParametersContext *parameters();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclContext* functionDecl();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<DefaultParamContext *> defaultParam();
    DefaultParamContext* defaultParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  DefaultParamContext : public antlr4::ParserRuleContext {
  public:
    DefaultParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultParamContext* defaultParam();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    VarDeclContext *varDecl();
    AssignmentContext *assignment();
    ExpressionStmtContext *expressionStmt();
    IfStmtContext *ifStmt();
    WhileStmtContext *whileStmt();
    ForStmtContext *forStmt();
    ReturnStmtContext *returnStmt();
    TryStmtContext *tryStmt();
    BreakStmtContext *breakStmt();
    ContinueStmtContext *continueStmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    TypeContext *type();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *CONST_EXPR();
    antlr4::tree::TerminalNode *LET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *IN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();
    antlr4::tree::TerminalNode *LET();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    VarDeclContext *varDecl();
    ExpressionStmtContext *expressionStmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMICOLON();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  TryStmtContext : public antlr4::ParserRuleContext {
  public:
    TryStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CATCH();
    antlr4::tree::TerminalNode* CATCH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *FINALLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryStmtContext* tryStmt();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStmtContext* breakStmt();

  class  ContinueStmtContext : public antlr4::ParserRuleContext {
  public:
    ContinueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStmtContext* continueStmt();

  class  ExpressionStmtContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStmtContext* expressionStmt();

  class  ClassDeclContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    GenericParamsContext *genericParams();
    antlr4::tree::TerminalNode *EXTENDS();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    std::vector<ConstructorDeclContext *> constructorDecl();
    ConstructorDeclContext* constructorDecl(size_t i);
    std::vector<ClassMemberContext *> classMember();
    ClassMemberContext* classMember(size_t i);
    std::vector<GenericArgsContext *> genericArgs();
    GenericArgsContext* genericArgs(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDeclContext* classDecl();

  class  InterfaceDeclContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    GenericParamsContext *genericParams();
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<InterfaceMemberContext *> interfaceMember();
    InterfaceMemberContext* interfaceMember(size_t i);
    std::vector<GenericArgsContext *> genericArgs();
    GenericArgsContext* genericArgs(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceDeclContext* interfaceDecl();

  class  InterfaceMemberContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();
    ParametersContext *parameters();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMemberContext* interfaceMember();

  class  GenericParamsContext : public antlr4::ParserRuleContext {
  public:
    GenericParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericParamsContext* genericParams();

  class  GenericArgsContext : public antlr4::ParserRuleContext {
  public:
    GenericArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericArgsContext* genericArgs();

  class  ClassMemberContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *CONST_EXPR();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    GenericParamsContext *genericParams();
    ParametersContext *parameters();
    OverloadParamsContext *overloadParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassMemberContext* classMember();

  class  OverloadParamsContext : public antlr4::ParserRuleContext {
  public:
    OverloadParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OverloadParamsContext* overloadParams();

  class  ConstructorDeclContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ConstructorBlockContext *constructorBlock();
    ParametersContext *parameters();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorDeclContext* constructorDecl();

  class  ConstructorBlockContext : public antlr4::ParserRuleContext {
  public:
    ConstructorBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> THIS();
    antlr4::tree::TerminalNode* THIS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorBlockContext* constructorBlock();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullableTypeContext *nullableType();
    QualifiedTypeContext *qualifiedType();
    GenericArgsContext *genericArgs();
    FunctionTypeContext *functionType();
    ArrayTypeContext *arrayType();
    MapTypeContext *mapType();
    BasicTypeContext *basicType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  QualifiedTypeContext : public antlr4::ParserRuleContext {
  public:
    QualifiedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOUBLE_COLON();
    antlr4::tree::TerminalNode* DOUBLE_COLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedTypeContext* qualifiedType();

  class  ReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    ReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *VOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnTypeContext* returnType();

  class  NullableTypeContext : public antlr4::ParserRuleContext {
  public:
    NullableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION_MARK();
    QualifiedTypeContext *qualifiedType();
    FunctionTypeContext *functionType();
    ArrayTypeContext *arrayType();
    MapTypeContext *mapType();
    BasicTypeContext *basicType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullableTypeContext* nullableType();

  class  BasicTypeContext : public antlr4::ParserRuleContext {
  public:
    BasicTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicTypeContext* basicType();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    ArrayTypeContext *arrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();
  ArrayTypeContext* arrayType(int precedence);
  class  MapTypeContext : public antlr4::ParserRuleContext {
  public:
    MapTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *LT();
    KeyTypeContext *keyType();
    antlr4::tree::TerminalNode *COMMA();
    TypeContext *type();
    antlr4::tree::TerminalNode *GT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapTypeContext* mapType();

  class  KeyTypeContext : public antlr4::ParserRuleContext {
  public:
    KeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyTypeContext* keyType();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FN();
    antlr4::tree::TerminalNode *LT();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TypeListContext *typeList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeListContext* typeList();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignmentExprContext : public ExpressionContext {
  public:
    AssignmentExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalAndExprContext : public ExpressionContext {
  public:
    LogicalAndExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastExprContext : public ExpressionContext {
  public:
    CastExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    TypeContext *type();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullCoalesceExprContext : public ExpressionContext {
  public:
    NullCoalesceExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *NULL_COALESCE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdditiveExprContext : public ExpressionContext {
  public:
    AdditiveExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelationalExprContext : public ExpressionContext {
  public:
    RelationalExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExpressionContext {
  public:
    ParenExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullableMethodCallExprContext : public ExpressionContext {
  public:
    NullableMethodCallExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    GenericArgsContext *genericArgs();
    ArgumentsContext *arguments();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalOrExprContext : public ExpressionContext {
  public:
    LogicalOrExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrefixExprContext : public ExpressionContext {
  public:
    PrefixExprContext(ExpressionContext *ctx);

    antlr4::Token *prefix = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullableChainContext : public ExpressionContext {
  public:
    NullableChainContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MethodCallExprContext : public ExpressionContext {
  public:
    MethodCallExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    GenericArgsContext *genericArgs();
    ArgumentsContext *arguments();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayAccessExprContext : public ExpressionContext {
  public:
    ArrayAccessExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryExprContext : public ExpressionContext {
  public:
    PrimaryExprContext(ExpressionContext *ctx);

    PrimaryContext *primary();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LambdaExprContext : public ExpressionContext {
  public:
    LambdaExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ARROW();
    ReturnTypeContext *returnType();
    BlockContext *block();
    ExpressionContext *expression();
    LambdaParamsContext *lambdaParams();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExprContext : public ExpressionContext {
  public:
    FunctionCallExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ArgumentsContext *arguments();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberAccessExprContext : public ExpressionContext {
  public:
    MemberAccessExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostfixExprContext : public ExpressionContext {
  public:
    PostfixExprContext(ExpressionContext *ctx);

    antlr4::Token *postfix = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstructorExprContext : public ExpressionContext {
  public:
    ConstructorExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NEW();
    QualifiedTypeContext *qualifiedType();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    GenericArgsContext *genericArgs();
    ArgumentsContext *arguments();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonNullAssertExprContext : public ExpressionContext {
  public:
    NonNullAssertExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplicativeExprContext : public ExpressionContext {
  public:
    MultiplicativeExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityExprContext : public ExpressionContext {
  public:
    EqualityExprContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConditionalExprContext : public ExpressionContext {
  public:
    ConditionalExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *COLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *STRING();
    StringInterpolationContext *stringInterpolation();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *NULL_LIT();
    ArrayLiteralContext *arrayLiteral();
    MapLiteralContext *mapLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  StringInterpolationContext : public antlr4::ParserRuleContext {
  public:
    StringInterpolationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_START();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STRING_END();
    std::vector<antlr4::tree::TerminalNode *> STRING_MIDDLE();
    antlr4::tree::TerminalNode* STRING_MIDDLE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringInterpolationContext* stringInterpolation();

  class  ChainedCallContext : public antlr4::ParserRuleContext {
  public:
    ChainedCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *QUESTION_MARK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChainedCallContext* chainedCall();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  LambdaParamsContext : public antlr4::ParserRuleContext {
  public:
    LambdaParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaParamsContext* lambdaParams();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  ArrayLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrayLiteralContext() = default;
    void copyFrom(ArrayLiteralContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NonEmptyArrayLiteralContext : public ArrayLiteralContext {
  public:
    NonEmptyArrayLiteralContext(ArrayLiteralContext *ctx);

    antlr4::tree::TerminalNode *LBRACK();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RBRACK();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EmptyArrayLiteralContext : public ArrayLiteralContext {
  public:
    EmptyArrayLiteralContext(ArrayLiteralContext *ctx);

    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrayLiteralContext* arrayLiteral();

  class  MapLiteralContext : public antlr4::ParserRuleContext {
  public:
    MapLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MapLiteralContext() = default;
    void copyFrom(MapLiteralContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NonEmptyMapLiteralContext : public MapLiteralContext {
  public:
    NonEmptyMapLiteralContext(MapLiteralContext *ctx);

    antlr4::tree::TerminalNode *LBRACE();
    std::vector<MapEntryContext *> mapEntry();
    MapEntryContext* mapEntry(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EmptyMapLiteralContext : public MapLiteralContext {
  public:
    EmptyMapLiteralContext(MapLiteralContext *ctx);

    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MapLiteralContext* mapLiteral();

  class  MapEntryContext : public antlr4::ParserRuleContext {
  public:
    MapEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapEntryContext* mapEntry();

  class  MapKeyContext : public antlr4::ParserRuleContext {
  public:
    MapKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapKeyContext* mapKey();

  class  ErrorMemberContext : public antlr4::ParserRuleContext {
  public:
    ErrorMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *SEMICOLON();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    ParametersContext *parameters();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorMemberContext* errorMember();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool arrayTypeSempred(ArrayTypeContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

