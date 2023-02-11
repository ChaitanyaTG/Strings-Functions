//
//  ChangeCaseFromUpperToLower.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 03/02/23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "WELCOME";
    for (int i = 0; str[i] != '\0'; i++) {
        str[i]+=32;
    }
    cout<<"The lowercase would be "<<str<<endl;
    
    return 0;
}
