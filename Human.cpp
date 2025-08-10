#include "Human.h"
#include <iostream>
#include "Move.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

Human::Human(std::string n) {
    if (!n.empty()) {
        name = n;
    } else {
        name = "Human";
    }
}

Move* Human::makeMove() {
    std::string moveString;
    std::cout << "Enter move: ";
    std::cin >> moveString;
    
    if(moveString == "Monkey"){
        move = new Monkey();
    }else if(moveString == "Ninja"){
        move = new Ninja();
    }else if(moveString == "Paper"){
        move = new Paper();
    }else if(moveString == "Pirate"){
        move = new Pirate();
    }else if(moveString == "Robot"){
        move = new Robot();
    }else if(moveString == "Rock"){
        move = new Rock();
    }else if(moveString == "Scissors"){
        move = new Scissors();
    }else if(moveString == "Zombie"){
        move = new Zombie();
    }else{
        
    }
    return move;
}