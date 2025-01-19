/*Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal.*/

#include <stdio.h>
#include <string.h> // Required for string comparison

int main() {
    char string1[10];
    char string2[10];
    char ch;
    printf("Enter the first string (character by character, end with Enter):\n");
    int i;
    for (i = 0; i < 9; i++)
    {
        scanf("%c", &ch); //Read a single character
        if (ch == '\n') // Stops when Enter is pressed 
        {
            break;
        }
        string1[i] = ch;
    }
    string1[i] = '\0'; // Null-terminate the string.

    printf("Enter the second string (max 9 characters):\n");
    // %s is used here
    scanf("%9s", string2); // Limit input to avoid overflow

    printf("The first string is \"%s\" and the second string is \"%s\".\n", string1, string2);

    // Compare the strings
    if (strcmp(string1, string2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
