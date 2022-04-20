#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include <iostream>
#include <vector>

int ReduceMinimum::binaryOperator(int n, int i) {
    if (n < i) {
        return n;
    } else {
        return i;
    }
}