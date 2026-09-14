/* Q32: Write a program to check if a number is a palindrome. */
#include <stdio.h>

int is_palindrome(long long n) {
    if (n < 0) return 0;
    long long original = n, reversed = 0;
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }
    return (original == reversed) ? 1 : 0;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("%s\n", is_palindrome(n) ? "Palindrome" : "Not a palindrome");
    }
    return 0;
}