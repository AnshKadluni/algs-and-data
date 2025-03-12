#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int main(void) {

    Computer bot;
    Human dude("Miller");
    Referee ref;

    Player* result = ref.refGame(&bot, &dude);
    if (result != nullptr) {
        std::cout << result->getName() << " wins!\n";
    } else {
        std::cout << "Draw!\n";
    }


    return 0;
}