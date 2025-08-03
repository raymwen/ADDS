#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : private Player{

    private:
    std::string name;
    char move;

    public:
    Human(std::string n);

    char makeMove();

};

#endif