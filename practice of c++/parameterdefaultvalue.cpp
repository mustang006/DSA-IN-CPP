#include <iostream>
#include<string>
using namespace std;
void myfunction(string pica ="Norway"){
    cout<< pica<<"country\n";           
}
int main(){
    myfunction("india");
    myfunction("pakistan");
    myfunction();
    myfunction();
    return 0;
}