#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("vivek3.txt", "r");
    char c = fgetc(ptr); // used to read a character from file
    printf("%c", c);
    fclose(ptr);
    // Now opening file in write mode
    ptr = fopen("vivek3.txt", "w");
    fputc('c', ptr); // it will write c character in file
    return 0;
}