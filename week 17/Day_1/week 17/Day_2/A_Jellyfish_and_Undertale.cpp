/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        ll ans = b;
        for (int i=0; i<n; i++){
            ans += min(a-1, v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}