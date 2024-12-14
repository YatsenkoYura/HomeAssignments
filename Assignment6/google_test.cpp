#include "Class1.hpp"
#include "Class2.hpp"
#include "Class3.hpp"
#include "myTemplateClass.hpp"
#include <gtest/gtest.h>
#include <vector>

TEST(Class1Tests, BarReturnsTrueWithPositive) {
    Class1 cls1;
    std::vector<float> vec = {1.0f};
    myTemplateClass<Class1> templ(cls1, 5, vec);
    EXPECT_TRUE(templ.foo());
}

TEST(Class1Tests, BarReturnsFalseWithNonPositive) {
    Class1 cls1;
    std::vector<float> vec = {1.0f};
    myTemplateClass<Class1> templ(cls1, -5, vec);
    EXPECT_FALSE(templ.foo());
}

TEST(Class2Tests, BarReturnsTrueWithNonEmptyVector) {
    Class2 cls2;
    std::vector<float> vec = {1.0f};
    myTemplateClass<Class2> templ(cls2, 0, vec);
    EXPECT_TRUE(templ.foo());
}

TEST(Class2Tests, BarReturnsFalseWithEmptyVector) {
    Class2 cls2;
    std::vector<float> vec;
    myTemplateClass<Class2> templ(cls2, 0, vec);
    EXPECT_FALSE(templ.foo());
}

TEST(Class3Tests, BarReturnsTrueWithMatchingSize) {
    Class3 cls3;
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    myTemplateClass<Class3> templ(cls3, -3, vec);
    EXPECT_TRUE(templ.foo());
}

TEST(Class3Tests, BarReturnsFalseWithNonMatchingSize) {
    Class3 cls3;
    std::vector<float> vec = {1.0f, 2.0f};
    myTemplateClass<Class3> templ(cls3, -3, vec);
    EXPECT_FALSE(templ.foo());
}

TEST(SpecializationTests, IntSpecializationReturnsTrue) {
    myTemplateClass<int> templ(42, 0, {});
    EXPECT_TRUE(templ.foo());
}

TEST(SpecializationTests, DoubleSpecializationReturnsFalse) {
    myTemplateClass<double> templ(3.14, 0, {});
    EXPECT_FALSE(templ.foo());
}