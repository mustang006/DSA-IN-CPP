#include <iostream>
#include <string>
using namespace std;

int main(){
string firstname;
cout<<"your first name is:";
getline(cin,firstname);


string lastname;
cout<<"your last name is:";


getline(cin,lastname);
cout <<"your full name is:"<<firstname.append(lastname);ab
return 0;
}