# include <iostream>
#include<string>
using namespace std;
class cars{
    public:
    string brand;
    string model;
    int year;
cars(string x, string y, int z){
    brand =x ;
    model=y;
    year=z;
}
};
int main(){
    cars carsobj1("bmw","volvo",1965);
cars carsobj2("ford","mustang",145);
cout<<carsobj1.brand<<carsobj1.model<<carsobj1.year<<"\n";
cout<<carsobj2.brand<<carsobj2.model<<carsobj2.year<<"\n";
return 0;
}
