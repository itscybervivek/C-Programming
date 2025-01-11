/*Write a program to check whether a given number
is prime or not using loops.*/
#include <stdio.h>

int main()
{
    // A prime number is a number that can only be
    // divided by itself and 1 without remainders
    int n, not_prime = 0;
    printf("Enter any number: \t");
    scanf("%d", &n);
    if(n==0 || n==1){
        not_prime = 1; // 0 and 1 are not prime numbers
    }
    else
    {
        for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n!=2)
        {
            not_prime = 1;
            break;
        }
    }
    }
    if (not_prime == 1)
    {
        printf("%d is not prime\n", n);
    }
    else 
    {
        printf("%d is prime\n", n);
    }

    return 0;
}