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
        int x=n*(n-1)/2,arr[x];
        for(int i=0;i<x;i++)
            cin>>arr[i];
        sort(arr,arr+x);
        for(int i=0;i<x;i+=--n)
            cout<<arr[i]<<' ';
        cout<<"1000000000\n";
    }
}