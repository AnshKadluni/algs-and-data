#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "Sort.h"

class BubbleSort : public Sort {
    public:
        BubbleSort() {};
        std::vector<int> sort(std::vector<int> list);
};


#endif