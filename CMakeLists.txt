cmake_minimum_required(VERSION 3.0)

project(HelloThere DESCRIPTION "Hello there!"
                   LANGUAGES CXX)

add_executable(test_suite tests/hello_test.cpp tests/doctest.h hello.hpp)
target_compile_features(test_suite PUBLIC cxx_std_11)

add_executable(hello_example examples/hello_example.cpp hello.hpp)
target_compile_features(test_suite PUBLIC cxx_std_11)

