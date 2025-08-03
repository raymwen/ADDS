#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human h("Raymond");
    Computer c;
    Referee r;

    Player* winner = r.refGame(&h, &c);
    if (winner == nullptr) {
        std::cout << "It's a tie!" << std::endl;
    } else {
        std::cout << winner->getName() << " wins!" << std::endl;
    }

    return 0;
}