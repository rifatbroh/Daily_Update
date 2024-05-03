#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
   	    int n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for (int i=0; i<n; i++) cin >> a[i];

        ll l = 0, r = 1e10, mid = 0;
        while(l<r)
        {
            mid=(l+r+1)/2;
            ll ans=0;
            // n times
            for(int i = 0; i< n; i++)
            {
                ans+=max(mid-a[i],(ll)0);
            }
            if(ans<=x)
                l=mid;
            else
                r=mid-1;
        }
        cout<<l<< endl;
    }
    return 0;
}