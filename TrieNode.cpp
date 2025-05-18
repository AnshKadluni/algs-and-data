#include "TrieNode.h"

#include <bits/stdc++.h>

using namespace std;

TrieNode::TrieNode() {
    isEnd = false;
    
    for (int i = 0; i < 26; i++) {
        children[i] = nullptr;
    }
};

TrieNode::~TrieNode() {};