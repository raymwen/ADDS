#include "Computer.h"
#include "Rock.h"

Computer::Computer() {
    name = "Computer";
    move = new Rock();
}

Move* Computer::makeMove() {
    return move;
}

Computer::~Computer(){
    delete move;
}