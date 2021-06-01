cmake_minimum_required(VERSION 3.20)

project(HelloThere DESCRIPTION "Hello there!"
                   LANGUAGES CXX)

# Do the things we want to do regardless of whether this project is
# included in some other project.

# (Nothing here)

# Do the things we do NOT want to do if this project is included by some
# other project.
if(${CMAKE_PROJECT_NAME} STREQUAL HelloThere)
    include(CTest)
    add_subdirectory(test)

    add_subdirectory(example)
endif()

