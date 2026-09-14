/* Q24: Write a program to calculate electricity bill based on units consumed */
#include <stdio.h>

// Using a continuous reduction method for cleaner threshold logic
double calculate_bill(int units) {
    double total_bill = 0.0;
    
    if (units > 300) {
        total_bill += (units - 300) * 12.0;
        units = 300;
    }
    if (units > 200) {
        total_bill += (units - 200) * 10.0;
        units = 200;
    }
    if (units > 100) {
        total_bill += (units - 100) * 7.0;
        units = 100;
    }
    if (units > 0) {
        total_bill += units * 5.0;
    }
    
    return total_bill;
}

int main() {
    int units;
    if (scanf("%d", &units) == 1 && units >= 0) {
        printf("Total Bill = ₹%.2f\n", calculate_bill(units));
    }
    return 0;
}