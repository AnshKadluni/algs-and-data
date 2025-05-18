#ifndef TRIE_NODE2_H
#define TRIE_NODE2_H

class TrieNode2 {
    public:
        TrieNode2* children[2];
        int routerNumber;
        TrieNode2();
        ~TrieNode2();
};

#endif