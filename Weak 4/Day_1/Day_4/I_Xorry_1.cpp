#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a;
        cin >> a;
        long long x=a, cnt = 0;
        while(x>1)
        {
            x = x/2;
            cnt++;
        }
        long long ans = pow(2,cnt);
        cout << a-ans <<" "<< ans<<endl;
    }
    return 0;
}