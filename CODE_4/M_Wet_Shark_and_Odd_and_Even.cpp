#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n, total = 0, MIN = LLONG_MAX;
    cin >> n;
    for (long long int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        total = total+a;
        if (a%2 != 0)
        {
            MIN = min(MIN,(long long)a);
        }
    }
    if (total % 2 == 0)
    {
        cout << total << endl;
    }
    else
    {
        cout << total - MIN << endl;
    }
    return 0;
}