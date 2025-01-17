/*Write a program containing a function which
counts the number of positive integers in an array*/
#include <stdio.h>
int positive_integer(int arr[], int size){
    int positive = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
            positive++;
        }
    }
    return positive;
}
int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6};
    
    printf("The number of positive integer in array is %d", positive_integer(arr, 6));
    return 0;
}