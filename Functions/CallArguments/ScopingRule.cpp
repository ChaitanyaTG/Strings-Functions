//
//  ScopingRule.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 12/02/23.
//


#include <iostream>
using namespace std;

int x = 10;
int main() {
    int x = 20;
    {
        int x = 30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}
