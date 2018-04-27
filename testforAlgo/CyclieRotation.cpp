//
//  CyclieRotation.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "CyclieRotation.hpp"

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    for(int i=0; i<K; i++) {
        swapIndexSize(A);
    }
    return A;
}

vector<int> swapIndexIter(vector<int> &A) {
    vector<int>::iterator iter;
    int temp=0;
    if(A.empty()) {
        return A;
    }
    temp=A.back();
    for(iter= A.end(); iter != A.begin()-1; iter--) {
        if(iter!=A.begin()) {
            *iter=*(iter-1);
        } else {
            *iter=temp;
        }
    }
    return A;
}

vector<int> swapIndexSize(vector<int> &A) {
    int temp=0;
    if(A.empty()) {
        return A;
    }
    temp=A.back();
    for(long i = A.size()-1; i>=0; i--){
        if(i!=0) {// 경계값 정확히 안해서 헤멤, 이 숫자의 인덱스를 가지고 판별했어야 하는데, 값을 가지고 비교했었음
            A.at(i)=A.at(i-1);
        } else {
            A.at(i)=temp;
        }
    }
    return A;
}
