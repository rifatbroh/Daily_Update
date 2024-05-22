#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    // team game
	    int a, b;
	    cin >> a >> b;
	    int m = max(a%3 , b%3);

	    cout << m << endl;
	}

}
