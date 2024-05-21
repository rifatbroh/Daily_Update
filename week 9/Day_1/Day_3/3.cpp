/*
Problem Name: Concert Tickets
Problem Link: https://cses.fi/problemset/task/1091
Author: Sachin Srivastava (mrsac7)
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        tickets.insert(x);
    }
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        auto it = tickets.upper_bound(x);
        if(it == tickets.begin()){
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

