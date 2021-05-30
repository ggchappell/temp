# Indicate CMake version. Code below follows the recommendation from:
#   https://cliutils.gitlab.io/modern-cmake/
cmake_minimum_required(VERSION 3.7...3.20)
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(HelloThere DESCRIPTION "Hello there!"
                   LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL HelloThere)
    include(CTest)
    add_subdirectory(test)

    add_subdirectory(example)
endif()

