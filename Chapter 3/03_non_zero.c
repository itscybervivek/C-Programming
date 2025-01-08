#include<stdio.h>

int main(){
    if (1)
    {
        printf("This if is executed\n");
    }
    if (234)
    {
        printf("This if is also executed\n");
    }
    if (23.4)
    {
        printf("This float inside if is also executed\n");
    }
    if ('c')
    {
        printf("This character inside if is also executed\n");
    }
    if (0)
    {
        printf("I am zero I am not executed\n");
    }
    
    
    return 0;
}