/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include<bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ld long double
#define yes "YES"
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    /*Lets play*/
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    /*
        --> Reduce TLE
    */
    vector<int> odd, even;
    for  (int i=0; i<n; i++){
        if (v[i]%2 == 1)
            odd.push_back(i+1);
        else
            even.push_back(i+1);
    }
    if (odd.size() >= 3){
        cout << "YES\n";
        cout << odd[0] << " " << odd[1] << " " << odd[2];
    }
    else if (even.size() >= 2 && odd.size()!=0){
            cout << "YES\n";
            cout << even[0] << " " << even[1] << " " << odd[0];
    }
    else
        cout << "NO";
}
int main()
{
    OLD_MAXTAN
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}