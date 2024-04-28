#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        // if (k%n != 0)
        // {
        //     cout << k <<endl;
        // }
        int ans = (k-1)/(n-1);
        cout << ans+k <<endl;
    }
    return 0;
}