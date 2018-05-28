//
//  MissingInteger.cpp
//  testforAlgo
//
//  Created by user on 2018. 5. 28..
//  Copyright © 2018년 user. All rights reserved.
//

#include "MissingInteger.hpp"
int solution4(vector<int> &A) {
    unordered_set<int> temp;
    int value = 0;
    unordered_set<int>::iterator iter;
    
    for(int i=0; i<A.size(); i++) {
        temp.insert(A[i]);
    }
    for(int i=1; i<100002; i++) {
        iter=temp.find(i);
        if(iter == temp.end()) {
            cout<<"for in i "<<i<<endl;
            value=i;
            break;
        }
    }
    return value;
}
