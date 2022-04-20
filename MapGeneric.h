#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>

class MapGeneric {
private:
    virtual int f(int n)=0;
    std::vector<int> newVector;
public:
    std::vector<int> map(std::vector<int> v);
};
#endif