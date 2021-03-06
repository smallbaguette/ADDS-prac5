#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h" 

#include <iostream>
#include <vector>

int main() {
    std::vector<int> integers;
    std::vector<int> newOne;
    int input;
    for (int i=0; i<20; i++) {
        std::cout<<"Enter integer "<<i+1<<": ";
        std::cin>>input;
        integers.push_back(input);
    }
    
    MapGeneric* map1 = new MapTriple();
    newOne = map1->map(integers);
    MapGeneric* map2 = new MapAbsoluteValue();
    newOne = map2->map(newOne);

    FilterGeneric* filter1 = new FilterForTwoDigitPositive();
    newOne = filter1->filter(newOne);
    FilterGeneric* filter2 = new FilterOdd();
    newOne = filter2->filter(newOne);

    ReduceGeneric* reduce1 = new ReduceMinimum();
    ReduceGeneric* reduce2 = new ReduceGCD();

    std::cout<<reduce1->reduce(newOne)<<" "<<reduce2->reduce(newOne)<<std::endl;
    return 0;
}