/*
    MD Rifat 
    
    country Bangladesh
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int len = INT_MAX;
        for (int i = 0; i <= n - m; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (a[i + j] != b[j]) {
                    cnt++;
                }
            }
            len = min(len, cnt);
        }

        cout << len << endl;
    }

    return 0;
}

