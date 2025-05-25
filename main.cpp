#include "Heap.hpp"


int main(void) {

    std::vector<int> t = {5, 2, 7, 1, 4, 6, 3};

    Heap<int> myHeap(t);

    //myHeap.printHeap();
 
    std::cout << myHeap.getMin() << std::endl;;

    return 0;
}