#include <iostream>
using namespace std;
int main(){
    char a,b,c;
    cout<<"type a value ";
    cin>>a;
    if(a>='A' && a <='Z'){
        cout<<"this is upper case";

    }
else if(a>='a' && a<='z')
{
    cout<<"this is lowaer case";

}
else if(a>='0' && a<='9'){
cout<<"this is numeric";}
return 0;
}