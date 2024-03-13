#include<iostream>
using namespace std;
int update(int arr[]){
cout<<"inside the update function"<<endl;
//arr is updating this update is also seen in main function
//because it copies the address that's why it update i n main function also
//pass by value

arr[0]=120;
for (int  i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;



cout<<"back to main function"<<endl;
}




int main(){
    int arr[5]={1,4,8,7,55};
    update(arr);
    cout<<"inside the main function"<<endl;
    for (int  i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}