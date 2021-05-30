add_test(NAME AllTests
         COMMAND hello_test)

# The CMake built-in "test" target does not build any test executables.
# Therefore, as so many others have done, we make our own target
# "check", which builds any test executables that are not up to date and
# then runs all tests.
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND}
                        DEPENDS hello_test)

add_executable(hello_test hello_test.cpp ../hello.hpp)
target_compile_features(hello_test PUBLIC cxx_std_11)

