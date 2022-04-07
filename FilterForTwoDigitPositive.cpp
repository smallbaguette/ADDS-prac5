#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include <iostream>
#include <vector>

bool FilterForTwoDigitPositive::g(int n) {
    if (n >= 10) {
        return false;
    } else {
        return true;
    }
}