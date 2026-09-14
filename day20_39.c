/* Q39: Write a program to find the product of odd digits of a number. */
#include <stdio.h>
#include <stdlib.h>

long long product_of_odd_digits(long long n) {
    long long product = 1;
    int odd_found = 0;
    n = llabs(n);
    if (n == 0) return 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            odd_found = 1;
        }
        n /= 10;
    }
    return odd_found ? product : 1; 
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("Product=%lld\n", product_of_odd_digits(n));
    }
    return 0;
}
