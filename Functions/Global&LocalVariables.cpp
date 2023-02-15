//
//  Global&LocalVariables.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 12/02/23.
//

#include <iostream>
using namespace std;

int g = 5;

void fun() {
    int a = 10;
    a++;
    g++;
    cout<<a<<" "<<g<<endl;
    
}

int main() {
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    
    return 0;
}
