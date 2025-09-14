#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);

    l.pop_back();

    cout << l.back() << endl;

    return 1;
}