#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move {
    private:
    std::string name;
    std::string beats[2];
};

#endif