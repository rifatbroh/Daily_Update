/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

void seive(int n){
    vector<int> prime(n+1, 0);

    for (int i=2; i<=n; i++){
        if (prime[i] == 0){
            for (int j=i; j<=n; j+=i){
                prime[j]++;
            }
        }
    }
    int cnt = 0;
    for (int i=2; i<=n; i++){
        if (prime[i] == 2){
            cnt++;
        }
    }
    cout << cnt ;
}

int main()
{
    int n;
    cin >> n;

    seive(n);
    return 0;
}