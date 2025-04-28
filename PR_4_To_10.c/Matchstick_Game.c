//Match stick Game with Computer .....
#include <stdio.h>

int main() {
    int matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("The game starts with 21 matchsticks. You and the computer will take turns picking 1 to 4 matchsticks.\n");
    printf("The player forced to pick the last matchstick loses the game.\n\n");

    while (matchsticks > 1) {
        printf("There are %d matchsticks left.\n", matchsticks);

        // User's turn
        printf("Your turn! Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid number of matchsticks. Please pick between 1 and 4 matchsticks.\n");
            continue;
        }

        if (user_pick > matchsticks) {
            printf("You can't pick more matchsticks than available. Please pick again.\n");
            continue;
        }

        matchsticks -= user_pick;
        if (matchsticks == 1) {
            printf("You were forced to pick the last matchstick. You lose!\n");
            break;
        }

        // Computer's turn
        computer_pick = (matchsticks - 1) % 5;
        if (computer_pick == 0) {
            computer_pick = 1;  // If it's a multiple of 5, the computer picks 1
        }

        matchsticks -= computer_pick;
        printf("Computer picks %d matchsticks. %d matchsticks left.\n", computer_pick, matchsticks);

        if (matchsticks == 1) {
            printf("The computer was forced to pick the last matchstick. You win!\n");
            break;
        }
    }

    return 0;
}

