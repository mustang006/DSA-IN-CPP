#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter the size";
cin>>size;
int arr[size];
cout<<"enter the array elements";
for (int  i = 0; i < size; i++)
{
    cin>>arr[i];

}
cout<<endl;

//for fininding dublicate array
int ans=0;

for (int i = 0; i <size; i++)
{
ans=ans^arr[i];
   
}
//array ke i se nahe karva hai 
//for xor{1,  n-1}
for (int i = 0; i <size; i++)
{
    ans=ans^i;
}
cout<<ans;



return 0;

}