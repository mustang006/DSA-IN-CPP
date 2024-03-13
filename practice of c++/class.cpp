#include <iostream>
#include <string>
using namespace std;
class myclass{
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    myclass myobj;
    myobj.brand="bmw";
    myobj.model="X50";
    myobj.year=19655;
    myclass myobj2;
    myobj2.brand="ford";
    myobj2.model="mustang";
    myobj2.year=1954;
    cout<<"myobj.brand  "<<"myobj.model"  <<myobj.year<<"\n";
    cout<<myobj2.brand  <<myobj2.model  <<myobj2.year<<"\n";

return  0;
    

}
