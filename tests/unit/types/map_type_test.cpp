#include <gtest/gtest.h>
#include "type_registry.hpp"
#include "type_checker.hpp"
#include "compiler.hpp"
#include "llvm/IR/LLVMContext.h"
#include <memory>

namespace pryst {
namespace test {

class MapTypeTest : public ::testing::Test {
protected:
    std::unique_ptr<llvm::LLVMContext> context;
    std::unique_ptr<TypeRegistry> typeRegistry;
    std::unique_ptr<Compiler> compiler;

    void SetUp() override {
        context = std::make_unique<llvm::LLVMContext>();
        compiler = std::make_unique<Compiler>();
        typeRegistry = std::make_unique<TypeRegistry>(*context);
    }

    void TearDown() override {
        typeRegistry.reset();
        compiler.reset();
        context.reset();
    }
};

TEST_F(MapTypeTest, BasicMapTypeRegistration) {
    // Test basic map type registration
    auto mapType = typeRegistry->registerMapType("str", "int");
    ASSERT_TRUE(mapType != nullptr) << "Failed to register map<str,int>";

    // Verify the type is cached
    auto cachedType = typeRegistry->getCachedType("map<str,int>");
    ASSERT_TRUE(cachedType != nullptr) << "Failed to retrieve cached map<str,int>";
    ASSERT_EQ(mapType, cachedType) << "Cached type does not match registered type";
}

TEST_F(MapTypeTest, NestedMapTypeRegistration) {
    // Test nested map type registration
    auto innerMapType = typeRegistry->registerMapType("str", "int");
    ASSERT_TRUE(innerMapType != nullptr) << "Failed to register inner map<str,int>";

    auto outerMapType = typeRegistry->registerMapType("str", "map<str,int>");
    ASSERT_TRUE(outerMapType != nullptr) << "Failed to register map<str,map<str,int>>";

    // Verify nested type is cached correctly
    auto cachedType = typeRegistry->getCachedType("map<str,map<str,int>>");
    ASSERT_TRUE(cachedType != nullptr) << "Failed to retrieve cached map<str,map<str,int>>";
    ASSERT_EQ(outerMapType, cachedType) << "Cached nested type does not match registered type";
}

TEST_F(MapTypeTest, MapTypeWithArrays) {
    // Test map type with array value
    auto arrayType = typeRegistry->registerArrayType("int");
    ASSERT_TRUE(arrayType != nullptr) << "Failed to register int[]";

    auto mapType = typeRegistry->registerMapType("str", "int[]");
    ASSERT_TRUE(mapType != nullptr) << "Failed to register map<str,int[]>";

    // Verify complex type is cached correctly
    auto cachedType = typeRegistry->getCachedType("map<str,int[]>");
    ASSERT_TRUE(cachedType != nullptr) << "Failed to retrieve cached map<str,int[]>";
    ASSERT_EQ(mapType, cachedType) << "Cached array map type does not match registered type";
}

TEST_F(MapTypeTest, MapTypePreservesGenericParameters) {
    // Register various map types
    auto mapStrStr = typeRegistry->registerMapType("str", "str");
    auto mapIntInt = typeRegistry->registerMapType("int", "int");
    auto mapStrInt = typeRegistry->registerMapType("str", "int");

    // Verify each type is cached correctly and independently
    ASSERT_TRUE(typeRegistry->getCachedType("map<str,str>") != nullptr);
    ASSERT_TRUE(typeRegistry->getCachedType("map<int,int>") != nullptr);
    ASSERT_TRUE(typeRegistry->getCachedType("map<str,int>") != nullptr);

    // Verify types are distinct
    ASSERT_NE(typeRegistry->getCachedType("map<str,str>"), typeRegistry->getCachedType("map<int,int>"));
    ASSERT_NE(typeRegistry->getCachedType("map<str,str>"), typeRegistry->getCachedType("map<str,int>"));
    ASSERT_NE(typeRegistry->getCachedType("map<int,int>"), typeRegistry->getCachedType("map<str,int>"));
}

TEST_F(MapTypeTest, ComplexNestedTypes) {
    // Test complex nested type: map<str,map<int,str[]>[]>
    auto strArrayType = typeRegistry->registerArrayType("str");
    auto innerMapType = typeRegistry->registerMapType("int", "str[]");
    auto innerArrayType = typeRegistry->registerArrayType("map<int,str[]>");
    auto complexType = typeRegistry->registerMapType("str", "map<int,str[]>[]");

    ASSERT_TRUE(complexType != nullptr) << "Failed to register complex nested type";

    // Verify complex type is cached correctly
    auto cachedType = typeRegistry->getCachedType("map<str,map<int,str[]>[]>");
    ASSERT_TRUE(cachedType != nullptr) << "Failed to retrieve cached complex type";
    ASSERT_EQ(complexType, cachedType) << "Cached complex type does not match registered type";
}

TEST_F(MapTypeTest, MapTypeComparison) {
    auto mapStrInt = typeRegistry->registerMapType("str", "int");
    auto mapStrFloat = typeRegistry->registerMapType("str", "float");
    auto mapStrStr = typeRegistry->registerMapType("str", "str");

    ASSERT_FALSE(mapStrInt->isAssignableTo(mapStrFloat));
    ASSERT_TRUE(mapStrInt->isAssignableTo(mapStrInt));
    ASSERT_TRUE(mapStrInt->canConvertTo(mapStrFloat));
    ASSERT_FALSE(mapStrInt->canConvertTo(mapStrStr));
}

TEST_F(MapTypeTest, MapTypeErrors) {
    ASSERT_THROW(typeRegistry->registerMapType("void", "int"), Error) << "Should not allow void as key type";
    ASSERT_THROW(typeRegistry->registerMapType("str", "invalid"), Error) << "Should handle invalid value type";
    ASSERT_THROW(typeRegistry->registerMapType("str", "map<void,int>"), Error) << "Should not allow void in nested maps";

    // Test recursive map type errors
    ASSERT_THROW(typeRegistry->registerMapType("map<void,int>", "int"), Error) << "Should not allow void in key map type";
    ASSERT_THROW(typeRegistry->registerMapType("str", "map<int,void>"), Error) << "Should not allow void in value map type";
}

TEST_F(MapTypeTest, MapTypeConversion) {
    auto mapStrInt = typeRegistry->registerMapType("str", "int");
    auto mapStrFloat = typeRegistry->registerMapType("str", "float");
    auto mapStrStr = typeRegistry->registerMapType("str", "str");
    auto mapStrIntArray = typeRegistry->registerMapType("str", "int[]");

    // Test type assignability
    ASSERT_FALSE(mapStrInt->isAssignableTo(mapStrFloat)) << "map<str,int> should not be assignable to map<str,float>";
    ASSERT_TRUE(mapStrInt->isAssignableTo(mapStrInt)) << "map<str,int> should be assignable to itself";
    ASSERT_FALSE(mapStrInt->isAssignableTo(mapStrIntArray)) << "map<str,int> should not be assignable to map<str,int[]>";

    // Test type conversion
    ASSERT_TRUE(mapStrInt->canConvertTo(mapStrFloat)) << "map<str,int> should be convertible to map<str,float>";
    ASSERT_FALSE(mapStrInt->canConvertTo(mapStrStr)) << "map<str,int> should not be convertible to map<str,str>";
    ASSERT_FALSE(mapStrInt->canConvertTo(mapStrIntArray)) << "map<str,int> should not be convertible to map<str,int[]>";
}

TEST_F(MapTypeTest, NullableMapType) {
    auto mapType = typeRegistry->registerMapType("str", "int");
    auto nullableType = typeRegistry->makeTypeNullable(mapType);

    ASSERT_TRUE(nullableType->isNullable()) << "Nullable map type should be nullable";
    ASSERT_EQ(nullableType->toString(), "map<str,int>?") << "Nullable map type string representation incorrect";
}

TEST_F(MapTypeTest, RecursiveMapTypeCaching) {
    // Test deeply nested recursive map type
    auto nestedType = typeRegistry->registerMapType("str", "int");
    auto recursiveType = typeRegistry->registerMapType("map<str,int>", "map<str,int>");

    // Verify type identity is preserved through caching
    auto cachedNested = typeRegistry->getCachedType("map<str,int>");
    auto cachedRecursive = typeRegistry->getCachedType("map<map<str,int>,map<str,int>>");

    ASSERT_EQ(nestedType, cachedNested) << "Nested map type identity not preserved";
    ASSERT_EQ(recursiveType, cachedRecursive) << "Recursive map type identity not preserved";

    // Verify type structure
    auto recursiveMapType = std::dynamic_pointer_cast<MapType>(recursiveType);
    ASSERT_TRUE(recursiveMapType) << "Failed to cast to MapType";
    ASSERT_EQ(recursiveMapType->getKeyType()->toString(), "map<str,int>") << "Key type mismatch";
    ASSERT_EQ(recursiveMapType->getValueType()->toString(), "map<str,int>") << "Value type mismatch";
}

} // namespace test
} // namespace pryst
