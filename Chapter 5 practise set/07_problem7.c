/*Write a program using function to print the
following pattern (first n lines)*/
// *
// ***
// *****
#include<stdio.h>

// Function prototype
void printpattern(int n);
// Function definition
void printpattern(int n){
    for (int i = 0; i < n; i++)
    {
        //This loop runs from 0 t0 2
        // if i = 0 ---> print 1 star
        // if i = 1 ---> print 3 star
        // if i = 2 ---> print 5 star
        // no_of_stars = (2*i+1)

        // This for loop prints (2*i+1) stars
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        // this printf prints a new line
        printf("\n");
    }
    
}
int main(){
    int n = 3;
    printpattern(n); // Function call
    return 0;
}