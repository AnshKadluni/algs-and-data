#include "Autocomplete.h"
#include "TrieNode.h"
#include "PrefixMatcher.h"
#include "Trie2.h"

int main(void) {

    //Autocomplete autocompleter;
//
    //autocompleter.insert("abcde");
    //autocompleter.insert("abcef");
//
    //std::vector<std::string> sugs = autocompleter.getSuggestions("abcd");
//
    //std::cout << sugs.size() << std::endl;
//
    //for (std::string s : sugs) {
    //    std::cout << s << std::endl;
    //}

    PrefixMatcher network;
    network.insert("1100110111", 1);
    network.insert("110011011", 2);
    network.insert("11001101", 3);

    std::cout << network.selectRouter("110011011001") << std::endl;

    

    return 0;
}