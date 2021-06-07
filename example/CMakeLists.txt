# **********************************************************************
# BUILD
# **********************************************************************

add_executable(hello_example hello_example.cpp)
target_include_directories(hello_example PRIVATE ..)
set_target_properties(
    hello_example PROPERTIES
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF)

# Target "run_example" builds & executes the example program.
add_custom_target(
    run_example
    COMMAND hello_example
    DEPENDS hello_example)

