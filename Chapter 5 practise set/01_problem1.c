/*Write a program using functions to find 
average of three numbers.*/
#include<stdio.h>
//Function prototype
float average(float, float, float);

// function definition
float average(float x, float y, float z){   
    return ((x+y+z)/3);
}
int main(){
    float a, b, c, avg;
    printf("Enter first number\n");
    scanf("%f", &a);
    printf("Enter second number\n");
    scanf("%f", &b);
    printf("Enter third number\n");
    scanf("%f", &c);
    // Function call
    avg = average(a, b, c);
    printf("The average is %f", avg);
    return 0;
}