/*Write a program to encrypt a string by adding 1
to the ascii value of its characters.*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "vivek";
    //This for loop will add 1 to ascii value of string characters.
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] += 1;
    }
    //Printing encrypted string.
    printf("%s", str);
    return 0;
}