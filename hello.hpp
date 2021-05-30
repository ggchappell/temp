// hello.hpp

#ifndef FILE_HELLO_HPP_INCLUDED
#define FILE_HELLO_HPP_INCLUDED

#include <string>
// For std::string

class Hello {
public:

    std::string hello()
    {
        auto s = std::string("HELLO!!");
        return s;
    }
};

#endif  //#ifndef FILE_HELLO_HPP_INCLUDED

