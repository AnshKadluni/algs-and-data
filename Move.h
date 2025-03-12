#include <string>
#include <stdlib.h>

class Move{
    protected:
        std::string weakness[2] = {};
        std::string name;
    public:
        Move();
        std::string getName();
        std::string* getWeakness(); 
};

class Rock : public Move { 
    public:
        Rock() { 
            name = "Rock"; 
            weakness[0] = "Paper";
        };
};

class Paper : public Move { 
    public:
        Paper() {
            name = "Paper";
            weakness[0] = "Scissors";
        }
};

class Scissors : public Move { 
    public:
        Scissors() {
            name = "Scissors";
            weakness[0] = "Rock";
        }
};

class Monkey : public Move { 
    public:
        Monkey() {
            name = "Monkey";
            weakness[0] = "Pirate";
            weakness[1] = "Zombie";
        }
};

class Pirate : public Move { 
    public:
        Pirate() {
            name = "Pirate";
            weakness[0] = "Ninja";
            weakness[1] = "Zombie";
        }
};

class Robot : public Move { 
    public:
        Robot() {
            name = "Robot";
            weakness[0] = "Pirate";
            weakness[1] = "Monkey";
        }
};

class Ninja : public Move { 
    public:
        Ninja() {
            name = "Ninja";
            weakness[0] = "Robot";
            weakness[1] = "Monkey";
        }
};

class Zombie : public Move { 
    public:
        Zombie() {
            name = "Zombie";
            weakness[0] = "Robot";
            weakness[1] = "Ninja";
        }
};

