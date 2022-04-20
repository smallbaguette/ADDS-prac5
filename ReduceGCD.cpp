#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include <iostream>
#include <vector>

int ReduceGCD::binaryOperator(int n, int i) {

    if (i == 0) {
        return n;
    }
    return binaryOperator(i, n % i);
}