/*
Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>

int main() {
    int n, sum;

    // Read the value of n
    scanf("%d", &n);

    // Calculate sum of first n natural numbers using the formula n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    // Print the result in the exact format required
    printf("Sum=%d\n", sum);

    return 0;
}