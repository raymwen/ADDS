#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{

protected:
    std::string name;
    char move;

public:
    //contructer
    Player();//std::string name, char move);
    //getters
    virtual std::string getName();

    virtual char makeMove() = 0;

};

#endif