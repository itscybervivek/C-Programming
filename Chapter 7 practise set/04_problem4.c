/*Repeat Problem 3 for a general input provided
by the user using scanf.*/

#include <stdio.h>

int main()
{
    int mul[10];
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        mul[i]= n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d x %d is %d \n", n, i+1, mul[i]);
    }
    
    return 0;
}