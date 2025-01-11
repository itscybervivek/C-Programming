// Write a program to implement program 5 using for and do-while loop

#include <stdio.h>

int main()
{
    int sum1 = 0;
    int i2 = 1, sum2 = 0;
    for (int i1 = 1; i1 <= 10; i1++)
    {
        sum1 += i1;
    }
    printf("The sum of first ten natural numbers using for loop is: %d\n", sum1);

    do
    {
        sum2 += i2;
        i2++;

    } while (i2 <= 10);

    printf("The sum of first ten natural numbers using do-while loop is: %d\n", sum2);
    return 0;
}