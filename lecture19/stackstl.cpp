#include<iostream>
#include<stack>
using namespace std;
int main(){

stack<string> s;
s.push("love");
s.push("babbar");
s.push("kumar");
cout<<"top element of stack"<<" "<<s.top();
s.pop();
cout<<endl;
cout<<"top elemrnt"<<s.top();
cout<<endl;
cout<<"size of stack"<<s.size();
cout<<endl;
cout<<"empty or not"<<s.empty();


}