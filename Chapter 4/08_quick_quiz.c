/*Write a program to print first 'n' natural number using do while loop.*/
// input 4
//output:1
//       2
//       3
//       4
#include<stdio.h>

int main(){
    int i = 1, n;
    printf("Enter the number\t");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    
    return 0;
}