#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    int count=1;
    int row=1;
    char ch='A';
    
        int col=1;
    while(row<=n){
        int col=1;
        while(col<=n){
    char ch='A' + row+ col-2;
            
            cout<<ch<<" ";
           ch=ch+1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    return 0;

}