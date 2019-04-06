#ifndef _hello_world_cpp_h
#define _hello_world_cpp_h

#include <iostream>

bool is_even(int n)
{
    if (n % 2 == 0) {
        std::cout << "even" << std::endl;
        return true;
    } else {
         std::cout << "odd" << std::endl;
        return false;
    }
}

#endif