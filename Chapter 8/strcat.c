#include<stdio.h>
#include<string.h>
int main(){
    char s1[56] = "harry";
    char s2[] = "bhai";
    strcat(s1, s2); // s1 now contains "harrybhai" <no space in between>
    printf("%s", s1);
    return 0;
}