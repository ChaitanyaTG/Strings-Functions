//
//  strcmpFunction.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// using strcmp H & H are same, so the output is zero.
#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char s1[20] = "Hello";
    char s2[20] = "Hello";
    
    cout<<strcmp(s1,s2)<<endl;
    
    return 0;
}

// using strcmp, when h & H are compared. ASCII code of h & H are 105 & 73 respectively. which gives output 32.
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "hello";
    char s2[20] = "Hello";
    
    cout<<strcmp(s1,s2)<<endl;
    
    return 0;
}

// strcmp function when O is compared with o the ascii code of o is larger than O but we are comparing HellO to Hello so the output will be -32
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "HellO";
    char s2[20] = "Hello";
    
    cout<<strcmp(s1,s2)<<endl;
    
    return 0;
}

