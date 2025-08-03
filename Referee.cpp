#include "Referee.h"

Player* Referee::refGame(Player * player1, Player * player2){

    if(player1->makeMove() == player2->makeMove()){
        return nullptr;
    }else if(player1->makeMove() == 'P'){
        return player1;

    }else{//} if(p1.makeMove() == 'S'){
        return player2;
    }
}