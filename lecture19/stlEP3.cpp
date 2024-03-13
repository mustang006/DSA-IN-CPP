#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;

d.push_back(1);
d.push_front(2);

//d.pop_front();
cout<<endl;
cout<<"first element index "<<d.front();
cout<<endl;
cout<<"last element index "<<d.back();
cout<<endl;
cout<<"empty or not"<<d.empty();
cout<<endl;
cout<<"sizeof an d"<<d.size();
cout<<endl;
//elemrnt delaete karne ke liye
//first element deletemkiya
d.erase(d.begin(),d.begin()+1);
cout<<endl;
cout<<"after erase"<<d.size()<<endl;
for(int i:d){
cout<<i<<endl;

}
return 0;
}