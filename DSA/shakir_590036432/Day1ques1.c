//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
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
