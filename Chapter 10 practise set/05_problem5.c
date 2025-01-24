/*Write a program to modify a file containing an integer
to double its value*/
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("05_file5.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    ptr = fopen("05_file5.txt", "w");
    fprintf(ptr, "%d", num*2);
    fclose(ptr);
    return 0;
}