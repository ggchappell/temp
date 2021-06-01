cmake_minimum_required(VERSION 3.20)

project(HelloThere DESCRIPTION "Hello there!"
                   VERSION 1.0
                   LANGUAGES CXX)

# Set our C++ standard

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_EXTENSIONS off)

# Do the things we do NOT want to do if this project is included by some
# other project.

if(${CMAKE_PROJECT_NAME} STREQUAL HelloThere)
    include(CTest)
    if(${BUILD_TESTING})
        add_subdirectory(test)
    endif()

    add_subdirectory(example)
endif()

# Do the things we want to do regardless of whether this project is
# included in some other project.

install(FILES hello.hpp
        DESTINATION include)

