#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move {
    private:
    std::string name;
    std::string beats[2];
};

#endif