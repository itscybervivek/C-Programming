/*Write a program with a structure representing a Complex number.*/
#include<stdio.h>
typedef struct C
{
    int real;
    int imaginary;
} Complex;

int main(){
    Complex c = {1, 2};
    printf("The value of complex no is %d + %d i", c.real, c.imaginary);
    return 0;
}