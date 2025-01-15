/*Try problem 3 using call by value and verify that it
doesnt change the value of the said variable.*/
#include <stdio.h>
// Function prototype
void tentimes(int);
// Function definition
void tentimes(int i)
{
    i *= 10; // Cant Change the value of a into tentimes its current value
}
int main()
{
    int a = 5;
    tentimes(a); // Function call
    printf("The value of tentimes of a=5 is %d", a);
    return 0;
}
