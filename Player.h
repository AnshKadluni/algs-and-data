#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
    protected:
        std::string _name;
    public:
        Player();
        std::string getName();
        virtual Move* makeMove() = 0;

};

#endif