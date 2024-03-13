#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
            /* code */
        }
        if (key > mid)
        {
            start = mid + 1;
        }
        else//key<mid
        {

            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int key;
    cout<<"enter teh key";
    cin>>key;
    int evenindex=binarysearch(even,6,key);
    int index=binarysearch(odd,5,8);

    cout<<"index of "<<key<<"is"<<evenindex<<endl;
    return 0;

}