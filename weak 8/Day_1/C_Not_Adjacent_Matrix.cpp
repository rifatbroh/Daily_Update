/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if
            (n==2)cout<<-1<<endl;
        else{
            int ar[n][n];
            int x=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ar[i][j]=x;
                    x++;
                }
            }
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n;j++){
                    if(j%2==1){
                        swap(ar[i][j],ar[i+1][j]);
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++)
                    cout<<ar[i][j]<<" ";
                cout<<endl;
            }
        }
    }
}