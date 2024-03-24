#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, m, minn = 0;
        cin >> n >> m;
        
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < m; i++)
        {
            minn += abs(v[0][i] - v[1][i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = 0;
                for (int k = 0; k < m; k++)
                {
                    diff += abs(v[i][k] - v[j][k]);
                }
                minn = min(minn, diff);
            }
        }
        
        cout << minn << endl;
    }
    
    return 0;
}
