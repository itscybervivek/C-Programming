/*Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main()*/

#include<stdio.h>
//Function prototype
float sum(float*, float*);
float average(float*, float*);
// Function definition
float sum(float* x, float* y){
    return (*x + *y);
}
float average(float* a, float* b){
    return (*a + *b)/2;
}


int main(){
    float a = 4, b = 6;
    printf("The sum of a=%.2f and b =%.2f is %.2f\n", a, b, sum(&a, &b));
    printf("The average of a=%.2f and b=%.2f is %.2f\n", a, b, average(&a, &b));
    return 0;
}