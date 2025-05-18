#ifndef PREFIX_MATCHER_H
#define PREFIX_MATCHER_H

#include <bits/stdc++.h>
#include "TrieNode2.h"

using namespace std;

class PrefixMatcher {
    public:
        TrieNode2* root;

        PrefixMatcher();

        int selectRouter(string networkAddress); // return the router with the longest matching prefix

        void insert(string address, int routerNumber); // add a router address

        ~PrefixMatcher();
};

#endif