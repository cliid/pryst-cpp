
// Generated from src/PrystParser.g4 by ANTLR 4.7.2


#include "PrystParserVisitor.h"

#include "PrystParser.h"


using namespace antlrcpp;
using namespace pryst::parser;
using namespace antlr4;

PrystParser::PrystParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PrystParser::~PrystParser() {
  delete _interpreter;
}

std::string PrystParser::getGrammarFileName() const {
  return "PrystParser.g4";
}

const std::vector<std::string>& PrystParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PrystParser::getVocabulary() const {
  return _vocabulary;
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

antlrcpp::Any PrystParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ProgramContext* PrystParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PrystParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::LET)
      | (1ULL << PrystParser::CONST)
      | (1ULL << PrystParser::CONST_EXPR)
      | (1ULL << PrystParser::CLASS)
      | (1ULL << PrystParser::INTERFACE)
      | (1ULL << PrystParser::TRY)
      | (1ULL << PrystParser::MAP)
      | (1ULL << PrystParser::ERROR))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::ModuleDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitModuleDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ModuleDeclContext* PrystParser::moduleDecl() {
  ModuleDeclContext *_localctx = _tracker.createInstance<ModuleDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, PrystParser::RuleModuleDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::LET)
      | (1ULL << PrystParser::CONST)
      | (1ULL << PrystParser::CONST_EXPR)
      | (1ULL << PrystParser::CLASS)
      | (1ULL << PrystParser::INTERFACE)
      | (1ULL << PrystParser::TRY)
      | (1ULL << PrystParser::MAP)
      | (1ULL << PrystParser::ERROR))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::ImportDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitImportDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ImportDeclContext* PrystParser::importDecl() {
  ImportDeclContext *_localctx = _tracker.createInstance<ImportDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, PrystParser::RuleImportDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ImportPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitImportPath(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ImportPathContext* PrystParser::importPath() {
  ImportPathContext *_localctx = _tracker.createInstance<ImportPathContext>(_ctx, getState());
  enterRule(_localctx, 6, PrystParser::RuleImportPath);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::DeclarationContext* PrystParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, PrystParser::RuleDeclaration);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ErrorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitErrorDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ErrorDeclContext* PrystParser::errorDecl() {
  ErrorDeclContext *_localctx = _tracker.createInstance<ErrorDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, PrystParser::RuleErrorDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::FunctionDeclContext* PrystParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, PrystParser::RuleFunctionDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ParametersContext* PrystParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 14, PrystParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ParameterContext* PrystParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 16, PrystParser::RuleParameter);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::DefaultParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitDefaultParam(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::DefaultParamContext* PrystParser::defaultParam() {
  DefaultParamContext *_localctx = _tracker.createInstance<DefaultParamContext>(_ctx, getState());
  enterRule(_localctx, 18, PrystParser::RuleDefaultParam);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::BlockContext* PrystParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, PrystParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
      | (1ULL << PrystParser::FLOAT_LITERAL)
      | (1ULL << PrystParser::BOOLEAN)
      | (1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::LET)
      | (1ULL << PrystParser::CONST)
      | (1ULL << PrystParser::CONST_EXPR)
      | (1ULL << PrystParser::RETURN)
      | (1ULL << PrystParser::IF)
      | (1ULL << PrystParser::WHILE)
      | (1ULL << PrystParser::FOR)
      | (1ULL << PrystParser::TRY)
      | (1ULL << PrystParser::BREAK)
      | (1ULL << PrystParser::CONTINUE)
      | (1ULL << PrystParser::NEW)
      | (1ULL << PrystParser::MAP)
      | (1ULL << PrystParser::THIS)
      | (1ULL << PrystParser::NULL_LIT)
      | (1ULL << PrystParser::MINUS)
      | (1ULL << PrystParser::NOT)
      | (1ULL << PrystParser::INC)
      | (1ULL << PrystParser::DEC)
      | (1ULL << PrystParser::LPAREN)
      | (1ULL << PrystParser::LBRACE)
      | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
      | (1ULL << (PrystParser::STRING - 68))
      | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
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

antlrcpp::Any PrystParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::StatementContext* PrystParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, PrystParser::RuleStatement);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::VarDeclContext* PrystParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, PrystParser::RuleVarDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::IdentifierListContext* PrystParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 26, PrystParser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::AssignmentContext* PrystParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 28, PrystParser::RuleAssignment);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::IfStmtContext* PrystParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, PrystParser::RuleIfStmt);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::WhileStmtContext* PrystParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, PrystParser::RuleWhileStmt);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ForStmtContext* PrystParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, PrystParser::RuleForStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
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

      }
      setState(330);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
        | (1ULL << PrystParser::FLOAT_LITERAL)
        | (1ULL << PrystParser::BOOLEAN)
        | (1ULL << PrystParser::NEW)
        | (1ULL << PrystParser::THIS)
        | (1ULL << PrystParser::NULL_LIT)
        | (1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC)
        | (1ULL << PrystParser::LPAREN)
        | (1ULL << PrystParser::LBRACE)
        | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
        | (1ULL << (PrystParser::STRING - 68))
        | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
        setState(329);
        expression(0);
      }
      setState(332);
      match(PrystParser::SEMICOLON);
      setState(334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
        | (1ULL << PrystParser::FLOAT_LITERAL)
        | (1ULL << PrystParser::BOOLEAN)
        | (1ULL << PrystParser::NEW)
        | (1ULL << PrystParser::THIS)
        | (1ULL << PrystParser::NULL_LIT)
        | (1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC)
        | (1ULL << PrystParser::LPAREN)
        | (1ULL << PrystParser::LBRACE)
        | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
        | (1ULL << (PrystParser::STRING - 68))
        | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
        setState(333);
        expression(0);
      }
      setState(336);
      match(PrystParser::RPAREN);
      setState(337);
      statement();
      break;
    }

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

antlrcpp::Any PrystParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ReturnStmtContext* PrystParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, PrystParser::RuleReturnStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
      | (1ULL << PrystParser::FLOAT_LITERAL)
      | (1ULL << PrystParser::BOOLEAN)
      | (1ULL << PrystParser::NEW)
      | (1ULL << PrystParser::THIS)
      | (1ULL << PrystParser::NULL_LIT)
      | (1ULL << PrystParser::MINUS)
      | (1ULL << PrystParser::NOT)
      | (1ULL << PrystParser::INC)
      | (1ULL << PrystParser::DEC)
      | (1ULL << PrystParser::LPAREN)
      | (1ULL << PrystParser::LBRACE)
      | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
      | (1ULL << (PrystParser::STRING - 68))
      | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
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

