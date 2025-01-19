/*Write a program to count the occurence of a given
character in a string.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter any string and press enter key: ");
    gets(str);
    char letter;
    printf("Enter a character to count its occurence: ");
    letter = getchar();
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == letter)
        {
            count++;
        }
    }
    printf("There are %d number of occurences", count);
    return 0;
}