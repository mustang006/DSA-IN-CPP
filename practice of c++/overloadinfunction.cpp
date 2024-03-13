#include<iostream>
using namespace std;
int abhifuncInt(int x,int y){
    return x+y;


}
double abhifuncdouble(double x, double Y)
{
    return x+Y;
}
int main(){
    int mynum=abhifuncInt(5,6);
    int mynum2=abhifuncdouble(2.4,3.5);
    cout<<"Int:"<<mynum<<"\n";
    cout<<"double;"<<mynum2;
    return 0;



}
