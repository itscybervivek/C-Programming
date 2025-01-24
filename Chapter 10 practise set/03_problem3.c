/*Write a program to read a text file character by character
and write its content twice in a separate file.*/
#include<stdio.h>

int main(){
    FILE *ptr1, *ptr2;
    char ch;
    ptr1 = fopen("03_fileforreading3.txt", "r");
    ptr2 = fopen("03_fileforwriting.txt", "a");
    while (1)
    {
        ch = fgetc(ptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
        }
        
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}