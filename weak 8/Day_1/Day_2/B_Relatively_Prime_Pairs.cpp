
#include <iostream>

using namespace std;
using ll = long long;

int main () {
   ll l, r;
   cin >> l >> r;
   cout << "YES" << endl; 
   //for (ll i = l; i < r + 1; i += 2)
   for (ll i= l; i<r-l+1/2; i++)
      cout << i << ' ' << i + 1 << endl;
   return 0;
}