#include "BubbleSort.h"
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list){
    int swaps = 1;
    while(swaps != 0){
        swaps = 0;
        for(int i=0;i<list.size()-1;i++){
            if(list[i]>list[i+1]){
                int x = list[i];
                list[i] = list[i+1];
                list[i+1] = x;
                swaps ++;
            }
        }
    }
    return list;
}