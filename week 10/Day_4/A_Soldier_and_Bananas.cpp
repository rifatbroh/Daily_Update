/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cnt = 0;
    for (int i=1; i<=w; i++){
        cnt = cnt + (i*k);
    }
    if (cnt > n){
        cout << cnt - n << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}