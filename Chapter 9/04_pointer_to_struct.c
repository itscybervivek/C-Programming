#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code = 50;
    struct employee *ptr; //pointer to structure
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d \n", (*ptr).code);

    //Arrow operator:
    printf("%d\n", ptr->code); // exactly same as (*ptr).code
    return 0;
}