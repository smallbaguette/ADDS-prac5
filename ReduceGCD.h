#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
#include <iostream>
#include <vector>

class ReduceGCD : public ReduceGeneric {
private:
    int binaryOperator(int n, int i);
};
#endif