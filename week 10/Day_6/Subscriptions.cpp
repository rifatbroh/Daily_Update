/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        if (n%6 == 0)
            cout << n*x/6 << endl;
        else
            cout << (n/6 + 1)*x << endl;
    }
    return 0;
}