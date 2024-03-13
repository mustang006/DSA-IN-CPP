#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 5, 8, 12, 15, 19, 3};
    int start = 0;
    int end = 7;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end=mid;
        }

        mid = (start + end) / 2;
        
    }
    cout<<start;
    

    
    return 0;
}