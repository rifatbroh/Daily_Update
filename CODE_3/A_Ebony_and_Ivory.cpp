#include<bits/stdc++.h>
using namespace std;
// const int N = 10e5;
int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    int flag = 0;

    for (int i=0; i<10000; i++)
    {
        for (int j=0; j<10000; j++)
        {
            if (a*i + b*j == c)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}