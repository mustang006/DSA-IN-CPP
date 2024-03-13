#include<iostream>
using namespace std;
int getmax(int num[], int n){
int max=num[0];

for (int i = 0; i < n; i++)
{
if (num[0]<num[i])
{
    max=num[i];
    
}

}

return max;


}
int getmin(int num[],int n){
int min=num[0];
for (int  i = 0; i <n; i++)
{
    if (num[0]>num[i])
    {
        min=num[i];
    }
    
}
return min;








}

int main (){



//kitne element doge
int size;
cout<<"enter the size of an array";
cin>>size;
//konse element dog
int num[100];

for (int i = 0; i<size; i++)
{cout<<"enter"<<i+1<<"number"<<":";
    cin>>num[i];
}
cout<<"maximum value is"<<getmax(num,size)<<endl;;
cout<<"maniimum value is"<<getmin(num,size);

return 0;
}