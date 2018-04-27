//
//  OddOccurrencesInArray.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "OddOccurrencesInArray.hpp"

int solution(vector<int> &A) {
    vector<int>::iterator iter;
    int temp=A.at(0);
    for(iter=A.begin()+1; iter!=A.end(); iter++) {
        temp^=*iter;
    }
    return temp;
}
