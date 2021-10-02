#include <stdio.h>
#include "mathoperations.h"

int main() {
    // MathOperations Tests
    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));
    printf("Subtraction of 3, 1: %d\n", subtract(2, 3, 1));
    printf("Multiplication of 1, 2, 3, 4: %d\n", multiply(4, 1, 2, 3, 4));
    printf("Integer division of 3, 2: %d\n", intdiv(3, 2, 0));
    printf("Modulo of 3, 2: %d\n", intdiv(3, 2, 1));
    printf("Real division of 3, 2: %f\n", realdiv(3, 2));
    printf("Digit sum of 426: %d\n", digitsum(426));
    printf("Factorial of 4: %ld\n", factorial(4));
    return 0;
}
