#include "Trie2.h"

TrieNode2::TrieNode2() {
    for (int i = 0; i < 2; i++) {
        children[i] = nullptr;
    }
};
TrieNode2::~TrieNode2() {}
