#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> count;
        set<int> b;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
            b.insert(a[i]);
            b.insert(a[i] + 1);
        }
        int s = 0;
        int ans = 0;
        for (auto x : b)
        {
            int y = count[x];
            ans += max(0, y - s);
            s = y;
        }
        cout << ans << endl;
    }
    return 0;
}