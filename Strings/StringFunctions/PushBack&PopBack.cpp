//
//  PushBack&PopBack.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

//Push_Back (str.push_back())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Programming";
    str.push_back('z');
    cout<<str<<endl;
    
    return 0;
    
}


// Pop_Back (str.pop_back())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str ="Programming";
    str.pop_back();
    cout<<str<<endl;
    
    return 0;
}
