#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        // operation
        long long count = 0;
        long long odd =0;
        int i=0, j=0;
        while(j < n)
        {
            if (a[j]%2 == 1)
            {
                odd++;
            }
            if(j-i+1 == k)
            {
                if (odd >= 1)
                {
                    count++;
                }
                if (a[i]%2 == 1)
                {
                    odd--;
                }
                i++;
            }
            j++;
        }
        cout << count << endl;
    }
    return 0;
}