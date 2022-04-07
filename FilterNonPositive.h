#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
#include <iostream>
#include <vector>

class FilterNonPositive : public FilterGeneric {
private:
    bool g(int n);
};
#endif