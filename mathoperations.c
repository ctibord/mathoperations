// MathOperations
// Author: ctibord

#include <stdarg.h>

int sum(int count, ...);
int subtract(int count, ...);
int multiply(int count, ...);
int intdiv(int num1, int num2, int modulo);

int sum(int count, ...) {
    int result = 0, i;
    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++)
        result += va_arg(args, int);
    va_end(args);
    return result;
}

int subtract(int count, ...) {
    int result = 0, i;
    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        if (i == 0)
            result = va_arg(args, int);
        else result -= va_arg(args, int);
    }
    va_end(args);
    return result;
}

int multiply(int count, ...) {
    int result = 0, i;
    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        if (i == 0)
            result = va_arg(args, int);
        else result *= va_arg(args, int);
    }
    va_end(args);
    return result;
}

// If you want to use modulo, please pass 1 as third argument. Otherwise, type any number.
int intdiv(int num1, int num2, int modulo) {
    if (num2 == 0)
        return 0;
    else if (modulo == 1)
        return num1 / num2;
    else return num1 % num2;
}
