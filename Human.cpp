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
        
    }else if(moveString == "Ninja"){
        
    }else if(moveString == "Paper"){

    }else if(moveString == "Pirate"){

    }else if(moveString == "Robot"){

    }else if(moveString == "Rock"){

    }else if(moveString == "Scissors"){
        
    }else if(moveString == "Zombie"){

    }else{
        
    }
    return new Rock();
}