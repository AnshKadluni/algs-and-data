#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <bits/stdc++.h>
#include "TrieNode.h"

using namespace std;

class Autocomplete {
    public:
        TrieNode* root;
        Autocomplete();
        vector<string> getSuggestions(string partialWord);  // return the known words that start with partialWord
        void insert(string word); // add a word to the known words
        ~Autocomplete();
};

#endif
