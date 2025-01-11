/* Write a program to print multiplication table 
of a given number n*/
#include<stdio.h>

int main(){
    int n, i=1;
    printf("Enter a number:\t");
    scanf("%d", &n);
    while (i<=10)
    {
        printf("%d x %d = %d\n", n,i, n*i);
        i++;
    }
    
    return 0;
}