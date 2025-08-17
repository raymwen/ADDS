#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"

int main(){
    Reverser r;
    std::string str = "hello world";
    std::cout << r.reverseString(str);
    return 0;
}