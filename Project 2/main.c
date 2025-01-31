/*Project 2: Snake, Water, Gun
Snake, water, gun (or Rock, paper, Scissors) is a game most of us have played during School time. (I sometimes play it even now (2) Write a C program Capable of playing this game with you. Your program result should be able to print the after you choose Snake/water or gun.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //          0 --> Snake
    //          1 --> Water
    //          2 --> Gun
    // Initialize random number genertor
    srand(time(0));

    // Generate random number between 0 to 2
    int computer = (rand() % 3);
    // Player Choose:
    int player;
        
    printf("Enter 0 for Snake, 1 for Water and 2 for Gun:\n");
    scanf("%d", &player);
    printf("Computer choose %d \n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its Draw!\n");
    }
    else{
        printf("Something went wrong!");
    }
    
    return 0;
}