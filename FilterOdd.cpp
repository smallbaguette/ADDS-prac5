#include "FilterGeneric.h"
#include "FilterOdd.h"
#include <iostream>
#include <vector>

bool FilterOdd::g(int n) {
    if (n%2 == 0) {
        return false;
    } else {
        return true;
    }
}