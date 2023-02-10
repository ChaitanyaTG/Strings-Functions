//
//  FindUsernameFromAnEmail.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 05/02/23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string email = "chaitanya@yahoo.in";
    int i = (int)email.find('@');
    string username = email.substr(0,i);
    cout<<"Username is "<<username<<endl;
    
    return 0;
}

