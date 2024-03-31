#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        int mat[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> mat[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int sum = 0;
                // first step
                for (int k = i, l = j; k < r && l >= 0; k++, l--) {
                    sum += mat[k][l];
                }
                // second step
                for (int k = i, l = j; k >= 0 && l < c; k--, l++) {
                    sum += mat[k][l];
                }
                // third step
                for (int k = i, l = j; k < r && l < c; k++, l++) {
                    sum += mat[k][l];
                }
                // fourth step
                for (int k = i, l = j; k >= 0 && l >= 0; k--, l--) {
                    sum += mat[k][l];
                }
                sum -= mat[i][j] * 3;
                mx = max(mx, sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
