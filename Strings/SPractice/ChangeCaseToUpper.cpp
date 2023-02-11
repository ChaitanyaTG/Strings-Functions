//
//  ChangeCaseToUpper.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 03/02/23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "welcome";
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] - 32;
    }
    cout<<"The Uppercase would be "<<str<<endl;
    
    return 0;
}

// with number
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "WelCOMe7";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    
    return 0;
}

