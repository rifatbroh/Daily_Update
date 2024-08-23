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
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        if (n%2 == 0)
            cout << v[n/2] <<endl;
        else
            cout << v[n/2] << endl;
    }
    return 0;
}