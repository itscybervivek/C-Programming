/*Write a program using recursion to calculate nth
element of Fibonacci series.*/

// fibonacii series = 0 1 1 2 3 5 8 13 21 ...
#include <stdio.h>
// Function prototype
int fibonacci(int);
// Function definition
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1; // Base case: F(0)= 0, F(1)=1
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
    }
}
int main()
{
    int n, f;
    printf("Enter the position of the fibonacci series (n): ");
    scanf("%d", &n);
    f = fibonacci(n);
    printf("%d", f);
    return 0;
}