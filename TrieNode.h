#ifndef TRIE_NODE_H
#define TRIE_NODE_H

class TrieNode {
    public:
        TrieNode* children[26];
        bool isEnd;
        TrieNode();
        ~TrieNode();
};

#endif
