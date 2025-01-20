#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e);

void show(struct employee e){
    printf("%d %f %s", e.code, e.salary, e.name);
}
int main(){
    struct employee e;
    e.code = 110;
    e.salary = 7000;
    strcpy(e.name, "vivek");
    show(e);
    return 0;
}