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
//#include "PermMissingElem.hpp"
//#include "FrogJmp.hpp"
#include "TapeEquilibrium.hpp"

int main(int argc, const char * argv[]) {
    vector<int> v;
    v.push_back(-10);
    v.push_back(-20);
    v.push_back(-30);
    v.push_back(-40);
    v.push_back(100);
    cout << "ex3) [*iter] iterator : ";
    vector<int>::iterator iter;
    for(iter = v.begin(); iter != v.end() ; iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;
    
    cout<<solution2(v)<<endl;
    return 0;
}
