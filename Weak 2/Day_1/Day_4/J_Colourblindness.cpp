#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--)
    {
		int n;
        cin >> n;
		string a, b;
        cin >> a >> b;
		int flag = 1;

		for(int i = 0; i < n; i++)
        {
			if(a[i] == 'R' && b[i] != 'R')
            {
				flag = 0;
				break;
			}
            else if(a[i] != 'R' && b[i] == 'R')
            {
			    flag = 0;
				break;
			}
		} 
		if(flag)
            cout << "YES\n";
		else
            cout << "NO\n";
	}
}