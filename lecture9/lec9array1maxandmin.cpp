#include <iostream>
using namespace std;
int maximum;
int main(){
    int arr[5];
    for (int   i = 0; i <5; i++)
    {
        cout<<"enter"<<i+1<<"number"<<":";
        cin>>arr[i];
    }
    

    
    int max=arr[0];
    for (int  i = 0; i <5; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }

    }
    int min=arr[0];
    for (int  i = 0; i <5; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }

    }
    
    cout<<"maximum no is"<<max<<endl;
    cout<<"manimum no is"<<min;
    return 0;

}