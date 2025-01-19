/*Write your own version of strcpy function from <string.h>*/
#include <stdio.h>
//Function for determining length of str1
int mystrlen(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    str[i] = '\0'; // Null terminates the string.
    return i;
}
// Fuction for copying str1 into str2
void mystrcpy(char str1[], char str2[])
{
    int i;
    for (i = 0; i < mystrlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    str2[mystrlen(str1)] = '\0'; // Null terminates the string
}

int main()
{
    char str1[10] = "Vivek";
    char str2[10];
    mystrcpy(str1, str2);
    printf("The str1 is %s and str2 is %s", str1, str2);

    return 0;
}