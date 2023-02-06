//
//  StringFunctionsPart2.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

//using substring (strstr)
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "Programming";
    char s2[20] = "gram";
    
    cout<<strstr(s1,s2)<<endl;
    
    return 0;
}

// if it is missing word
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char s1[20] = "avocado";
    char s2[20] = "k";
    
    if (strstr(s1,s2)!=NULL) {
        cout<<strstr(s1,s2)<<endl;
    }
    else {
        cout<<"Not Found "<<endl;
    }
    return 0;
}

//using strchr(main & character)
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "Programming";
    cout<<strchr(s1,'g')<<endl;
    
    return 0;
}

// using strrchr( string & char) plus it gives the occurence of a char from the right side
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[20] = "Programming";
    cout<<strrchr(s1, 'g')<<endl;
    
    return 0;
}

