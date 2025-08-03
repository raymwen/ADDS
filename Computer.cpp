#include "Computer.h"

Computer::Computer() {
    name = "Computer";
    move = 'R';  // Default move
}

char Computer::makeMove() {
    return move;
}