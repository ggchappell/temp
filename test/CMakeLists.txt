add_test(NAME hello_test
         COMMAND hello_test)

add_test(NAME hello_test2
         COMMAND hello_test2)

add_executable(hello_test hello_test.cpp ../hello.hpp)
target_include_directories(hello_test PRIVATE .. ../extern)

add_executable(hello_test2 hello_test2.cpp ../hello.hpp)
target_include_directories(hello_test2 PRIVATE .. ../extern)

# The CMake "test" target does not build any test executables. We
# therefore create our own target "check", which builds any test
# executables that are not up to date and then runs all tests.
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND}
                        DEPENDS hello_test hello_test2)

