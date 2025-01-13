/*What will the following line produce in C program
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++)*/

    #include<stdio.h>
    
    int main(){
        int a = 4;
        printf("%d %d %d \n", a, ++a, a++);
        // It depends on compiler evaluation order
        // If compiler evalution order is left to right then answer will be 4 5 5
        // and if right to left then 6 6 4
        return 0;
    }