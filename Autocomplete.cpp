#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode;
};

void search(TrieNode* curr, string suffix, vector<string>& suggestions, string partial) {
    if (curr == nullptr) return;

    if (curr->isEnd) {
        suggestions.push_back(partial + suffix);
    }

    for (int i = 0; i < 26; i++) {
        if (curr->children[i] != nullptr) {
            search(curr->children[i], suffix+(char)('a'+i), suggestions, partial);
        }
    }
};

vector<string> Autocomplete::getSuggestions(string partialWord) {
    vector<string> suggestions;

    TrieNode* curr = root;

    for (int i = 0; i < partialWord.length(); i++) {
        if (curr == nullptr) break;

        curr = curr->children[partialWord[i]-'a'];
    }

    search(curr, "", suggestions, partialWord);
    
    return suggestions;

};


void Autocomplete::insert(string word) {
    TrieNode* curr = root;

    for (int i = 0; i < word.length(); i++) {
        if (curr->children[word[i]-'a'] == nullptr) {
            curr->children[word[i]-'a'] = new TrieNode;
        }
        curr = curr->children[word[i]-'a'];
    }

    curr->isEnd = true;
};

Autocomplete::~Autocomplete() {};