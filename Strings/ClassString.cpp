//
//  ClassString.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// string syntax
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    
    cout<<str<<endl;
    return 0;
}

// creating a string by taking input
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string ";
    cin>>str;
    cout<<str<<endl;
    return 0;
}

// getline() to get the whole line not just first word
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter a string ";
    getline(cin,str);
    
    cout<<str<<endl;
    return 0;
    
}


// checking if it counts null character (\0) as the next input and it doesnt
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string ";
    cin>>str;
    cout<<str<<endl;
    
    cin>>str;
    cout<<str<<endl;
    // if use two words ie Hello World.  Hello will be taken by the first string and world by the second
    
    return 0;
}

