#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"
#include <iostream>
#include <vector>

class FilterForTwoDigitPositive : public FilterGeneric {
private:
    bool g(int n);
};
#endif