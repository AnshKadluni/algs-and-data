#include "Node.h"
#include "LinkedList.h"
#include <iostream>

int main(void) {

    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    LinkedList myList(arr, n);
    if (myList.search(3)) {
        std::cout << "YES\n";
    }
    myList.printList();
    


    return 0;
}