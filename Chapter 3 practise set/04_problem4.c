/*Write a program to find whether a year entered
by the user is a leap year or not. Take year as
an input from the user*/
#include <stdio.h>
// A year is a leap year if it is divisible by 4.
// However, if it is divisible by 100, it is not a leap year, unless:
// The year is also divisible by 400, in which case it is a leap year.
int main()
{
    int year;
    printf("Enter the year \t");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year %d is leap year\n", year);
    }
    else
    {
        printf("The year %d is not leap year\n", year);
    }

    return 0;
}