#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int len = 1;
        int ans = 0;
 
        while (len < n) {
            if (a[n - len - 1] == a[n - 1]) {
                len++;
            } else {
                ans++;
                len = min(n, 2 * len);
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}