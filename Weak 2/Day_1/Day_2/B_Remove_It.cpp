#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, val;
    cin >> n >> val;
    int a[n];

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int size = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i] != val)
        {
            // remove the elements
            a[size] = a[i];
            size++;
        }
    }
    for (int i=0; i<size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
