#include<iostream>
#include<array>
using namespace std;
int main(){
int arr[3]={1,2,3};
array<int,4> a={11,22,33,44};
int size=a.size();
for (int i = 0; i < size; i++)
{
    cout<<a[i]<<" , ";
    
}
cout<<endl;
cout<<"element of array at 2nd index"<<a.at(2)<<endl;
cout<<"empty or not"<<a.empty()<<endl;
cout<<"first elemnt of array"<<a.front();
cout<<"last elemnt of array"<<a.back();
return 0;
}

