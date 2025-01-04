// Q. Write a C program to calculate area of rectangle

#include<stdio.h>

int main(){
    // int length = 6;
    // int breadth = 7;

    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d", length*breadth);
    return 0;
}