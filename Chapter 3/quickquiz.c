// write a program to find grade of a student given his marks based on below:
//90-100=> A
//80-100=> B
//70-80=> C
//60-70=> D
//50-60=> E
//<50 => F
#include<stdio.h>

int main(){
    int a;
    printf("Enter your marks");
    scanf("%d", &a);
    if (a>=90&&a<100)
    {
        printf("Your Grade is A");
    }
    if (a>=80&&a<90)
    {
        printf("Your Grade is B");
    }
    if (a>=70&&a<80)
    {
        printf("Your Grade is C");
    }
    if (a>=60&&a<70)
    {
        printf("Your Grade is D");
    }
    if (a>=50&&a<60)
    {
        printf("Your Grade is E");
    }
    if (a<50)
    {
        printf("Your Grade is F");
    }
    else
    {
        printf("NG");
    }
    
    return 0;
}