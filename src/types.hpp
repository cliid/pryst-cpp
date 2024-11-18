#pragma once

#include <string>
#include <memory>
#include <vector>
#include <unordered_map>
#include <ostream>
#include <iostream>
#include <llvm/Support/raw_ostream.h>

namespace pryst {

class Type;
class PrimitiveType;
class ArrayType;
class MapType;
class FunctionType;
class ClassType;
class InterfaceType;
class ErrorPropagationType;
class NullableType;
class GenericType;

extern std::shared_ptr<Type> INT_TYPE;
extern std::shared_ptr<Type> FLOAT_TYPE;
extern std::shared_ptr<Type> BOOL_TYPE;
extern std::shared_ptr<Type> STRING_TYPE;
extern std::shared_ptr<Type> VOID_TYPE;
extern std::shared_ptr<Type> ERROR_TYPE;
extern std::shared_ptr<Type> NULL_TYPE;

class Type : public std::enable_shared_from_this<Type> {
public:
    enum class Kind {
        Int,
        Float,
        Bool,
        String,
        Void,
        Array,
        Map,
        Function,
        Class,
        Interface,
        Error,
        Any,
        Nullable,
        Generic,
        Null
    };

    friend std::ostream& operator<<(std::ostream& os, const Kind& kind) {
        switch(kind) {
            case Kind::Int: return os << "Int";
            case Kind::Float: return os << "Float";
            case Kind::Bool: return os << "Bool";
            case Kind::String: return os << "String";
            case Kind::Void: return os << "Void";
            case Kind::Array: return os << "Array";
            case Kind::Map: return os << "Map";
            case Kind::Function: return os << "Function";
            case Kind::Class: return os << "Class";
            case Kind::Interface: return os << "Interface";
            case Kind::Error: return os << "Error";
            case Kind::Any: return os << "Any";
            case Kind::Nullable: return os << "Nullable";
            case Kind::Generic: return os << "Generic";
            case Kind::Null: return os << "Null";
            default: return os << "Unknown";
        }
    }

    explicit Type(Kind kind) : kind_(kind) {}
    virtual ~Type() = default;

    Kind getKind() const { return kind_; }

    virtual bool isVoidType() const {
        return kind_ == Kind::Void;
    }

    virtual bool isNullable() const {
        return kind_ == Kind::Nullable || kind_ == Kind::Null;
    }

    virtual bool canBeNull() const {
        return isNullable();
    }

    virtual std::shared_ptr<Type> makeNullable() {
        if (isNullable()) return std::static_pointer_cast<Type>(shared_from_this());
        auto nullable = std::make_shared<NullableType>(std::static_pointer_cast<Type>(shared_from_this()));
        return std::static_pointer_cast<Type>(nullable);
    }

    virtual bool isAssignableTo(const std::shared_ptr<Type>& other) const {
        if (kind_ == Kind::Null && other->isNullable()) {
            return true;
        }
        return kind_ == other->getKind();
    }

    virtual bool canConvertTo(const std::shared_ptr<Type>& other) const {
        if (kind_ == Kind::Null && other->isNullable()) {
            return true;
        }
        return kind_ == other->getKind();
    }

    virtual void addMethod(const std::string& name, std::shared_ptr<Type> returnType,
                         const std::vector<std::shared_ptr<Type>>& paramTypes = {}) {
        auto functionType = std::make_shared<FunctionType>(returnType, paramTypes);
        methods_[name] = std::static_pointer_cast<Type>(functionType);
    }

    virtual std::shared_ptr<Type> getMethod(const std::string& name) const {
        auto it = methods_.find(name);
        return it != methods_.end() ? it->second : nullptr;
    }

    virtual std::vector<std::string> getAvailableMethods() const {
        std::vector<std::string> methodNames;
        for (const auto& method : methods_) {
            methodNames.push_back(method.first);
        }
        return methodNames;
    }

    virtual std::string toString() const {
        switch(kind_) {
            case Kind::Int: return "int";
            case Kind::Float: return "float";
            case Kind::Bool: return "bool";
            case Kind::String: return "str";
            case Kind::Void: return "void";
            case Kind::Null: return "null";
            case Kind::Array: return "array";
            case Kind::Map: return "map";
            case Kind::Function: return "function";
            case Kind::Class: return "class";
            case Kind::Interface: return "interface";
            default: return "unknown";
        }
    }

protected:
    Kind kind_;
    std::unordered_map<std::string, std::shared_ptr<Type>> methods_;
};

class PrimitiveType : public Type {
public:
    explicit PrimitiveType(Kind kind) : Type(kind) {}
};

class ArrayType : public Type {
public:
    explicit ArrayType(std::shared_ptr<Type> elementType)
        : Type(Kind::Array), elementType_(elementType) {}

