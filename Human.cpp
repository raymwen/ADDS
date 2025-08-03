#include "Human.h"
#include <iostream>

Human::Human(std::string n) {
    if (!n.empty()) {
        name = n;
    } else {
        name = "Human";
    }
}

char Human::makeMove() {
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}