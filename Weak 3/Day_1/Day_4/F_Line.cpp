#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //test_case
    int t;
    cin >> t;
    while(t--)
    {
        // input
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long sum = 0;
        vector<long long> v;
        for (int i=0; i<n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n-1-i) - i);
                sum = sum + i;
            }
            else
            {
                v.push_back(i - (n-1-i));
                sum = sum + (n-1-i);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i=0; i<n; i++)
        {
            if (v[i] > 0)
            {
                sum = sum + v[i];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}