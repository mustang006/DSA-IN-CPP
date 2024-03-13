#include <iostream>
#include <vector> 
using namespace std;
void rotate(int nums[],int k){


    int n=5;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=nums[i];
    }
    
    for(int i=0;i<n;i++){
        nums[i]=temp[i];
    }
    
}
void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ,";
    }

}

int main()
{int nums[5]={1,2,3,4,5};
rotate(nums,2);
  print(nums,5);

    return 0;
}
