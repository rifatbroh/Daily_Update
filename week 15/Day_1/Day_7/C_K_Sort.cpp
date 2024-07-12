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
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll result = 0, val = 0;
 
        priority_queue<ll> p;
        ll x = a[0];
        for (int i = 0; i < n; i++) {
            x = max(x, a[i]);
            if (x > a[i]) {
                p.push(x - a[i]);
            }
        }
 
        if (p.empty()) {
            cout << 0;
        } else {
            result = p.top();
            while (!p.empty()) {
                result += (p.top() - val) * p.size();
                val = p.top();
                p.pop();
            }
            cout << result;
        }
        cout << "\n";
    }
    return 0;
}