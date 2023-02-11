//
//  ChangeMixedToLower.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 03/02/23.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "WELCoMe";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i]+=32;
        }
    }
    cout<<"The Lowercase would be "<<str<<endl;
    
    return 0;
}
