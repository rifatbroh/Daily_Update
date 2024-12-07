#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        // input part
        int n;
        cin >> n;
        int flag = 1, val;
        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];

        // logic part
        int ans = 1e9 + 7;;
        for (int i=0; i<n; i++)
        {
            if (b[i] != 0)
                ans = min(ans, a[i] - b[i]);
        }
        if (ans < 0)
            cout << "NO" << endl;
        else
        {
            flag = 1;
            for (int i=0; i<n; i++)
            {
                if (a[i] - b[i] > ans || b[i] != 0 && a[i] - b[i] < ans)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << "YES"<< endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}