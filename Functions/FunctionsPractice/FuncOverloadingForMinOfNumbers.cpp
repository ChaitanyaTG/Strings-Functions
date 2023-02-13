//
//  FuncOverloadingForMinOfNumbers.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
using namespace std;

int Min(int x, int y) {
    if (x<y) {
        return x;
    }
    else {
        return y;
    }
}
int Min(int x, int y, int z) {
    if (x<y && x<z) {
        return x;
    }
    else if(y<z) {
        return y;
    }
    else {
        return z;
    }
}

float Min(float x, float y) {
    if(x<y) {
        return x;
    }
    else {
        return y;
    }
}
int main() {
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.4f, 9.4f)<<endl;
    
    return 0;
}
