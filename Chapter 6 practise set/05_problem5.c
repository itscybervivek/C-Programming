/*Write a program to print the value of a variable i by
using "pointer to pointer" type of variable.*/

#include <stdio.h>

int main()
{
    int i = 4;
    int *j = &i;
    int **k = &j;
    printf("The value of i by using pointer to pointer is %d", **k); 
    return 0;
}