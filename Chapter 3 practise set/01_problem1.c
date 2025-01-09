// What will be the output of this program
#include<stdio.h>

int main(){
    int a = 10;
    if (a = 11){ // here we not see == so output is 11 beacause = is assignment operator
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    
    return 0;
}