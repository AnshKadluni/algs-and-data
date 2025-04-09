#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"

int main(void) {

    std::vector<int> list;
    int n;

    std::cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        list.push_back(x);
    }

    QuickSort q;

    q.sort(list, 0, n);

    for (int i = 0; i < n; i++) {
        std::cout << list[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}