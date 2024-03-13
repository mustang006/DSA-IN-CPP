#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n;
    cout <<"enter the no";
    cin>>n;
    int ans=0;
    int i=0;
    int max=pow(2,31)-1;
    int min=pow(-2,31);

    while(n!=0){
        int digit=n%10;
        if((ans>max/10) || (ans< min/10)){
           cout<<0;
        }
        ans=(ans*10)+digit;
        n=n/10;

    }
    cout<<ans;
    return 0;

}