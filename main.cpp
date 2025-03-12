#include "Referee.h"
#include "Human.h"
#include "Computer.cpp"
#include <iostream>

int main(void) {

    Computer bot;
    Human dude("Miller");
    Referee ref;

    std::cout << ref.refGame(&bot, &dude)->getName() << std::endl;

    return 0;
}