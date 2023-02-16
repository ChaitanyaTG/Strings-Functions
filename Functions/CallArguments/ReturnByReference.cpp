//
//  ReturnByReference.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 12/02/23.
//

#include <iostream>
using namespace std;

int & fun(int &x) {
    return x;
}

int main() {
    int a = 10;
    fun(a) = 25;
    cout<<a<<endl;
    return 0;
}
