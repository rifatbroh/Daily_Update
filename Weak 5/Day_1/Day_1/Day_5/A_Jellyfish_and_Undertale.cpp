#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n = 0, a = 0, b = 0;
ll ans = 0;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> n;
	    ans = b;
	    for(int i = 0, x = 0 ; i < n ; i ++){
		    cin >> x;
		    ans += min(a - 1, x);
	    }
	    cout << ans << endl;
    }
	return 0;
}