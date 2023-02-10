//
//  CountNumberOfVowelsConsonants&Words.cpp
//  Strings
//
//  Created by Chaitanya Gadkari on 03/02/23.
//


#include <iostream>
#include <string>

using namespace std;
int main() {
    int vowels = 0;
    int space = 0;
    int consonant = 0;
    string str = "How Many Words";
    
    for (int i = 0; str[i] != '\0'; i++ ) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'|| str[i] == 'U'|| str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u') {
            vowels++;
        }
        else if (str[i] == ' ') {
            space++;
        }
        else {
            consonant++;
        }
    }
    cout<<"Vowels are "<<vowels<<endl;
    cout<<"Space are "<<space<<endl;
    cout<<"Consonant are "<<consonant<<endl;
    
    return 0;
}

// another approach for spaces
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1="how Many Words";

        int vowels=0, consonants=0, space=0;
        for(int i=0;s1[i]!='\0';i++)
        {

            if(s1[i]=='A'|| s1[i]=='E'|| s1[i]=='I'|| s1[i]=='O'|| s1[i]=='U'||

                s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')

            vowels++;

            else if(s1[i]!=' ')

                consonants++;

        }

        cout<<"Consonants "<<consonants<<endl;

        cout<<"Vowels "<<vowels<<endl;

        for(int i=0;s1[i]!='\0';i++)

        {

            if(s1[i]==' ' && s1[i+1]!=' ')

            space++;

            }
        cout<<"Words "<<space+1;
        return 0;
}

