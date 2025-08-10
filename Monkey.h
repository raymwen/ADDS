#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
    private:
    std::string name;
    std::string beats[2];
};

#endif