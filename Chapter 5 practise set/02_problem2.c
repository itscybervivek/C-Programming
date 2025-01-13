/*Write a function to convert Celsius temperature
into farenheit.*/
#include <stdio.h>
// Function prototype
float celsius_to_farenheit(float x);

// Function definition
float celsius_to_farenheit(float x)
{
    return (x * (9.0 / 5.0)) + 32; // Use floating-point division
}
int main()
{
    float celsius, farenheit;
    printf("Enter Celsius temperature:\n");
    scanf("%f", &celsius);
    farenheit = celsius_to_farenheit(celsius);
    printf("%.2f Celsius is %.2f farenheit\n", celsius, farenheit);
    return 0;
}