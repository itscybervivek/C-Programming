/*Create an array of 5 complex numbers created in problem 5
and display then with the help of display function.
The values must be taken as an input from the user.*/
#include <stdio.h>

// Define the Complex structure
typedef struct complex {
    int real;
    int imaginary;
} Complex;

// Function to display a complex number
void displayComplex(Complex c) {
    printf("The complex number is %d + %di\n", c.real, c.imaginary);
}

int main() {
    Complex arr[5];

    // Input loop for reading 5 complex numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter real part of complex number (%d): ", i + 1);
        scanf("%d", &arr[i].real);
        printf("Enter imaginary part of complex number (%d): ", i + 1);
        scanf("%d", &arr[i].imaginary);
    }

    // Display loop for showing the entered complex numbers
    printf("\nDisplaying the entered complex numbers:\n");
    for (int i = 0; i < 5; i++) {
        displayComplex(arr[i]);
    }

    return 0;
}
