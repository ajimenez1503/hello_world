#ifndef _hello_world_c_h
#define _hello_world_c_h

#include <stdio.h>

#define false 0
#define true 1
#define bool int

bool is_even(int n)
{
    if (n % 2 == 0) {
        printf("even\n");
        return true;
    } else {
        printf("odd\n");
        return false;
    }
}

#endif