#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of an array";
    cin>>size;
    
    int arr[size];
for ( int i = 0; i <size; i++)
{cout<<"enter the array element"<<endl;
cin>>arr[i];
cout<<endl;}
for (int  i = 0; i < size; i++)
{
    cout<<"The array is ::"<<arr[i];
    cout<<endl;
}


int ans=0;
for (int  i = 0; i <size; i++)
{
    
    ans=ans^arr[i];
   

}
 cout<<ans;



}


