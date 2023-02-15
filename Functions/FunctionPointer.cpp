//
//  FunctionPointer.cpp
//  Functions
//
//  Created by Chaitanya Gadkari on 13/02/23.
//


#include <iostream>
using namespace std;

int x = 101;
void display (int x) {
    x++;
    cout<<x<<endl;
}
int main() {
    void(*fp) (int);
    fp = display;
    (*fp) (x);
    
    return 0;
}

//Reference
/*
#include <iostream>
using namespace std;

int max(int x, int y) {
    return x>y?x:y;
}

int min(int x, int y) {
    return x<y?x:y;
}

int main(){
    int (*fp) (int, int);
    fp = max;
    (*fp) (10,5);
    fp = min;
    (*fp) (10,5);
    
    cout<<fp<<endl;
    
    return 0;
}
*/
