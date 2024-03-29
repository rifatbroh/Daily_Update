#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       string s;
       cin >> s;
       int m=0,  e=0, o=0, w=0, cnt = 0;
       int falg = 0;

       if (s[cnt] == 'm' || s[cnt] == 'M')
       {
            while((s[cnt] == 'm' || s[cnt] == 'M') && cnt <n)
            {
                m = 1;
                cnt++;
            }
       }
       else
       {
            falg = 1;
       }
        if (s[cnt] == 'e' || s[cnt] == 'E')
       {
            while((s[cnt] == 'e' || s[cnt] == 'E') && cnt <n)
            {
                e = 1;
                cnt++;
            }
       }
       else
       {
            falg =1;
       }
        if (s[cnt] == 'o' || s[cnt] == 'O')
       {
            while((s[cnt] == 'o' || s[cnt] == 'O') && cnt <n)
            {
                o = 1;
                cnt++;
            }
       }
       else
       {
            falg =1;
       }
        if (s[cnt] == 'w' || s[cnt] == 'W')
       {
            while((s[cnt] == 'w' || s[cnt] == 'W') && cnt <n)
            {
                w = 1;
                cnt++;
            }
       }
       else
       {
            falg =1;
       }
       if(m==1 && e==1 && o==1 && e==1 && cnt==n && falg ==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}