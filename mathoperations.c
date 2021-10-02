// MathOperations
// Author: ctibord

#include <stdarg.h>
#include <stdlib.h>

int sum(int count, ...);
int subtract(int count, ...);
int multiply(int count, ...);
int intdiv(int num1, int num2, int modulo);
float realdiv(int num1, int num2);
int digitsum(int num);
long factorial(int num);
int digitcount(int num);
int* fibonacci(int count);

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

float realdiv(int num1, int num2) {
    if (num2 == 0)
        return (float) 0;
    else return (float) num1 / (float) num2;
}

int digitsum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

long factorial(int num) {
    long res = 1;
    int i;
    for (i = 2; i <= num; i++)
        res *= (long) i;
    return res;
}

int digitcount(int num) {
    int count = 0;
    if (num == 0)
        return 1;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int* fibonacci(int count) {
    int n1 = 0, n2 = 1, n3, i, *arr;
    if (count <= 0)
        return NULL;
    arr = (int*) malloc(sizeof(int) * count);
    if (arr == NULL)
        return NULL;
    arr[0] = n1;
    if (count > 1) {
        arr[1] = n2;
        for (i = 2; i < count; ++i) {
            n3 = n1 + n2;
            arr[i] = n3;
            n1 = n2;
            n2 = n3;
        }
    }
    return arr;
}
