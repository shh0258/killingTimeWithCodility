//
//  PermMissingElem.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "PermMissingElem.hpp"

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    return (int)(A.size()*A.size()+1)/2-addArray(A);
}

int addArray(vector<int> &A) {
    int temp=0;
    vector<int>::iterator iter;
    for(iter=A.begin(); iter!=A.end(); iter++) {
        temp+=*iter;
    }
    return temp/2;
}
