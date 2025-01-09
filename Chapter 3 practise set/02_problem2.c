/*Write a program to determine weather a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.*/
#include <stdio.h>

int main()
{
    int total, math, science, english;
    printf("Enter your marks in Math\t");
    scanf("%d", &math);
    printf("Enter your marks in science\t");
    scanf("%d", &science);
    printf("Enter your marks in english\t");
    scanf("%d", &english);
    total = (math + science + english)/3;
    if (math<33 || science<33 || english<33)
    {
        printf("You are failed due to less marks in individual subject(s)");
    }
    else if (total<40)
    {
        printf("You are failed due to less percentage");
    }
    
    else
    {
        printf("You are pass");
    }

    return 0;
}