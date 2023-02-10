//
//  ToCheckIfaUsernameIsValid.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    string email ="chaitanya#$%^&*";
    int username_valid = 1;
    int index = (int)email.find('@');
    string username = email.substr(0, index);
    
    cout<<"email is "<<email<<endl;
    cout<<"username is "<<username<<endl;
    
    for (int i = 0; username[i] != '\0'; i++) {
        if (username[i] == 46 || (username[i] > 47 && username[i] < 58) ||

                username[i] == 95 || (username[i] > 64 && username[i] < 91) ||

            (username[i] > 96 && username[i] < 123)) {
            continue;
        }
    
    else {
        username_valid = 0;
        break;
    }
    }
    if(username_valid) {
        cout<<"username"<<username<<" is valid"<<endl;
    }
    else {
        cout<<"username"<<username<<" is not valid"<<endl;
    }
    return 0;
}
