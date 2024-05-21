#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int val = 2;

    if (n == 2 || n == 3) {
      cout << "NO SOLUTION";
      return 0;
    }

    while(val <= n) {
      cout << val << " ";
      value += 2;
    }
    val = 1;
    while(val <= n) {
      cout << val << " ";
      val += 2;
    }
    return 0;
}
