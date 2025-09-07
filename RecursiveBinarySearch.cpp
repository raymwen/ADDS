#include "RecursiveBinarySearch.h"
#include <vector>

bool RecursiceBinarySearch::search(std::vector<int> list, int x){

    if(x<list[0]){
        return false;
    }else if(x>list.back()){
        return false;
    }else{
        int mid = list[list.size()/2];
        if(mid == x){
            return true;
        }else if(x < mid){
            std::vector<int> half;
            for(int i=0;i<list.size()/2;i++){
                half.push_back(list[i]);
            }
            return search(half, x);
        }else{
            std::vector<int> half;
            for(int i=list.size()/2+1;i<list.size();i++){
                half.push_back(list[i]);
            }
            return search(half, x); 
        }
    }

}