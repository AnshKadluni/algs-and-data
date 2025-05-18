#include "TrieNode.h"
#include "Autocomplete.h"

int main(void) {

    Autocomplete A;

    A.insert("apple");
    A.insert("axe");
    A.insert("app");

    vector<string> sugs = A.getSuggestions("ap");
    
    return 0;
}