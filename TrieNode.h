#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#include <vector>

class TrieNode
{  
    public:
        bool isEndOfWord;
        TrieNode* children[26];
        TrieNode();
        ~TrieNode();
};



#endif