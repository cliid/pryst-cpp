#pragma once

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Verifier.h>
#include "generated/PrystParserBaseVisitor.h"
#include "generated/PrystParser.h"
#include "type_registry.hpp"
#include "class_type_registry.hpp"
#include <memory>
#include <string>
#include <unordered_map>

namespace pryst::parser {

// Forward declarations
class TypeChecker;

class LLVMCodeGen final : public PrystParserBaseVisitor {
private:
    llvm::LLVMContext& context;
    llvm::Module& module;
    llvm::IRBuilder<>& builder;
    TypeRegistry& typeRegistry;
    ClassTypeRegistry classTypeRegistry;
    std::unordered_map<std::string, llvm::Value*> valueMap;
    std::vector<std::pair<llvm::BasicBlock*, llvm::BasicBlock*>> loopStack;
    llvm::Function* currentFunction;
    std::string currentClass;
    llvm::Value* currentInstance;
    std::unordered_map<std::string, llvm::Type*> memberTypes;
    std::unordered_map<std::string, size_t> memberIndices;

    // Helper methods
    llvm::Value* createAdd(llvm::Value* left, llvm::Value* right);
    llvm::Value* createSub(llvm::Value* left, llvm::Value* right);
    llvm::Value* createMul(llvm::Value* left, llvm::Value* right);
    llvm::Value* createDiv(llvm::Value* left, llvm::Value* right);
    llvm::Value* createMod(llvm::Value* left, llvm::Value* right);
    llvm::Value* createLT(llvm::Value* left, llvm::Value* right);
    llvm::Value* createGT(llvm::Value* left, llvm::Value* right);
    llvm::Value* createLE(llvm::Value* left, llvm::Value* right);
    llvm::Value* createGE(llvm::Value* left, llvm::Value* right);
    llvm::Value* createEQ(llvm::Value* left, llvm::Value* right);
    llvm::Value* createNEQ(llvm::Value* left, llvm::Value* right);
    llvm::Value* createAnd(llvm::Value* left, llvm::Value* right);
    llvm::Value* createOr(llvm::Value* left, llvm::Value* right);
    llvm::Value* convertToFloat(llvm::Value* value);
    llvm::Value* convertType(llvm::Value* value, llvm::Type* targetType);
    llvm::Type* getLLVMType(std::shared_ptr<Type> type);
    std::vector<llvm::Type*> getLLVMTypes(const std::vector<std::shared_ptr<Type>>& types);
    std::shared_ptr<Type> getTypeFromTypeContext(PrystParser::TypeContext* ctx);
    std::shared_ptr<Type> getTypeFromReturnTypeContext(PrystParser::ReturnTypeContext* ctx);
    llvm::Function* getOrCreateStringAlloc();
    llvm::Function* getOrCreateArrayAlloc();
    llvm::Function* getOrCreateMapAlloc();
    llvm::Function* getOrCreateGCAlloc();
    void initializeRuntime();
    std::string getTokenText(antlr4::tree::TerminalNode* node);
    bool hasToken(antlr4::tree::TerminalNode* node);
    bool hasContext(antlr4::tree::ParseTree* node);
    antlr4::ParserRuleContext* getContext(antlr4::tree::ParseTree* node);
    unsigned getMemberIndex(llvm::Type* classType, const std::string& memberName);

    // Type creation helpers
    llvm::Type* createArrayType(llvm::Type* elementType);
    llvm::Type* createMapType(llvm::Type* keyType, llvm::Type* valueType);
    llvm::Type* createNullableType(llvm::Type* baseType);

public:
    LLVMCodeGen(llvm::LLVMContext& context, llvm::Module& module, llvm::IRBuilder<>& builder, TypeRegistry& registry);
    ~LLVMCodeGen() = default;

    virtual antlrcpp::Any visitChildren(antlr4::tree::ParseTree* node) override {
        return node->accept(this);
    }

    virtual antlrcpp::Any defaultResult() override {
        return antlrcpp::Any();
    }

    virtual antlrcpp::Any aggregateResult(antlrcpp::Any aggregate, antlrcpp::Any nextResult) override {
        return nextResult;
    }

    virtual antlrcpp::Any visit(antlr4::tree::ParseTree* tree) override {
        return tree->accept(this);
    }

    void initModule(const std::string& moduleName);

