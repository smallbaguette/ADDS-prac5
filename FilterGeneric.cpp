#include "FilterGeneric.h"
#include <iostream>
#include <vector>

std::vector<int> FilterGeneric::filter(std::vector<int> v) {
    int num;
    std::vector<int> newVector;
    if (v.size()==1) {
        num = v.at(0);
        if (g(num) == false) {
            newVector.push_back(num);
        }
    } else {
        num = v.at(0);
        if (g(num) == false) {
            newVector.push_back(num);
        }
        v.erase(v.begin());
        newVector = filter(v);
    }
    return newVector;
}