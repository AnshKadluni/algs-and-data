#include "QuickSort.h"
#include <iostream>

void QuickSort::Qsort(std::vector<int> &list, int low, int high) {

    if (low >= high) return;

    int pivot = list[high];
    int index = low;

    for (int i = low; i < high; i++) {
        
        if (pivot > list[i]) {
            int temp = list[i];
            list[i] = list[index];
            list[index] = temp;
        } 

        index++;
        
    }

    int temp = list[index];
    list[index] = pivot;
    list[high] = temp;

    Qsort(list, low, index-1);
    Qsort(list, index+1, high);
    
};

std::vector<int> QuickSort::sort(std::vector<int> list) {
    Qsort(list, 0, list.size());
    return list;
}