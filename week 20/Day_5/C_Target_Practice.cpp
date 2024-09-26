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
#define yes cout << "YES"
#define no cout << "NO"
#define pb push_back
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mp map<int, int>
#define vec(v) v.begin(), v.end()
/* !    !   !   !   !   !   !   */
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    /* _THE^MAXTAN_*/
    char ch[11][11];
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    
    for (int i=1; i<=10; i++){
        for (int j=1; j<=10; j++){
            cin >> ch[i][j];

            if (ch[i][j] == 'X'){
                if (i==1 || i==10 || j==1 || j==10)
                    r1++;
                else if (i==2 || i==9 || j==2 || j==9)
                    r2++;
                else if (i==3 || i==8 || j==3 || j==8)
                    r3++;
                else if (i==4 || i==7 || j==4 || j==7)
                    r4++;
                else
                    r5++;
            }
        }
    }
    int ans = r1*1 + r2*2 + r3*3 + r4*4 + r5*5;
    cout << ans ;

}
/*
        UNIQUE TEST:
        ***********
        + + + + + + + + +
        + - - - - - - - +
        + - + + + + + - +
        + - + - - - + - +
        + - + - + - + - +
        + - + - + - + - +
        + - + - - - + - +
        + - + + + + + - +
        + - - - - - - - +
        + + + + + + + + +
        
        i = (1,1), (1,2), (1,3)
        j = (1,2), (2,2), (3,2)
        
*/
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