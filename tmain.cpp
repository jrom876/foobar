// #include <iostream>
#include "../Inc/foo.h"
#include "../Inc/bar.h"
#include "../Inc/factorial.hpp"
#include "../tests/test_framework.hpp"

using namespace testing;

// Compile for gtest using the following:
// g++ -o manger Src/main.cpp Src/foo.cpp Src/bar.cpp Src/factorial.cpp Src/factorial_mock.cpp -lgtest -lpthread

TEST(FactorialTest, FactorialOfZeroShouldBeOne)
{
    ASSERT_EQ(1, factorial(0));
}

TEST(FactorialTest, FactorialIterator)
{   
    for (int k = 5; k >0; k--) {
        EXPECT_FALSE(factorial(k) == 34);
    }
}

TEST(FactorialTest, FactorialOfPositiveNos)
{
    // FactorialMock fmock;
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(5040, factorial(7));
    EXPECT_TRUE(factorial(4) == 24);
    EXPECT_FALSE(factorial(4) == 34);
}

int main () {
	foo();
	bar();
	factorial(12);
	// std::cout << "Hello World!\n";
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
	return 0;
}
