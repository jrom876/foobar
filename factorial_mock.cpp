#include "../Inc/factorial.hpp"
#include "../tests/test_framework.hpp"

using namespace testing;

FactorialMock *factorialMockObj; 

int factorial() {
    factorialMockObj->factorial();
    return 0;
}