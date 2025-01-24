/*Write a program to generate multiplication table of a
given number in text format. Make sure that the file
is readable and well formatted.*/
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("02_file2.txt", "w");
    int num = 5;
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d", num, i+1, num*(i+1));
        fprintf(ptr, "%c", '\n');
        
    }
    
    fclose(ptr);
    return 0;
}