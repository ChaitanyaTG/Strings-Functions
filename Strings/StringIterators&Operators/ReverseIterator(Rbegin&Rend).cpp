//
//  ReverseIterator(Rbegin&Rend).cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// Syntax
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "today";
    string::reverse_iterator it;
    for ( it = str.rbegin(); it != str.rend(); it++) {
        cout<<*it;
    }
    cout<<endl;
    return 0;
}

