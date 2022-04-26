#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <iostream>
#include <vector>

class ReduceGeneric {
private:
    virtual int binaryOperator(int n, int i)=0;
    std::vector<int> newVector;
public:
    int reduce(std::vector<int> v);
};
#endif