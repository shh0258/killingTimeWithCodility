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
//#include "TapeEquilibrium.hpp"
//#include "PermCheck.hpp"
//#include "MissingInteger.hpp"
#include "MaxCounters.hpp"

int main(int argc, const char * argv[]) {
    vector<int> temp;
    vector<int> temp2;
    vector<int>::iterator iter;
    temp.push_back(1);
    temp.push_back(32);
    temp.push_back(2);
    temp.push_back(3);
    temp.push_back(3);
    temp.push_back(6);
    temp2=solution5(6, temp);
    cout<<"result: "<<endl;
    for(iter=temp2.begin(); iter!= temp2.end(); ++iter) {
        cout<<*iter<<endl;
    }
    return 0;
}

