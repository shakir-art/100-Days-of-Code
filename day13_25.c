/* Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Returns false strictly on mathematical errors (e.g., division by zero)
bool compute(double a, char op, double b, double *result) {
    switch(op) {
        case '+': *result = a + b; return true;
        case '-': *result = a - b; return true;
        case '*': *result = a * b; return true;
        case '/': 
            if (b == 0.0) return false;
            *result = a / b; 
            return true;
        case '%':
            if (b == 0.0) return false;
            *result = fmod(a, b); // Robust floating-point modulo
            return true;
        default:
            return false;
    }
}

int main() {
    double a, b, result;
    char op;
    
    if (scanf("%lf %c %lf", &a, &op, &b) == 3) {
        if (compute(a, op, b, &result)) {
            printf("Result = %.2f\n", result);
        } else {
            printf("Error: Invalid operation or division by zero.\n");
        }
    }
    return 0;
}
