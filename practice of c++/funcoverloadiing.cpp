#include<iostream>
using namespace std;
int abhi(int x,int y){
    return x+y;
}
double abhi(double x,double y){
    return x+y;
}
int main()
{
    int mynum=abhi(5,9);
cout<<"INT"<<mynum<<"\n";
double mynum1=abhi(4.5,5.5);
cout<<"double"<<mynum1;
return 0;
}