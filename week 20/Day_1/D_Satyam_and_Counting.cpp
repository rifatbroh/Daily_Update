/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x, y;
        set<pair<int, int>> v;
        for (int i=0; i<n; i++){
            
            cin >> x >> y;
            v.insert({x,y});
        }
        ll tri_1 = 0, tri_2 = 0;
        for (auto t : v){
            x = t.first;
            y = t.second;
            if (v.find({x, 1-y}) != v.end())
                tri_1 += n-2;
            if (v.find({x-1, 1-y}) != v.end() && v.find({x+1, 1-y}) != v.end())
                tri_2++;
        }
        tri_1 /=2;
        cout << tri_1 + tri_2 << endl;
    }
    return 0;
}