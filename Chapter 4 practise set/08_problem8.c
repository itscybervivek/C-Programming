/*Write a program to calculate the factorial of
a given number using a for loop*/

#include<stdio.h>

int main(){
    int n, product = 1;
    printf("Enter any number\t");
    scanf("%d",&n); 
    // this code is correct and this do 8x7x6x5x4x3x2x1
    //  for (int i = n; i >= 1; i--)
    //  {
    //     product *= i;
    //  }
    //  printf("The factorial of %d is %d", n, product);
    // return 0;


    // this code do 1x2x3x4x5x6x7x8
    for (int i =1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial of %d is %d", n, product);
}