#include <iostream>

using namespace std;

int main() {

int len = 0 ; 

string str ;

cout<<"Give a string to count the length : ";

getline(cin,str);

while(str[len] != '\0'){

len++;

}

cout<<len<<endl;

return 0 ; 

}