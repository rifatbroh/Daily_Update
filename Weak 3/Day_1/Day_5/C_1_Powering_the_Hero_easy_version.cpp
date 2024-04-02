#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // testcase
    int t;
    cin >> t;
    while(t--)
    {
        // input;
        int n;
        cin >> n;
        int a[n];
        long long  sum = 0;
        priority_queue<int> pq;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        // working procedure
        for (int i=0; i<n; i++)
        {
            // bonus card
            if (a[i] > 0)
            {
                pq.push(a[i]);
            }
            else
            {
                // hero card
                if (!pq.empty())
                {
                    int b = pq.top();
                    sum = sum + b;
                    // value delate korte hobe
                    pq.pop();
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}