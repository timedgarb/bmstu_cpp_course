#include <stdlib.h>
#include "int2str.h"

char* int2str(int num) {
    int sign;
  if (num < 0) sign = -1;
  else sign = 0;
    unsigned int number = num < 0 ? num * -1 : num;
    int size = 1;
  unsigned int temp = number;
  while (temp /= 10)
  {
    size++; 
  }
  if (sign == -1) size += 1;
  else size += 0;
  
    char* str = (char*)malloc(sizeof(char)* 12);
    int i = 0;
    
    str[size - 1 - i++] = number % 10 + '0';
    number /= 10;
    while (number > 0) {
        str[size - 1 - i++] = number % 10 + '0';
        number /= 10;
    }
    if (sign == -1) {
        str[0] = '-';
    }
    str[size] = '\0';
    
    return str; 
}


