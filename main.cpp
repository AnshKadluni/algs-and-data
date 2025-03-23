#include <iostream>
#include <unordered_map>
#include "EfficientTruckloads.h"  // Assuming the class is implemented here

int main() {
    EfficientTruckloads et;

    // Test Case 1: numCrates = 1, loadSize = 1
    std::cout << et.numTrucks(1, 1) << std::endl;  // Expected Output: 1

    // Test Case 2: numCrates = 3, loadSize = 2
    std::cout << et.numTrucks(3, 2) << std::endl;  // Expected Output: 2

    // Test Case 3: numCrates = 4, loadSize = 4
    std::cout << et.numTrucks(4, 4) << std::endl;  // Expected Output: 1

    // Test Case 4: numCrates = 5, loadSize = 6
    std::cout << et.numTrucks(5, 6) << std::endl;  // Expected Output: 1

    // Test Case 5: numCrates = 10, loadSize = 3
    std::cout << et.numTrucks(10, 3) << std::endl;  // Expected Output: 4

    // Test Case 6: numCrates = 11, loadSize = 3
    std::cout << et.numTrucks(11, 3) << std::endl;  // Expected Output: 4

    // Test Case 7: numCrates = 50, loadSize = 10
    std::cout << et.numTrucks(50, 10) << std::endl;  // Expected Output: 5

    // Test Case 8: numCrates = 100, loadSize = 15
    std::cout << et.numTrucks(100, 15) << std::endl;  // Expected Output: 7

    // Test Case 9: numCrates = 0, loadSize = 5
    std::cout << et.numTrucks(0, 5) << std::endl;  // Expected Output: 0

    // Test Case 10: numCrates = 1000000, loadSize = 100
    std::cout << et.numTrucks(1000000, 100) << std::endl;  // Expected Output: 10000

    return 0;
}
