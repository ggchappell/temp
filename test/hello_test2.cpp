// hello_test2.cpp

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "hello.hpp"

#include <string>
using std::string;


TEST_CASE("Hello::hello REALLY returns correct value")
{
    Hello h;
    string && result = h.hello();
    CHECK(result == "HELLO!!!");
}

