cmake_minimum_required(VERSION 3.7...3.20)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(HelloThere DESCRIPTION "Hello there!"
                   LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL HelloThere)
    include(CTest)
endif()

if(CMAKE_PROJECT_NAME STREQUAL HelloThere AND BUILD_TESTING)
    add_subdirectory(tests)
endif()

add_test(NAME AllTests
         COMMAND hello_test)

add_executable(hello_example examples/hello_example.cpp hello.hpp)
target_compile_features(hello_example PUBLIC cxx_std_11)

