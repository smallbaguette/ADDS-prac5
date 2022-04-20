#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include <iostream>
#include <vector>

int MapAbsoluteValue::f(int n) {
    if (n>=0) {
        return n;
    } else {
        return n*(-1);
    }
}