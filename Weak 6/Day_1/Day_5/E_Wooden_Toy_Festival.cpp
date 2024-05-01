#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin  >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
      
        // binary search
        int ans = INT_MIN, minn = 0, l = 0, r = INT_MAX;
        while(l <= r)
        {
            int mid = (l+r)/2;
            ans = 0;
            int s = 0;
            for (int i=0; i<n; i++)
            {
                if (abs(a[s] - a[i]) > mid*2)
                {
                    s = i;
                    ans++;
                }
            }
            if (ans >= 3)
            {
                l = mid+1;
            }
            else 
            {
                minn = mid;
                r = mid - 1;
            }
        }
        cout << minn << '\n';
    }
    return 0;
}