// Program to calculate weekly pay, given hours worked
// Author: Mark Clifford

#include <stdio.h>
#include <stdlib.h>

float basic_rate = 12.00;
float overtime_rate = 1.5;
float taxrate_low = .15;
float taxrate_medium = .20;
float taxrate_high = .25;
float overtime_hours = 40.0;

int main()
{
    float hours_worked, gross_pay, net_pay;
    float tax_low = 0;
    float tax_medium = 0;
    float tax_high = 0;
    float tax_total;

    printf("Weekly Pay Calculation.\nPlease enter the number of hours worked: ");
    scanf("%f", &hours_worked);

    /// Gross Pay calculation
    if (hours_worked > overtime_hours)
    {
        float overtime = hours_worked - overtime_hours;
        gross_pay = (basic_rate * overtime_hours) + (basic_rate * overtime_rate * overtime);
    }
    else
        gross_pay = basic_rate * hours_worked;
    printf("\nGross pay = $%.2f\n", gross_pay);

    /// Tax calculations
    if (gross_pay <= 300)
    {
        tax_low = gross_pay * taxrate_low;
//        printf("Tax upto $300 = $%.2f\n", tax_low);
    }
    else if (gross_pay <= 450)
    {
        int pay_medium = gross_pay - 300;
        tax_low = 300 * taxrate_low;
        tax_medium = pay_medium * taxrate_medium;
//        printf("Tax upto $300 = $%.2f. Tax $301-$450 = $%.2f.\n", tax_low, tax_medium);
    }
    else
    {
        int pay_high = gross_pay - 450;
        tax_low = 300 * taxrate_low;
        tax_medium = 150 * taxrate_medium;
        tax_high = pay_high * taxrate_high;
//        printf("Tax upto $300 = $%.2f. Tax $301-$450 = $%.2f. Tax over $450 = $%.2f.\n", tax_low, tax_medium, tax_high);

    }

    tax_total = tax_low + tax_medium + tax_high;
    printf("Total tax = $%.2f\n", tax_total);

    /// Net Pay calculation
    net_pay = gross_pay - tax_total;
    printf("Net pay = $%.2f.\n", net_pay);
    return 0;
}
