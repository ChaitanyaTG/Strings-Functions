//
//  RecursiveFunctionSyntax.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 13/02/23.
//


#include <iostream>
using namespace std;

void fun(int n) {
    if (n>0) {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main() {
    int x = 5;
    fun(x);
    
    return 0;
}
