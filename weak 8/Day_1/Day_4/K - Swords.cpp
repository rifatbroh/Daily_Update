#include<bits/stdc++.h>
using namespace std;
 
const int N = 200 * 1000 + 13;
 
int n, a[N];
 
void read() {	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
 
int gcd(int a, int b) {
	while (a && b) {
		if (a > b) a %= b;
		else b %= a;
	}
	return max(a, b);
}
 
void solve() {
	int ma = *max_element(a, a + n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    	sum += a[i];
    int g = ma - a[0];
    for (int i = 1; i < n; i++)
    	g = gcd(g, ma - a[i]);
    long long ans = (ma * 1ll * n - sum) / g;
    cout << ans << ' ' << g << endl;
}
 
int main() {
    read();
    solve();
}
