/* Q35: Write a program to print all factors of a given number. */
#include <stdio.h>

void print_factors(int n) {
    if (n <= 0) return;
    printf("Factors: ");
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("%d\n", n);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) print_factors(n);
    return 0;
}