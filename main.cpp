#include "Finder.cpp"
using namespace std;

int main(){
    Finder f;
    vector<int> r = f.findSubstrings("mississipi", "sippiasnf");
    for(int i=0;i<r.size();i++){
        std::cout << r[i] << ", ";
    }    
    cout << endl;
    return 0;
}