/* Q54: Write a program to print a centered diamond pattern. */
#include <stdio.h>

int main() {
    int rows = 4; 
    // Upper half
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    // Lower half
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}