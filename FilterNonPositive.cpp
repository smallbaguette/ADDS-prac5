#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include <iostream>
#include <vector>

bool FilterNonPositive::g(int n) {
    if (n < 0) {
        return true;
    } else {
        return false;
    }
}