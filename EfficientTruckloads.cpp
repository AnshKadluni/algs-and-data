#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    if (memo.find(numCrates) != memo.end()) return memo[numCrates];

    int half1 = numCrates/2;
    int half2 = (numCrates % 2 == 0) ? half1 : half1 + 1;

    if (numCrates%2 == 0) {

        memo[numCrates] = numTrucks(static_cast<int>(numCrates/2), loadSize);
        return memo[numCrates]*2;
        
    } else {

        memo[numCrates] = numTrucks(static_cast<int>(numCrates/2), loadSize) + numTrucks(static_cast<int>(numCrates/2) + 1, loadSize);
        return memo[numCrates];
    }
    
}