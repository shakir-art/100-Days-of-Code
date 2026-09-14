/* Q44: Find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms. */
#include <stdio.h>

double compute_series_one(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double num = 2.0 * i - 1.0;
            double den = 2.0 * i;
            sum += (num / den);
        }
    }
    return sum;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        printf("Sum=%.4f\n", compute_series_one(n));
    }
    return 0;
}
