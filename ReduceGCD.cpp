#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include <iostream>
#include <vector>

int ReduceGCD::binaryOperator(int n, int i) {

    while (n != i) {
        if (n > i) {
            n -= i;
        } else {
            i -= n;
        }
    }
    return n;
}