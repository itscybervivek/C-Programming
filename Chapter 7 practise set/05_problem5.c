/*Write a program containing a function which 
reverses the array passed to it.*/
#include<stdio.h>

int reverse(int *array, int n){
    int temp;
    // temp = array[0];
    // array[0] = array[4];
    // array[4] = temp;
    // temp = array[1];
    // array[1] = array[3];
    // array[3] = temp;
// This reverses the array but we use generalized method
    // for i from 0 to n/2
    // arr[i] = arr[n-i-1] where n is size of array and i is loop iteration.
    for (int i = 0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
    
}
void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // 5 is size of array which is stored in n
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}