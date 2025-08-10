#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move{

protected:
    std::string name;
    std::string beats[2];
public:
    //contructer
    Move();//std::string name, char move);
    //getters
    virtual std::string getName();

    virtual std::string* getBeats();

};

#endif