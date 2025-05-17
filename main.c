#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, random;

    srand(time(0)); // Serves as the random number generator
    random = rand() % 100 + 1;

    // Header
    printf("-----------------------------\n");
    printf("|    NUMBER GUESSING GAME    |\n");
    printf("|      Made by lhycerie      |\n");
    printf("-----------------------------\n");

    printf("        Welcome, USER!\n\n");
    printf("          Game Note: \n");
    printf("   Enter 0 to quit the game.\n");

    // Continues until user guesses the number or enters 0
    while (guess != random && guess != 0) {
        printf("\n   Guess the number (1-100): ");
        scanf("%d", &guess);

        // Exits the game
        if (guess == 0) {
            printf("Bye! You left the game.\n");
            break;
        }

        // Checks for invalid inputs
        if (guess < 1 || guess > 100) {
            printf("Sorry! That's beyond the range!\n");
            continue;
        }

        // Check for low, high, and correct guesses
        if (guess == random) {
            printf("\nCongratulations, User! 🎉  You guessed it correctly.\n");
            break;
        } else if (guess < random) {
            printf("Uhm, your guess is too low. Try again!\n");
        } else {
            printf("Oof! Your guess is too high. Try again!\n");
        }
    }

    return 0;
}
