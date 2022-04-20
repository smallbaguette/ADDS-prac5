#include "MapGeneric.h"
#include <iostream>
#include <vector>

std::vector<int> MapGeneric::map(std::vector<int> v) {

    int num;

    /* if the vector size is one, 
    pass the only element to f(), put the new num into newVector, then return newVector */
    if (v.size()==1) {
        num = f(v.at(0));   // pass the first (and only) element to f(), saves value at num
        newVector.push_back(num);   // push num value onto newVector

    /* if the vector size is bigger than one,
    pass the first element of v to f() and save result as num, push num onto newVector, erase first element of v,
    repeat until v is left with just 1 element*/
    } else {
        num = f(v.at(0));  // num is the result of f(first element of v)
        newVector.push_back(num);   // push num onto newVector
        v.erase(v.begin()); // erasing the first element of v
        newVector = map(v); // newVector is assigned the return value of map(v) (with v being reduced the first element)
    }
    return newVector;
}