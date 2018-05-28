//
//  MaxCounters.cpp
//  testforAlgo
//
//  Created by user on 2018. 5. 28..
//  Copyright © 2018년 user. All rights reserved.
//

#include "MaxCounters.hpp"
vector<int> solution5(int N, vector<int> &A) {
    vector<int> result(N, 0);
    vector<int>::iterator A_iter;
    vector<int>::iterator iter;
    A_iter=A.begin();
    int max=0;
    
    for(int i =0; i<A.size(); i++) {
        if(*A_iter>N) {
            setMaxValue(max, result);
            cout<<"*iter>N"<<endl;
            for(iter=result.begin(); iter!= result.end(); ++iter) {
                cout<<*iter<<endl;
            }
        } else {
            if(++result[*A_iter-1]>max){
                max=result[*A_iter-1];
            }
            cout<<"smaller than N"<<endl;
            for(iter=result.begin(); iter!= result.end(); ++iter) {
                cout<<*iter<<endl;
            }
        }
        ++A_iter;
    }
    return result;
}

void setMaxValue(int max, vector<int> &result) {
    vector<int>::iterator iter;
    for(iter=result.begin(); iter!=result.end(); ++iter) {
        *iter=max;
    }
}

//int findMaxValue(vector<int> &result) {
//    vector<int>::iterator iter;
//    int temp=0;
//    for(iter=result.begin(); iter!=result.end(); ++iter) {
//        if(temp<*iter) {
//            temp=*iter;
//        }
//    }
//    return temp;
//}
