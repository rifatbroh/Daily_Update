#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int q;
    cin >> q;
    while(q--)
    {
        int a, b, n, s;
        cin >>a>>b>>n>>s;
        if (s % n <= b && 1ll * a * n + b >= s)
			cout << "YES\n";
		else
			cout << "NO\n";
    }
    return 0;
}