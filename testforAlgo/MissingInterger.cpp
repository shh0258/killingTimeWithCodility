//
//  MissingInterger.cpp
//  180428_temp
//
//  Created by han on 2018. 4. 28..
//  Copyright © 2018년 han. All rights reserved.
//

#include "MissingInterger.hpp"

int solution(vector<int> &A) {
    hash_set<int> hset;
    hash_set<int>::iterator iter1;
    hash_set<int>::iterator iter2;
    hash_set<int>::iterator iter3;
    
    for(int i=0; i<A.size(); i++) {
        hset.insert(A.at(i));
    }
    iter1=hset.begin();
    iter2=hset.begin();
    iter3=hset.end();
    
    if(*iter1>0) {
        for(int i=0; i<A.size(); i++) {
            if(iter2==iter3){
                return *iter1+1;
            }
            if(*iter2-*iter1>1) {
                return *iter1+1;
            }
            iter1++;
            iter2++;
        }
    } else {
        if(*iter3<0) {
            return 1;
        }
        for(int i=0; i<A.size(); i++) {
            if(*iter1>0) {
                if(iter2==iter3){
                    return *iter2+1;
                }
                if(*iter2-*iter1>1) {
                    return *iter1+1;
                }
            }
            iter1++;
            iter2++;
        }
        return -1;
    }
    return -1;
}
