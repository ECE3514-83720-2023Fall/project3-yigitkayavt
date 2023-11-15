cmake_minimum_required(VERSION 3.5)
project(hw3 CXX)

# Require a C++11 compiler for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hw3_test hw3_function.h hw3_function.cpp hw3_test.cpp catch.hpp )
add_executable(hw3_main hw3_function.h hw3_function.cpp hw3_main.cpp )

# Unit tests 
enable_testing()

add_test(hw3_test hw3_test)

# A rule to create the submission zip file
set(CODE_TO_SUBMIT hw3_function.h hw3_function.cpp hw3_test.cpp)
add_custom_target(submission COMMAND
    ${CMAKE_COMMAND} -E tar "cfv" "${CMAKE_CURRENT_BINARY_DIR}/hw3_submission.zip" --format=zip
    ${CODE_TO_SUBMIT}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

