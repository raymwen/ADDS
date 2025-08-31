#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    for(size_t i = 1; i <= s2.size(); i++) {
        
        int lastRes = 0;
        if(result.size()>0){
            if(result[result.size()-1] == -1){
                result.push_back(-1);
                continue;
            }else{
                lastRes = result[result.size()-1];
            }
        }
        size_t found = s1.find(s2.substr(0, i), lastRes);
        if (found != string::npos) {
            result.push_back(found);
        } else {
            result.push_back(-1);
        }
    }
    return result;
    }