#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*) calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}