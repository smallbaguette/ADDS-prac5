#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

class ReduceMinimum : public ReduceGeneric {
private:
    int binaryOperator(int n, int i);
};
#endif