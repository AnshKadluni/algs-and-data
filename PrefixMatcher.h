#ifndef PREFIX_MATCHER_H
#define PREFIX_MATCHER_H

#include "Trie2.h"
#include <iostream>

class PrefixMatcher
{
    private:
        TrieNode2* root;
    public:
        PrefixMatcher();
        int selectRouter(std::string networkAddress);
        void insert(std::string address, int routerNumber);
        ~PrefixMatcher();
};



#endif