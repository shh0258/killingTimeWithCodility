//
//  FrogJmp.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "FrogJmp.hpp"

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int temp=0;
    for(int i=X; i<Y; i+=D) {
        if(i!=X) {
            temp++;
        }
    }
    if(temp!=0)
        temp++;
    return temp;
}