    // Program structure
    virtual antlrcpp::Any visitProgram(PrystParser::ProgramContext* ctx) override;
    virtual antlrcpp::Any visitModuleDecl(PrystParser::ModuleDeclContext* ctx) override;
    virtual antlrcpp::Any visitImportDecl(PrystParser::ImportDeclContext* ctx) override;
    virtual antlrcpp::Any visitImportPath(PrystParser::ImportPathContext* ctx) override;
    virtual antlrcpp::Any visitDeclaration(PrystParser::DeclarationContext* ctx) override;
    virtual antlrcpp::Any visitErrorDecl(PrystParser::ErrorDeclContext* ctx) override;
    virtual antlrcpp::Any visitFunctionDecl(PrystParser::FunctionDeclContext* ctx) override;
    virtual antlrcpp::Any visitParameters(PrystParser::ParametersContext* ctx) override;
    virtual antlrcpp::Any visitParameter(PrystParser::ParameterContext* ctx) override;
    virtual antlrcpp::Any visitDefaultParam(PrystParser::DefaultParamContext* ctx) override;
    virtual antlrcpp::Any visitBlock(PrystParser::BlockContext* ctx) override;

    // Statements
    virtual antlrcpp::Any visitStatement(PrystParser::StatementContext* ctx) override;
    virtual antlrcpp::Any visitVarDecl(PrystParser::VarDeclContext* ctx) override;
    virtual antlrcpp::Any visitIdentifierList(PrystParser::IdentifierListContext* ctx) override;
    virtual antlrcpp::Any visitAssignment(PrystParser::AssignmentContext* ctx) override;
    virtual antlrcpp::Any visitIfStmt(PrystParser::IfStmtContext* ctx) override;
    virtual antlrcpp::Any visitWhileStmt(PrystParser::WhileStmtContext* ctx) override;
    virtual antlrcpp::Any visitForStmt(PrystParser::ForStmtContext* ctx) override;
    virtual antlrcpp::Any visitReturnStmt(PrystParser::ReturnStmtContext* ctx) override;
    virtual antlrcpp::Any visitTryStmt(PrystParser::TryStmtContext* ctx) override;
    virtual antlrcpp::Any visitBreakStmt(PrystParser::BreakStmtContext* ctx) override;
    virtual antlrcpp::Any visitContinueStmt(PrystParser::ContinueStmtContext* ctx) override;
    virtual antlrcpp::Any visitExpressionStmt(PrystParser::ExpressionStmtContext* ctx) override;

    // Types
    virtual antlrcpp::Any visitType(PrystParser::TypeContext* ctx) override;
    virtual antlrcpp::Any visitQualifiedType(PrystParser::QualifiedTypeContext* ctx) override;
    virtual antlrcpp::Any visitReturnType(PrystParser::ReturnTypeContext* ctx) override;
    virtual antlrcpp::Any visitNullableType(PrystParser::NullableTypeContext* ctx) override;
    virtual antlrcpp::Any visitBasicType(PrystParser::BasicTypeContext* ctx) override;
    virtual antlrcpp::Any visitArrayType(PrystParser::ArrayTypeContext* ctx) override;
    virtual antlrcpp::Any visitMapType(PrystParser::MapTypeContext* ctx) override;
    virtual antlrcpp::Any visitKeyType(PrystParser::KeyTypeContext* ctx) override;
    virtual antlrcpp::Any visitFunctionType(PrystParser::FunctionTypeContext* ctx) override;
    virtual antlrcpp::Any visitTypeList(PrystParser::TypeListContext* ctx) override;

