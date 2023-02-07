//
//  Substring&Compare.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 02/02/23.
//

// substring (str.substr())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Programming";
    cout<<str.substr(3)<<endl;
    
    return 0;
}

// substring for a desired index in a query
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Programming";
    cout<<str.substr(3,4)<<endl;
    
    return 0;
}

// compare (str1.compare(str2))
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "Hello";
    
    cout<<str1.compare(str2)<<endl;
    
    return 0;
}

// here H comes before W in the dictionary so its smaller than W
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    cout<<str1.compare(str2)<<endl;
    
    return 0;
}

// difference in ASCII codes of H & h
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "hello";
    
    cout<<str1.compare(str2)<<endl;
    
    return 0;
}

