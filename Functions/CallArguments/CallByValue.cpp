//
//  CallByValue.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 11/02/23.
//


#include <iostream>
using namespace std;

void swap (int a, int b) {
    cout<<a<<" "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
// changes in formal paramters wont affect the actual parameters
int main() {
    int x = 10, y = 20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    
    return 0;
}
