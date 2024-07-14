/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    unordered_map<int, int> sum_count;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = v[i] + v[j];
            sum_count[sum]++;
        }
    }

    int max_pairs = 0;
    for (const auto& p : sum_count) {
        if (p.second > max_pairs) {
            max_pairs = p.second;
        }
    }
    cout << max_pairs << endl;
    return 0;
}