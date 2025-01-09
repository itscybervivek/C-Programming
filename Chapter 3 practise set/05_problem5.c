/*Write a problem to determine whether a
character entered by the user is lowercase
or not.*/
//  https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <stdio.h>
// to check the character is lowercase or not.
// we have to check the ascii value.
// the ascii value of lowercase letter start from 97 to 122 so we have to check that
//so we can do if(ch>=97 && ch<=122) but we can add their a to z like here
int main()
{
    char ch;
    printf("Write a character\n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("This character is lowercase\n");
    }
    else
    {
        printf("This character is not lowercase\n");
    }
     

    return 0;
}