#include "FilterGeneric.h"
#include <iostream>
#include <vector>

std::vector<int> FilterGeneric::filter(std::vector<int> v) {

    int num;
    bool passesTest;
    
    if (v.size()==1) {
        num = v.at(0);
        passesTest = g(num);
        if (passesTest == true) {
            newVector.push_back(num);
        }

    } else {
        num = v.at(0);
        passesTest = g(num);
        if (passesTest == true) {
            newVector.push_back(num);
        }
        v.erase(v.begin());
        newVector = filter(v);
    }
    return newVector;
}