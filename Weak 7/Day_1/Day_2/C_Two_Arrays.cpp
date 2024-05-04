#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n],br[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)cin>>br[i];
        sort(ar,ar+n);
        sort(br,br+n);
        int flag=0;
        for(int i=n-1;i>=0;i--)
        {
            if(ar[i]>br[i]  || br[i]-ar[i]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}