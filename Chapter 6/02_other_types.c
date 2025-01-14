#include <stdio.h>

int main()
{
    char i = 'A'; // here acii value of A is 65
    char *j = &i; // j is a pointer pointing to i (j is a character pointer)
    float k = 6.7;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);

    printf("The value at address j is %d\n", *(&i));
    return 0;
}