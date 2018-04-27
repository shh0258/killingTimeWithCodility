//
//  PermMissingElem.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "PermMissingElem.hpp"

int solution1(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    return (int)addArray(A, A.size());
}

long addArray(vector<int> &A, long count) {
    int temp=0;
    vector<int>::iterator iter;
    for(iter=A.begin(); iter!=A.end(); iter++) {
        temp+=*iter;
    }
    return (((count+1)*(count+2))/2)-temp;
}
