#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;

    int arr[n];
    //ye  for is input ke liye
    for (int i = 0; i < n; i++)
    {cout<<"enter the value of index no"<<i;
        cin >> arr[i];
    }
    // ye code hai
for (int  i = 0; i < n; i++)
{
    int minindex=i;
    for (int j = i+1;  j< n; j++)
    {
        if (arr[minindex]>arr[j])
        {
          minindex=j;

        }
        
    }
 swap(arr[minindex],arr[i]);   
}

for (int i = 0; i <n; i++)
{
  cout<<arr[i]<<" ,";
}
return 0;



}