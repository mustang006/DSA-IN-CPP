#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    
    int i=1;
    int count=1;
    while(i<=n){

    int space=1;
    while(space<=n-i)
    {
        cout<<" ";
        space=space+1;

    }
    int j=1;
    
    while(j<=i){
        cout<<count;
        count=count+1;
        j=j+1;

    }
    i=i+1;
    cout<<endl;
    
    }
    return 0;
}