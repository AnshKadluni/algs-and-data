#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool check = true;

    while (check) {
        check = false;

        for (long unsigned int i = 0; i < list.size()-1; i++) {
            if (list[i+1] < list[i]) {
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp; 
                check = true;
            }
        }
    }

    return list;

}