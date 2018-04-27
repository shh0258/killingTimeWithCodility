//
//  main.cpp
//  testforAlgo
//
//  Created by user on 2018. 4. 25..
//  Copyright © 2018년 user. All rights reserved.
//

#include <iostream>
//#include "BinaryCount.hpp"
//#include "CyclieRotation.hpp"
//#include "OddOccurrencesInArray.hpp"
#include "PermMissingElem.hpp"

int main(int argc, const char * argv[]) {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
//
//    cout << "ex3) [*iter] iterator : ";
//    vector<int>::iterator iter;
//    for(iter = v.begin(); iter != v.end() ; iter++){
//        cout << *iter << " ";
//    }
//    cout << endl << endl;
//    solution(v, 1);
//
//    cout << "ex1-1) [v.at(i)] size_type : " ;
//    for(vector<int>::size_type i =0; i<v.size(); i++){
//        cout << v.at(i) << " ";
//    }
//    cout << endl;
    cout<<solution(v)<<endl;
    return 0;
}
