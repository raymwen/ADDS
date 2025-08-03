#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Player.h"

class Computer : private Player{
    private:
    std::string name;
    char move;

    public:
    Computer();

};

#endif
