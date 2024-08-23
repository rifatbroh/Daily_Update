/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include<bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ld long double
#define yes "YES"
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    /*Lets play*/
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.front()!='9') {
            for(char c:s) {
                int temp = c-'0';
                cout<<9-temp;
            }
        }
        else {
            reverse(s.begin(),s.end());
            stack<int> st;
            int hate_ase = 0;
            for(char c:s) {
                int temp = c-'0';
                temp += hate_ase;
                hate_ase = 0;
                int x = 1;
                if(x<temp) {
                    x+=10;
                    hate_ase=1;
                }
                st.push(x-temp);
            }
            while(!st.empty()) {
                cout<<st.top();
                st.pop();
            }
}
}
int main()
{
    OLD_MAXTAN
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}