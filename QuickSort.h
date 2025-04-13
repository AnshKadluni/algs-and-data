#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "Sort.h"

class QuickSort : public Sort {
    public:
        QuickSort() {};
        std::vector<int> sort(std::vector<int> list) override;
        void Qsort(std::vector<int> &list, int low, int high);
};



#endif