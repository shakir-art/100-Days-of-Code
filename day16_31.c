/* Q31: Write a program to print equivalent binary representation. */
#include <stdio.h>

void print_binary(unsigned int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    unsigned int binary[64];
    int index = 0;
    while (n > 0) {
        binary[index++] = n % 2;
        n /= 2;
    }
    for (int i = index - 1; i >= 0; i--) printf("%u", binary[i]);
    printf("\n");
}

int main() {
    unsigned int n;
    if (scanf("%u", &n) == 1) print_binary(n);
    return 0;
}