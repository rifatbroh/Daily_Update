#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    int flag = 0;
    int b = (1<<n);
    for(int i=0;i<b;i++)
    {
        int ans = 0;
        for(int j = 0;j<n;j++)
        {
            if(i &(1<<j))
                ans+=a[j];
            else
                ans-=a[j];
        }
        
        if(ans%360==0){
            flag=1;
            break;
        }
    }
    
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}