//
//  FuncOverloadingForSumOfNumbers.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

float sum(float a, float b) {
    return a+b;
}

int sum(int a, int b, int c) {
    return a+b+c;
}
int main() {
    cout<<sum(10,12)<<endl;
    cout<<sum(12.5f,12.5f)<<endl;
    cout<<sum(5,5,6)<<endl;
    
    return 0;
}
