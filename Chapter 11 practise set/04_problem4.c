/*Create an array dynamically capable of storing 5 integers.
Now use realloc so that it can now store 10 integers.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i+1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++)
    {
        ptr[i] = i+1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    return 0;
}