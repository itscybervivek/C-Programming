#include<stdio.h>
#include<string.h>

int main(){
    // Ascii value is checked
    int a = strcmp("far", "far");
    printf("%d\n", a);
    int b = strcmp("far", "joke");
    printf("%d\n", b);
    int c = strcmp("far", "apple");
    printf("%d\n", c);
    return 0;
}