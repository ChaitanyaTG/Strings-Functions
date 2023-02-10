//
//  ToCheckValidUsername&Password.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 05/02/23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int flag1 = 0, flag2 = 0;
    char username[] = "c2dg";
    char password[] = "xyz";
    
    char username1[20];
    char password1[20];
    
    cout<<"Enter a Username"<<endl;
    gets(username1);
    
    cout<<"Enter a Password"<<endl;
    gets(password1);
    
    if(strcmp(username, username1) == 0 && strcmp(password, password1) == 0) {
        cout<<"Access granted"<<endl;
    }
    else {
        cout<<"Access Denied"<<endl;
    }
    return 0;
    
}
