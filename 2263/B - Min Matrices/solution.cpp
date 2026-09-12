#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        if (k < n || k >= 2 * n) {
            cout << -1 << '
';
            continue;
        }
 
        vector<vector<int>> a(n, vector<int>(n));
        int common = 2 * n - k;
        int val = 1;
 
        a[0][0] = val++;
 
        for (int i = 1; i < common; i++)
            a[i][i] = val++;
 
        for (int i = common; i < n; i++)
            a[i][0] = val++;
 
        for (int j = common; j < n; j++)
            a[0][j] = val++;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 0)
                    a[i][j] = val++;
            }
        }
 
        for (auto &row : a) {
            for (int x : row)
                cout << x << ' ';
            cout << '
';
        }
    }
 
    return 0;
}