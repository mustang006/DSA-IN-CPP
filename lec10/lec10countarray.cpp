/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int find;
    cout<<"enter the finding no";
    cin>>find;
int arr[7]={1,2,3,4,5,4,4};
int count=0;
for(int i=0; i<7;i++){
  if (find==arr[i]){
       count++;
   }
    
    
    
}
cout<<count;
    return 0;
}
