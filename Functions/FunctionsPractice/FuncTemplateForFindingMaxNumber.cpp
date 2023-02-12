//
//  FuncTemplateForFindingMaxNumber.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    cout<<Max(10,5)<<endl;
    cout<<Max(12.0f,14.9f)<<endl;
    
    return 0;
}
