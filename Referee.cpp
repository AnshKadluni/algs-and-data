#include "Referee.h"

Referee::Referee() {};

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) { return nullptr; }

    std::vector<std::string> move2Weakness = move2->getWeakness();
    std::string move1Name = move1->getName();

    for (int i = 0; i < move2Weakness.size(); i++) {
        if (move2Weakness[i] == move1Name) {
            return player1;
        }
    }

    return player2;
}