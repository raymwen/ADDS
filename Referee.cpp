#include "Referee.h"
#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    std::string move1Name = move1->getName();
    std::string move2Name = move2->getName();

    if (move1Name == move2Name){
        return nullptr;
    }else if(move1->getBeats()[0] == move2->getName() || move1->getBeats()[1] == move2->getName()){
        return player1;
    }else{
        return player2;
    }

}