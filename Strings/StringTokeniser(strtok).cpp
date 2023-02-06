//
//  StringTokeniser(strtok).cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//


#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "x=10;y=20;z=35";
    char *token = strtok(s1, ";");
    
    while (token != NULL) {
        cout<<token<<endl;
        // whatever it is there in the string, it will be used
        token = strtok(NULL, ";");
    }
    return 0;
}
