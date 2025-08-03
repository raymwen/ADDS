#include "Referee.h"

Player* Referee::refGame(Player * player1, Player * player2){

    Player p1 = *player1;
    Player p2 = *player2;

    if(p1.makeMove() == p2.makeMove()){
        return nullptr;
    }else if(p1.makeMove() == 'P'){
        return player1;

    }else{//} if(p1.makeMove() == 'S'){
        return player2;
    }
}