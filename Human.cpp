#include "Human.h"
#include <iostream>

Human::Human() {
    _name = "Human";
}

Human::Human(std::string name) {
    _name = name;
}

char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;

    return move;
}

