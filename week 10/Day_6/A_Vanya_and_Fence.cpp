/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int cnt = 0;
    for (int i=0; i<n; i++){
        if (k >= v[i])
            cnt++;
        else
            cnt += 2;
    }
    cout << cnt << endl;
    return 0;
}