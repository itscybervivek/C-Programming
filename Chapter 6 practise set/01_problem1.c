/*Write a program to print the address of a variable
Use this address to get the value of this variable.*/

#include<stdio.h>

int main(){
    int a=5;
    printf("The address of variable a is %p\n", &a);
    printf("The value of a using address is %d\n", *(&a));
    return 0;
}