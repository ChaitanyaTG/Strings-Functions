//
//  StringFunctions.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// to check the length of a string
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[50] = "Hello World";
    cout<<strlen(s)<<endl;
    
    return 0;
}

// using strcat
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = "Good";
    char s2[20] = "Morning";
    
    strcat(s1,s2);
    cout<<s1<<endl;
    
    return 0;
}

// using strncat function
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "Good ";
    char s2[20] = "Morning";
    
    strncat(s1,s2,4);
    cout<<s1<<endl;
    
    return 0;
    
}

//using strcpy
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "Good";
    char s2[20] = "";
    
    strcpy(s2,s1);
    cout<<s2<<endl;
    
    return 0;
}

// using strncpy
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "Good";
    char s2[20] = "";
    
    strncpy(s2,s1,3);
    cout<<s2<<endl;
    
    return 0;
}

