#include <stdio.h>

// Funtion prototype
int sum(int* , int* );
// Function definition
int sum(int *a, int *b)
{ // sum should change the value of x
    *a = 6;
    return (*a + *b);
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}