//
//  ReturnByAddress.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 12/02/23.
//

#include <iostream>
using namespace std;

int * fun() {
    int *p = new int[6];
    for(int i = 0; i<6; i++) {
        p[i] = 6*i;
    }
    cout<<p<<endl;
    return p;
}
int main() {
    int *q = fun();
    for(int i = 0; i<6; i++) {
        cout<<q[i]<<endl;
    }
    return 0;
}
