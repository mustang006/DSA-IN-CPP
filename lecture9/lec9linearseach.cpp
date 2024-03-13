#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
for (int  i = 0; i <size; i++)
{
    if(key==arr[i]){
        return 1;

    }
}
return 0;



}
int main (){
int arr[10]={1,5,77,8,99,44,75,-5,-4,-99};
int key;
cout<<"enter the key";
cin>>key;
bool found=search(arr,10,key);
if(found){
    cout<<"key is present";

}
else{
    cout<<"key is absent";
}

return 0;
}