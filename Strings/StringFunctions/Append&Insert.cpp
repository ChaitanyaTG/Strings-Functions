//
//  Append&Insert.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    str.append("World");
    cout<<str<<endl;
    
    return 0;
}

// checking capacity
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    cout<<str.capacity()<<endl;
    str.append("World");
    cout<<str.capacity()<<" "<<str.length()<<endl;
    cout<<str<<endl;
    
    return 0;
}
 
// using insert (str.insert())
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "How you?";
    str.insert(3, " are");
    cout<<str<<endl;
    
    return 0;
}

// using insert with index
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "How you?";
    str.insert(3, " are", 4);
    cout<<str<<endl;
    
    return 0;
}
