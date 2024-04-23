#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	
	int t;
    cin >> t;
	while (t--)
    {
		int n;
		cin >> n;
		ll cost = 0;
		for (int i = 0; i < n; i++)
        {
			ll x;
            cin >> x;
			cost = max(0LL, cost + x);
		}
		cout << cost << endl;
	}
}