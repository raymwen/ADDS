#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move {
    private:
    std::string name;
    std::string beats[2];
};

#endif