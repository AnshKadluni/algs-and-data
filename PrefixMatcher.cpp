#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode2;
};

int PrefixMatcher::selectRouter(string networkAddress) {
    TrieNode2* curr = root;

    int longest = -1;
    for (int i = 0; i < networkAddress.length(); i++) {
        if (curr == nullptr) break;
        if (curr->routerNumber != -1) {
            longest = curr->routerNumber;
        }
        curr = curr->children[networkAddress[i]-'0'];
    }

    if (longest != -1) return longest;

    while (curr != nullptr) {
        if (curr->routerNumber != -1) return curr->routerNumber;
        if (curr->children[0] != nullptr) {
            curr = curr->children[0];
        } else {
            curr = curr->children[1];
        }
    }

    return -1;
};

void PrefixMatcher::insert(string address, int routerNumber) {
    TrieNode2* curr = root;

    for (int i = 0; i < address.length(); i++) {
        if (curr->children[address[i]-'0'] == nullptr) {
            curr->children[address[i]-'0'] = new TrieNode2;
        }
        curr = curr->children[address[i]-'0'];
    }

    curr->routerNumber = routerNumber;
};

PrefixMatcher::~PrefixMatcher() {};