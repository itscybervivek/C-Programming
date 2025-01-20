#include<stdio.h>
#include<string.h>
typedef struct employee{ // typedef before struct
    int code;
    float salary;
    char name[10];
} Emp; // Emp datatype is created.
int main(){
    // typedef help to create our own datatype like:
    // typedef int vivek;
    // vivek a = 88;
    // printf("The value of a is %d\n", a);

    //We can also make datatype by using this by writing typedef and emp inside main
    // typedef struct employee Emp;
    Emp e1;
    Emp *ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "vivek");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}