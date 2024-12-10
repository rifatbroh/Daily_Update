/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a, b;
    for (ll i=1; i<=n; i++){
        if (i%2 == 1){
            a.push_back(i);
        }
        else{
            b.push_back(i);
        }
    }
    vector<ll> merge;
    merge.insert(merge.end(), a.begin(), a.end());
    merge.insert(merge.end(), b.begin(), b.end());

    cout << merge[k-1] << endl;
    
    return 0;
}