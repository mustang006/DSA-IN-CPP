#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+ col-1;
            cout<<ch<<" ";
           
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    return 0;

}