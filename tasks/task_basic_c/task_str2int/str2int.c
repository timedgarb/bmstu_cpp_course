#include <assert.h>
#include <limits.h>
#include "str2int.h"


int str2int(const char *str) {
    
    int sign = 1;
    
    long long result = 0;

    \
    if (*str == '-') {
        sign = -1;
        str++;
    }
    else if (*str == '+') {
        str++;
    }
    
    assert(*str != '\0');
    
    while (*str != '\0') {
       
        assert('0' <= *str && *str <= '9');

        
        result = result * 10 + (*str - '0');
       
        str++;
        
        assert((sign == 1 && result <= (long long)INT_MAX) || (sign == -1 && (-result) >= (long long)INT_MIN));
    }

    
    return (int)(sign * result);
}