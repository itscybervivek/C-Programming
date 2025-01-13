/*Write a recursive function to calculate the
sum of first n natural numbers.*/
#include <stdio.h>

// Function prototype
int sum(int);
int sum(int n)
{
    // sum(n) = 1 + 2 + 3 + 4 + ... + (n-1) + n
    // sum(n) = sum (n-1) + n;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int main()
{
    int n;
    printf("Enter any natural number(n):  ");
    scanf("%d", &n);
    printf("Sum of first n(%d) natural no is %d", n, sum(n));
    return 0;
}