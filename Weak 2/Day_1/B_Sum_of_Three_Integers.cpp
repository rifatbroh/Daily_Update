#include <iostream>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;

    int count = 0;
    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            int Z = S - i - j;
            if (Z >= 0 && Z <= K)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}
