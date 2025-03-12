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

class Rock : public Move { 
    public:
        Rock();
};

class Paper : public Move { 
    public:
        Paper();
};

class Scissors : public Move { 
    public:
        Scissors();
};

class Monkey : public Move { 
    public:
        Monkey();
};

class Pirate : public Move { 
    public:
        Pirate();
};

class Robot : public Move { 
    public:
        Robot();
};

class Ninja : public Move { 
    public:
        Ninja();
};

class Zombie : public Move { 
    public:
        Zombie();
};

#endif