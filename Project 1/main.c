/*Project 1: Number guessing Game
Problem: This is going to be fun!
We will write a program that generate a random
number and asks the player to guess it. If the
player's guess is higher than the actual number,
the program displays "Lower number please".
Similarly if the user's guess is too low, the
program prints "Higher" number please
When the user guesses the correct number, the
program displays the number of guesses the player
used to arrive at the number*/
// Hints: Use loops
// Use a random number generator
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Initialize random number genertor
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);

    do
    {
    printf("Guess the number\t");
    scanf("%d", &guessed_number);
    if (guessed_number>randomNumber)
    {
        printf("Lower number \n");

    }
    else if(guessed_number<randomNumber)
    {
        printf("Higher number please\n");
    }
    else
    {
        printf("Congrats!!\n");
    }
    
    
    no_of_guesses++;

    } while (guessed_number != randomNumber);
    printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}