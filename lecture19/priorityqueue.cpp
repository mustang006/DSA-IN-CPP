#include<iostream>
#include<queue>
using namespace std;
int main(){
//max heap

priority_queue<int> maxi;

//min heap
priority_queue<int,vector<int> , greater<int> >mini;


maxi.push(0);
maxi.push(5);
maxi.push(2);
maxi.push(7);
cout<<"size-->"<<maxi.size()<<endl;
int n=maxi.size();
for (int i = 0; i < n; i++)
{
   cout<<maxi.top()<<" ";
   maxi.pop();
}
cout<<endl;
cout<<"khali hai ky meeya"<<maxi.empty();
cout<<endl;

//mini ke liy
mini.push(22);
mini.push(11);
mini.push(88);
mini.push(33);

int m=mini.size();
for (int i = 0; i < m; i++)
{
   cout<<mini.top()<<" ";
   mini.pop();
}
cout<<endl;
cout<<"khali hai ky meeya"<<mini.empty();
}