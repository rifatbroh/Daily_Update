#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k,q;
        cin >> n >> k >> q;
        long long a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        long long res = 0, cnt = 0,x;
        for (int i=0; i<n; i++)
        {
            if (a[i] <= q)
            {
                cnt++;
                if (i == n-1 || a[i+1] >q)
                {
                    if (cnt >=k)
                    {
                        x = cnt - k+1;
                        long long add = (x*(x+1))/2;
                        res += add;
                    }
                    cnt = 0;
                }
            }
            
        }
        cout << res << endl;
    }
    return 0;
}