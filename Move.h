#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <stdlib.h>
#include <vector>

class Move{
    protected:
        std::vector<std::string> weakness = {};
        std::string name;
    public:
        Move();
        std::string getName();
        std::vector<std::string> getWeakness(); 
};

#endif