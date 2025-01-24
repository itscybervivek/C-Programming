/*Write a program to demonstate the usage of free() with malloc()*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    // int arr[n]; // Not allowed in c
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;
    free(ptr); // Here we write free() before printing which will free the memory
    printf("%d", ptr[0]); // Now it prints garbage value instead of ptr[0] = 3
    return 0;
}