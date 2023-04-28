// factorial.cpp
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include "../Inc/factorial.hpp"
// #include "../Inc/factorial_mock.hpp"
#include "gtest/gtest.h"

/// STANDARD DEFINITIONS FOR PROJECT SCICALC 
#define PI	3.14159265358979323846 // ad infinitum
#define LIGHT_SPEED		299792458 // meters per second
#define DATA_SIZE 1000
#define DELTA 1.0e-6
#define KILO 1000
#define MEGA 1000000
#define GIGA 1000000000
#define TERA 1000000000000 

int factorial(int n)
{
    int factorial = 1.0;
    if  (n<0) return -1;
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("%d\n", factorial);
        return factorial;
    }
}
