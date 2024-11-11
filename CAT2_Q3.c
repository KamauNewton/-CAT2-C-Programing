#include <stdio.h>

#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define HOURS_THRESHOLD 600

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

    // Request user to enter hours worked in a week
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours_worked);

    // Request user to enter hourly wage
    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay
    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        float regular_hours = 40;
        float overtime_hours = hours_worked - 40;
        float overtime_rate = hourly_wage * 1.5;
        gross_pay = (regular_hours * hourly_wage) + (overtime_hours * overtime_rate);
    }

    // Calculate taxes
    float tax_1 = TAX_RATE_1 * HOURS_THRESHOLD;
    float tax_2 = (gross_pay - HOURS_THRESHOLD) * TAX_RATE_2;
    taxes = tax_1 + tax_2;

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Print the results
    printf("\nGross Pay: %.2f\n", gross_pay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net Pay: %.2f\n", net_pay);

    return 0;
}