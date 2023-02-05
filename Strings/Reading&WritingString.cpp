//
//  Reading&WritingString.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// creating a string of 20 char. it will create a string of your name with '\0' in the end automatically
#include <iostream>
using namespace std;

int main() {
    char s[20];
    cout<<"Enter your name ";
    cin>>s;
    cout<<"Welcome, "<<s<<endl;
    // the problem with this method is that if we write our full name, it will only capture our first name. to overcome this, we use getline()
    return 0;
}

// using get()
#include <iostream>

using namespace std;

int main() {
    char s[20];
    cout<<"Enter your name";
    cin.get(s,20);
    cout<<"Welcome "<<s<<endl;
    
    
    return 0;
}

// using getline()
#include <iostream>
using namespace std;

int main() {
    char s[100];
    cout<<"Enter your name ";
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;
    
    return 0;
}

