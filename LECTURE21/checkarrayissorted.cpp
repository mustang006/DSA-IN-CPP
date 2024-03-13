#include <iostream>

using namespace std;
int main()
{
    int nums[5]={1,2,3,4,5};
    
        int count = 0;
        int n = 5;
        for (int i = 1; i <= n; i++)
        {
            if (nums[i - 1] > nums[i])
            {count++;
            }
        }
        if (nums[n-1]>nums[1])
        {
            count++;
        }
        
        if(count<=1){
            
            cout<<"array is sorted";
        }
        else{
            cout<<"array is unsorted";
        }
        
    return 0;
}
