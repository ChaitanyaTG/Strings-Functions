//
//  FindTheLengthOfaString.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 03/02/23.
//

// using for loop
#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string str = "Welcome";
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    cout<<"Length is "<<count<<endl;
    return 0;
}

// using string iterator
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "WELCOME";
    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++) {
        count++;
    }
    cout<<"Length is "<<count<<endl;
    return 0;
}
