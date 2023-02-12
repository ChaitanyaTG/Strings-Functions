//
//  FuncToAdd2Numbers.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//

#include <iostream>
using namespace std;

float add(float x, float y) {
    float z;
    z = x + y;
    return z;
}

int main() {
    float x= 2.3, y = 4.6, z;
    z = add(x , y);
    cout<<"Sum is "<<z<<endl;
}

