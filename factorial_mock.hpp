// #include "gtest/gtest.h"
#include "gmock/gmock.h"

class Factorialnterface {
    public:
        virtual ~Factorialnterface() {}
        virtual int factorial() = 0;
};

class FactorialMock : public Factorialnterface {
    public:
        virtual ~FactorialMock() {}
        MOCK_METHOD(int, factorial, ());
};