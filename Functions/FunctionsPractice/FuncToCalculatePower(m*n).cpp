//
//  FuncToCalculatePower(m*n).cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
using namespace std;

int pow(int m, int n) {
    int p = 1;
    for (int i = 0; i<n; i++) {
        p = p*m;
    }
    return p;
}

int main() {
    cout<<pow(2,5);
    
    return 0;
}
