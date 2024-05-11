#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];
        int def[n];
        def[0] = abs(v[1] - v[0]);
        def[n-1] = abs(v[n-1] - v[n-2]);
        for (int i=1; i<=n-2; i++)
        {
            int a = abs(v[i+1] - v[i]);
            int b = abs(v[i] - v[i-1]);
            def[i] = max(a, b);
        }
        int *ans = min_element(def, def+n);
        cout << *ans << endl;
    }
    return 0;
}