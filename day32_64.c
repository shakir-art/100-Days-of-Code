/* Q64: Find the digit that occurs the most times in an integer number. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        int freq[10] = {0}; // Frequency map for digits 0-9
        n = llabs(n);
        
        if (n == 0) {
            freq[0]++;
        } else {
            while (n > 0) {
                freq[n % 10]++;
                n /= 10;
            }
        }
        
        int max_freq = 0, most_frequent_digit = 0;
        for (int i = 0; i < 10; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                most_frequent_digit = i;
            }
        }
        printf("Most frequent digit: %d\n", most_frequent_digit);
    }
    return 0;
}
