//
//  TapeEquilibrium.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "TapeEquilibrium.hpp"

int solution2(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int first=0;
    int last=0;
    int result=numeric_limits<int>::max();
    
    first=A.at(0);
    for(int i=1; i<A.size(); i++) {
        last+=A.at(i);
    }
    result=caculation(first, last, result);
    
    if(A.size()==2) {
        result=caculation(first, last, result);
    } else {
        for(int i=1; i<A.size()-1; i++) {
            first+=A.at(i);
            last-=A.at(i);
            result=caculation(first, last, result);
        }
    }
    return abs(result);
}

int caculation(int a, int b, int max) {
    return abs(a-b)<abs(max) ? (a-b) : max;
}
