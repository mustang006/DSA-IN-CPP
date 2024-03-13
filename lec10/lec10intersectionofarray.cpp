#include<iostream>
using namespace std;
int main(){
int arr[6]={11,2,3,4,5,11};
int brr[6]={6,7,8,9,11,22};

for (int i = 0; i < 6; i++)
{
    int element=arr[i];
for (int j = 0; j < 6; j++)
{
   if (element==brr[j])
   {//ye no isliye kuki ye or kisi se match na ho
    brr[j]=-8464484;
    cout<<element;
    break;
   }
   
}
cout<<endl;

}

return 0;





}