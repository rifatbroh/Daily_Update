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
    for (int i=0; i<n; i++) cin >> v[i];

    auto mx = max_element(v.begin(), v.end());
    auto mn = min_element(v.begin(), v.end());

    iter_swap(mx, mn);

    for (int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}