/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
    {
		int s, e;
		cin >> s >> e;
		v.push_back({s, 1});
		v.push_back({e, -1});
	}

	sort(v.begin(), v.end());

	int curr = 0;
	int mx = 0;
	for (const pair<int, int> &t : v) {
		curr += t.second;
		mx = max(mx, curr);
	}

	cout << mx << endl;
}