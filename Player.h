#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Ninja.h"

class Player {
    protected:
        std::string _name;
    public:
        Player();
        std::string getName();
        virtual Move* makeMove() = 0;

};

#endif