#pragma once

#include <string>

class Player {
    protected:
        std::string _name;
    public:
        virtual char makeMove() = 0;
        std::string getName();
};

