#include "TrieNode2.h"

#include <bits/stdc++.h>

using namespace std;

TrieNode2::TrieNode2() {
    routerNumber = -1;
    
    for (int i = 0; i < 2; i++) {
        children[i] = nullptr;
    }
};

TrieNode2::~TrieNode2() {};