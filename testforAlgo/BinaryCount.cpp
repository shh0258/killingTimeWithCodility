//
//  BinaryCount.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "BinaryCount.hpp"

string convert10to2(int N) {
    int temp=0;
    char tempc[50];
    string result;
    int num=N;
    
    while (1) {
        temp=num%2;
        sprintf(tempc, "%d", temp);
        if(num>1) {
            num=num/2;
        } else {
            result.append(tempc);
            return result;
        }
        result.append(tempc);
    }
    return result;
}

int count0(string s) {
    int result=0;
    int temp=0;
    int count1=0;
    
    for(int i=0; i<s.length(); i++) {
        if(s.at(i)=='1') {
            count1++;
        }
        if(s.at(i)=='0' && count1!=0) {
            temp++;
        } else {
            if(result<temp) {
                result=temp;
            }
            temp=0;
        }
    }
    return result;
}

int solution(int N) {
    return count0(convert10to2(N));
}
