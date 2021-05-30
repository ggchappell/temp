add_executable(hello_example hello_example.cpp ../hello.hpp)
target_compile_features(hello_example PUBLIC cxx_std_11)

add_custom_target(run_example COMMAND hello_example
                              DEPENDS hello_example)

