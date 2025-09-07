#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"
#include <iostream>
#include <string>

int main(){
    
    QuickSort q;
    RecursiceBinarySearch rbs;

    std::vector<int> l;
    std::string s;

    std::getline(std::cin, s);

    int last = 0;


    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            l.push_back(std::stoi(s.substr(last, i-last)));
            last = i;
        }
    }
    l.push_back(std::stoi(s.substr(last, l.size()-1-last)));

    std::vector<int> res = q.sort(l);

    if(rbs.search(res, 1)){
        std::cout << "true ";
    }else{
        std::cout << "false ";
    }

    for(int i=0;i< res.size();i++){
        std::cout << res[i] << " ";
    }
    std:: cout << std::endl;

    
    return 0;
}