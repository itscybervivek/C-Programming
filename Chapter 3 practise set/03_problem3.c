/*Calculate income tax paid by an employee to the government as per the slabs mentioned below
    Income Slab     Tax
    2.5-5.0L        5%
    5.0-10.0L       20%
    Above 10.0L     30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.    */

//this method is write but we should use the tax calculating method thatis 
//if any person have 9 lakh then person should give 5% tax on first 5lakh and should give 20% tax on another 4 lakh.
#include <stdio.h>

int main()
{
    float income, tax;
    printf("Enter your Income Amount\t");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = income * 0.05;
        printf("The employee pay %f as tax", tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = income * 0.20;
        printf("The employee pay %f as tax", tax);
    }
    else if (income > 1000000)
    {
        tax = income * 0.30;
        printf("The employee pay %f as tax", tax);
    }
    else
    {
        printf("tax should not taken from employee");
    }

    return 0;
}