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

const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int a[MAX_N];
void solve()
{
    /*Lets play*/
        int n;
        cin>>n;
        int fl=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==1)fl=1;
        }
        if(fl)cout<<"Yes";
        else{
            sort(a+1,a+1+n);
            vector<int> b;
            for(int i=2;i<=n;i++)
                if(a[i]%a[1])b.push_back(a[i]);
            sort(b.begin(),b.end());
            n = b.size();
            for(int j=1;j<n;j++){
                if(b[j]%b[0]){
                    fl=1;
                    break;
                }
            }
            if(!fl)cout<<"Yes";
            else cout<<"No";
        }
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