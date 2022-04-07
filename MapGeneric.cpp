#include "MapGeneric.h"
#include <iostream>
#include <vector>

std::vector<int> MapGeneric::map(std::vector<int> v) {
    int num;
    std::vector<int> newVector;
    if (v.size()==1) {
        num = v.at(0);
        num = f(num);
        newVector.push_back(num);
    } else {
        num = v.at(0);
        num = f(num); 
        newVector.push_back(num);
        v.erase(v.begin());
        std::cout<<std::endl;
        newVector = map(v);
    }
    return newVector;
}