/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    ll cnt = 0;

    while(t--){
        int a, b;
        cin >> a >> b;

        if (b - a >= 2){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
