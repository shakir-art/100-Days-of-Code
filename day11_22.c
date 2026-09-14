/* Q22: Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

void calculate_profit_loss(double cost_price, double selling_price) {
    // Guard clause for invalid financial inputs
    if (cost_price <= 0 || selling_price < 0) {
        printf("Invalid price entered.\n");
        return;
    }
    
    if (selling_price > cost_price) {
        double profit = selling_price - cost_price;
        printf("Profit=%.2f%%\n", (profit / cost_price) * 100.0);
    } else if (cost_price > selling_price) {
        double loss = cost_price - selling_price;
        printf("Loss=%.2f%%\n", (loss / cost_price) * 100.0);
    } else {
        printf("No Profit No Loss\n");
    }
}

int main() {
    double cp, sp;
    if (scanf("%lf %lf", &cp, &sp) == 2) {
        calculate_profit_loss(cp, sp);
    }
    return 0;
}