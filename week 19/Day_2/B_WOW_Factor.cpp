/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll cnt = 0, ans = 0, mx = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i] == 'v' && s[i+1] == 'v'){
            cnt++;
            ans += mx;
        }
        else if (s[i] == 'o')
            mx += cnt;
    }
    cout << ans << endl;
    return 0;
}