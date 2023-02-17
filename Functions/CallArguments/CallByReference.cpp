//
//  CallByReference.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 11/02/23.
//


#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
   
    return 0;
}