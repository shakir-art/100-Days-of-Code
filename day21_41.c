/* Q41: Write a program to swap the first and last digit of a number. */
#include <stdio.h>
#include <math.h>

long long swap_first_last(long long n) {
    if (n < 10 && n > -10) return n;
    int last = n % 10;
    int digits = (int)log10(n);
    int first = (int)(n / pow(10, digits));
    long long middle = n % (long long)pow(10, digits);
    middle = middle / 10;
    return (last * (long long)pow(10, digits)) + (middle * 10) + first;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("Swapped=%lld\n", swap_first_last(n));
    }
    return 0;
}