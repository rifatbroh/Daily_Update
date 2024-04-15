#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        // final value store
        long long int ans = 0;
        for (long long int i=30; i>=0; i--)
        {
            long long int c = 0;
            for (long long int j=0; j<n; j++)
            {
                if (a[j] >= pow(2,i) && a[j] < pow(2, (i+1)))
                {
                    c++;
                }
            }
            ans+= (c*(c-1))/2;
        }
        cout << ans << endl;
    }
    return 0;
}