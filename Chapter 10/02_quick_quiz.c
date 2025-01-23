/*Modify the program above to check whether the file
exists or not before opening the file.*/

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("vivek2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exists sorry!\n");
    }
    else{

    int num;
    fscanf(ptr, "%d", &num); // first integer will come under num
    printf("The value of num is %d \n", num);
    // file pointer keeps moving as we read file
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    }
    fclose(ptr);
    return 0;
}