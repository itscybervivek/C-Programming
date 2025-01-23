#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("vivek.txt", "r");
    int num;
    fscanf(ptr, "%d", &num); // first integer will come under num
    printf("The value of num is %d \n", num);
    // file pointer keeps moving as we read file
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    fclose(ptr);
    return 0;
}