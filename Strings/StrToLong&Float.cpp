//
//  StrToLong&Float.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//


#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "235";
    char s2[20] = "54.34";
    
    long int x = strtol(s1, NULL,10);
    // 10 is the base of the number system
    float y = strtof(s2, NULL);
    cout<<x + 10<<endl;
    cout<<y - 5<<endl;
    
    return 0;
}
