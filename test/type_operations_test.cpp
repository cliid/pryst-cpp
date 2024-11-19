#include <gtest/gtest.h>
#include "../src/compiler.hpp"
#include "../src/runtime/runtime_type_ops.hpp"

class TypeOperationsTest : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(TypeOperationsTest, TestInstanceofBasic) {
    const char* source = R"(
        class Animal {}
        class Dog extends Animal {}

        fn main() -> int {
            let dog = new Dog();
            if (!(dog instanceof Dog)) {
                return 1;
            }
            if (!(dog instanceof Animal)) {
                return 2;
            }
            if (dog instanceof String) {
                return 3;
            }
            return 0;
        }
    )";

    Compiler compiler;
    EXPECT_EQ(compiler.compile(source), 0);
}

TEST_F(TypeOperationsTest, TestTypeofBasic) {
    const char* source = R"(
        class Animal {}

        fn main() -> int {
            let animal: Animal? = new Animal();
            if (typeof animal != "Animal?") {
                return 1;
            }

            let num = 42;
            if (typeof num != "int") {
                return 2;
            }
            return 0;
        }
    )";

    Compiler compiler;
    EXPECT_EQ(compiler.compile(source), 0);
}

TEST_F(TypeOperationsTest, TestNullableTypes) {
    const char* source = R"(
        class Test {}

        fn main() -> int {
            let obj: Test? = null;
            if (typeof obj != "Test?") {
                return 1;
            }

            obj = new Test();
            if (!(obj instanceof Test)) {
                return 2;
            }
            return 0;
        }
    )";

    Compiler compiler;
    EXPECT_EQ(compiler.compile(source), 0);
}

TEST_F(TypeOperationsTest, TestComplexInheritance) {
    const char* source = R"(
        class Animal {}
        class Mammal extends Animal {}
        class Dog extends Mammal {}
        class Cat extends Mammal {}

        fn main() -> int {
            let dog: Animal = new Dog();
            if (!(dog instanceof Animal)) return 1;
            if (!(dog instanceof Mammal)) return 2;
            if (!(dog instanceof Dog)) return 3;
            if (dog instanceof Cat) return 4;
            return 0;
        }
    )";

    Compiler compiler;
    EXPECT_EQ(compiler.compile(source), 0);
}

TEST_F(TypeOperationsTest, TestNullableInheritance) {
    const char* source = R"(
        class Animal {}
        class Dog extends Animal {}

        fn main() -> int {
            let dog: Dog? = new Dog();
            if (typeof dog != "Dog?") return 1;
            if (!(dog instanceof Dog)) return 2;
            if (!(dog instanceof Animal)) return 3;

            dog = null;
            if (typeof dog != "Dog?") return 4;
            if (dog instanceof Dog) return 5;
            return 0;
        }
    )";

    Compiler compiler;
    EXPECT_EQ(compiler.compile(source), 0);
}

TEST_F(TypeOperationsTest, TestPrimitiveTypes) {
    const char* source = R"(
        fn main() -> int {
            let i = 42;
            let f = 3.14;
            let b = true;
            let s = "hello";

            if (typeof i != "int") return 1;
            if (typeof f != "float") return 2;
            if (typeof b != "bool") return 3;
            if (typeof s != "str") return 4;
            return 0;
        }
    )";

    Compiler compiler;
    EXPECT_EQ(compiler.compile(source), 0);
}
