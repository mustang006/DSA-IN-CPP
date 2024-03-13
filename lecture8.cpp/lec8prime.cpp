#include<iostream>
using namespace std;
bool isprime(int n){
    for (int  i = 2; i<n; i++)
    {if(n%i==0){
        return 0;
    }

    }
return 1;    
}
int main(){

int n;
cout<<"enter the no";
cin>>n;
if (isprime(n)){
    cout<<"it is a prime no";
}
else
{
    cout<<"it is not a prime";
    /* code */
}



return 0;

}