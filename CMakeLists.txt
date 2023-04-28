## To run this file:
#       cmake .
#       cmake --build .
#       ./bin/app

## To run tmain.cpp, use the following call:
# g++ -o tmanger Src/tmain.cpp Src/foo.cpp Src/bar.cpp Src/factorial.cpp Src/factorial_mock.cpp -lgtest -lpthread

## See the runnit.sh script located in the main directory of this project

cmake_minimum_required(VERSION 3.16)

set (PROJECT_NAME "app")

project(${PROJECT_NAME}
        VERSION 1.0
        LANGUAGES C CXX ASM
        DESCRIPTION "A CMake Experiment"
)

# Set CPPSOURCES with all C++ Sources
set(CPPSOURCES 
    Src/main.cpp 
    Src/foo.cpp 
    Src/bar.cpp 
    Src/factorial.cpp
    mocks/factorial_mock.cpp
    tests/test_framework.cpp
)

include_directories(
    Inc
    Src
    mocks
    tests
)

# be sure there's exactly one main() function in the source files
add_executable(
    ${PROJECT_NAME} 
    ${CPPSOURCES}
) 

#target_link_libraries(app applib)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

target_compile_options(${PROJECT_NAME} PRIVATE 
            -Wall -Wextra -Wpedantic 
            -lrt -lm 
            -I$GOOGLETESTDIR/include 
            -L$GOOGLETESTDIR/lib 
            -lgtest -lpthread
)

# Get GTest
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)

FetchContent_MakeAvailable(googletest)

# Our tests need to let CTest know we're running tests 
enable_testing()

add_compile_definitions(TEST)

# Binary Location
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin/)
