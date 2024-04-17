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
        long long a[n], x, y;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        x =*max_element(a, a+n);
        int cnt1 =0, cnt2 = 0;
        while(x>0)
        {
            x/=2;
            cnt1++;
        }
        y = pow(2, cnt1-1);
        for (int i=0; i<n; i++)
        {
            if (a[i] >= y) cnt2++;
        }
        if (cnt2 % 2 == 1)
            cout << (cnt2/2)+1 << endl;
        else
            cout << cnt2/2 << endl;
    }
    return 0;
}