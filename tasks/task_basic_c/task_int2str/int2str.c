#include <stdlib.h>
#include <math.h>

char* int2str(int num) {
    if (num == -2147483648) {
        return "-2147483648";
    }
    int sign = num < 0 ? -1 : 0;
    num = abs(num);
    int size = num == 0 ? 1 : (int)log10(num) + 1; // учитываем нулевой символ
    size += sign == -1 ? 1 : 0;  // учитываем знак
    char* str = (char*)malloc(sizeof(char) * size + 13);
    int i = 0;
    do {
        str[size - 1 - i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    if (sign == -1) {
        str[0] = '-';
    }
    str[size] = '\0';
    // strrev(str);
    return str;
}
