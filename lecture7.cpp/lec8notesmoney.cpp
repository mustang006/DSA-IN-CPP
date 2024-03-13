#include <iostream>
using namespace std;

void countnotes(int amount){
int arr[9]={2000,500,200,100,50,20,10,5,1};
int temp=amount;
for (int  i = 0; i < 9; i++)
{
    cout<<arr[i]<<"notes is "<<temp/arr[i]<<endl;
    temp=temp%arr[i];
}





}

int main(){
int amount;
cout<<"enter the amount";
cin>>amount;
int countnotes(amount);



return 0;


}