#include "Computer.h"

Computer::Computer() { _name = "Computer"; };

Move* Computer::makeMove() {
    return new Rock;
}