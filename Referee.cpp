#include "Referee.h"
#include <memory>

Referee::Referee() {};

Player* Referee::refGame(Player* player1, Player* player2) {
    std::unique_ptr<Move> move1 = std::make_unique<Move>(*player1->makeMove());
    std::unique_ptr<Move> move2 = std::make_unique<Move>(*player2->makeMove());

    if (move1->getName() == move2->getName()) { return nullptr; }

    std::vector<std::string> move2Weakness = move2->getWeakness();
    std::string move1Name = move1->getName();

    for (int i = 0; i <  static_cast<int>(move2Weakness.size()); i++) {
        if (move2Weakness[i] == move1Name) {
            return player1;
        }
    }

    return player2;
}