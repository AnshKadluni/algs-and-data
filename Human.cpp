#include "Human.h"
#include <iostream>

Human::Human(std::string name) { _name = name;};

Move* Human::makeMove() {
    std::string move;

    std::cin >> move;

    if (move == "Rock") {
        return new Rock;
    } else if (move == "Paper") {
        return new Paper;
    } else if (move == "Scissors") {
        return new Scissors;
    } else if (move == "Pirate") {
        return new Pirate;
    } else if (move == "Zombie") {
        return new Zombie;
    } else if (move == "Monkey") {
        return new Monkey;
    } else if (move == "Ninja") {
        return new Ninja;
    } else if (move == "Robot") {
        return new Robot;
    };

    return nullptr;
};   