#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

std::vector<int> ReduceGeneric::reduce(std::vector<int> v) {
    int num;
    
    if (v.size()==2) {
        num = binaryOperator(v.at(0), v.at(1));
        newVector.push_back(num);

    } else {
        num = binaryOperator(v.at(0), v.at(1));  
        newVector.push_back(num); 
        v.erase(v.begin()); 
        newVector = reduce(v); 
    }
    return newVector;
}