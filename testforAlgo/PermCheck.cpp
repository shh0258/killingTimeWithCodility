//
//  PermCheck.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "PermCheck.hpp"

int solution3(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(getAddAllArray(A)==(int)defaultAddArrayValue(A)) {
        if(findMaxVal(A)==A.size()) {
            return 1;
        }
    }
    return 0;
}

int findMaxVal(vector<int> &A){
    int temp=0;
    vector<int>::iterator iter;
    for(iter=A.begin(); iter!=A.end(); iter++) {
        if(temp<*iter){
            temp=*iter;
        }
    }
    return temp;
}
long defaultAddArrayValue(vector<int> &A) {
    return A.size()*(A.size()+1)/2;
}

int getAddAllArray(vector<int> &A){
    int temp=0;
    vector<int>::iterator iter;
    for(iter=A.begin(); iter!=A.end(); iter++) {
        temp+=*iter;
    }
    return temp;
}
