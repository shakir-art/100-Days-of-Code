/* Q29: Write a program to calculate the factorial of a number. */
#include <stdio.h>

unsigned long long calculate_factorial(unsigned int n) {
    unsigned long long fact = 1;
    for (unsigned int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) == 1) {
        printf("Factorial=%llu\n", calculate_factorial(n));
    }
    return 0;
}