/*Write a program to change the value of a variable
to ten times of its current value. Write a function
and pass the value by reference.*/

#include <stdio.h>
// Function prototype
void tentimes(int *);
// Function definition
void tentimes(int *i)
{
    *i *= 10; // Change the value of a into tentimes its current value
}
int main()
{
    int a = 5;
    tentimes(&a); // Function call
    printf("The value of tentimes of a=5 is %d", a);
    return 0;
}