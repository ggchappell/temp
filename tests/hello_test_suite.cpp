// hello_test_suite.cpp

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../extern/doctest.h"

#include "../hello.hpp"

#include <string>
using std::string;


TEST_CASE("Hello::hello returns correct value")
{
    Hello h;
    string && result = h.hello();
    CHECK(result == "HELLO!!!");
}

