#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout <<"enter the no";
    cin>>n;
    //integer range
    for(int i=0;i<=30; i++){
        int ans=pow(2,i);
        if(ans==n){
            return true;
        }
        return false;
    
    }
}
