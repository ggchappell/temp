cmake_minimum_required(VERSION 3.20)

project(HelloThere DESCRIPTION "Hello there!"
                   VERSION 1.0
                   LANGUAGES CXX)

# Set our C++ standard, allowing for override

if(NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 11)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT DEFINED CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

# BUILD

if("${CMAKE_PROJECT_NAME}" STREQUAL "${PROJECT_NAME}")
    # Things we do NOT want to build if this project is included by some
    # other project
    include(FetchContent)
    include(CTest)

    if("${BUILD_TESTING}")
        add_subdirectory(test)
    endif()

    add_subdirectory(example)
endif()

# INSTALL

install(FILES hello.hpp
        DESTINATION include)

