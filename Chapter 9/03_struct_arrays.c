#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;
    printf("%d %d\n", facebook[0].code, facebook[1].code);

    struct employee vivek = {100, 71.22, "vivek"};
    printf("%d %f %s\n", vivek.code, vivek.salary, vivek.name);

    return 0;
}