/*Write a program to read three integers from a file.*/
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("01_file1.txt", "r");
    // int num;
    // fscanf(ptr, "%d", &num);
    // printf("The first integers is %d\n", num);
    // fscanf(ptr, "%d", &num);
    // printf("The second integers is %d\n", num);
    // fscanf(ptr, "%d", &num);
    // printf("The third integers is %d\n", num);
    // fclose(ptr);

    // Another method:
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The integers are %d %d %d", num1, num2, num3);
    fclose(ptr);
    return 0;
}