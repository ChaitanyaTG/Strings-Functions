//
//  Rfind&FindFirstOf.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// Find_First_Of (str.find_first_of())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World?";
    cout<<str.find_first_of('l')<<endl;
    
    return 0;
    
}

// find first of with indexes
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World";
    cout<<str.find_first_of('l', 4)<<endl;
    
    return 0;
}

// find first of a string
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, world!";
    cout<<str.find_first_of("le")<<endl;
    
    return 0;
}

// Find last of Function (str.find_last_of())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello World";
    cout<<str.find_last_of('l')<<endl;
    
    return 0;
}

