//
//  Copy&Find.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// Copy Function (s.copy()) to copy the whole string
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Welcome";
    char str[10];
    s.copy(str, s.length());
    
    cout<<s<<endl;
    
    return 0;
}


// to copy few characters of string
#include <iostream>
#include <string>

using namespace std;

int main() {
    string S = "Welcome";
    char str[10];
    S.copy(str, 3);
    str[3] = '\0';
    
    cout<<str<<endl;
    
    return 0;
}

// find function (str.find())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "How are you?";
    
    cout<<str.find("are")<<endl;
    
    return 0;
}

// for finding a single index
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "How are you";
    cout<<str.find('a')<<endl;
    
    return 0;
}

// when try to find a missing word, it will return capacity of the array
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "How are you";
    cout<<str.find("is")<<endl;
    
    return 0;
}

// rfind occurence of letter from the right hand side (str.rfind())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "How are you?";
    cout<<str.rfind('o')<<endl;
    
    return 0;
    
}

