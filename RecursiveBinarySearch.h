#ifndef RECURSIVE_BINARY_SEARCH_H
#define RECURSIVE_BINARY_SEARCH_H

#include <vector>

class RecursiveBinarySearch{
    public:
        int high;
        int low;
        RecursiveBinarySearch() {};

        bool search(std::vector<int> list, int target);
        bool binSearch(std::vector<int> list, int low, int high, int target);
        
};

#endif