    std::shared_ptr<Type> getElementType() const { return elementType_; }

private:
    std::shared_ptr<Type> elementType_;
};

class MapType : public Type {
public:
    MapType(std::shared_ptr<Type> keyType, std::shared_ptr<Type> valueType)
        : Type(Kind::Map) {
        std::cout << "Debug [MapType]: Creating map type with key=" << keyType->toString()
                  << " value=" << valueType->toString() << std::endl;

        // Store original type references to preserve identity
        keyType_ = keyType;
        valueType_ = valueType;

        if (!keyType_ || keyType_->isVoidType()) {
            throw Error("TypeError", "Invalid map key type");
        }
        if (!valueType_) {
            throw Error("TypeError", "Invalid map value type");
        }
    }

    std::shared_ptr<Type> getKeyType() const { return keyType_; }
    std::shared_ptr<Type> getValueType() const { return valueType_; }

    std::string toString() const override {
        return "map<" + keyType_->toString() + "," + valueType_->toString() + ">";
    }

    bool isAssignableTo(const std::shared_ptr<Type>& other) const override {
        if (auto otherMap = std::dynamic_pointer_cast<MapType>(other)) {
            return keyType_->isAssignableTo(otherMap->keyType_) &&
                   valueType_->isAssignableTo(otherMap->valueType_);
        }
        return false;
    }

    bool canConvertTo(const std::shared_ptr<Type>& other) const override {
        if (auto otherMap = std::dynamic_pointer_cast<MapType>(other)) {
            return keyType_->canConvertTo(otherMap->keyType_) &&
                   valueType_->canConvertTo(otherMap->valueType_);
        }
        return false;
    }

private:
    std::shared_ptr<Type> keyType_;
    std::shared_ptr<Type> valueType_;
};

class FunctionType : public Type {
public:
    // Constructor for fn<ReturnType>(paramTypes) syntax
    FunctionType(std::shared_ptr<Type> returnType, const std::vector<std::shared_ptr<Type>>& paramTypes)
        : Type(Kind::Function), returnType_(returnType), paramTypes_(paramTypes), isArrowSyntax_(false) {}

    // Constructor for (paramTypes) -> ReturnType syntax (for lambda expressions)
    static std::shared_ptr<FunctionType> createArrowType(
        const std::vector<std::shared_ptr<Type>>& paramTypes,
        std::shared_ptr<Type> returnType) {
        auto type = std::make_shared<FunctionType>(returnType, paramTypes);
        type->isArrowSyntax_ = true;
        return type;
    }

    std::shared_ptr<Type> getReturnType() const { return returnType_; }
    const std::vector<std::shared_ptr<Type>>& getParamTypes() const { return paramTypes_; }
    bool isArrowSyntax() const { return isArrowSyntax_; }

private:
    std::shared_ptr<Type> returnType_;
    std::vector<std::shared_ptr<Type>> paramTypes_;
    bool isArrowSyntax_;  // true for lambda expressions using arrow syntax
};

class ClassType : public Type {
public:
    explicit ClassType(const std::string& name,
                      const std::vector<std::shared_ptr<Type>>& genericParams = {},
                      std::shared_ptr<ClassType> baseClass = nullptr,
                      const std::vector<std::shared_ptr<InterfaceType>>& interfaces = {})
        : Type(Kind::Class), name_(name), genericParams_(genericParams),
          baseClass_(baseClass), interfaces_(interfaces) {}

    const std::string& getName() const { return name_; }
    const std::vector<std::shared_ptr<Type>>& getGenericParams() const { return genericParams_; }
    std::shared_ptr<ClassType> getBaseClass() const { return baseClass_; }
    const std::vector<std::shared_ptr<InterfaceType>>& getInterfaces() const { return interfaces_; }

    void setBaseType(std::shared_ptr<Type> baseType) {
        if (auto classType = std::dynamic_pointer_cast<ClassType>(baseType)) {
            baseClass_ = classType;
        }
    }

    void addField(const std::string& name, std::shared_ptr<Type> type) {
        fields_[name] = type;
    }

    std::shared_ptr<Type> getField(const std::string& name) const {
        auto it = fields_.find(name);
        return it != fields_.end() ? it->second : nullptr;
    }

