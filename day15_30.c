/* Q30: Write a program to reverse a given number. */
#include <stdio.h>

long long reverse_number(long long n) {
    long long reversed = 0;
    while (n != 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }
    return reversed;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("Reversed=%lld\n", reverse_number(n));
    }
    return 0;
}
