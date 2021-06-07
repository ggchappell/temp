# Get "doctest" testing package

FetchContent_Declare(
    DocTest
    GIT_REPOSITORY "https://github.com/onqtam/doctest"
    GIT_TAG 2.4.6)
message(STATUS "Fetching doctest package")
FetchContent_MakeAvailable(DocTest)
message(STATUS "Fetching doctest package - done")

# Specify our tests. Each test target is added to a list in variable
# TEST_TARGETS.

add_test(NAME hello_test
         COMMAND hello_test)
list(APPEND TEST_TARGETS hello_test)

add_test(NAME hello_test2
         COMMAND hello_test2)
list(APPEND TEST_TARGETS hello_test2)

# BUILD

add_executable(hello_test hello_test.cpp)
target_include_directories(hello_test PRIVATE ..)
target_link_libraries(hello_test PRIVATE doctest)

add_executable(hello_test2 hello_test2.cpp)
target_include_directories(hello_test2 PRIVATE ..)
target_link_libraries(hello_test2 PRIVATE doctest)

# The CMake "test" target does not build any test executables. We
# therefore create our own target "check", which builds any test
# executables that are not up to date and then runs all tests.

add_custom_target(check COMMAND "${CMAKE_CTEST_COMMAND}"
                        DEPENDS build_all_tests)
add_custom_target(build_all_tests DEPENDS "${TEST_TARGETS}")

