#ifndef TRIE_NODE2_H
#define TRIE_NODE2_H

#include <vector>

class TrieNode2
{  
    public:
        int routerNumber;
        TrieNode2* children[2];
        TrieNode2();
        ~TrieNode2();
};



#endif