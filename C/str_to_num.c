#include <string.h>

int str_to_int(const char *str) {

    // Checking for unary '+' & '-'
    int positive = str[0] == '+', negative = str[0] == '-';
    // Determining start and end point
    int start = positive || negative, str_len = strlen(str) - 1;

    // Traverse string in reverse and add each digit multiplied by pow10
    int num = 0;
    for (int i = str_len, pow10 = 1; i >= start; i--) {

        num += (str[i] - '0') * pow10;
        pow10 *= 10;        // pow10 increases as digit's place increases
    }

    num = negative ? -num : num;
    return num;
}
