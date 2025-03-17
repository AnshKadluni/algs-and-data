#ifndef EFFICIENT_TRUCKLOADS_H
#define EFFICIENT_TRUCKLOADS_H

#include <iostream>
#include <unordered_map>

class EfficientTruckloads {
    public:
        EfficientTruckloads(){};
        
        std::unordered_map<int, int> memo;

        int numTrucks(int numCrates, int loadSize);
         
};

#endif