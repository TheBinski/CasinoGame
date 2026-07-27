#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char *cardTypes[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

int *playersCards;
int *dealersCards;

static int findCard(char *card) {

    int cardTypesSize = sizeof(cardTypes) / sizeof(cardTypes[0]);

    for (int i = 0; i < cardTypesSize; i++) {
        if (strcmp(cardTypes[i], card) == 0) {
            return i;
        }
    }

    return -1;
}

static char* getRandomCard() {
    srand(time(NULL));

    int randomIndex = rand() % 13;

    return cardTypes[randomIndex];
}

static void dealCards() {

    printf("\nDealers cards are: ");

    printf("\nDealer's cards are: ");
    printf("\nDealer's cards are: ");

    printf("\nPlayer's cards are: ");
    printf("\nPlayer's cards are: ");

    printf("\nPlayer's cards are: ");

    printf("%s", getRandomCard());
}

void playBlackjack() {
    printf("\nPlaying Blackjack!\n");

    int playing = 1;

    while (playing == 1) {
        int choice = 0;

        printf("\nHow much do you wish to bet?\n(Enter 0 to exit game)\n");
        scanf("%d", &choice);

        if (choice == 0) {
            playing = 0;
        } else {
            dealCards();
        }
    }
}