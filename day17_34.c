/* Q34: Write a program to check if a number is prime. */
#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", is_prime(n) ? "Prime" : "Not prime");
    }
    return 0;
}
