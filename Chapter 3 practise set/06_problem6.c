/* Write a program to find greatest of four number entered by the user*/
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 1st number:\t");
    scanf("%d", &a);
    printf("Enter 2nd number:\t");
    scanf("%d", &b);
    printf("Enter 3rd number:\t");
    scanf("%d", &c);
    printf("Enter 4th number:\t");
    scanf("%d", &d);
    if (a>b && a>c && a>d)
    {
        printf("The greatest number is %d", a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("The greatest number is %d", b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("The greatest number is %d", c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("The greatest number is %d", d);
    }
    return 0;
}