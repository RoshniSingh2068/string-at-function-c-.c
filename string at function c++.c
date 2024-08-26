// the <string> library also have an at() function that can used to access characters in string

#include <iostream>
#include<string>

using namespace std;
int main(){
    string mystring = "Hello world " ;
    cout<<"original string"<<mystring<<"\n";
    cout<<"first character"<<mystring.at(0)<<"\n";
    cout<<"fourth character"<<mystring.at(4)<<"\n";
    cout<<"last character"<<mystring.at(mystring.length()-1)<<"\n";
    mystring.at(0)='j';
    cout<<"changed the string"<<mystring;
    return 0;
}
