#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k;
        while(n!=0)
        {
            // store
            k = n-1;
            // logic
            n = n & (n-1);
        }
        cout << k << endl;
    }
    return 0;
}