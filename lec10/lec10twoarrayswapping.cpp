#include<iostream>
using namespace std;
int main(){
int array1[5]={1,2,3,4,5};
int array2[5]={11,22,33,44,55};
for (int  i = 0; i < 5; i++)
{
    int temp=array1[i];
    array1[i]=array2[i];
    array2[i]=temp;
}
for (int  i = 0; i < 5; i++)
{
cout<<"array 1 element"<<i+1-1<<"th"<<" :: " <<array1[i]<<"  "<<"array 2 element" <<i+1-1<<"th"<<" :: "<<array2[i] <<endl;/* code */
  /* code */
}



return 0;


}