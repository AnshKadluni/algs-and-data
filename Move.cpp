#include "Move.h"

Move::Move() {};
std::string Move::getName() { return name; }
std::vector<std::string> Move::getWeakness() { return weakness; }

Rock::Rock() { 
    name = "Rock"; 
    weakness.push_back("Paper");
};

Paper::Paper() {
    name = "Paper";
    weakness.push_back("Scissors");
}

Scissors::Scissors() {
    name = "Scissors";
    weakness.push_back("Rock");
}

Monkey::Monkey() {
    name = "Monkey";
    weakness.push_back("Pirate");
    weakness.push_back("Zombie");
}

Pirate::Pirate() {
    name = "Pirate";
    weakness.push_back("Ninja");
    weakness.push_back("Zombie");
}

Robot::Robot() {
    name = "Robot";
    weakness.push_back("Pirate");
    weakness.push_back("Monkey");
}

Ninja::Ninja() {
    name = "Ninja";
    weakness.push_back("Robot");
    weakness.push_back("Monkey");
}

Zombie::Zombie() {
    name = "Zombie";
    weakness.push_back("Robot");
    weakness.push_back("Ninja");
}