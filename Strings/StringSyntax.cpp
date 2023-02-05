//
//  StringSyntax.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 31/01/23.
//

#include <iostream>
using namespace std;

int main() {
    char S[10] = "Hello";
    
    cout<<S<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char S[] = "Hello";
    
    cout<<S<<endl;
    
    return 0;
}

// using \0 
#include <iostream>
using namespace std;

int main() {
    char S[] = {'H','e','l','l','o','\0'};
    cout<<S<<endl;
    return 0;
}

// writing after \0 to see if it includes it in the string or not which it doesnt because null character stops the string
#include <iostream>
using namespace std;

int main() {
    char S[] = {'H','e','l','l','o','\0','p','p','p'};
    cout<<S<<endl;
    return 0;
}

// using ASCII codes with null character
#include <iostream>
using namespace std;

int main() {
    char S[] = {65,66,67,68,'\0'};
    cout<<S<<endl;
    return 0;
}

// null character is 0 so it wont include 69 & 70 to the output
#include <iostream>
using namespace std;

int main() {
    char S[] = {65,66,67,68,0,69,70};
    cout<<S<<endl;
    return 0;
}


// cpp11 doesnt support char pointer. it prefers string class instead.
#include <iostream>
using namespace std;

int main() {
    char *S = "Hello";
    string s = "World";
    cout<<S<<s<<endl;
    
    return 0;
}

