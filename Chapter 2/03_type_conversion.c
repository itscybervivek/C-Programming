/*An arithmetic operation between
int and int is int
int and float is float
float and float is float*/



#include<stdio.h>

int main(){
    float a = 9.0;
    int b = 2;
    float c = a/b;
    // int k = 3.0/9;
    // printf("%d\n", k);
    // here the output will be 0 since int cant tak float value so answer will 0 not 0.33 it is called demotion.
    printf("The value of a/b is %f", c);
    return 0;
    
}