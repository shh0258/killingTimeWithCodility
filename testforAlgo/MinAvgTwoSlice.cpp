//
//  MinAvgTwoSlice.cpp
//  testforAlgo
//
//  Created by user on 2018. 5. 29..
//  Copyright © 2018년 user. All rights reserved.
//

#include "MinAvgTwoSlice.hpp"
//int solution6(vector<int> &A) {
//    int start = 0, pstart=0;
//    int end = 1, pend=1;
//
//    for(int i=2; i<A.size(); i++) {// for end
//        pend=i;
//        if(calculator(start, end, A) >= calculator(start, pend, A)) {
//            end=pend;
//        }
//
//    }
//    cout<<"end: "<<end<<endl;
//    for(int i=0; i<=end-1; i++) {// for start
//        pstart=i;
//        if(calculator(start, end, A) >= calculator(pstart, end, A)) {
//            start=pstart;
//        }
//    }
//    cout<<"start : "<<start<<endl;
//
//    return start;
//}
//
//double calculator(int start, int end, vector<int> &A){
//    double temp=0;
//    for(int i=start; i<=end; i++) {
//        temp+=A[i];
//    }
//    return temp/(end-start+1);
//}

int solution6(vector<int> &A) { // not finished yet
    double total=0, result=0, p_result=0;
    int start=0;
    int end=1;
    
    total=(double)(A[start]+A[end]);
    result=modTotal(total, start, end);
    cout<<"total:"<<total<<endl<<"result:"<<result<<endl;
    
    while(1){
        if(end>=(A.size()-1)) {
            break;
        }
        end++;
        total+=A[end];
        p_result=modTotal(total, start, end);
        cout<<"1 loop:::::: end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<endl;
        if(result>p_result) {
            while(1){
                if(end-start<2) {
                    break;
                }
                result=p_result;
                total-=(double)A[start];
                start++;
                p_result=modTotal(total, start, end);
                cout<<"2 loop22222: end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<endl;
                if(result<p_result) {
                    break;
                }
            }
        }
    }
     cout<<"final result: end: "<<end<<"  start : "<<start<<" total: "<<total<<"  p_result: "<<p_result<<endl;
    return start;
}

double modTotal(double total, int start, int end) {
    return total/(end-start+1);
}














