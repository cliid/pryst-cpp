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
