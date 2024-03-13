#include <iostream>
#include <vector>
using namespace std;
int main()
{


    vector<int> v;
    vector<int > a(5,1);
/// vector ko copy karna dusre vector me
vector<int> abhi(a);
for (int i :abhi)
{
    cout<<i<<" ";
}cout<<endl;


    cout << "capacity -->" << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity -->" << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity -->" << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity -->" << v.capacity() << endl;
    cout << "size " << v.size() << endl;
    cout << "front element" << v.front() << endl;
    cout << "last element" << v.back();
    cout<<endl;
    ///pop back last elemt ko nikaal deata hai
cout<<"before pop back"<<endl;
for (int i: v)
{
    cout<<i<<" ";
}
cout<<endl;
v.pop_back();
cout<<"after pop back";
for (int i: v)
{
    cout<<i<<" ";
    
}
cout<<"before clear size"<<v.size()<<endl;
v.clear();
cout<<"after clear size"<<v.size()<<endl;

return 0;
}




