// hello_example.cpp

#include "../hello.hpp"
// For class Hello
#include <iostream>
using std::cout;
using std::endl;


int main()
{
    Hello h;
    cout << h.hello() << endl;
}

