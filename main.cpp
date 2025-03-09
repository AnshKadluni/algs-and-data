#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main(void) {

    Referee ref;
    Computer AI;
    Human Oli("Oli");

    Player* result = ref.refGame(&Oli, &AI);

    if (result == nullptr) {
        std::cout << "It's a tie" << std::endl;
    } else {
        std::cout << result->getName() << "Wins!" << std::endl;
    }

    return 0;
}