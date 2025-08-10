#include "Move.h"

Move::Move() {}

std::string Move::getName() {
    return name;
}

std::string* Move::getBeats(){
    return beats;
}