antlrcpp::Any PrystParser::TryStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitTryStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::TryStmtContext* PrystParser::tryStmt() {
  TryStmtContext *_localctx = _tracker.createInstance<TryStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, PrystParser::RuleTryStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::BreakStmtContext* PrystParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, PrystParser::RuleBreakStmt);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ContinueStmtContext* PrystParser::continueStmt() {
  ContinueStmtContext *_localctx = _tracker.createInstance<ContinueStmtContext>(_ctx, getState());
  enterRule(_localctx, 42, PrystParser::RuleContinueStmt);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ExpressionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStmt(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ExpressionStmtContext* PrystParser::expressionStmt() {
  ExpressionStmtContext *_localctx = _tracker.createInstance<ExpressionStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, PrystParser::RuleExpressionStmt);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ClassDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitClassDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ClassDeclContext* PrystParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 46, PrystParser::RuleClassDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::CONST)
      | (1ULL << PrystParser::CONST_EXPR)
      | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::InterfaceDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::InterfaceDeclContext* PrystParser::interfaceDecl() {
  InterfaceDeclContext *_localctx = _tracker.createInstance<InterfaceDeclContext>(_ctx, getState());
  enterRule(_localctx, 48, PrystParser::RuleInterfaceDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::InterfaceMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMember(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::InterfaceMemberContext* PrystParser::interfaceMember() {
  InterfaceMemberContext *_localctx = _tracker.createInstance<InterfaceMemberContext>(_ctx, getState());
  enterRule(_localctx, 50, PrystParser::RuleInterfaceMember);
  size_t _la = 0;

  auto onExit = finally([=] {
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
        ((1ULL << _la) & ((1ULL << PrystParser::INT)
        | (1ULL << PrystParser::FLOAT)
        | (1ULL << PrystParser::BOOL)
        | (1ULL << PrystParser::STR)
        | (1ULL << PrystParser::VOID)
        | (1ULL << PrystParser::FN)
        | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::GenericParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitGenericParams(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::GenericParamsContext* PrystParser::genericParams() {
  GenericParamsContext *_localctx = _tracker.createInstance<GenericParamsContext>(_ctx, getState());
  enterRule(_localctx, 52, PrystParser::RuleGenericParams);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::GenericArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitGenericArgs(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::GenericArgsContext* PrystParser::genericArgs() {
  GenericArgsContext *_localctx = _tracker.createInstance<GenericArgsContext>(_ctx, getState());
  enterRule(_localctx, 54, PrystParser::RuleGenericArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ClassMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitClassMember(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ClassMemberContext* PrystParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 56, PrystParser::RuleClassMember);
  size_t _la = 0;

  auto onExit = finally([=] {
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
        ((1ULL << _la) & ((1ULL << PrystParser::INT)
        | (1ULL << PrystParser::FLOAT)
        | (1ULL << PrystParser::BOOL)
        | (1ULL << PrystParser::STR)
        | (1ULL << PrystParser::VOID)
        | (1ULL << PrystParser::FN)
        | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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
        ((1ULL << _la) & ((1ULL << PrystParser::INT)
        | (1ULL << PrystParser::FLOAT)
        | (1ULL << PrystParser::BOOL)
        | (1ULL << PrystParser::STR)
        | (1ULL << PrystParser::VOID)
        | (1ULL << PrystParser::FN)
        | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(502);
        overloadParams();
      }
      setState(505);
      match(PrystParser::RPAREN);
      setState(506);
      block();
      break;
    }

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

antlrcpp::Any PrystParser::OverloadParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitOverloadParams(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::OverloadParamsContext* PrystParser::overloadParams() {
  OverloadParamsContext *_localctx = _tracker.createInstance<OverloadParamsContext>(_ctx, getState());
  enterRule(_localctx, 58, PrystParser::RuleOverloadParams);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::ConstructorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDecl(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ConstructorDeclContext* PrystParser::constructorDecl() {
  ConstructorDeclContext *_localctx = _tracker.createInstance<ConstructorDeclContext>(_ctx, getState());
  enterRule(_localctx, 60, PrystParser::RuleConstructorDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::ConstructorBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConstructorBlock(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ConstructorBlockContext* PrystParser::constructorBlock() {
  ConstructorBlockContext *_localctx = _tracker.createInstance<ConstructorBlockContext>(_ctx, getState());
  enterRule(_localctx, 62, PrystParser::RuleConstructorBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
      | (1ULL << PrystParser::FLOAT_LITERAL)
      | (1ULL << PrystParser::BOOLEAN)
      | (1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::LET)
      | (1ULL << PrystParser::CONST)
      | (1ULL << PrystParser::CONST_EXPR)
      | (1ULL << PrystParser::RETURN)
      | (1ULL << PrystParser::IF)
      | (1ULL << PrystParser::WHILE)
      | (1ULL << PrystParser::FOR)
      | (1ULL << PrystParser::TRY)
      | (1ULL << PrystParser::BREAK)
      | (1ULL << PrystParser::CONTINUE)
      | (1ULL << PrystParser::NEW)
      | (1ULL << PrystParser::MAP)
      | (1ULL << PrystParser::THIS)
      | (1ULL << PrystParser::NULL_LIT)
      | (1ULL << PrystParser::MINUS)
      | (1ULL << PrystParser::NOT)
      | (1ULL << PrystParser::INC)
      | (1ULL << PrystParser::DEC)
      | (1ULL << PrystParser::LPAREN)
      | (1ULL << PrystParser::LBRACE)
      | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
      | (1ULL << (PrystParser::STRING - 68))
      | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
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

antlrcpp::Any PrystParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::TypeContext* PrystParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 64, PrystParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
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

      _la = _input->LA(1);
      if (_la == PrystParser::LT) {
        setState(544);
        genericArgs();
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

antlrcpp::Any PrystParser::QualifiedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::QualifiedTypeContext* PrystParser::qualifiedType() {
  QualifiedTypeContext *_localctx = _tracker.createInstance<QualifiedTypeContext>(_ctx, getState());
  enterRule(_localctx, 66, PrystParser::RuleQualifiedType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(PrystParser::IDENTIFIER);
    setState(558);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::DOUBLE_COLON) {
      setState(554);
      match(PrystParser::DOUBLE_COLON);
      setState(555);
      match(PrystParser::IDENTIFIER);
      setState(560);
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

antlrcpp::Any PrystParser::ReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitReturnType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ReturnTypeContext* PrystParser::returnType() {
  ReturnTypeContext *_localctx = _tracker.createInstance<ReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 68, PrystParser::RuleReturnType);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::NullableTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNullableType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::NullableTypeContext* PrystParser::nullableType() {
  NullableTypeContext *_localctx = _tracker.createInstance<NullableTypeContext>(_ctx, getState());
  enterRule(_localctx, 70, PrystParser::RuleNullableType);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitBasicType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::BasicTypeContext* PrystParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 72, PrystParser::RuleBasicType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(574);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID))) != 0) || _la == PrystParser::IDENTIFIER)) {
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

antlrcpp::Any PrystParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
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

    

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::MapTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMapType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::MapTypeContext* PrystParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 76, PrystParser::RuleMapType);

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::KeyTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitKeyType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::KeyTypeContext* PrystParser::keyType() {
  KeyTypeContext *_localctx = _tracker.createInstance<KeyTypeContext>(_ctx, getState());
  enterRule(_localctx, 78, PrystParser::RuleKeyType);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::FunctionTypeContext* PrystParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 80, PrystParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
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
      ((1ULL << _la) & ((1ULL << PrystParser::INT)
      | (1ULL << PrystParser::FLOAT)
      | (1ULL << PrystParser::BOOL)
      | (1ULL << PrystParser::STR)
      | (1ULL << PrystParser::VOID)
      | (1ULL << PrystParser::FN)
      | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
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

antlrcpp::Any PrystParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::TypeListContext* PrystParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 82, PrystParser::RuleTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
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

antlrcpp::Any PrystParser::AssignmentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpr(this);
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

antlrcpp::Any PrystParser::LogicalAndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpr(this);
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

antlrcpp::Any PrystParser::CastExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitCastExpr(this);
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

antlrcpp::Any PrystParser::NullCoalesceExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitNullCoalesceExpr(this);
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

antlrcpp::Any PrystParser::AdditiveExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpr(this);
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

antlrcpp::Any PrystParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
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

antlrcpp::Any PrystParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
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

antlrcpp::Any PrystParser::NullableMethodCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::LogicalOrExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::PrefixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPrefixExpr(this);
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

antlrcpp::Any PrystParser::NullableChainContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::MethodCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::ArrayAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::PrimaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::LambdaExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::FunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::MemberAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::PostfixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpr(this);
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

antlrcpp::Any PrystParser::ConstructorExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::NonNullAssertExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::MultiplicativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
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

antlrcpp::Any PrystParser::ConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpr(this);
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

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(658);
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
        ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
        | (1ULL << PrystParser::FLOAT_LITERAL)
        | (1ULL << PrystParser::BOOLEAN)
        | (1ULL << PrystParser::NEW)
        | (1ULL << PrystParser::THIS)
        | (1ULL << PrystParser::NULL_LIT)
        | (1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC)
        | (1ULL << PrystParser::LPAREN)
        | (1ULL << PrystParser::LBRACE)
        | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
        | (1ULL << (PrystParser::STRING - 68))
        | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
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
        ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
        | (1ULL << PrystParser::FLOAT_LITERAL)
        | (1ULL << PrystParser::BOOLEAN)
        | (1ULL << PrystParser::NEW)
        | (1ULL << PrystParser::THIS)
        | (1ULL << PrystParser::NULL_LIT)
        | (1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC)
        | (1ULL << PrystParser::LPAREN)
        | (1ULL << PrystParser::LBRACE)
        | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
        | (1ULL << (PrystParser::STRING - 68))
        | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
        setState(631);
        arguments();
      }
      setState(634);
      match(PrystParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CastExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(635);
      match(PrystParser::LPAREN);
      setState(636);
      type();
      setState(637);
      match(PrystParser::RPAREN);
      setState(638);
      expression(15);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(640);
      match(PrystParser::LPAREN);
      setState(641);
      expression(0);
      setState(642);
      match(PrystParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(644);
      dynamic_cast<PrefixExprContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC))) != 0))) {
        dynamic_cast<PrefixExprContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(645);
      expression(12);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<LambdaExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(646);
      match(PrystParser::LPAREN);
      setState(648);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::INT)
        | (1ULL << PrystParser::FLOAT)
        | (1ULL << PrystParser::BOOL)
        | (1ULL << PrystParser::STR)
        | (1ULL << PrystParser::VOID)
        | (1ULL << PrystParser::FN)
        | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(647);
        lambdaParams();
      }
      setState(650);
      match(PrystParser::RPAREN);
      setState(651);
      match(PrystParser::ARROW);
      setState(656);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(652);
        returnType();
        setState(653);
        block();
        break;
      }

      case 2: {
        setState(655);
        expression(0);
        break;
      }

      }
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(735);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(733);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(660);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(661);
          dynamic_cast<MultiplicativeExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PrystParser::STAR)
            | (1ULL << PrystParser::SLASH)
            | (1ULL << PrystParser::PERCENT))) != 0))) {
            dynamic_cast<MultiplicativeExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(662);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(663);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(664);
          dynamic_cast<AdditiveExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PrystParser::PLUS

          || _la == PrystParser::MINUS)) {
            dynamic_cast<AdditiveExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(665);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(666);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(667);
          dynamic_cast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PrystParser::LT)
            | (1ULL << PrystParser::GT)
            | (1ULL << PrystParser::LE)
            | (1ULL << PrystParser::GE))) != 0))) {
            dynamic_cast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(668);
          expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(669);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(670);
          dynamic_cast<EqualityExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PrystParser::EQ

          || _la == PrystParser::NEQ)) {
            dynamic_cast<EqualityExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(671);
          expression(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NullCoalesceExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(672);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(673);
          match(PrystParser::NULL_COALESCE);
          setState(674);
          expression(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicalAndExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(675);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(676);
          match(PrystParser::AND);
          setState(677);
          expression(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LogicalOrExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(678);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(679);
          match(PrystParser::OR);
          setState(680);
          expression(5);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ConditionalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(681);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(682);
          match(PrystParser::QUESTION_MARK);
          setState(683);
          expression(0);
          setState(684);
          match(PrystParser::COLON);
          setState(685);
          expression(3);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AssignmentExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(687);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(688);
          match(PrystParser::ASSIGN);
          setState(689);
          expression(2);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<MemberAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(690);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(691);
          match(PrystParser::DOT);
          setState(692);
          match(PrystParser::IDENTIFIER);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NullableChainContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(693);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(694);
          match(PrystParser::QUESTION_MARK);
          setState(695);
          match(PrystParser::DOT);
          setState(696);
          match(PrystParser::IDENTIFIER);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<MethodCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(697);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(698);
          match(PrystParser::DOT);
          setState(699);
          match(PrystParser::IDENTIFIER);
          setState(701);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == PrystParser::LT) {
            setState(700);
            genericArgs();
          }
          setState(703);
          match(PrystParser::LPAREN);
          setState(705);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
            | (1ULL << PrystParser::FLOAT_LITERAL)
            | (1ULL << PrystParser::BOOLEAN)
            | (1ULL << PrystParser::NEW)
            | (1ULL << PrystParser::THIS)
            | (1ULL << PrystParser::NULL_LIT)
            | (1ULL << PrystParser::MINUS)
            | (1ULL << PrystParser::NOT)
            | (1ULL << PrystParser::INC)
            | (1ULL << PrystParser::DEC)
            | (1ULL << PrystParser::LPAREN)
            | (1ULL << PrystParser::LBRACE)
            | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
            | (1ULL << (PrystParser::STRING - 68))
            | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
            setState(704);
            arguments();
          }
          setState(707);
          match(PrystParser::RPAREN);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<NullableMethodCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(708);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(709);
          match(PrystParser::QUESTION_MARK);
          setState(710);
          match(PrystParser::DOT);
          setState(711);
          match(PrystParser::IDENTIFIER);
          setState(713);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == PrystParser::LT) {
            setState(712);
            genericArgs();
          }
          setState(715);
          match(PrystParser::LPAREN);
          setState(717);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
            | (1ULL << PrystParser::FLOAT_LITERAL)
            | (1ULL << PrystParser::BOOLEAN)
            | (1ULL << PrystParser::NEW)
            | (1ULL << PrystParser::THIS)
            | (1ULL << PrystParser::NULL_LIT)
            | (1ULL << PrystParser::MINUS)
            | (1ULL << PrystParser::NOT)
            | (1ULL << PrystParser::INC)
            | (1ULL << PrystParser::DEC)
            | (1ULL << PrystParser::LPAREN)
            | (1ULL << PrystParser::LBRACE)
            | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
            | (1ULL << (PrystParser::STRING - 68))
            | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
            setState(716);
            arguments();
          }
          setState(719);
          match(PrystParser::RPAREN);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<ArrayAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(720);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(725); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(721);
                    match(PrystParser::LBRACK);
                    setState(722);
                    expression(0);
                    setState(723);
                    match(PrystParser::RBRACK);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(727); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<NonNullAssertExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(729);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(730);
          match(PrystParser::NOT);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<PostfixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(731);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(732);
          dynamic_cast<PostfixExprContext *>(_localctx)->postfix = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PrystParser::INC

          || _la == PrystParser::DEC)) {
            dynamic_cast<PostfixExprContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        } 
      }
      setState(737);
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

antlrcpp::Any PrystParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::PrimaryContext* PrystParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 86, PrystParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(748);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PrystParser::THIS: {
        enterOuterAlt(_localctx, 1);
        setState(738);
        match(PrystParser::THIS);
        break;
      }

      case PrystParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(739);
        match(PrystParser::IDENTIFIER);
        break;
      }

      case PrystParser::INTEGER: {
        enterOuterAlt(_localctx, 3);
        setState(740);
        match(PrystParser::INTEGER);
        break;
      }

      case PrystParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(741);
        match(PrystParser::FLOAT_LITERAL);
        break;
      }

      case PrystParser::STRING: {
        enterOuterAlt(_localctx, 5);
        setState(742);
        match(PrystParser::STRING);
        break;
      }

      case PrystParser::STRING_START: {
        enterOuterAlt(_localctx, 6);
        setState(743);
        stringInterpolation();
        break;
      }

      case PrystParser::BOOLEAN: {
        enterOuterAlt(_localctx, 7);
        setState(744);
        match(PrystParser::BOOLEAN);
        break;
      }

      case PrystParser::NULL_LIT: {
        enterOuterAlt(_localctx, 8);
        setState(745);
        match(PrystParser::NULL_LIT);
        break;
      }

      case PrystParser::LBRACK: {
        enterOuterAlt(_localctx, 9);
        setState(746);
        arrayLiteral();
        break;
      }

      case PrystParser::LBRACE: {
        enterOuterAlt(_localctx, 10);
        setState(747);
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

antlrcpp::Any PrystParser::StringInterpolationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitStringInterpolation(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::StringInterpolationContext* PrystParser::stringInterpolation() {
  StringInterpolationContext *_localctx = _tracker.createInstance<StringInterpolationContext>(_ctx, getState());
  enterRule(_localctx, 88, PrystParser::RuleStringInterpolation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    match(PrystParser::STRING_START);
    setState(751);
    expression(0);
    setState(756);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::STRING_MIDDLE) {
      setState(752);
      match(PrystParser::STRING_MIDDLE);
      setState(753);
      expression(0);
      setState(758);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(759);
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

antlrcpp::Any PrystParser::ChainedCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitChainedCall(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ChainedCallContext* PrystParser::chainedCall() {
  ChainedCallContext *_localctx = _tracker.createInstance<ChainedCallContext>(_ctx, getState());
  enterRule(_localctx, 90, PrystParser::RuleChainedCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(781);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(761);
      match(PrystParser::DOT);
      setState(762);
      match(PrystParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(763);
      match(PrystParser::DOT);
      setState(764);
      match(PrystParser::IDENTIFIER);
      setState(765);
      match(PrystParser::LPAREN);
      setState(767);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
        | (1ULL << PrystParser::FLOAT_LITERAL)
        | (1ULL << PrystParser::BOOLEAN)
        | (1ULL << PrystParser::NEW)
        | (1ULL << PrystParser::THIS)
        | (1ULL << PrystParser::NULL_LIT)
        | (1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC)
        | (1ULL << PrystParser::LPAREN)
        | (1ULL << PrystParser::LBRACE)
        | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
        | (1ULL << (PrystParser::STRING - 68))
        | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
        setState(766);
        arguments();
      }
      setState(769);
      match(PrystParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(770);
      match(PrystParser::QUESTION_MARK);
      setState(771);
      match(PrystParser::DOT);
      setState(772);
      match(PrystParser::IDENTIFIER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(773);
      match(PrystParser::QUESTION_MARK);
      setState(774);
      match(PrystParser::DOT);
      setState(775);
      match(PrystParser::IDENTIFIER);
      setState(776);
      match(PrystParser::LPAREN);
      setState(778);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::INTEGER)
        | (1ULL << PrystParser::FLOAT_LITERAL)
        | (1ULL << PrystParser::BOOLEAN)
        | (1ULL << PrystParser::NEW)
        | (1ULL << PrystParser::THIS)
        | (1ULL << PrystParser::NULL_LIT)
        | (1ULL << PrystParser::MINUS)
        | (1ULL << PrystParser::NOT)
        | (1ULL << PrystParser::INC)
        | (1ULL << PrystParser::DEC)
        | (1ULL << PrystParser::LPAREN)
        | (1ULL << PrystParser::LBRACE)
        | (1ULL << PrystParser::LBRACK))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (PrystParser::IDENTIFIER - 68))
        | (1ULL << (PrystParser::STRING - 68))
        | (1ULL << (PrystParser::STRING_START - 68)))) != 0)) {
        setState(777);
        arguments();
      }
      setState(780);
      match(PrystParser::RPAREN);
      break;
    }

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

antlrcpp::Any PrystParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::StringLiteralContext* PrystParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 92, PrystParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(783);
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

antlrcpp::Any PrystParser::LambdaParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitLambdaParams(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::LambdaParamsContext* PrystParser::lambdaParams() {
  LambdaParamsContext *_localctx = _tracker.createInstance<LambdaParamsContext>(_ctx, getState());
  enterRule(_localctx, 94, PrystParser::RuleLambdaParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(785);
    type();
    setState(786);
    match(PrystParser::IDENTIFIER);
    setState(793);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(787);
      match(PrystParser::COMMA);
      setState(788);
      type();
      setState(789);
      match(PrystParser::IDENTIFIER);
      setState(795);
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

antlrcpp::Any PrystParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ArgumentsContext* PrystParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 96, PrystParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(796);
    expression(0);
    setState(801);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PrystParser::COMMA) {
      setState(797);
      match(PrystParser::COMMA);
      setState(798);
      expression(0);
      setState(803);
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

antlrcpp::Any PrystParser::NonEmptyArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::EmptyArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitEmptyArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}
PrystParser::ArrayLiteralContext* PrystParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 98, PrystParser::RuleArrayLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(820);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ArrayLiteralContext *>(_tracker.createInstance<PrystParser::EmptyArrayLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(804);
      match(PrystParser::LBRACK);
      setState(805);
      match(PrystParser::RBRACK);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ArrayLiteralContext *>(_tracker.createInstance<PrystParser::NonEmptyArrayLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(806);
      match(PrystParser::LBRACK);
      setState(807);
      expression(0);
      setState(812);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(808);
          match(PrystParser::COMMA);
          setState(809);
          expression(0); 
        }
        setState(814);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      }
      setState(816);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::COMMA) {
        setState(815);
        match(PrystParser::COMMA);
      }
      setState(818);
      match(PrystParser::RBRACK);
      break;
    }

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

antlrcpp::Any PrystParser::NonEmptyMapLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any PrystParser::EmptyMapLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitEmptyMapLiteral(this);
  else
    return visitor->visitChildren(this);
}
PrystParser::MapLiteralContext* PrystParser::mapLiteral() {
  MapLiteralContext *_localctx = _tracker.createInstance<MapLiteralContext>(_ctx, getState());
  enterRule(_localctx, 100, PrystParser::RuleMapLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(838);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<MapLiteralContext *>(_tracker.createInstance<PrystParser::EmptyMapLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(822);
      match(PrystParser::LBRACE);
      setState(823);
      match(PrystParser::RBRACE);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<MapLiteralContext *>(_tracker.createInstance<PrystParser::NonEmptyMapLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(824);
      match(PrystParser::LBRACE);
      setState(825);
      mapEntry();
      setState(830);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(826);
          match(PrystParser::COMMA);
          setState(827);
          mapEntry(); 
        }
        setState(832);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      }
      setState(834);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == PrystParser::COMMA) {
        setState(833);
        match(PrystParser::COMMA);
      }
      setState(836);
      match(PrystParser::RBRACE);
      break;
    }

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

antlrcpp::Any PrystParser::MapEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMapEntry(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::MapEntryContext* PrystParser::mapEntry() {
  MapEntryContext *_localctx = _tracker.createInstance<MapEntryContext>(_ctx, getState());
  enterRule(_localctx, 102, PrystParser::RuleMapEntry);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(840);
    _la = _input->LA(1);
    if (!(_la == PrystParser::INTEGER || _la == PrystParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(841);
    match(PrystParser::COLON);
    setState(842);
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

antlrcpp::Any PrystParser::MapKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitMapKey(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::MapKeyContext* PrystParser::mapKey() {
  MapKeyContext *_localctx = _tracker.createInstance<MapKeyContext>(_ctx, getState());
  enterRule(_localctx, 104, PrystParser::RuleMapKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(844);
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

antlrcpp::Any PrystParser::ErrorMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PrystParserVisitor*>(visitor))
    return parserVisitor->visitErrorMember(this);
  else
    return visitor->visitChildren(this);
}

PrystParser::ErrorMemberContext* PrystParser::errorMember() {
  ErrorMemberContext *_localctx = _tracker.createInstance<ErrorMemberContext>(_ctx, getState());
  enterRule(_localctx, 106, PrystParser::RuleErrorMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(859);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(846);
      type();
      setState(847);
      match(PrystParser::IDENTIFIER);
      setState(848);
      match(PrystParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(850);
      returnType();
      setState(851);
      match(PrystParser::IDENTIFIER);
      setState(852);
      match(PrystParser::LPAREN);
      setState(854);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << PrystParser::INT)
        | (1ULL << PrystParser::FLOAT)
        | (1ULL << PrystParser::BOOL)
        | (1ULL << PrystParser::STR)
        | (1ULL << PrystParser::VOID)
        | (1ULL << PrystParser::FN)
        | (1ULL << PrystParser::MAP))) != 0) || _la == PrystParser::IDENTIFIER) {
        setState(853);
        parameters();
      }
      setState(856);
      match(PrystParser::RPAREN);
      setState(857);
      block();
      break;
    }

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
    case 37: return arrayTypeSempred(dynamic_cast<ArrayTypeContext *>(context), predicateIndex);
    case 42: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

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
    case 10: return precpred(_ctx, 20);
    case 11: return precpred(_ctx, 19);
    case 12: return precpred(_ctx, 18);
    case 13: return precpred(_ctx, 17);
    case 14: return precpred(_ctx, 16);
    case 15: return precpred(_ctx, 14);
    case 16: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PrystParser::_decisionToDFA;
atn::PredictionContextCache PrystParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PrystParser::_atn;
std::vector<uint16_t> PrystParser::_serializedATN;

std::vector<std::string> PrystParser::_ruleNames = {
  "program", "moduleDecl", "importDecl", "importPath", "declaration", "errorDecl", 
  "functionDecl", "parameters", "parameter", "defaultParam", "block", "statement", 
  "varDecl", "identifierList", "assignment", "ifStmt", "whileStmt", "forStmt", 
  "returnStmt", "tryStmt", "breakStmt", "continueStmt", "expressionStmt", 
  "classDecl", "interfaceDecl", "interfaceMember", "genericParams", "genericArgs", 
  "classMember", "overloadParams", "constructorDecl", "constructorBlock", 
  "type", "qualifiedType", "returnType", "nullableType", "basicType", "arrayType", 
  "mapType", "keyType", "functionType", "typeList", "expression", "primary", 
  "stringInterpolation", "chainedCall", "stringLiteral", "lambdaParams", 
  "arguments", "arrayLiteral", "mapLiteral", "mapEntry", "mapKey", "errorMember"
};

std::vector<std::string> PrystParser::_literalNames = {
  "", "", "", "", "'int'", "'float'", "'bool'", "'str'", "'void'", "'fn'", 
  "'let'", "'const'", "'const!'", "'class'", "'interface'", "'extends'", 
  "'implements'", "'return'", "'if'", "'else'", "'while'", "'for'", "'in'", 
  "'import'", "'module'", "'try'", "'catch'", "'finally'", "'as'", "'break'", 
  "'continue'", "'new'", "'map'", "'from'", "'this'", "'null'", "'error'", 
  "'??'", "", "", "", "", "'%'", "'='", "'=='", "'!='", "'<'", "'>'", "'<='", 
  "'>='", "'&&'", "'||'", "'!'", "'?'", "':'", "'->'", "'++'", "'--'", "", 
  "", "'{'", "'}'", "'['", "']'", "';'", "", "", "'::'"
};

std::vector<std::string> PrystParser::_symbolicNames = {
  "", "INTEGER", "FLOAT_LITERAL", "BOOLEAN", "INT", "FLOAT", "BOOL", "STR", 
  "VOID", "FN", "LET", "CONST", "CONST_EXPR", "CLASS", "INTERFACE", "EXTENDS", 
  "IMPLEMENTS", "RETURN", "IF", "ELSE", "WHILE", "FOR", "IN", "IMPORT", 
  "MODULE", "TRY", "CATCH", "FINALLY", "AS", "BREAK", "CONTINUE", "NEW", 
  "MAP", "FROM", "THIS", "NULL_LIT", "ERROR", "NULL_COALESCE", "PLUS", "MINUS", 
  "STAR", "SLASH", "PERCENT", "ASSIGN", "EQ", "NEQ", "LT", "GT", "LE", "GE", 
  "AND", "OR", "NOT", "QUESTION_MARK", "COLON", "ARROW", "INC", "DEC", "LPAREN", 
  "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMICOLON", "COMMA", 
  "DOT", "DOUBLE_COLON", "IDENTIFIER", "STRING", "STRING_START", "STRING_MIDDLE", 
  "STRING_END", "WS", "COMMENT", "BLOCK_COMMENT", "INVALID_CHAR", "INVALID_IDENTIFIER", 
  "INTERP_WS"
};

dfa::Vocabulary PrystParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PrystParser::_tokenNames;

PrystParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x50, 0x360, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x3, 0x2, 0x7, 0x2, 0x70, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x73, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x76, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x79, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x7c, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x7f, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x87, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x8a, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x9e, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xa1, 0xb, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0xa5, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0xaa, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xad, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb5, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xbb, 0xa, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xc0, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xc3, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xca, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xce, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xd5, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xda, 0xa, 0x9, 0x7, 0x9, 0xdc, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0xdf, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0xeb, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xee, 0xb, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xfd, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x117, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x11b, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x120, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x123, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x131, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x13d, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x14a, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0x14d, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x151, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x155, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x159, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x166, 
    0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x169, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x16d, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0x17b, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x180, 0xa, 0x19, 0x5, 0x19, 0x182, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x187, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x18c, 0xa, 0x19, 0x7, 0x19, 0x18e, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x191, 0xb, 0x19, 0x5, 0x19, 0x193, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x198, 0xa, 0x19, 
    0xc, 0x19, 0xe, 0x19, 0x19b, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1a2, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x1a7, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x1ac, 0xa, 0x1a, 0x7, 0x1a, 0x1ae, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x1b1, 0xb, 0x1a, 0x5, 0x1a, 0x1b3, 0xa, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x1b7, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x1ba, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x5, 0x1b, 0x1c2, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1cb, 0xa, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x1d1, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x1d4, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x1dc, 0xa, 0x1d, 0xc, 0x1d, 
    0xe, 0x1d, 0x1df, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 
    0x1e4, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1ed, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x5, 0x1e, 0x1f1, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1fa, 0xa, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1ff, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x7, 0x1f, 0x204, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x207, 
    0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x20c, 0xa, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 
    0x21a, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x21d, 0xb, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x224, 0xa, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x22a, 0xa, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x22f, 0xa, 0x23, 0xc, 0x23, 
    0xe, 0x23, 0x232, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x236, 
    0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 
    0x25, 0x23d, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x7, 0x27, 0x24b, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
    0x24e, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x25f, 0xa, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x266, 
    0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x269, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x270, 0xa, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x5, 0x2c, 0x274, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x27b, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x28b, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x5, 0x2c, 0x293, 0xa, 0x2c, 0x5, 0x2c, 0x295, 0xa, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x2c0, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x5, 0x2c, 0x2c4, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x2cc, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x5, 0x2c, 0x2d0, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x6, 0x2c, 0x2d8, 0xa, 0x2c, 0xd, 0x2c, 0xe, 0x2c, 
    0x2d9, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x2e0, 
    0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x2e3, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x2ef, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x2f5, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
    0x2f8, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x302, 0xa, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x30d, 0xa, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
    0x310, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x31a, 0xa, 0x31, 0xc, 0x31, 
    0xe, 0x31, 0x31d, 0xb, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 
    0x322, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x325, 0xb, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 0x32d, 
    0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x330, 0xb, 0x33, 0x3, 0x33, 0x5, 0x33, 
    0x333, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x337, 0xa, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 
    0x34, 0x33f, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x342, 0xb, 0x34, 0x3, 
    0x34, 0x5, 0x34, 0x345, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 
    0x349, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x359, 0xa, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x35e, 0xa, 0x37, 0x3, 0x37, 0x2, 0x4, 
    0x4c, 0x56, 0x38, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
    0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 
    0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x2, 0xc, 0x3, 0x2, 
    0xd, 0xe, 0x4, 0x2, 0x6, 0xa, 0x46, 0x46, 0x4, 0x2, 0x6, 0x6, 0x9, 0x9, 
    0x5, 0x2, 0x29, 0x29, 0x36, 0x36, 0x3a, 0x3b, 0x3, 0x2, 0x2a, 0x2c, 
    0x3, 0x2, 0x28, 0x29, 0x3, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2e, 0x2f, 0x3, 
    0x2, 0x3a, 0x3b, 0x4, 0x2, 0x3, 0x3, 0x47, 0x47, 0x2, 0x3bd, 0x2, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x82, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0x12, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x14, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x18, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x124, 0x3, 0x2, 0x2, 0x2, 0x20, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x132, 0x3, 0x2, 0x2, 0x2, 0x24, 0x154, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x156, 0x3, 0x2, 0x2, 0x2, 0x28, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x171, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x177, 0x3, 0x2, 0x2, 0x2, 0x32, 0x19e, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1cc, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x200, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x210, 0x3, 0x2, 0x2, 0x2, 0x42, 0x229, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x22b, 0x3, 0x2, 0x2, 0x2, 0x46, 0x235, 0x3, 0x2, 0x2, 0x2, 0x48, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x240, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x242, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x256, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x258, 0x3, 0x2, 0x2, 0x2, 0x54, 0x262, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x294, 0x3, 0x2, 0x2, 0x2, 0x58, 0x2ee, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x311, 0x3, 0x2, 0x2, 0x2, 0x60, 0x313, 0x3, 0x2, 0x2, 0x2, 0x62, 0x31e, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x336, 0x3, 0x2, 0x2, 0x2, 0x66, 0x348, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x34e, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x5, 0x4, 0x3, 
    0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 
    0x5, 0x6, 0x4, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7c, 0x5, 0xa, 0x6, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x2, 0x2, 0x3, 0x81, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0x1a, 0x2, 0x2, 0x83, 0x84, 0x5, 0x8, 
    0x5, 0x2, 0x84, 0x88, 0x7, 0x3e, 0x2, 0x2, 0x85, 0x87, 0x5, 0xa, 0x6, 
    0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0x7, 0x3f, 0x2, 0x2, 0x8c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 
    0x19, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x8, 0x5, 0x2, 0x8f, 0x90, 0x7, 0x42, 
    0x2, 0x2, 0x90, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x19, 0x2, 
    0x2, 0x92, 0x93, 0x5, 0x8, 0x5, 0x2, 0x93, 0x94, 0x7, 0x1e, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0x46, 0x2, 0x2, 0x95, 0x96, 0x7, 0x42, 0x2, 0x2, 0x96, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x23, 0x2, 0x2, 0x98, 0x99, 
    0x5, 0x8, 0x5, 0x2, 0x99, 0x9a, 0x7, 0x19, 0x2, 0x2, 0x9a, 0x9f, 0x7, 
    0x46, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x43, 0x2, 0x2, 0x9c, 0x9e, 0x7, 0x46, 
    0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa3, 0x7, 0x42, 0x2, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0x91, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0x7, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xab, 0x7, 0x46, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x45, 0x2, 0x2, 0xa8, 0xaa, 0x7, 0x46, 0x2, 
    0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb5, 
    0x5, 0xe, 0x8, 0x2, 0xaf, 0xb5, 0x5, 0x30, 0x19, 0x2, 0xb0, 0xb5, 0x5, 
    0x32, 0x1a, 0x2, 0xb1, 0xb5, 0x5, 0xc, 0x7, 0x2, 0xb2, 0xb5, 0x5, 0x1a, 
    0xe, 0x2, 0xb3, 0xb5, 0x5, 0x28, 0x15, 0x2, 0xb4, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x7, 0x26, 0x2, 0x2, 0xb7, 0xba, 0x5, 0x44, 0x23, 0x2, 0xb8, 0xb9, 0x7, 
    0x11, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x44, 0x23, 0x2, 0xba, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xc1, 0x7, 0x3e, 0x2, 0x2, 0xbd, 0xc0, 0x5, 0x3e, 0x20, 0x2, 
    0xbe, 0xc0, 0x5, 0x6c, 0x37, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x3f, 
    0x2, 0x2, 0xc5, 0xd, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x46, 0x24, 
    0x2, 0xc7, 0xc9, 0x7, 0x46, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x36, 0x1c, 0x2, 
    0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x3c, 0x2, 0x2, 0xcc, 0xce, 
    0x5, 0x10, 0x9, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x3d, 
    0x2, 0x2, 0xd0, 0xd1, 0x5, 0x16, 0xc, 0x2, 0xd1, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd5, 0x5, 0x12, 0xa, 0x2, 0xd3, 0xd5, 0x5, 0x14, 0xb, 0x2, 
    0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd9, 0x7, 0x43, 0x2, 0x2, 0xd7, 0xda, 
    0x5, 0x12, 0xa, 0x2, 0xd8, 0xda, 0x5, 0x14, 0xb, 0x2, 0xd9, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0x11, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0x5, 0x42, 0x22, 0x2, 0xe1, 0xe2, 0x7, 0x46, 0x2, 0x2, 0xe2, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x42, 0x22, 0x2, 0xe4, 0xe5, 0x7, 
    0x46, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x2d, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x56, 
    0x2c, 0x2, 0xe7, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xec, 0x7, 0x3e, 0x2, 
    0x2, 0xe9, 0xeb, 0x5, 0x18, 0xd, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 
    0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x3f, 0x2, 0x2, 0xf0, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xfd, 0x5, 0x16, 0xc, 0x2, 0xf2, 0xfd, 0x5, 0x1a, 
    0xe, 0x2, 0xf3, 0xfd, 0x5, 0x1e, 0x10, 0x2, 0xf4, 0xfd, 0x5, 0x2e, 0x18, 
    0x2, 0xf5, 0xfd, 0x5, 0x20, 0x11, 0x2, 0xf6, 0xfd, 0x5, 0x22, 0x12, 
    0x2, 0xf7, 0xfd, 0x5, 0x24, 0x13, 0x2, 0xf8, 0xfd, 0x5, 0x26, 0x14, 
    0x2, 0xf9, 0xfd, 0x5, 0x28, 0x15, 0x2, 0xfa, 0xfd, 0x5, 0x2a, 0x16, 
    0x2, 0xfb, 0xfd, 0x5, 0x2c, 0x17, 0x2, 0xfc, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xff, 0x7, 0xd, 0x2, 0x2, 0xff, 0x100, 0x5, 0x42, 0x22, 0x2, 
    0x100, 0x101, 0x5, 0x1c, 0xf, 0x2, 0x101, 0x102, 0x7, 0x2d, 0x2, 0x2, 
    0x102, 0x103, 0x5, 0x56, 0x2c, 0x2, 0x103, 0x104, 0x7, 0x42, 0x2, 0x2, 
    0x104, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0xe, 0x2, 0x2, 
    0x106, 0x107, 0x5, 0x42, 0x22, 0x2, 0x107, 0x108, 0x5, 0x1c, 0xf, 0x2, 
    0x108, 0x109, 0x7, 0x2d, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x56, 0x2c, 0x2, 
    0x10a, 0x10b, 0x7, 0x42, 0x2, 0x2, 0x10b, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10d, 0x7, 0xc, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x1c, 0xf, 0x2, 
    0x10e, 0x10f, 0x7, 0x2d, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x56, 0x2c, 0x2, 
    0x110, 0x111, 0x7, 0x42, 0x2, 0x2, 0x111, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x113, 0x5, 0x42, 0x22, 0x2, 0x113, 0x116, 0x5, 0x1c, 0xf, 0x2, 
    0x114, 0x115, 0x7, 0x2d, 0x2, 0x2, 0x115, 0x117, 0x5, 0x56, 0x2c, 0x2, 
    0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 0x42, 0x2, 0x2, 
    0x119, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x121, 
    0x7, 0x46, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x43, 0x2, 0x2, 0x11e, 0x120, 
    0x7, 0x46, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x56, 0x2c, 0x2, 0x125, 0x126, 0x7, 
    0x2d, 0x2, 0x2, 0x126, 0x127, 0x5, 0x56, 0x2c, 0x2, 0x127, 0x128, 0x7, 
    0x42, 0x2, 0x2, 0x128, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 
    0x14, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x3c, 0x2, 0x2, 0x12b, 0x12c, 0x5, 
    0x56, 0x2c, 0x2, 0x12c, 0x12d, 0x7, 0x3d, 0x2, 0x2, 0x12d, 0x130, 0x5, 
    0x18, 0xd, 0x2, 0x12e, 0x12f, 0x7, 0x15, 0x2, 0x2, 0x12f, 0x131, 0x5, 
    0x18, 0xd, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x21, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x7, 0x16, 
    0x2, 0x2, 0x133, 0x134, 0x7, 0x3c, 0x2, 0x2, 0x134, 0x135, 0x5, 0x56, 
    0x2c, 0x2, 0x135, 0x136, 0x7, 0x3d, 0x2, 0x2, 0x136, 0x137, 0x5, 0x18, 
    0xd, 0x2, 0x137, 0x23, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x17, 
    0x2, 0x2, 0x139, 0x13c, 0x7, 0x3c, 0x2, 0x2, 0x13a, 0x13d, 0x7, 0xc, 
    0x2, 0x2, 0x13b, 0x13d, 0x5, 0x42, 0x22, 0x2, 0x13c, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x13f, 0x7, 0x46, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x18, 
    0x2, 0x2, 0x140, 0x141, 0x5, 0x56, 0x2c, 0x2, 0x141, 0x142, 0x7, 0x3d, 
    0x2, 0x2, 0x142, 0x143, 0x5, 0x18, 0xd, 0x2, 0x143, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x145, 0x7, 0x17, 0x2, 0x2, 0x145, 0x149, 0x7, 0x3c, 
    0x2, 0x2, 0x146, 0x14a, 0x5, 0x1a, 0xe, 0x2, 0x147, 0x14a, 0x5, 0x2e, 
    0x18, 0x2, 0x148, 0x14a, 0x7, 0x42, 0x2, 0x2, 0x149, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14d, 0x5, 0x56, 
    0x2c, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x150, 0x7, 0x42, 
    0x2, 0x2, 0x14f, 0x151, 0x5, 0x56, 0x2c, 0x2, 0x150, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x153, 0x7, 0x3d, 0x2, 0x2, 0x153, 0x155, 0x5, 0x18, 
    0xd, 0x2, 0x154, 0x138, 0x3, 0x2, 0x2, 0x2, 0x154, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x25, 0x3, 0x2, 0x2, 0x2, 0x156, 0x158, 0x7, 0x13, 
    0x2, 0x2, 0x157, 0x159, 0x5, 0x56, 0x2c, 0x2, 0x158, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15b, 0x7, 0x42, 0x2, 0x2, 0x15b, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15d, 0x7, 0x1b, 0x2, 0x2, 0x15d, 0x167, 0x5, 0x16, 
    0xc, 0x2, 0x15e, 0x15f, 0x7, 0x1c, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x3c, 
    0x2, 0x2, 0x160, 0x161, 0x5, 0x42, 0x22, 0x2, 0x161, 0x162, 0x7, 0x46, 
    0x2, 0x2, 0x162, 0x163, 0x7, 0x3d, 0x2, 0x2, 0x163, 0x164, 0x5, 0x16, 
    0xc, 0x2, 0x164, 0x166, 0x3, 0x2, 0x2, 0x2, 0x165, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x169, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x1d, 
    0x2, 0x2, 0x16b, 0x16d, 0x5, 0x16, 0xc, 0x2, 0x16c, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16f, 0x7, 0x1f, 0x2, 0x2, 0x16f, 0x170, 0x7, 0x42, 0x2, 
    0x2, 0x170, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 0x20, 0x2, 
    0x2, 0x172, 0x173, 0x7, 0x42, 0x2, 0x2, 0x173, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x175, 0x5, 0x56, 0x2c, 0x2, 0x175, 0x176, 0x7, 0x42, 0x2, 
    0x2, 0x176, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0xf, 0x2, 0x2, 
    0x178, 0x17a, 0x7, 0x46, 0x2, 0x2, 0x179, 0x17b, 0x5, 0x36, 0x1c, 0x2, 
    0x17a, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x17b, 0x181, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x11, 0x2, 0x2, 
    0x17d, 0x17f, 0x7, 0x46, 0x2, 0x2, 0x17e, 0x180, 0x5, 0x38, 0x1d, 0x2, 
    0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x182, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17c, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x184, 0x7, 0x12, 0x2, 0x2, 0x184, 0x186, 0x7, 0x46, 0x2, 0x2, 
    0x185, 0x187, 0x5, 0x38, 0x1d, 0x2, 0x186, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x188, 0x189, 0x7, 0x43, 0x2, 0x2, 0x189, 0x18b, 0x7, 0x46, 0x2, 0x2, 
    0x18a, 0x18c, 0x5, 0x38, 0x1d, 0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18e, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x190, 0x193, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x183, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x199, 0x7, 0x3e, 0x2, 0x2, 
    0x195, 0x198, 0x5, 0x3e, 0x20, 0x2, 0x196, 0x198, 0x5, 0x3a, 0x1e, 0x2, 
    0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x3f, 0x2, 0x2, 
    0x19d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x10, 0x2, 0x2, 
    0x19f, 0x1a1, 0x7, 0x46, 0x2, 0x2, 0x1a0, 0x1a2, 0x5, 0x36, 0x1c, 0x2, 
    0x1a1, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x11, 0x2, 0x2, 
    0x1a4, 0x1a6, 0x7, 0x46, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x38, 0x1d, 0x2, 
    0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x43, 0x2, 0x2, 
    0x1a9, 0x1ab, 0x7, 0x46, 0x2, 0x2, 0x1aa, 0x1ac, 0x5, 0x38, 0x1d, 0x2, 
    0x1ab, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b8, 0x7, 0x3e, 0x2, 0x2, 0x1b5, 0x1b7, 0x5, 0x34, 0x1b, 0x2, 
    0x1b6, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1bb, 0x1bc, 0x7, 0x3f, 0x2, 0x2, 0x1bc, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x1bd, 0x1be, 0x5, 0x46, 0x24, 0x2, 0x1be, 0x1bf, 0x7, 0x46, 0x2, 0x2, 
    0x1bf, 0x1c1, 0x7, 0x3c, 0x2, 0x2, 0x1c0, 0x1c2, 0x5, 0x10, 0x9, 0x2, 
    0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x3d, 0x2, 0x2, 
    0x1c4, 0x1c5, 0x7, 0x42, 0x2, 0x2, 0x1c5, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1c6, 0x1c7, 0x5, 0x46, 0x24, 0x2, 0x1c7, 0x1c8, 0x7, 0x46, 0x2, 0x2, 
    0x1c8, 0x1c9, 0x7, 0x42, 0x2, 0x2, 0x1c9, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1ca, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x30, 0x2, 0x2, 
    0x1cd, 0x1d2, 0x7, 0x46, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x43, 0x2, 0x2, 
    0x1cf, 0x1d1, 0x7, 0x46, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0x31, 0x2, 0x2, 
    0x1d6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x30, 0x2, 0x2, 
    0x1d8, 0x1dd, 0x5, 0x42, 0x22, 0x2, 0x1d9, 0x1da, 0x7, 0x43, 0x2, 0x2, 
    0x1da, 0x1dc, 0x5, 0x42, 0x22, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x31, 0x2, 0x2, 
    0x1e1, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e4, 0x9, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x42, 0x22, 0x2, 0x1e6, 
    0x1e7, 0x7, 0x46, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x42, 0x2, 0x2, 0x1e8, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x46, 0x24, 0x2, 0x1ea, 
    0x1ec, 0x7, 0x46, 0x2, 0x2, 0x1eb, 0x1ed, 0x5, 0x36, 0x1c, 0x2, 0x1ec, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
    0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 0x7, 0x3c, 0x2, 0x2, 0x1ef, 
    0x1f1, 0x5, 0x10, 0x9, 0x2, 0x1f0, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f3, 0x7, 0x3d, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x16, 0xc, 0x2, 0x1f4, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x5, 0x46, 0x24, 0x2, 0x1f6, 
    0x1f7, 0x7, 0x46, 0x2, 0x2, 0x1f7, 0x1f9, 0x7, 0x3c, 0x2, 0x2, 0x1f8, 
    0x1fa, 0x5, 0x3c, 0x1f, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
    0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
    0x1fc, 0x7, 0x3d, 0x2, 0x2, 0x1fc, 0x1fd, 0x5, 0x16, 0xc, 0x2, 0x1fd, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x200, 0x205, 0x5, 0x12, 0xa, 0x2, 0x201, 
    0x202, 0x7, 0x43, 0x2, 0x2, 0x202, 0x204, 0x5, 0x12, 0xa, 0x2, 0x203, 
    0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 
    0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 
    0x7, 0x46, 0x2, 0x2, 0x209, 0x20b, 0x7, 0x3c, 0x2, 0x2, 0x20a, 0x20c, 
    0x5, 0x10, 0x9, 0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 
    0x7, 0x3d, 0x2, 0x2, 0x20e, 0x20f, 0x5, 0x40, 0x21, 0x2, 0x20f, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x210, 0x21b, 0x7, 0x3e, 0x2, 0x2, 0x211, 0x212, 
    0x7, 0x24, 0x2, 0x2, 0x212, 0x213, 0x7, 0x44, 0x2, 0x2, 0x213, 0x214, 
    0x7, 0x46, 0x2, 0x2, 0x214, 0x215, 0x7, 0x2d, 0x2, 0x2, 0x215, 0x216, 
    0x5, 0x56, 0x2c, 0x2, 0x216, 0x217, 0x7, 0x42, 0x2, 0x2, 0x217, 0x21a, 
    0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 0x5, 0x18, 0xd, 0x2, 0x219, 0x211, 
    0x3, 0x2, 0x2, 0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21d, 
    0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 
    0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21b, 
    0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x3f, 0x2, 0x2, 0x21f, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x220, 0x22a, 0x5, 0x48, 0x25, 0x2, 0x221, 0x223, 
    0x5, 0x44, 0x23, 0x2, 0x222, 0x224, 0x5, 0x38, 0x1d, 0x2, 0x223, 0x222, 
    0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x22a, 
    0x3, 0x2, 0x2, 0x2, 0x225, 0x22a, 0x5, 0x52, 0x2a, 0x2, 0x226, 0x22a, 
    0x5, 0x4c, 0x27, 0x2, 0x227, 0x22a, 0x5, 0x4e, 0x28, 0x2, 0x228, 0x22a, 
    0x5, 0x4a, 0x26, 0x2, 0x229, 0x220, 0x3, 0x2, 0x2, 0x2, 0x229, 0x221, 
    0x3, 0x2, 0x2, 0x2, 0x229, 0x225, 0x3, 0x2, 0x2, 0x2, 0x229, 0x226, 
    0x3, 0x2, 0x2, 0x2, 0x229, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 0x228, 
    0x3, 0x2, 0x2, 0x2, 0x22a, 0x43, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x230, 0x7, 
    0x46, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x45, 0x2, 0x2, 0x22d, 0x22f, 0x7, 
    0x46, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 
    0x2, 0x2, 0x2, 0x231, 0x45, 0x3, 0x2, 0x2, 0x2, 0x232, 0x230, 0x3, 0x2, 
    0x2, 0x2, 0x233, 0x236, 0x5, 0x42, 0x22, 0x2, 0x234, 0x236, 0x7, 0xa, 
    0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x234, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x47, 0x3, 0x2, 0x2, 0x2, 0x237, 0x23d, 0x5, 0x44, 
    0x23, 0x2, 0x238, 0x23d, 0x5, 0x52, 0x2a, 0x2, 0x239, 0x23d, 0x5, 0x4c, 
    0x27, 0x2, 0x23a, 0x23d, 0x5, 0x4e, 0x28, 0x2, 0x23b, 0x23d, 0x5, 0x4a, 
    0x26, 0x2, 0x23c, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x23e, 0x23f, 0x7, 0x37, 0x2, 0x2, 0x23f, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x240, 0x241, 0x9, 0x3, 0x2, 0x2, 0x241, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x243, 0x8, 0x27, 0x1, 0x2, 0x243, 0x244, 0x5, 0x4a, 0x26, 
    0x2, 0x244, 0x245, 0x7, 0x40, 0x2, 0x2, 0x245, 0x246, 0x7, 0x41, 0x2, 
    0x2, 0x246, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0xc, 0x3, 0x2, 
    0x2, 0x248, 0x249, 0x7, 0x40, 0x2, 0x2, 0x249, 0x24b, 0x7, 0x41, 0x2, 
    0x2, 0x24a, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 
    0x2, 0x24d, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x24f, 0x250, 0x7, 0x22, 0x2, 0x2, 0x250, 0x251, 0x7, 0x30, 0x2, 0x2, 
    0x251, 0x252, 0x5, 0x50, 0x29, 0x2, 0x252, 0x253, 0x7, 0x43, 0x2, 0x2, 
    0x253, 0x254, 0x5, 0x42, 0x22, 0x2, 0x254, 0x255, 0x7, 0x31, 0x2, 0x2, 
    0x255, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x9, 0x4, 0x2, 0x2, 0x257, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x7, 0xb, 0x2, 0x2, 0x259, 0x25a, 
    0x7, 0x30, 0x2, 0x2, 0x25a, 0x25b, 0x5, 0x46, 0x24, 0x2, 0x25b, 0x25c, 
    0x7, 0x31, 0x2, 0x2, 0x25c, 0x25e, 0x7, 0x3c, 0x2, 0x2, 0x25d, 0x25f, 
    0x5, 0x54, 0x2b, 0x2, 0x25e, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 
    0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 
    0x7, 0x3d, 0x2, 0x2, 0x261, 0x53, 0x3, 0x2, 0x2, 0x2, 0x262, 0x267, 
    0x5, 0x42, 0x22, 0x2, 0x263, 0x264, 0x7, 0x43, 0x2, 0x2, 0x264, 0x266, 
    0x5, 0x42, 0x22, 0x2, 0x265, 0x263, 0x3, 0x2, 0x2, 0x2, 0x266, 0x269, 
    0x3, 0x2, 0x2, 0x2, 0x267, 0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 
    0x3, 0x2, 0x2, 0x2, 0x268, 0x55, 0x3, 0x2, 0x2, 0x2, 0x269, 0x267, 0x3, 
    0x2, 0x2, 0x2, 0x26a, 0x26b, 0x8, 0x2c, 0x1, 0x2, 0x26b, 0x295, 0x5, 
    0x58, 0x2d, 0x2, 0x26c, 0x26d, 0x7, 0x21, 0x2, 0x2, 0x26d, 0x26f, 0x5, 
    0x44, 0x23, 0x2, 0x26e, 0x270, 0x5, 0x38, 0x1d, 0x2, 0x26f, 0x26e, 0x3, 
    0x2, 0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x3, 
    0x2, 0x2, 0x2, 0x271, 0x273, 0x7, 0x3c, 0x2, 0x2, 0x272, 0x274, 0x5, 
    0x62, 0x32, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 
    0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x7, 
    0x3d, 0x2, 0x2, 0x276, 0x295, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x7, 
    0x46, 0x2, 0x2, 0x278, 0x27a, 0x7, 0x3c, 0x2, 0x2, 0x279, 0x27b, 0x5, 
    0x62, 0x32, 0x2, 0x27a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 
    0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x295, 0x7, 
    0x3d, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x3c, 0x2, 0x2, 0x27e, 0x27f, 0x5, 
    0x42, 0x22, 0x2, 0x27f, 0x280, 0x7, 0x3d, 0x2, 0x2, 0x280, 0x281, 0x5, 
    0x56, 0x2c, 0x11, 0x281, 0x295, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x7, 
    0x3c, 0x2, 0x2, 0x283, 0x284, 0x5, 0x56, 0x2c, 0x2, 0x284, 0x285, 0x7, 
    0x3d, 0x2, 0x2, 0x285, 0x295, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x9, 
    0x5, 0x2, 0x2, 0x287, 0x295, 0x5, 0x56, 0x2c, 0xe, 0x288, 0x28a, 0x7, 
    0x3c, 0x2, 0x2, 0x289, 0x28b, 0x5, 0x60, 0x31, 0x2, 0x28a, 0x289, 0x3, 
    0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x3, 
    0x2, 0x2, 0x2, 0x28c, 0x28d, 0x7, 0x3d, 0x2, 0x2, 0x28d, 0x292, 0x7, 
    0x39, 0x2, 0x2, 0x28e, 0x28f, 0x5, 0x46, 0x24, 0x2, 0x28f, 0x290, 0x5, 
    0x16, 0xc, 0x2, 0x290, 0x293, 0x3, 0x2, 0x2, 0x2, 0x291, 0x293, 0x5, 
    0x56, 0x2c, 0x2, 0x292, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x292, 0x291, 0x3, 
    0x2, 0x2, 0x2, 0x293, 0x295, 0x3, 0x2, 0x2, 0x2, 0x294, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x294, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x294, 0x277, 0x3, 
    0x2, 0x2, 0x2, 0x294, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x294, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x294, 0x286, 0x3, 0x2, 0x2, 0x2, 0x294, 0x288, 0x3, 
    0x2, 0x2, 0x2, 0x295, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0xc, 
    0xc, 0x2, 0x2, 0x297, 0x298, 0x9, 0x6, 0x2, 0x2, 0x298, 0x2e0, 0x5, 
    0x56, 0x2c, 0xd, 0x299, 0x29a, 0xc, 0xb, 0x2, 0x2, 0x29a, 0x29b, 0x9, 
    0x7, 0x2, 0x2, 0x29b, 0x2e0, 0x5, 0x56, 0x2c, 0xc, 0x29c, 0x29d, 0xc, 
    0xa, 0x2, 0x2, 0x29d, 0x29e, 0x9, 0x8, 0x2, 0x2, 0x29e, 0x2e0, 0x5, 
    0x56, 0x2c, 0xb, 0x29f, 0x2a0, 0xc, 0x9, 0x2, 0x2, 0x2a0, 0x2a1, 0x9, 
    0x9, 0x2, 0x2, 0x2a1, 0x2e0, 0x5, 0x56, 0x2c, 0xa, 0x2a2, 0x2a3, 0xc, 
    0x8, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x27, 0x2, 0x2, 0x2a4, 0x2e0, 0x5, 
    0x56, 0x2c, 0x9, 0x2a5, 0x2a6, 0xc, 0x7, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 
    0x34, 0x2, 0x2, 0x2a7, 0x2e0, 0x5, 0x56, 0x2c, 0x8, 0x2a8, 0x2a9, 0xc, 
    0x6, 0x2, 0x2, 0x2a9, 0x2aa, 0x7, 0x35, 0x2, 0x2, 0x2aa, 0x2e0, 0x5, 
    0x56, 0x2c, 0x7, 0x2ab, 0x2ac, 0xc, 0x5, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 
    0x37, 0x2, 0x2, 0x2ad, 0x2ae, 0x5, 0x56, 0x2c, 0x2, 0x2ae, 0x2af, 0x7, 
    0x38, 0x2, 0x2, 0x2af, 0x2b0, 0x5, 0x56, 0x2c, 0x5, 0x2b0, 0x2e0, 0x3, 
    0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0xc, 0x4, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 
    0x2d, 0x2, 0x2, 0x2b3, 0x2e0, 0x5, 0x56, 0x2c, 0x4, 0x2b4, 0x2b5, 0xc, 
    0x16, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x44, 0x2, 0x2, 0x2b6, 0x2e0, 0x7, 
    0x46, 0x2, 0x2, 0x2b7, 0x2b8, 0xc, 0x15, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 
    0x37, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x44, 0x2, 0x2, 0x2ba, 0x2e0, 0x7, 
    0x46, 0x2, 0x2, 0x2bb, 0x2bc, 0xc, 0x14, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 
    0x44, 0x2, 0x2, 0x2bd, 0x2bf, 0x7, 0x46, 0x2, 0x2, 0x2be, 0x2c0, 0x5, 
    0x38, 0x1d, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 
    0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c3, 0x7, 
    0x3c, 0x2, 0x2, 0x2c2, 0x2c4, 0x5, 0x62, 0x32, 0x2, 0x2c3, 0x2c2, 0x3, 
    0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x3, 
    0x2, 0x2, 0x2, 0x2c5, 0x2e0, 0x7, 0x3d, 0x2, 0x2, 0x2c6, 0x2c7, 0xc, 
    0x13, 0x2, 0x2, 0x2c7, 0x2c8, 0x7, 0x37, 0x2, 0x2, 0x2c8, 0x2c9, 0x7, 
    0x44, 0x2, 0x2, 0x2c9, 0x2cb, 0x7, 0x46, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 
    0x38, 0x1d, 0x2, 0x2cb, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 
    0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cf, 0x7, 
    0x3c, 0x2, 0x2, 0x2ce, 0x2d0, 0x5, 0x62, 0x32, 0x2, 0x2cf, 0x2ce, 0x3, 
    0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 
    0x2, 0x2, 0x2, 0x2d1, 0x2e0, 0x7, 0x3d, 0x2, 0x2, 0x2d2, 0x2d7, 0xc, 
    0x12, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x40, 0x2, 0x2, 0x2d4, 0x2d5, 0x5, 
    0x56, 0x2c, 0x2, 0x2d5, 0x2d6, 0x7, 0x41, 0x2, 0x2, 0x2d6, 0x2d8, 0x3, 
    0x2, 0x2, 0x2, 0x2d7, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x3, 
    0x2, 0x2, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x3, 
    0x2, 0x2, 0x2, 0x2da, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0xc, 
    0x10, 0x2, 0x2, 0x2dc, 0x2e0, 0x7, 0x36, 0x2, 0x2, 0x2dd, 0x2de, 0xc, 
    0xd, 0x2, 0x2, 0x2de, 0x2e0, 0x9, 0xa, 0x2, 0x2, 0x2df, 0x296, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x299, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x29c, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2a2, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2a8, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2b1, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2b7, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2c6, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2db, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e3, 0x3, 
    0x2, 0x2, 0x2, 0x2e1, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e2, 0x3, 
    0x2, 0x2, 0x2, 0x2e2, 0x57, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 
    0x2, 0x2, 0x2e4, 0x2ef, 0x7, 0x24, 0x2, 0x2, 0x2e5, 0x2ef, 0x7, 0x46, 
    0x2, 0x2, 0x2e6, 0x2ef, 0x7, 0x3, 0x2, 0x2, 0x2e7, 0x2ef, 0x7, 0x4, 
    0x2, 0x2, 0x2e8, 0x2ef, 0x7, 0x47, 0x2, 0x2, 0x2e9, 0x2ef, 0x5, 0x5a, 
    0x2e, 0x2, 0x2ea, 0x2ef, 0x7, 0x5, 0x2, 0x2, 0x2eb, 0x2ef, 0x7, 0x25, 
    0x2, 0x2, 0x2ec, 0x2ef, 0x5, 0x64, 0x33, 0x2, 0x2ed, 0x2ef, 0x5, 0x66, 
    0x34, 0x2, 0x2ee, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e5, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e9, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2eb, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ed, 0x3, 0x2, 
    0x2, 0x2, 0x2ef, 0x59, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 0x48, 
    0x2, 0x2, 0x2f1, 0x2f6, 0x5, 0x56, 0x2c, 0x2, 0x2f2, 0x2f3, 0x7, 0x49, 
    0x2, 0x2, 0x2f3, 0x2f5, 0x5, 0x56, 0x2c, 0x2, 0x2f4, 0x2f2, 0x3, 0x2, 
    0x2, 0x2, 0x2f5, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 
    0x2, 0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f9, 0x3, 0x2, 
    0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x4a, 
    0x2, 0x2, 0x2fa, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 0x7, 0x44, 
    0x2, 0x2, 0x2fc, 0x310, 0x7, 0x46, 0x2, 0x2, 0x2fd, 0x2fe, 0x7, 0x44, 
    0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x46, 0x2, 0x2, 0x2ff, 0x301, 0x7, 0x3c, 
    0x2, 0x2, 0x300, 0x302, 0x5, 0x62, 0x32, 0x2, 0x301, 0x300, 0x3, 0x2, 
    0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0x310, 0x7, 0x3d, 0x2, 0x2, 0x304, 0x305, 0x7, 0x37, 
    0x2, 0x2, 0x305, 0x306, 0x7, 0x44, 0x2, 0x2, 0x306, 0x310, 0x7, 0x46, 
    0x2, 0x2, 0x307, 0x308, 0x7, 0x37, 0x2, 0x2, 0x308, 0x309, 0x7, 0x44, 
    0x2, 0x2, 0x309, 0x30a, 0x7, 0x46, 0x2, 0x2, 0x30a, 0x30c, 0x7, 0x3c, 
    0x2, 0x2, 0x30b, 0x30d, 0x5, 0x62, 0x32, 0x2, 0x30c, 0x30b, 0x3, 0x2, 
    0x2, 0x2, 0x30c, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 
    0x2, 0x2, 0x30e, 0x310, 0x7, 0x3d, 0x2, 0x2, 0x30f, 0x2fb, 0x3, 0x2, 
    0x2, 0x2, 0x30f, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x304, 0x3, 0x2, 
    0x2, 0x2, 0x30f, 0x307, 0x3, 0x2, 0x2, 0x2, 0x310, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x312, 0x7, 0x47, 0x2, 0x2, 0x312, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x313, 0x314, 0x5, 0x42, 0x22, 0x2, 0x314, 0x31b, 0x7, 0x46, 0x2, 
    0x2, 0x315, 0x316, 0x7, 0x43, 0x2, 0x2, 0x316, 0x317, 0x5, 0x42, 0x22, 
    0x2, 0x317, 0x318, 0x7, 0x46, 0x2, 0x2, 0x318, 0x31a, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x315, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31d, 0x3, 0x2, 0x2, 
    0x2, 0x31b, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x3, 0x2, 0x2, 
    0x2, 0x31c, 0x61, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x31e, 0x323, 0x5, 0x56, 0x2c, 0x2, 0x31f, 0x320, 0x7, 0x43, 0x2, 0x2, 
    0x320, 0x322, 0x5, 0x56, 0x2c, 0x2, 0x321, 0x31f, 0x3, 0x2, 0x2, 0x2, 
    0x322, 0x325, 0x3, 0x2, 0x2, 0x2, 0x323, 0x321, 0x3, 0x2, 0x2, 0x2, 
    0x323, 0x324, 0x3, 0x2, 0x2, 0x2, 0x324, 0x63, 0x3, 0x2, 0x2, 0x2, 0x325, 
    0x323, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x7, 0x40, 0x2, 0x2, 0x327, 
    0x337, 0x7, 0x41, 0x2, 0x2, 0x328, 0x329, 0x7, 0x40, 0x2, 0x2, 0x329, 
    0x32e, 0x5, 0x56, 0x2c, 0x2, 0x32a, 0x32b, 0x7, 0x43, 0x2, 0x2, 0x32b, 
    0x32d, 0x5, 0x56, 0x2c, 0x2, 0x32c, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x330, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32e, 
    0x32f, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x332, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x32e, 0x3, 0x2, 0x2, 0x2, 0x331, 0x333, 0x7, 0x43, 0x2, 0x2, 0x332, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x334, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x7, 0x41, 0x2, 0x2, 0x335, 
    0x337, 0x3, 0x2, 0x2, 0x2, 0x336, 0x326, 0x3, 0x2, 0x2, 0x2, 0x336, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x337, 0x65, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 
    0x7, 0x3e, 0x2, 0x2, 0x339, 0x349, 0x7, 0x3f, 0x2, 0x2, 0x33a, 0x33b, 
    0x7, 0x3e, 0x2, 0x2, 0x33b, 0x340, 0x5, 0x68, 0x35, 0x2, 0x33c, 0x33d, 
    0x7, 0x43, 0x2, 0x2, 0x33d, 0x33f, 0x5, 0x68, 0x35, 0x2, 0x33e, 0x33c, 
    0x3, 0x2, 0x2, 0x2, 0x33f, 0x342, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 
    0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x344, 
    0x3, 0x2, 0x2, 0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x345, 
    0x7, 0x43, 0x2, 0x2, 0x344, 0x343, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 
    0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 
    0x7, 0x3f, 0x2, 0x2, 0x347, 0x349, 0x3, 0x2, 0x2, 0x2, 0x348, 0x338, 
    0x3, 0x2, 0x2, 0x2, 0x348, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x349, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x34a, 0x34b, 0x9, 0xb, 0x2, 0x2, 0x34b, 0x34c, 0x7, 
    0x38, 0x2, 0x2, 0x34c, 0x34d, 0x5, 0x56, 0x2c, 0x2, 0x34d, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x34e, 0x34f, 0x9, 0xb, 0x2, 0x2, 0x34f, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x350, 0x351, 0x5, 0x42, 0x22, 0x2, 0x351, 0x352, 0x7, 0x46, 
    0x2, 0x2, 0x352, 0x353, 0x7, 0x42, 0x2, 0x2, 0x353, 0x35e, 0x3, 0x2, 
    0x2, 0x2, 0x354, 0x355, 0x5, 0x46, 0x24, 0x2, 0x355, 0x356, 0x7, 0x46, 
    0x2, 0x2, 0x356, 0x358, 0x7, 0x3c, 0x2, 0x2, 0x357, 0x359, 0x5, 0x10, 
    0x9, 0x2, 0x358, 0x357, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x3, 0x2, 
    0x2, 0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x3d, 
    0x2, 0x2, 0x35b, 0x35c, 0x5, 0x16, 0xc, 0x2, 0x35c, 0x35e, 0x3, 0x2, 
    0x2, 0x2, 0x35d, 0x350, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x354, 0x3, 0x2, 
    0x2, 0x2, 0x35e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x71, 0x77, 0x7d, 0x88, 
    0x9f, 0xa4, 0xab, 0xb4, 0xba, 0xbf, 0xc1, 0xc9, 0xcd, 0xd4, 0xd9, 0xdd, 
    0xec, 0xfc, 0x116, 0x11a, 0x121, 0x130, 0x13c, 0x149, 0x14c, 0x150, 
    0x154, 0x158, 0x167, 0x16c, 0x17a, 0x17f, 0x181, 0x186, 0x18b, 0x18f, 
    0x192, 0x197, 0x199, 0x1a1, 0x1a6, 0x1ab, 0x1af, 0x1b2, 0x1b8, 0x1c1, 
    0x1ca, 0x1d2, 0x1dd, 0x1e3, 0x1ec, 0x1f0, 0x1f9, 0x1fe, 0x205, 0x20b, 
    0x219, 0x21b, 0x223, 0x229, 0x230, 0x235, 0x23c, 0x24c, 0x25e, 0x267, 
    0x26f, 0x273, 0x27a, 0x28a, 0x292, 0x294, 0x2bf, 0x2c3, 0x2cb, 0x2cf, 
    0x2d9, 0x2df, 0x2e1, 0x2ee, 0x2f6, 0x301, 0x30c, 0x30f, 0x31b, 0x323, 
    0x32e, 0x332, 0x336, 0x340, 0x344, 0x348, 0x358, 0x35d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PrystParser::Initializer PrystParser::_init;
