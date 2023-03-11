#include "fun.h"
#include <iostream>

    short power(long long x, unsigned short n)
    { 
        int y = 1;
        for (int i = 0; i < n; i++)
        {
            y *= x;
        }
        return y; 
    };
    
       
