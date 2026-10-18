#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            int l, r;
            cin >> l >> r;  // m = 0 in D1
        }
 
        if (n == 1) {
            cout << 0 << "
";
            continue;
        }
 
        int k = (n + 1) / 2;
        cout << k << "
";
        for (int j = 1; j <= k; j++) {
            cout << j << " " << min(j + k - 1, n) << "
";
        }
    }
    return 0;
}