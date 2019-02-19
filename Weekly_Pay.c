// Program to calculate weekly pay, given hours worked
// Author: Mark Clifford

#include <stdio.h>
#include <stdlib.h>

#define BASIC_RATE 12.00
#define OVERTIME_RATE 1.5
#define TAXRATE_LOW .15
#define TAXRATE_MED .20
#define TAXRATE_HIGH .25
#define OVERTIME_HOURS 40

int main()
{
    float hours_worked, gross_pay, net_pay, tax_total;

    printf("Weekly Pay Calculation.\nPlease enter the number of hours worked: ");
    scanf("%f", &hours_worked);

    /// Gross Pay calculation
    if (hours_worked > OVERTIME_HOURS)
    {
        gross_pay = (BASIC_RATE * OVERTIME_HOURS) + (BASIC_RATE * OVERTIME_RATE * (hours_worked - OVERTIME_HOURS));
    }
    else
        gross_pay = BASIC_RATE * hours_worked;
    printf("\nGross pay = $%.2f\n", gross_pay);

    /// Tax calculations
    if (gross_pay <= 300)
    {
        tax_total = gross_pay * TAXRATE_LOW;
    }
    else if (gross_pay > 300 && gross_pay <= 450)
    {
        tax_total = 300 * TAXRATE_LOW;
        tax_total += (gross_pay - 300) * TAXRATE_MED;
    }
    else
    {
        tax_total = 300 * TAXRATE_LOW;
        tax_total += 150 * TAXRATE_MED;
        tax_total += (gross_pay - 450) * TAXRATE_HIGH;
    }

    printf("Total tax = $%.2f\n", tax_total);

    /// Net Pay calculation
    net_pay = gross_pay - tax_total;
    printf("Net pay = $%.2f.\n", net_pay);
    return 0;
}
