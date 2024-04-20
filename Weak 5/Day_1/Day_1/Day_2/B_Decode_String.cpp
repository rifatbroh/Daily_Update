#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s, ans;
        cin>> n >> s;
        for (int i=n-1; i>=0; i--){
            if (s[i]=='0'){
                /*
                    150
                    0 => s[i-2] == 1 * 10 => 10
                    5 => s[i-1] == 5 ==> 10+5 => 15
                */
                int d = (s[i-2]-'0')*10 + (s[i-1]-'0');
                ans+=('a'+d-1);
                // move two step because of 0
                i-=2;
            }
            else{
                int d = s[i]-'0';
                /*
                    when  d = 21;
                    -> 'a' + 21 - 1;
                    -> 97 + 20;
                    -> 177;
                    -> -> u 
                */
                ans+=('a'+d-1);
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    return 0;
}