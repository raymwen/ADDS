#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
    private:

    public:
        Computer();

        Move* makeMove();

        ~Computer();
};

#endif