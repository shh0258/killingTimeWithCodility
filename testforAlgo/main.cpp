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
//#include "MaxCounters.hpp"
#include "MinAvgTwoSlice.hpp"

int main(int argc, const char * argv[]) {
    vector<int> temp;
    vector<int>::iterator iter;
    temp.push_back(4);
    temp.push_back(2);
    temp.push_back(2);
    temp.push_back(5);
    temp.push_back(1);
    temp.push_back(5);
    temp.push_back(8);
    cout<<"result: "<<endl;
    for(iter=temp.begin(); iter!= temp.end(); ++iter) {
        cout<<*iter<<endl;
    }
    cout<<solution6(temp)<<endl;
    
    return 0;
}

