#include "RecursiveBinarySearch.h"
#include <vector>

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    return binSearch(list, 0, list.size() - 1, target);
}

bool RecursiveBinarySearch::binSearch(std::vector<int> list, int low, int high, int target) {
    if (low > high) return false;

    int mid = static_cast<int>((low+high)/2);

    if (list[mid] == target) return true;

    if (target < list[mid]) {
        return binSearch(list, low, mid-1, target);
    } else {
        return binSearch(list, mid+1, high, target);
    }
}