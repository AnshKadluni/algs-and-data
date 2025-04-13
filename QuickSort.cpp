#include "QuickSort.h"
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    Qsort(list, 0, list.size()-1);
    return list;
};

void QuickSort::Qsort(std::vector<int> &list, int low, int high) {

    if (low >= high) return;

    int pivot = list[high];
    int index = low-1;

    for (int i = low; i < high; i++) {
        
        if (list[i] <= pivot) {
            index++;
            std::swap(list[i], list[index]);
        }
        
    }

    std::swap(list[++index], list[high]);

    Qsort(list, low, index-1);
    Qsort(list, index+1, high);
};

