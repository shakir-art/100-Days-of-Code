/* Q40: Write a program to find the 1's complement of a binary number. */
#include <stdio.h>

void print_ones_complement(char *binary_str) {
    printf("1's complement=");
    for (int i = 0; binary_str[i] != '\0'; i++) {
        if (binary_str[i] == '0') putchar('1');
        else if (binary_str[i] == '1') putchar('0');
        else putchar(binary_str[i]);
    }
    putchar('\n');
}

int main() {
    char binary[256];
    if (scanf("%255s", binary) == 1) print_ones_complement(binary);
    return 0;
}