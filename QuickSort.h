#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "Sort.h"

class QuickSort : public Sort {
    public:
        QuickSort() {};
        void sort(std::vector<int> &list, int low, int high);
        std::vector<int> sort(std::vector<int> list) {};
};



#endif