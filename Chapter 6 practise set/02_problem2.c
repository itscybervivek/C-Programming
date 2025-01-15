/*Write a program having a variable i. Print the
address of i. Pass this variable to a function and
print its address. Are these addresses same? Why?*/

#include <stdio.h>

// Function to print the address of the variable
void print_address(int *ptr)
{
    printf("The address received by the function (address of i): %p\n", ptr);
}

int main()
{
    int i = 10;

    // Print the address of i in main
    printf("The address of i in main is: %p\n", &i);

    // Pass the address of i to the function
    print_address(&i);

    return 0;
}

// When you pass &i to the function, you are passing the memory location of i. The pointer ptr in the function holds this same address.
// The function and main both refer to the same variable i in memory, so the address is identical.