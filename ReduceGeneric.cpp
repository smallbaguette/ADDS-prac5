#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

int ReduceGeneric::reduce(std::vector<int> v) {
    int num;
    
    if (v.size()==2) {
        num = binaryOperator(v.at(0), v.at(1));
        return num;

    } else {
        num = binaryOperator(v.at(0), v.at(1));  //compare first value and second value
        newVector.push_back(num); //puts the right value into new vector
        v.erase(v.begin()); //erases first value of original vector
        reduce(v); //calls reduce with altered original vector
    }
    return num;
}