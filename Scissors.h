#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
    private:
    std::string name;
    std::string beats[1];
};

#endif