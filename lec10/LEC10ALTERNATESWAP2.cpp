#include <iostream>
using namespace std;
void alternateswap(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }
}
void printarray(int arr[], int size)
{for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}

}
//3rd function for cin array
void inputarray(int arr[],int size){
    cout<<"enter the array no";
for (int  i = 0; i <size; i++)
{
    cin>>arr[i];
}


////thoda sa kaam baki sab aadjust karna hai bsa


}

int main()
{

    int size;
    int size1;
    cout<<"enter the size";
    
    cin>>size;
    cout<<"enter the size 1";
    cin>>size1;
    int arr[size];
    int orr[size1];
    inputarray(arr,size);
    cout<<endl;

inputarray(orr,size1);
cout<<endl;
alternateswap(arr,8);

printarray(arr,8);
cout<<endl;

alternateswap(orr,size1);
printarray(orr,size1);

return 0;


}