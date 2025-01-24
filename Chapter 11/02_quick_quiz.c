/*Write a program to create a dynamic array of 5
floats using malloc()*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));
    ptr[0] = 1.1;
    ptr[1] = 2.2;
    ptr[2] = 3.3;
    ptr[3] = 4.4;
    ptr[4] = 5.5;
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", ptr[i]);
    }
    printf("\n");
    return 0;
}