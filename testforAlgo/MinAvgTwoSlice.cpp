//
//  MinAvgTwoSlice.cpp
//  testforAlgo
//
//  Created by user on 2018. 5. 29..
//  Copyright © 2018년 user. All rights reserved.
//

#include "MinAvgTwoSlice.hpp"
int solution6(vector<int> &A) {
    int start = 0, pstart=0;
    int end = 1, pend=1;
    
    for(int i=2; i<A.size(); i++) {// for end
        pend=i;
        if(calculator(start, end, A) >= calculator(start, pend, A)) {
            end=pend;
        }
        
    }
    cout<<"end: "<<end<<endl;
    for(int i=0; i<=end-1; i++) {// for start
        pstart=i;
        if(calculator(start, end, A) >= calculator(pstart, end, A)) {
            start=pstart;
        }
    }
    cout<<"start : "<<start<<endl;
    
    return start;
}

double calculator(int start, int end, vector<int> &A){
    double temp=0;
    for(int i=start; i<=end; i++) {
        temp+=A[i];
    }
    return temp/(end-start+1);
}
