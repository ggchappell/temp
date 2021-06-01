add_executable(hello_example hello_example.cpp ../hello.hpp)
target_include_directories(hello_example PRIVATE ..)

add_custom_target(run_example COMMAND hello_example
                              DEPENDS hello_example)

