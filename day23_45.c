/* Q45: Find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */
#include <stdio.h>

double compute_series_two(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double num = 2.0 * i;
        double den = (4.0 * i) - 1.0;
        sum += (num / den);
    }
    return sum;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        printf("Sum=%.4f\n", compute_series_two(n));
    }
    return 0;
}