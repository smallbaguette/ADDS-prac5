#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

int ReduceGeneric::reduce(std::vector<int> v) {
    int num = v.at(0);
    
    if (v.size()==1) {
        return num;
    } 
    v.erase(v.begin());
    return binaryOperator(num, reduce(v));
}