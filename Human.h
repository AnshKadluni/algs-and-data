#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    private:
        /* data */
    public:
        Human(std::string name);
        Move* makeMove();
    };

#endif
