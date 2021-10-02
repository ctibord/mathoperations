// MathOperations
// Author: ctibord

#ifndef MATHOPERATIONS_MATHOPERATIONS_H
#define MATHOPERATIONS_MATHOPERATIONS_H
#include <stdarg.h>
int sum(int count, ...);
int subtract(int count, ...);
int multiply(int count, ...);
int intdiv(int num1, int num2, int modulo);
float realdiv(int num1, int num2);
int digitsum(int num);
long factorial(int num);
int digitcount(int num);
int* fibonacci(int count);
int power(int num, int powerno);
#endif //MATHOPERATIONS_MATHOPERATIONS_H
