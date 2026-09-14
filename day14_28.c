/* Q28: Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>

unsigned long long product_of_evens(int n) {
    if (n < 2) return 0;

    unsigned long long product = 1;
    for (int i = 2; i <= n; i += 2) {
        product *= (unsigned long long)i;
    }
    return product;
}

int main(void) {
    int n;

    if (scanf("%d", &n) == 1) {
        printf("Product=%llu\n", product_of_evens(n));
    }

    return 0;
}
