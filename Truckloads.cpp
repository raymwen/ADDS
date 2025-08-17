#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
    }else{
        return numTrucks((numCrates/2.0), loadSize) + numTrucks(std::ceil(numCrates/2.0), loadSize);
    }
}