    // Expressions
    virtual antlrcpp::Any visitAssignmentExpr(PrystParser::AssignmentExprContext* ctx) override;
    virtual antlrcpp::Any visitLogicalAndExpr(PrystParser::LogicalAndExprContext* ctx) override;
    virtual antlrcpp::Any visitCastExpr(PrystParser::CastExprContext* ctx) override;
    virtual antlrcpp::Any visitNullCoalesceExpr(PrystParser::NullCoalesceExprContext* ctx) override;
    virtual antlrcpp::Any visitAdditiveExpr(PrystParser::AdditiveExprContext* ctx) override;
    virtual antlrcpp::Any visitRelationalExpr(PrystParser::RelationalExprContext* ctx) override;
    virtual antlrcpp::Any visitParenExpr(PrystParser::ParenExprContext* ctx) override;
    virtual antlrcpp::Any visitNullableMethodCallExpr(PrystParser::NullableMethodCallExprContext* ctx) override;
    virtual antlrcpp::Any visitLogicalOrExpr(PrystParser::LogicalOrExprContext* ctx) override;
    virtual antlrcpp::Any visitPrefixExpr(PrystParser::PrefixExprContext* ctx) override;
    virtual antlrcpp::Any visitNullableChain(PrystParser::NullableChainContext* ctx) override;
    virtual antlrcpp::Any visitMethodCallExpr(PrystParser::MethodCallExprContext* ctx) override;
    virtual antlrcpp::Any visitArrayAccessExpr(PrystParser::ArrayAccessExprContext* ctx) override;
    virtual antlrcpp::Any visitPrimaryExpr(PrystParser::PrimaryExprContext* ctx) override;
    virtual antlrcpp::Any visitLambdaExpr(PrystParser::LambdaExprContext* ctx) override;
    virtual antlrcpp::Any visitFunctionCallExpr(PrystParser::FunctionCallExprContext* ctx) override;
    virtual antlrcpp::Any visitMemberAccessExpr(PrystParser::MemberAccessExprContext* ctx) override;
    virtual antlrcpp::Any visitPostfixExpr(PrystParser::PostfixExprContext* ctx) override;
    virtual antlrcpp::Any visitConstructorExpr(PrystParser::ConstructorExprContext* ctx) override;
    virtual antlrcpp::Any visitNonNullAssertExpr(PrystParser::NonNullAssertExprContext* ctx) override;
    virtual antlrcpp::Any visitMultiplicativeExpr(PrystParser::MultiplicativeExprContext* ctx) override;
    virtual antlrcpp::Any visitEqualityExpr(PrystParser::EqualityExprContext* ctx) override;
    virtual antlrcpp::Any visitConditionalExpr(PrystParser::ConditionalExprContext* ctx) override;

    // Other
    virtual antlrcpp::Any visitPrimary(PrystParser::PrimaryContext* ctx) override;
    virtual antlrcpp::Any visitStringInterpolation(PrystParser::StringInterpolationContext* ctx) override;
    virtual antlrcpp::Any visitChainedCall(PrystParser::ChainedCallContext* ctx) override;
    virtual antlrcpp::Any visitStringLiteral(PrystParser::StringLiteralContext* ctx) override;
    virtual antlrcpp::Any visitLambdaParams(PrystParser::LambdaParamsContext* ctx) override;
    virtual antlrcpp::Any visitArguments(PrystParser::ArgumentsContext* ctx) override;
    virtual antlrcpp::Any visitEmptyArrayLiteral(PrystParser::EmptyArrayLiteralContext* ctx) override;
    virtual antlrcpp::Any visitNonEmptyArrayLiteral(PrystParser::NonEmptyArrayLiteralContext* ctx) override;
    virtual antlrcpp::Any visitEmptyMapLiteral(PrystParser::EmptyMapLiteralContext* ctx) override;
    virtual antlrcpp::Any visitNonEmptyMapLiteral(PrystParser::NonEmptyMapLiteralContext* ctx) override;
    virtual antlrcpp::Any visitMapEntry(PrystParser::MapEntryContext* ctx) override;
    virtual antlrcpp::Any visitMapKey(PrystParser::MapKeyContext* ctx) override;
    virtual antlrcpp::Any visitErrorMember(PrystParser::ErrorMemberContext* ctx) override;

    // Class-related
    virtual antlrcpp::Any visitClassDecl(PrystParser::ClassDeclContext* ctx) override;
    virtual antlrcpp::Any visitInterfaceDecl(PrystParser::InterfaceDeclContext* ctx) override;
    virtual antlrcpp::Any visitInterfaceMember(PrystParser::InterfaceMemberContext* ctx) override;
    virtual antlrcpp::Any visitGenericParams(PrystParser::GenericParamsContext* ctx) override;
    virtual antlrcpp::Any visitGenericArgs(PrystParser::GenericArgsContext* ctx) override;
    virtual antlrcpp::Any visitClassMember(PrystParser::ClassMemberContext* ctx) override;
    virtual antlrcpp::Any visitOverloadParams(PrystParser::OverloadParamsContext* ctx) override;
    virtual antlrcpp::Any visitConstructorDecl(PrystParser::ConstructorDeclContext* ctx) override;
    virtual antlrcpp::Any visitConstructorBlock(PrystParser::ConstructorBlockContext* ctx) override;
};

} // namespace pryst::parser
