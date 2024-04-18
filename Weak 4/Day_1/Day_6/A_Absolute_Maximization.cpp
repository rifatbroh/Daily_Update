#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t, s1, s2;
    
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>a(n);
        for(ll i=0; i<n; i++)cin>>a[i];
        s1=s2=a[0];
        
        for(ll i=1; i<n; i++){
            s1=s1|a[i];
            s2=s2&a[i];
        }
        
        cout<<s1-s2<<endl;
    }
    
}