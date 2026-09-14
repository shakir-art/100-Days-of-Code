/* Q26: Write a program to print numbers from 1 to n. */
#include <stdio.h>

void print_sequence(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d%s", i, (i == n) ? "" : " ");
    }
    printf("\n");
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        print_sequence(n);
    }
    return 0;
}