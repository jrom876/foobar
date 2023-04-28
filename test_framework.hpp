#include "../Inc/factorial_mock.hpp"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

#ifndef TEST_FRAMEWORK_HPP
#define TEST_FRAMEWORK_HPP

using ::testing::_;
using ::testing::InSequence;
using ::testing::Return;
using ::testing::ReturnNull;
// using ::testing::StrictMock;
using ::testing::UnitTest;

extern FactorialMock *factorialMockObj;

class FTestFixture : public ::testing::Test
{
  public:
    FTestFixture(){};
    virtual ~FTestFixture(){};

  protected:

    void SetUp() override
    {
        // do things here that need to happen globally for a test fixture
        factorialMockObj = new FactorialMock;
    };

    void TearDown() override{
        factorialMockObj->~FactorialMock();
    };
};

#endif //TEST_FRAMEWORK_HPP