//
//  Replace&Erase.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

//Replace Function (str.replace())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Programming";
    str.replace (3,7,"LL");
    cout<<str<<endl;
    
    return 0;
}

// Erase Function (str.erase())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Programming";
    str.erase();
    cout<<str<<endl;
    return 0;
}
