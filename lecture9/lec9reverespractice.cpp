#include <iostream>
using namespace std; 
void reverse(int arr[],int n){
int start=0;
int end=n-1;
while(start<=end){

swap(arr [start],arr [end]);

start++;
    
    end--;
}
}
void printarray(int arr[],int n){
    cout<<"th reversed array is"<<"::";

for (int  i = 0; i < n; i++)
{
    
cout<<arr[i]<<" ";

}
cout<<endl;
}

void soput(int arr[],int size ){
for (int  k = 0; k < size; k++)
    {
       cin>>arr[k];
    }



}



int main(){
    int size;
    cout<<"enter the array size";
    cin>>size;
    cout<<"enter the array numbers";
    cout<<endl;
    int arr[size];
    

 soput(arr,size);

    cout<<"the array is ::";

for (int i = 0; i <size; i++)
{
   cout<<arr[i]<<" ";
}
cout<<endl;

reverse(arr,size);


printarray(arr,size);

return 0;


}