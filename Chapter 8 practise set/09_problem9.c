/*Write a program to check whether a given character
is present in a string or not*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    char letter;
    printf("Enter the character to check if present: ");
    letter = getchar();
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == letter)
        {
            printf("It is present.\n");
            break;
        }
        else
        {
            printf("It is not present.\n");
            break;
        }
        
    }
    return 0;
}