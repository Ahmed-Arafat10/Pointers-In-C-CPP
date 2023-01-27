// Created by Ahmed Arafat on 1/10/2023.
#include <bits/stdc++.h>

using namespace std;
int cash = 100, bet;

void play() {
    char *Cards = (char *) malloc(3 * sizeof(char));
    Cards[0] = 'Q';
    Cards[1] = 'K';
    Cards[2] = 'J';
    printf("Shuffling The Cards .....\n");
    Here:
    printf("Please Enter The Position Of The Queen 1,2 or 3");
    int user_pos, pos;
    scanf("%d", &user_pos);
    if (!(user_pos >= 1 && user_pos <= 3)) {
        printf("Please Enter A Valid Number\n");
        goto Here;
    }
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = Cards[x];
        Cards[x] = Cards[y];
        Cards[y] = Cards[temp];
    }
    if (Cards[--user_pos] == 'Q') {
        printf("You Win ! Congratulations\n");
        cash += 3 * bet;
    } else {
        printf("Wrong Guessing \n");
        cash -= bet;
    }
    printf("Your Cash Now : %d L.E\n", cash);
    //free(Cards);
}

int main() {
    while (cash) {
        printf("What Is Your Bet?\n");
        scanf("%d", &bet);
        if (bet > cash) printf("You Only Have %d L.E\n", cash);
        else if (bet <= 0) printf("Enter A Positive Number Please\n");
        else play();
    }
}