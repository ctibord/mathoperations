#include <stdio.h>
#include <stdlib.h>
#include "mathoperations.h"

int main() {
    // MathOperations Tests
    int *fib, i;
    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));
    printf("Subtraction of 3, 1: %d\n", subtract(2, 3, 1));
    printf("Multiplication of 1, 2, 3, 4: %d\n", multiply(4, 1, 2, 3, 4));
    printf("Integer division of 3, 2: %d\n", intdiv(3, 2, 0));
    printf("Modulo of 3, 2: %d\n", intdiv(3, 2, 1));
    printf("Real division of 3, 2: %f\n", realdiv(3, 2));
    printf("Digit sum of 426: %d\n", digitsum(426));
    printf("Factorial of 4: %ld\n", factorial(4));
    printf("Digit count of 125: %d\n", digitcount(125));
    printf("Getting Fibonacci sequence...\n");
    fib = fibonacci(15);
    if (fib != NULL) {
        for (i = 0; i < 15; i++)
            printf("%d ", fib[i]);
        printf("\n\n");
        free(fib);
        fib = NULL;
    } else printf("Error while getting Fibonacci sequence...\n");
    printf("Power of 2^4 = %d\n", power(2, 4));
    return 0;
}
