/*Create an array of multiplication table of 7 upto 10(7x10=70).
Use reallox to make it store 15 numbers(from 7x1 to 7x15)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n = 7;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, ptr[i]);
    }
    // Reallocating
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {
        ptr[i] = n * (i + 1);
    }
    printf("The new table is\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, ptr[i]);
    }
    return 0;
}