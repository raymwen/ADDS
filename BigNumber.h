#ifndef BIGNUMBER_H
#define BIGNUMBER_H
#include <list>
#include <string>

class BigNumber{

    BigNumber();

    ~BigNumber();

    std::list<int> buildBigNum(std::string numString);

    std::list<int> add(std::list<int> num1, std::list<int> num2);

    std::list<int> sub(std::list<int> num1, std::list<int> num2);

    std::list<int> mul(std::list<int> num1, std::list<int> num2);

};

#endif
