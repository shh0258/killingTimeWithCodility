//
//  FrogRiverOne.cpp
//  180428_temp
//
//  Created by han on 2018. 4. 28..
//  Copyright © 2018년 han. All rights reserved.
//

#include "FrogRiverOne.hpp"

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    hash_set<int> hset;
    if(X>A.size()) {
        return -1;
    }
    for(int i=0; i<A.size(); i++) {
        hset.insert(A.at(i));
        if(hset.size()==X) {
            return i;
        }
    }
    if(hset.size()<X) {
        return -1;
    }
    return X-1;
}
