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
    int exit = 0;
    vector<int> v;

    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;

        exit -= a;
        exit += b;
        v.push_back(exit);
    }
    int mx = *max_element(v.begin(), v.end());
    cout << mx << endl;
    return 0;
}