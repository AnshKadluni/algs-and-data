#include "TrieNode.h"
#include "Autocomplete.h"
#include "TrieNode2.h"
#include "PrefixMatcher.h"

int main(void) {

    PrefixMatcher P;

    P.insert("1100110111", 1);
    P.insert("110011011", 2);
    P.insert("11001101", 3);

    cout << P.selectRouter("110011011001") << endl;
    
    return 0;
}