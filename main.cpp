#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <sstream>

int main(void) {

    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    int num;
    std::vector<int> nums;

    while (ss >> num) {
        nums.push_back(num);
    }

    QuickSort q;
    RecursiveBinarySearch r;

    std::vector<int> val = q.sort(nums);

    if (r.search(val, 1)) {
        std::cout << "true ";
    } else {
        std::cout << "false ";
    }

    for (int i = 0; i < nums.size(); i++) {
        std::cout << val[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}