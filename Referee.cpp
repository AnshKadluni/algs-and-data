#include "Referee.h"

Player* Referee::refGame(Player * player1, Player * player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move2->getWeakness()[0] == move1->getName() || move2->getWeakness()[1] == move1->getName()) {
        return player1;
    } else if (move1->getName() == move2->getName()) {
        return nullptr;
    } else {
        return player2;
    }

}