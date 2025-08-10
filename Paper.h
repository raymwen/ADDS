#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move {
    private:
    std::string name;
    std::string beats[1];
};

#endif