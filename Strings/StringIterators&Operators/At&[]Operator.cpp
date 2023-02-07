//
//  At&[]Operator.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// At operator (str.at())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Holiday";
    cout<<str.at(4)<<endl;
    
    return 0;
}

// [] subscript operator (str[])
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Holiday";
    cout<<str[4]<<endl;
    
    return 0;
}

// assigning a new value to the current string
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Holiday";
    str[4] = 'M';
    cout<<str<<endl;
    
    return 0;
}

