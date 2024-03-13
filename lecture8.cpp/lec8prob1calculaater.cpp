#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout <<"enter the value of b";
    cin>>b;
    cout<<"enter the value of operation";
    char op;

    cin>>op;
    
    switch ( op)
    {
    case '+':cout<<(a+b)<<endl;
        break;
    case '-':cout<<(a-b)<<endl;
        break;
    case '*':cout<<(a*b)<<endl;
        break;
    case '/':cout<<(a/b)<<endl;
        break;
    case '%':cout<<(a%b)<<endl;
        break;
        break;
    
    default:cout <<"please enter the valid operation";
        break;
    }
    return 0;
    
}