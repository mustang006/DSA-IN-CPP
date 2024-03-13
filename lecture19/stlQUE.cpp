#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<string> q;
q.push("love");
q.push("babbar");
q.push("kumar");
cout<<"first element"<<q.front();
cout<<endl;
q.pop();
cout<<"first element"<<q.front();
cout<<endl;
cout<<"last element"<<q.back();
cout<<endl;

cout<<"size of queue"<<q.size();
cout<<endl;
q.pop();
cout<<"size of queue after pop"<<q.size();


}