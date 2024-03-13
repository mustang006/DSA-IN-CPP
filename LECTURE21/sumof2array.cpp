#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    int a1[n1] = {1, 2, 3};
    int a2[n2] = {4, 5, 6};
    int m = max(n1, n2);
    int ans[m];
    int i = n1 - 1;
    int j = n2 - 1;
    int k = m - 1;
    int carry = 0;
    while (k >=0)
    {

        int sum = carry;
        if (i>=0)
        {
            sum +=a1[i];
        }
        if (j>=0)
        {
            sum += a2[j];
        }
        

        int r=sum%10;
        int q=sum/10;
        ans[k]=r;
        carry=q;
        i--;
        j--;
        k--;
    }
    if (carry!=0)
    {cout<<carry;
        /* code */
    }
    for (int  i = 0; i < m; i++)
    {cout<<ans[i]<<" ,";
        /* code */
    }
    
}
