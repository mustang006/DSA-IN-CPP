#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no";
    cin >> n;
    int count = 1;
    int i = 1;
    while (i <= n)
    {
        // ist step
        int j = 1;

        while (j <= n - i + 1)
        {
            cout << j;
            count = count + 1;
            j = j + 1;
        }
        while(j<=(i-1)*2){
            cout<<"*";
            j=j+1;

        }
        j=n-1+1;
        while(j>=1){
            cout<<j<<"";
            j=j-1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}