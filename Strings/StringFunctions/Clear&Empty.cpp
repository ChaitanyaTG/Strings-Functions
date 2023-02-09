//
//  Clear&Empty.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// Clear (str.clear())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    str.clear();
    cout<<str.length()<<endl;
    cout<<str<<endl;
    
    return 0;
}

// Empty (str.empty())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "";
    if (str.empty()) {
        cout<<"String is Empty "<<endl;
    }
    else {
        cout<<"String is "<<str<<endl;
    }
    return 0;
}

