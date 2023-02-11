//
//  FuncToFindMaximumOf2Numbers.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
using namespace std;

int maxim(int a, int b, int c) {
    if(a > b && a > c) {
        return a;
    }
    else if(b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int a = 12, b = 14, c = 10, r;
    r = maxim(a,b,c);
    cout<<r<<endl;
    
}
