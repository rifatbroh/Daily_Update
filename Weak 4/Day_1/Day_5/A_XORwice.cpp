#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int ans, min_value;
        if (a == b)
        {
            cout <<"0"<< endl;
            continue;
        }
        ans = max(a, b);
        // XOR opper
        min_value = (a^ans)+ (b^ans);
        cout << min_value << endl;
    }
    return 0;
}