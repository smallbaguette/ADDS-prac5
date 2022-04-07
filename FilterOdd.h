#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"
#include <iostream>
#include <vector>

class FilterOdd : public FilterGeneric {
private:
    bool g(int n);
};
#endif