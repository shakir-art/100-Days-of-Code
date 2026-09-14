/* Q23: Write a program to calculate library fine based on late days */
#include <stdio.h>

void process_library_fine(int late_days) {
    if (late_days <= 0) {
        printf("Fine = ₹0\n");
        return;
    }
    if (late_days > 30) {
        printf("Membership Cancelled\n");
        return;
    }
    
    int fine = 0;
    // Cascading calculation avoids repetitive bracket logic
    if (late_days <= 5) {
        fine = late_days * 2;
    } else if (late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4);
    } else {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
    }
    
    printf("Fine = ₹%d\n", fine);
}

int main() {
    int days;
    if (scanf("%d", &days) == 1) {
        process_library_fine(days);
    }
    return 0;
}