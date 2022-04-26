#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

int ReduceGeneric::reduce(std::vector<int> v) {
    int num;
    
    if (v.size()==1) {
        num = v.at(0);
        return num;

    } else {
        v.erase(v.begin());
        num = binaryOperator(v.at(0), reduce(v));  
    }
    return num;
}