#include<iostream>
using namespace std ;
int main(){
    int size;
    cout<<"enter the size";
    cin>>size;
cout<<"enter the array";
int arr[size];
for (int i = 0; i <size; i++)
{
    cin>>arr[i];

}
cout<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i];
}
cout<<endl;
//revering the array
/*int start=0;
int end=size-1;
for (int i = 0; i <size; i++)
{
    int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;

}*/
int m;
cout<<"enter the valueof m";
cin>>m;
int start=m+1;
int end=size-1;
while (start<=end)
{swap(arr[start],arr[end]);
start++;
end--;
}

for (int i = 0; i <size; i++)
{
    cout<<arr[i];
}


return 0;
}