/* Q46: Write a program to print a solid 5x5 square pattern using nested loops. */
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}