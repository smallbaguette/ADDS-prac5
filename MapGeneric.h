#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>

class MapGeneric {
private:
    virtual int f(int)=0;
public:
    std::vector<int> map(std::vector<int> v);
};
#endif