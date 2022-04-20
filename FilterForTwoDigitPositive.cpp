#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include <iostream>
#include <vector>

bool FilterForTwoDigitPositive::g(int n) {
    if (n >= 10 && n <= 99) {
        return true;
    } else {
        return false;
    }
}