#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
for (int i = 1; i <=n; i++)
{
    for (int k = 1; k <=n-i+1; k++)
    {
       cout<<"  ";
    }
    
    for (int j = 1; j <= i; j++)
    {cout<<j<<"";
        if (j!=i)
        {
           cout<<" * ";
        }
       
        
    }
    cout<<endl;
    
}



return 0;

}