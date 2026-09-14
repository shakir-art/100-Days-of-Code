/* Q42: Write a program to check if a number is a perfect number. */
#include <stdio.h>

int is_perfect_number(int n) {
    if (n <= 1) return 0;
    int sum = 1; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) sum += n / i;
        }
    }
    return (sum == n) ? 1 : 0;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", is_perfect_number(n) ? "Perfect number" : "Not a perfect number");
    }
    return 0;
}
