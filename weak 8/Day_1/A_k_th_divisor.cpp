#include<bits/stdc++.h>

using namespace std;
int main ()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> div;
    for (long long i=1; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            div.push_back(i);
            if ((n/i) != i)
            {
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(), div.end());

    if (k <= div.size())
        cout << div[k - 1] << '\n';
    else
        cout <<"-1" << '\n';
    return 0;
}