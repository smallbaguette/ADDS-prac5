#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

int ReduceGeneric::reduce(std::vector<int> v) {
    /*int num;
    
    if (v.size()==1) {
        num = v.at(0);
        return num;

    } else {
        num = binaryOperator(v.at(0), v.at(1));
        v.erase(v.begin());
        reduce(v);
    }
    return num; */

    int num = v.back();
    if (v.size() == 1) {
        return num;
    }
    v.pop_back();
    return binaryOperator(num, reduce(v));
}