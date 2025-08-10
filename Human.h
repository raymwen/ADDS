#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"

class Human : public Player {
public:
    Human(std::string n = "Human");
    Move* makeMove();
};

#endif