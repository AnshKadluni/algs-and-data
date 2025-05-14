#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"
#include <vector>
#include <iostream>

class Autocomplete
{
    private:
        TrieNode* root;
    public:
        Autocomplete(/* args */);
        std::vector<std::string> getSuggestions(std::string partialWord); // return the known words that start with partialWord

        void insert(std::string word); // add a word to the known words

        void autoSearch(TrieNode* root, std::vector<std::string>& getSuggestions);
        ~Autocomplete();
};


#endif
