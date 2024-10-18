/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xr = a ^ b;
        int zero = 0;
        while ((xr & 1) == 0 && xr != 0)
        {
            zero++;
            xr >>= 1;
        }
        int ml = 1 << zero;

        ans.push_back(ml);
    }
    for (int a : ans) {
        cout << a << endl;
    }

    return 0;
}
