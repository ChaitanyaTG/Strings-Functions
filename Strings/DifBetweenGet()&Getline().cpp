//
//  DifBetweenGet()&Getline().cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 01/02/23.
//

// using get()
#include <iostream>
using namespace std;

int main() {
    char s[100];
    char s2[100];
    cout<<"Enter your name ";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    
    cout<<"Enter your name ";
    cin.get(s2,100);
    cout<<"Welcome "<<s2<<endl;
    
    return 0;
}
// using get() it will only take the first string before hitting enter with '\0' after hitting enter the second get function will get enter. to overcome this, use ignore() to ignore any extra characters in the first string

#include <iostream>
using namespace std;

int main() {
    char s[100];
    char s2[100];
    cout<<"Enter your name ";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    
    cin.ignore();// it will clear \n or any other characters in the keyboard buffer.
    
    cout<<"Enter your name ";
    cin.get(s2,100);
    cout<<"Welcome "<<s2<<endl;
}


// using getline()
#include <iostream>
using namespace std;

int main() {
    char s[100];
    char s2[100];
    cout<<"Enter your name ";
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;
    
    cout<<"Enter your name ";
    cin.getline(s2,100);
    cout<<"Welcome "<<s2<<endl;
    
    return 0;
}


