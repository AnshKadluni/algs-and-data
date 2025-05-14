#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode();
};


void Autocomplete::autoSearch(TrieNode* root, std::vector<std::string>& suggestions) {

    if (root == nullptr) {
        std::cout << "x\n";
        return;
    };
    
    for (int i = 0; i < suggestions.size(); i++) {
        int index = suggestions[i][suggestions[i].length()-1] - 'a';
        if (root->children[index] != nullptr) {
            
            if (root->children[index]->isEndOfWord) {
                suggestions[i] = suggestions[i] + (char)('a'+index);
            }
            std::cout << "1" << std::endl;
            autoSearch(root->children[index], suggestions);
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

    for (int i = 0; i < 26; i++) {
        if (curr->children[i] != nullptr) {
            char c = i + 97;
            suggestions.push_back("");
            suggestions[suggestions.size()-1] += c;
        }
    }

    autoSearch(curr, suggestions);

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