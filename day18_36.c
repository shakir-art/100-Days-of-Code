/* Q36: Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>

int calculate_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("HCF=%d\n", calculate_gcd(a, b));
    }
    return 0;
}
