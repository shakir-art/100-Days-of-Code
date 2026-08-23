#include <stdio.h>

void main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);
}

soulition -
PS E:\C PROGRAMMING PRACTICE> gcc number.c -o number.exe
PS E:\C PROGRAMMING PRACTICE> .\number.exe
Enter two numbers: 7 9
Sum = 16
PS E:\C PROGRAMMING PRACTICE> 
