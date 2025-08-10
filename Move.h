#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move{

protected:
    std::string name;
    
public:
    //contructer
    Move();//std::string name, char move);
    //getters
    virtual std::string getName();

};

#endif