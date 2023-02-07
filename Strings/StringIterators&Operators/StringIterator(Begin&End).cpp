//
//  StringIterator(Begin&End).cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// syntax
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Today";
    
    string::iterator it;
    for (it = str.begin();it != str.end(); it++) {
        cout<<*it;
    }
    cout<<endl;
    return 0;
}

// lowercase to uppercase with string iterator
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "today";
    string :: iterator it;
    for (it = str.begin();it != str.end(); it++) {
        *it = *it -32;
    }
    cout<<str<<endl;
    return 0;
}

// iteration using for loop
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Today";
    for (int i = 0; str[i] != '\0'; i++) {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}

// using for loop lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "today";
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] - 32;
    }
    cout<<str<<endl;
    
    return 0;
}

