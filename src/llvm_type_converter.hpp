#pragma once

#include "types.hpp"
#include <llvm/IR/Type.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/LLVMContext.h>
#include <memory>

namespace pryst {

class LLVMTypeConverter {
public:
    explicit LLVMTypeConverter(llvm::LLVMContext& context) : context_(context) {}

    llvm::Type* convert(const std::shared_ptr<Type>& type) {
        switch (type->getKind()) {
            case Type::Kind::Int:
                return llvm::Type::getInt32Ty(context_);
            case Type::Kind::Float:
                return llvm::Type::getDoubleTy(context_);
            case Type::Kind::Bool:
                return llvm::Type::getInt1Ty(context_);
            case Type::Kind::String:
                return llvm::Type::getInt8PtrTy(context_);
            case Type::Kind::Void:
                return llvm::Type::getVoidTy(context_);
            case Type::Kind::Array:
                return convertArrayType(std::static_pointer_cast<ArrayType>(type));
            case Type::Kind::Map:
                return convertMapType(std::static_pointer_cast<MapType>(type));
            case Type::Kind::Class:
                return convertClassType(std::static_pointer_cast<ClassType>(type));
            case Type::Kind::Nullable:
                return convertNullableType(std::static_pointer_cast<NullableType>(type));
            default:
                throw std::runtime_error("Unsupported type for LLVM conversion");
        }
    }

private:
    llvm::Type* convertArrayType(const std::shared_ptr<ArrayType>& type) {
        auto elementType = convert(type->getElementType());
        auto arrayType = llvm::ArrayType::get(elementType, 0);
        return llvm::PointerType::getUnqual(arrayType);
    }

    llvm::Type* convertMapType(const std::shared_ptr<MapType>& type) {
        // Maps are implemented as pointers to opaque structures
        auto i8Ty = llvm::Type::getInt8Ty(context_);
        return llvm::PointerType::getUnqual(i8Ty);
    }

    llvm::Type* convertClassType(const std::shared_ptr<ClassType>& type) {
        std::vector<llvm::Type*> memberTypes;
        for (const auto& memberName : type->getAvailableMembers()) {
            auto memberType = type->getField(memberName);
            memberTypes.push_back(convert(memberType));
        }
        return llvm::StructType::create(context_, memberTypes, type->getName());
    }

    llvm::Type* convertNullableType(const std::shared_ptr<NullableType>& type) {
        return llvm::PointerType::getUnqual(convert(type->getInnerType()));
    }

    llvm::LLVMContext& context_;
};

} // namespace pryst
