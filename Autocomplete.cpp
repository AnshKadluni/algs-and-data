#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode();
};

void Autocomplete::autoSearch(TrieNode* root, std::vector<std::string>& suggestions, std::string partialWord, std::string suffix) {
    if (root->isEndOfWord && !suggestions.empty()) {
        suggestions.push_back(partialWord+suffix);
    }
     
    for (int i = 0; i < 26; i++) {
        if (root->children[i] != nullptr) {
            autoSearch(root->children[i], suggestions, partialWord,  suffix+(char)('a'+i));
        }
    }
};

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) { // return the known words that start with partialWord
    std::vector<std::string> suggestions;

    TrieNode* curr = root;
    for (char c : partialWord) {
        
        int index = c-'a';
        if (curr->children[index] == nullptr) {
            return suggestions;
        }
        curr = curr->children[index];
    }

    autoSearch(curr, suggestions, partialWord, "");

    return suggestions;

};   

void Autocomplete::insert(std::string word) { // add a word to the known words

    TrieNode* curr = root;
    for (int i = 0; i < word.length(); i++) {
        int index = word[i]-'a';
        if (curr->children[index] == nullptr) {

            curr->children[index] = new TrieNode();
        }
        curr = curr->children[index];
        
    }

    curr->isEndOfWord = true;
        
};
Autocomplete::~Autocomplete() {
    delete root;
}