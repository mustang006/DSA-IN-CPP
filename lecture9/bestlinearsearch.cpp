#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int  i = 0; i < size; i++)
    {
        if (key==arr[i]){
            return 1;
        }

    }
    

return 0;



}
int main(){
cout<<"enter the aray no:";
int arr[100];
int size;
int key;
cin>>size;
for (int i = 0; i < size; i++)
{cout <<"enter the array no"<<i+1<<" ::";
    cin>>arr[i];
    
}
cout<<"enter the key";
cin>>key;
bool found=search(arr,size,key);
if (found){
cout<<"key is present";
}


else{


    cout<<"key is absent";
}


return 0;
}







