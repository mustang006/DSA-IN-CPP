#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> l;
list<int> n(5,1000);
for(int i:n){
    cout<<i<< " ";
}
cout<<endl;
l.push_back(2);
l.push_front(1);//pop beh use kar sakte hain
for(int i:l){
    cout<<i<< " ";
}
cout<<endl;
l.erase(l.begin());
cout<<"after erase";
for(int i:l){
cout<<i <<" ";

}cout<<endl;
cout<<"size of list";
cout<<endl;
cout<<l.size();


}