#include<stdio.h>
#include<string.h>
int main(){
    //STRCPY()
    //This function is used to copy the content of second string into first string passed to it.
    char source[] = "harry";
    char target[30];
    strcpy (target, source); //target now contains "harry"
    printf("%s %s", source, target);
    return 0;
}