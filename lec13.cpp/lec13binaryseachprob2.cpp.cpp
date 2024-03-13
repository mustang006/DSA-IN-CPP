// firdst and last position of binary search
#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
             ans = mid;
            end = mid - 1;
        }
        else if (k > arr[mid])

        {
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        
    }
    return ans;
}
int lastocc(int arr[],int size,int k){

int start=0;
int end =size-1;
int mid=(start+end)/2;
int ans=-1;
while (start<=end)
{
   if (arr[mid]==k)
   {
    ans=mid;
    start=mid+1;
   }
   else if (arr[mid]<k)
   {start=mid+1;

    /* code */
   }
   else if (arr[mid]>k)
   {end=mid-1;
    /* code */
   }
   mid=(start+end)/2;
   
   
   
}

return ans;



}

int main()
{
    int arr[5] = {1, 3, 3, 4,5};

    cout << firstocc(arr, 5, 3)<<endl;
    cout<<lastocc(arr,5,3)<<endl;

    int total=lastocc(arr,5,3)-firstocc(arr,5,3)+1;
    cout<<"total no of occurnce ois"<<total;
    return 0;
}