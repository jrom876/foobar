#!/bin/bash
## This script builds cmake 
cmake .
cmake --build .

# This script runs the ELF file compiled by cmake
echo
echo "Running the ELF file compiled by cmake, bin/app"
echo
./bin/app
echo

## This script compiles and runs the gmock/gtest program tmain.cpp
g++ -o tmanger tests/tmain.cpp Src/foo.cpp Src/bar.cpp Src/factorial.cpp mocks/factorial_mock.cpp -lgtest -lpthread
echo "Compiling and running the gmock ELF file, tmain"
echo
./tmanger


