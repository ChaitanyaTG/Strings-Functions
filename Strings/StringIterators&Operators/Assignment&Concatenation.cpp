//
//  Assignment&Concatenation.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// = & +
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = " World";
    
    str1 = str1 + str2;
    cout<<str1<<endl;
    
    return 0;
}

// concatenation
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = " World";
    
    str1 = str1 + " World, How are you?";
    cout<<str1<<endl;
    
    return 0;
}

// Assignment (=)
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    str1 = str2;
    cout<<str1<<endl;
    
    return 0;
}

// displaying both of them as we are same
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    str1 = str2;
    cout<<str1<<" "<<str2<<endl;
    
    return 0;
}

