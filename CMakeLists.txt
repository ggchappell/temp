cmake_minimum_required(VERSION 3.20)

project(HelloThere
        DESCRIPTION "Hello there!"
        VERSION 1.0
        LANGUAGES CXX)

# **********************************************************************
# BUILD
# **********************************************************************

# Since this package consists of a single header, if this project is
# included by another project, then there is nothing to build.

# If this project is NOT being included by another project, then we
# build tests and an example program.
if("${CMAKE_PROJECT_NAME}" STREQUAL "${PROJECT_NAME}")
    include(FetchContent)
    include(CTest)

    if("${BUILD_TESTING}")
        add_subdirectory(test)
    endif()

    add_subdirectory(example)
endif()

# **********************************************************************
# INSTALL
# **********************************************************************

install(FILES hello.hpp
        DESTINATION include)

