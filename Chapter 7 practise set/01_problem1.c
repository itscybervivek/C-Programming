/*Create an array of 10 numbers. Verify using
pointer arithmatic that (ptr+2) points to the
third element where ptr is a pointer pointing to
the first element of the array.*/
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    ptr = ptr + 2;
    printf("The ptr+2 points to %d(third) element of array", *ptr);
    return 0;
}