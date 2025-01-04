#include<stdio.h>

int main(){
    //this is first method
    // int C = 90;
    // printf("%d Celsius in Fahrenheit is %f", C, C*1.8+32);

    float c = 90.0, f;
    f = ((9.0/5.0)*c) + 32;
    printf("%f Celsius in Fahrenheit is %f", c, f);
    return 0;
}