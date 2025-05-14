#include "Autocomplete.h"
#include "TrieNode.h"

int main(void) {

    Autocomplete autocompleter;

    autocompleter.insert("hello");

    std::vector<std::string> sugs = autocompleter.getSuggestions("hel");

    std::cout << sugs[0] << std::endl;

    return 0;
}