#include <stdio.h>

char *choices[] = {
        "Blackjack",
        "Roulette"
    };

int numberOfChoices = sizeof(choices) / sizeof(choices[0]);

void printMainMenu() {

    printf("\nWelcome to the Casino!\nPlease choose your game:\n");
    for (int i = 0; i < numberOfChoices; i++) {
        printf("%d. %s\n", i+1, choices[i]);
    }
    printf("0. Exit\n\n");
}

void printChosenGame(int gameIndex) {
    printf("You chose %s!\nGoodluck!\n", choices[gameIndex]);
}

void main() {
    int stillPlaying = 1;
    while (stillPlaying) {
        int choice;

        printMainMenu();

        printf("Please make a selection: ");
        scanf("%d", &choice);

        if (choice < 0 || choice > numberOfChoices) {
            printf("Invalid choice. Please make a different selection.\n");
        } else if (choice == 0) {
            printf("Thanks for playing!\n");
            stillPlaying = 0;
        } else if (choice == 1) {
            printChosenGame(choice-1);
            // playBlackjack();
        } else if (choice == 2) {
            printChosenGame(choice-1);
            // playRoulette();
        }
    }
    
}