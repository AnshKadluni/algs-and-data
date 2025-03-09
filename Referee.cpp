#include "Referee.h"

Referee::Referee(){};

Player* Referee::refGame(Player* player1, Player* player2) {
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();

    if (p1 == p2) {
        return nullptr;
    } else if ((p1 == 'R' && p2 == 'S') || (p1 == 'P' && p2 == 'R') || (p1 == 'S' && p2 == 'P')) {
        return player1;
    } else {
        return player2;
    }
}