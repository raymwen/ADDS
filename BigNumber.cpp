#include "BigNumber.h"
#include <string>
#include <list>
#include <cmath>

    std::list<int> BigNumber::buildBigNum(std::string numString){

        std::list<int> newList;

        for(int i=0;i<numString.size();i++){

            newList.push_back(numString[i]);
        }

        return newList;
    }

    std::list<int> BigNumber::add(std::list<int> num1, std::list<int> num2){

        std::list<int> res;

        int carry = 0;

        while(!num1.empty() && !num2.empty()){

            int subSum = num1.back() + num2.back() + carry;

            carry = floor(subSum/10);

            res.push_front(subSum%10);

            if(!num1.empty()){

                num1.pop_back();

            }
            if(!num2.empty()){

                num2.pop_back();
            }
        }
        return res;

    }

    std::list<int> BigNumber::sub(std::list<int> num1, std::list<int> num2){

        std::list<int> res;

        int borrow = 0;

        while(!num1.empty() && !num2.empty()){

            int subDiff = num1.back()-num1.back()-borrow;

            if(subDiff<0){

                subDiff = subDiff+10;

            }

            res.push_front(subDiff);

            if(!num1.empty()){

                num1.pop_back();

            }
            if(!num2.empty()){

                num2.pop_back();
            }
        }
        return res;

    }

    std::list<int> BigNumber::mul(std::list<int> num1, std::list<int> num2){

        std::list<int> res;

        int carry = 0;

        while(!num1.empty() && !num2.empty()){

            int subSum = num1.back() * num2.back() + carry;

            carry = floor(subSum/10);

            res.push_front(subSum%10);

            if(!num1.empty()){

                num1.pop_back();

            }

        }
        return res;
    }