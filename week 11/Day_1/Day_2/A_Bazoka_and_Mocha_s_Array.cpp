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
        //vector<int> a(n);
        for(int i=1;i<=n;i++) cin>>a[i];
        int pos=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                pos=i;
                break;
            }
        }
        if(!pos)cout<<"Yes";
        else
        {
            int flag=0;
            for(int i=pos+1;i<=n;i++)
            {
                int j=(i%n)+1;
                if(a[i]>a[j])flag=1;
            }
            if(!flag)cout<<"Yes";
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