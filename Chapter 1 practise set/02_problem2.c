// Q. Calculate the area of circle and modify the same program to calculate volume of cylinder given its radius and height.

#include<stdio.h>

int main(){
    // int r = 4;
    // printf("The area of circle with radius %d is %f", r, r*r*3.14); //here d% is replaced by first r and f% by the area.
    int r = 4, h = 3;
    printf("The area of cylinder with radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}