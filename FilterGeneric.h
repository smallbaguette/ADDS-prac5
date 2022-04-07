#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <iostream>
#include <vector>

class FilterGeneric {
private:
    virtual bool g(int)=0;
public:
    std::vector<int> filter(std::vector<int> v);
};
#endif