/* Q43: Write a program to check if a number is a strong number. */
#include <stdio.h>

int compute_factorial(int digit) {
    const int factorials[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    return factorials[digit];
}

int is_strong_number(int n) {
    if (n <= 0) return 0;
    int original = n, sum = 0;
    while (n > 0) {
        sum += compute_factorial(n % 10);
        n /= 10;
    }
    return (sum == original) ? 1 : 0;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", is_strong_number(n) ? "Strong number" : "Not a strong number");
    }
    return 0;
}
