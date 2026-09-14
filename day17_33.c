/* Q33: Write a program to check if a number is an Armstrong number. */
#include <stdio.h>
#include <math.h>

int is_armstrong(int n) {
    if (n < 0) return 0;
    int original = n, sum = 0, digits = 0;
    for (int temp = n; temp > 0; temp /= 10) digits++;
    for (int temp = n; temp > 0; temp /= 10) sum += pow(temp % 10, digits);
    return (sum == original) ? 1 : 0;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", is_armstrong(n) ? "Armstrong number" : "Not an Armstrong number");
    }
    return 0;
}