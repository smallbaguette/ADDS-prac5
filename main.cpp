#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> integers;
    int input;
    for (int i=0; i<7; i++) {
        std::cout<<"Enter integer "<<i+1<<": ";
        std::cin>>input;
        integers.push_back(input);
    }
    
    std::vector<int> newOne;
    FilterOdd pain;

    for (auto x : pain.filter(integers)) {
        std::cout<<x<<std::endl;
    }

    return 0;
}