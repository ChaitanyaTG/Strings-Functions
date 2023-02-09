//
//  CapacityResize&MaxSize.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// Capacity (str.capacity())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    cout<<str.capacity()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

// Resize (str.resize())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    str.resize(50); // capacity will be 50 or more than 50
    cout<<str.capacity()<<endl;
    cout<<str<<endl;
    
    return 0;
}

// MaxSize (str.max_size())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    str.resize(50);
    cout<<str.max_size()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

