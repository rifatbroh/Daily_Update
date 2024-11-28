/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 1;

    for (int i=0; i<n; i++) cin >> v[i];
    
    sort(v.rbegin(), v.rend());
    for (int i=0; i<n-1; i++){
        if (v[i] == v[i+1]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}