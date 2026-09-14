/* Q27: Write a program to print the sum of the first n odd numbers. */
#include <stdio.h>

// Professional algorithm: The sum of the first 'n' odd numbers mathematically simplifies perfectly to n^2.
// This reduces time complexity from O(n) loop to O(1) constant time.
unsigned long long sum_of_odds(unsigned long long n) {
    return n * n;
}

int main() {
    unsigned long long n;
    if (scanf("%llu", &n) == 1) {
        printf("Sum=%llu\n", sum_of_odds(n));
    }
    return 0;
}