/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt_1 = 0, cnt_2 = 0;

        for (int i=0; i<s.size(); i++)
        {
            if (s[i] == 'A')
                cnt_1++;
            else
                cnt_2++;
        }
        if (cnt_1 > cnt_2)
            cout <<"A"<<endl;
        else
            cout <<"B"<<endl;
    }
    return 0;
}