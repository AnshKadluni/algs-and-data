#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int mid) {
    if (list[mid] == 1) return true;
    if (low > high) return false;
    if (list[mid] > 1){
        low = mid;
        search(list, (mid + list.size())/2);
    } else {
        high = mid/2;
        search(list, mid/2);
    }
    
}