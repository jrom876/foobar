#include <iostream>
#include "../Inc/foo.h"
#include "../Inc/bar.h"
#include "../Inc/factorial.hpp"
#include "../tests/test_framework.hpp"

// Compile for gtest using the following:
// g++ -o manger Src/main.cpp Src/foo.cpp Src/bar.cpp Src/factorial.cpp Src/factorial_mock.cpp -lgtest -lpthread

int main () {
	foo();
	bar();
	factorial(7);
	// std::cout << "Hello World!\n";
	return 0;
}
