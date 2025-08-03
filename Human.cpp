#include "Human.h"
#include <iostream>

Human::Human(std::string n){

    if(n != ""){
        name = n;
    }else{
        name = "Human";
    }
}

char Human::makeMove(){
    char m;
    std::cout << "Enter Move: ";
    std::cin >> m;
    move = m;
    return m;
}