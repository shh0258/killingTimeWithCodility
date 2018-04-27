//
//  FrogJmp.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 27..
//  Copyright © 2018년 user. All rights reserved.
//

#include "FrogJmp.hpp"

//int solution(int X, int Y, int D) {
//    // write your code in C++14 (g++ 6.2.0)
//    int temp=0;
//    for(int i=X; i<Y; i+=D) {
//        if(i!=X) {
//            temp++;
//        }
//    }
//    if(temp!=0)
//        temp++;
//    return temp;
//}

int solution(int X, int Y, int D) {
    if(Y-X<D) {
        if(X==Y) {
            return 0;
        } else {
            return 1;
        }
    } else {
        if((Y-X)%D==0) {
            return (Y-X)/D;
        } else {
            return ((Y-X)/D)+1;
        }
    }
}
