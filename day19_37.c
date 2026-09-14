/* Q37: Write a program to find the LCM of two numbers. */
#include <stdio.h>

long long calculate_gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long calculate_lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / calculate_gcd(a, b)) * b;
}

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        printf("LCM=%lld\n", calculate_lcm(a, b));
    }
    return 0;
}