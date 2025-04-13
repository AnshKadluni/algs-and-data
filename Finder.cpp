#include "Finder.h"
using namespace std;
    vector<int> Finder::findSubstrings(string s1, string s2) {

    vector<int> result(s2.length(), -1);
    size_t found = 0;

    for(size_t i = 1; i <= s2.size(); i++) {
        found = s1.find(s2.substr(0, i), found);
        if (found != string::npos) {
            result[i-1] = found;
        } else {
            break;
        }
    }
    
    return result;
}
