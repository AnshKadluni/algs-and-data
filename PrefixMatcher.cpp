#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode2();
};

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode2* curr = root;
    for (int b : networkAddress) {
        if (curr->children[b] == nullptr) {
            break;
        } 
        curr = curr->children[b];
    }

    while (curr->children[0] != nullptr && curr->children[0] != nullptr) {
        if (curr->children[0] != nullptr) {
            curr = curr->children[0];
        } else {
            curr = curr->children[1];
        }
    }

    return curr->routerNumber;

};

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode2* curr = root;
    for (int b : address) {
        if (curr->children[b] == nullptr) {
            curr->children[b] = new TrieNode2();
        }
        curr = curr->children[b];
    }

    curr->routerNumber = routerNumber;
};

PrefixMatcher::~PrefixMatcher() {
    delete root;
}