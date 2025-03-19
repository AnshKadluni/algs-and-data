#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    if (numCrates%2 == 0) {
        
        return 2*numTrucks(static_cast<int>(numCrates/2), loadSize);
        
    } else {
        
        return numTrucks(static_cast<int>(numCrates/2), loadSize) + numTrucks(static_cast<int>(numCrates/2) + 1, loadSize);
    }

}