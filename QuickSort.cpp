#include "QuickSort.h"
#include <iostream>
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list){

    if(list.size()<2){
        return list;
    }else if(list.size() == 2){
        if(list[0]<list[1]){
            return list;
        }else{
            int x = list[0];
            list[0] = list[1];
            list[1] = x;
            return list;
        }
    }else{
        int p = list[2];
        std::vector<int> list1;
        std::vector<int> list2;
        for(int i=0;i<list.size();i++){
            if(i == 2){
                continue;
            }else{
                if(list[i]<=p){
                    list1.push_back(list[i]);
                }else{
                    list2.push_back(list[i]);
                }
            }
        }
        list1 = sort(list1);
        list2 = sort(list2);
        list1.push_back(p);
        list1.insert( list1.end(), list2.begin(), list2.end());
        return list1;
    }
}