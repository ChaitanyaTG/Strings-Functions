//
//  Syntax.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 05/02/23.
//

#include <iostream>

using namespace std;

int add(int x,int y) {
    int z;
    z = x + y;
    return z;
}

int main() {
    int a = 10, b = 15, c;
    c = add(a,b);
    cout<<"Sum is "<<c<<endl;
}


// 
#include <iostream>
using namespace std;

void display() {
    cout<<"Hello"<<endl;
}
int main() {
    display();
    return 0;
}

