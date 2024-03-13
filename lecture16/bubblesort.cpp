// bubble sort!
#include <iostream>
using namespace std;
int main()

{
    int n;

    cout << "enter the value of n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value of index no of value is" << i;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }

    for (int i = 1; i < n; i++)
    {
        // for round 1;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }

    return 0;
}
