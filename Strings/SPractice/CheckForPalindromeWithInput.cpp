//
//  CheckForPalindromeWithInput.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 05/02/23.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    char s[100], rev[100];
    cout<<"Enter a string ";
    cin.getline(s,100);
    
    int n = (int)strlen(s),flag;
    
    for(int i = 0, j = n-1; i<n; i++, j--) {
        rev[i] =s[j];
    }
    rev[n] ='\0';
    
    for(int i = 0; i<n; i++) {
        if (s[i] == rev[i]) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }
    if (flag == 1) {
        cout<<"Palindrome"<<endl;
    }
    else if (flag == 0) {
        cout<<"Not a Palindrome"<<endl;
    }
    
    return 0;
}