    void addMethod(const std::string& name, std::shared_ptr<Type> returnType,
                  const std::vector<std::shared_ptr<Type>>& paramTypes = {}) override {
        auto functionType = std::make_shared<FunctionType>(returnType, paramTypes);
        methods_[name] = std::static_pointer_cast<Type>(functionType);
    }

    std::vector<std::string> getAvailableMembers() const {
        std::vector<std::string> members;
        for (const auto& field : fields_) {
            members.push_back(field.first);
        }
        return members;
    }

    std::string toString() const override {
        return name_;
    }

private:
    std::string name_;
    std::vector<std::shared_ptr<Type>> genericParams_;
    std::shared_ptr<ClassType> baseClass_;
    std::vector<std::shared_ptr<InterfaceType>> interfaces_;
    std::unordered_map<std::string, std::shared_ptr<Type>> fields_;
};

class ErrorPropagationType : public Type {
public:
    explicit ErrorPropagationType(std::shared_ptr<Type> innerType)
        : Type(Kind::Error), innerType_(innerType) {}

    std::shared_ptr<Type> getInnerType() const { return innerType_; }

private:
    std::shared_ptr<Type> innerType_;
};

class NullableType : public Type {
public:
    explicit NullableType(std::shared_ptr<Type> innerType)
        : Type(Kind::Nullable), innerType_(innerType) {}

    std::shared_ptr<Type> getInnerType() const { return innerType_; }

    bool isNullable() const override { return true; }
    bool canBeNull() const override { return true; }
    std::shared_ptr<Type> makeNullable() override {
        return std::static_pointer_cast<Type>(shared_from_this());
    }

    std::shared_ptr<Type> getMethod(const std::string& name) const override {
        // First check if the method exists in our own methods map
        auto it = methods_.find(name);
        if (it != methods_.end()) {
            return it->second;
        }
        // If not found, delegate to inner type
        auto innerMethod = innerType_->getMethod(name);
        if (innerMethod) {
            // Make the return type nullable since this is a nullable type
            return innerMethod->makeNullable();
        }
        return nullptr;
    }

    void addMethod(const std::string& name, std::shared_ptr<Type> returnType,
                  const std::vector<std::shared_ptr<Type>>& paramTypes = {}) override {
        // Add method to inner type instead of this wrapper
        innerType_->addMethod(name, returnType, paramTypes);
    }

    std::vector<std::string> getAvailableMethods() const override {
        // Combine methods from both this type and inner type
        auto methods = Type::getAvailableMethods();
        auto innerMethods = innerType_->getAvailableMethods();
        methods.insert(methods.end(), innerMethods.begin(), innerMethods.end());
        return methods;
    }

    bool isAssignableTo(const std::shared_ptr<Type>& other) const override {
        if (other->isNullable()) {
            auto otherNullable = std::static_pointer_cast<NullableType>(other);
            return innerType_->isAssignableTo(otherNullable->getInnerType());
        }
        return false;
    }

    bool canConvertTo(const std::shared_ptr<Type>& other) const override {
        if (other->isNullable()) {
            auto otherNullable = std::static_pointer_cast<NullableType>(other);
            return innerType_->canConvertTo(otherNullable->getInnerType());
        }
        return false;
    }

    std::string toString() const override {
        return innerType_->toString() + "?";
    }

    std::shared_ptr<Type> propagateNull(const std::shared_ptr<Type>& chainedType) const {
        return chainedType->makeNullable();
    }

private:
    std::shared_ptr<Type> innerType_;
};

inline llvm::raw_ostream& operator<<(llvm::raw_ostream& os, const Type::Kind& kind) {
    switch(kind) {
        case Type::Kind::Int: return os << "Int";
        case Type::Kind::Float: return os << "Float";
        case Type::Kind::Bool: return os << "Bool";
        case Type::Kind::String: return os << "String";
        case Type::Kind::Void: return os << "Void";
        case Type::Kind::Array: return os << "Array";
        case Type::Kind::Map: return os << "Map";
        case Type::Kind::Function: return os << "Function";
        case Type::Kind::Class: return os << "Class";
        case Type::Kind::Interface: return os << "Interface";
        case Type::Kind::Error: return os << "Error";
        case Type::Kind::Any: return os << "Any";
        case Type::Kind::Nullable: return os << "Nullable";
        case Type::Kind::Generic: return os << "Generic";
        case Type::Kind::Null: return os << "Null";
        default: return os << "Unknown";
    }
}

// Type constants are defined in types.cpp

} // namespace pryst
