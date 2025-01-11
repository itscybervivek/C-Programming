/*Write a program to calculate the factorial of
a given number using a while loop*/

#include<stdio.h>

int main(){
    int n, product = 1, i = 1;
    printf("Enter any number\t");
    scanf("%d",&n); 
    while (i<=n)
    {
        product *= i;
        i++;
    }
    
    printf("The factorial of %d is %d", n, product);
}