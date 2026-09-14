/* Q38: Write a program to find the sum of digits of a number. */
#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(long long n) {
    int sum = 0;
    n = llabs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("Sum of digits=%d\n", sum_of_digits(n));
    }
    return 0;
}