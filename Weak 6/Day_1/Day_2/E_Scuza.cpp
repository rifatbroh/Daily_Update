#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> arr;
        arr.push_back(0);
        vector<int> pref;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(arr.back()+x);
            if(i == 0)
            {
                pref.push_back(x);
            }
            else
            {
                pref.push_back(max(pref.back(), x));
            }
        }
        for (int i=0; i<q; i++)
        {
            int kk;
            cin >> kk;
            int ans = upper_bound(pref.begin(), pref.end(), kk)- pref.begin();
            cout << arr[ans] << " ";
        }
        cout << endl;
    }
    return 0;
}
