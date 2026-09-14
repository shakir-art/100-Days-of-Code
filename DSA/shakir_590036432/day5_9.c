/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    // Read principal, rate, and time
    scanf("%lf %lf %lf", &principal, &rate, &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest using the standard formula
    compound_interest = principal * (pow(1.0 + (rate / 100.0), time) - 1.0);

    // Using %g format specifier to automatically suppress trailing zeros (e.g., 100 instead of 100.0)
    printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);

    return 0;
}