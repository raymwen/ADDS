#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player{

protected:
    Move* move;
    std::string name;
public:
    //contructer
    Player();//std::string name, char move);
    //getters
    virtual std::string getName();

    virtual Move* makeMove() = 0;

};

#endif