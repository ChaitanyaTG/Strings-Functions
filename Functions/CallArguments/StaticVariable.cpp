//
//  StaticVariable.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 13/02/23.
//


#include <iostream>
using namespace std;

void fun() {
    static int s = 10;
    s++;
    cout<<s<<endl;
}
int main() {
    fun();
    fun();
    fun();
    
    return 0;
}

