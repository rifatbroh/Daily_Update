
#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> factors;
int main()
{
	ios_base::sync_with_stdio(false);
    int n;
	cin >> n;
	while(n--)
	{
		int s;
		cin >> s;
		for(int i = 2; i*i <= s; i++)
		{
			if(s%i == 0)
				factors[i]++;

			while(s%i ==0)
                s/= i;
		}
		if(s > 1) factors[s]++; 
	}
	int ans = 1;
	for(auto it : factors) 
        ans = max(ans, it.second);
	cout << ans << endl;

	return 0;
}