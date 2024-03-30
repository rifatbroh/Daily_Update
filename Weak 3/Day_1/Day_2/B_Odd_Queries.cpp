#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],q,sum=0,pref[200005];
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n >> q;
        int a[n];
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
            sum+=a[i];
            pref[i]=pref[i-1];
            pref[i]+=a[i];
        }
        while(q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = pref[n] - (pref[r]-pref[l-1])+k*(r-l+1);
            if (ans%2==1)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }
    }
    return 0;
}