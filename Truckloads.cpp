#include <iostream>

class Truckloads {
    public:
        Truckloads(){};
        
        int numTrucks(int numCrates, int loadSize) {
            if (numCrates <= loadSize) return 1;
            if (numCrates%2 == 0) {
                
                return 2*numTrucks(static_cast<int>(numCrates/2), loadSize);
                
            } else {
                
                return numTrucks(static_cast<int>(numCrates/2), loadSize) + numTrucks(static_cast<int>(numCrates/2) + 1, loadSize);
            }
        }
        
};

int main(void) {

    Truckloads t;

    std::cout << t.numTrucks(1024, 5) << std::endl;

    return 0;
}

