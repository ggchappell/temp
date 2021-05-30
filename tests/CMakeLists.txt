cmake_minimum_required(VERSION 3.7...3.20)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

add_executable(hello_test hello_test.cpp ../hello.hpp)
target_compile_features(hello_test PUBLIC cxx_std_11)

