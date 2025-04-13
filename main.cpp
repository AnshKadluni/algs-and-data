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

    BubbleSort b;
    QuickSort q;

    std::vector<int> val = q.sort(list);

    for (int i = 0; i < n; i++) {
        std::cout << val[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}