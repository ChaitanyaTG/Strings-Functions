//
//  RecursiveFuncPart2.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 13/02/23.
//


#include <iostream>
using namespace std;

void fun(int n) {
    if(n > 0) {
        fun(n-1);
        cout<<n<<endl;
    }
}
int main() {
    int x = 5;
    fun(x);
}
