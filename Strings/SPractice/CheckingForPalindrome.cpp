//
//  CheckingForPalindrome.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 05/02/23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "LIRIL";
    string rev = "";
    int len = (int) str.length();
    rev.resize(len);
    
    for(int i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    if(str.compare(rev) == 0) {
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}
