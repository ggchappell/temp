add_test(NAME AllTests
         COMMAND hello_test)

add_executable(hello_test hello_test.cpp ../hello.hpp)
target_compile_features(hello_test PUBLIC cxx_std_11)

