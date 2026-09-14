/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    // Read temperature in Celsius
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print output matching the exact format
    printf("Fahrenheit=%d\n", fahrenheit);

    return 0;
}