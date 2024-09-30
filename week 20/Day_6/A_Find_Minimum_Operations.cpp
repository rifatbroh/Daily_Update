/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int find_op (int n, int k){
    if (k==1)
        return n;
    int cnt = 0;
    while(n)
    {
        cnt += n%k;
        n /=k;
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << find_op(n, k) << endl;
    }
    return 0;
}