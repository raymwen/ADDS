#include "Reverser.h"
#include <iostream>

int Reverser::reverseDigit(int value){
    if(value < 0){
        return -1;
    }
    else if(value<10){
        return value;
    }else{
        return (value % 10)*std::pow(10, std::floor(log10(value))) + reverseDigit((value-value%10)/10);
    }
}

std::string Reverser::reverseString(std::string characters){
    if(characters.length() == 1){
        return characters;
    }else{
        char x = characters.back();
        characters.pop_back();
        return x + reverseString(characters); 
    }
};