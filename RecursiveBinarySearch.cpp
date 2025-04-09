#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int mid) {
    if (list[mid] == 1) return true;
    if (mid == )
    if (list[mid] > 1){
        search(list, (mid + list.size())/2);
    } else {
        search(list, mid/2);
    }
    
}