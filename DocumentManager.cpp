#include "DocumentManager.h"

DocumentManager::DocumentManager() {};

void DocumentManager::addDocument(string name, int id, int license_limit) {
    if (documents.find(id) != documents.end()) return;
    documents[id] = {name, license_limit};
}
void DocumentManager::addPatron(int patronID) {
    if (patrons.find(patronID) != patrons.end()) return;
    patrons[patronID] = {}; 
}
int DocumentManager::search(string name) {
    for (auto doc : documents) {
        if (doc.second.first == name) {
            return doc.first;
        }
    }

    return 0;
}
bool DocumentManager::borrowDocument(int docid, int patronID) {
    bool isBorrowed = false;
    for (int doc : patrons[patronID]) {
        if (doc == docid) {
            isBorrowed = true;
            break;
        }
    }

    if (isBorrowed) return true;
    if (documents.find(docid) == documents.end() || documents[docid].second == 0) return false;
    documents[docid].second--;
    patrons[docid].push_back(docid);
    return true;
     
}
void DocumentManager::returnDocument(int docid, int patronID) {
    bool isBorrowed = false;
    int index = 0;
    for (int doc : patrons[patronID]) {
        if (doc == docid) {
            isBorrowed = true;
            break;
        }
        index++;
    }

    if (!isBorrowed) return;

    documents[docid].second++;
    patrons[patronID].erase(patrons[patronID].begin() + index);
}
DocumentManager::~DocumentManager() {};