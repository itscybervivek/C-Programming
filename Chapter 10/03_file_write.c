#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("vivek3.txt", "w");
    int num = 435;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}