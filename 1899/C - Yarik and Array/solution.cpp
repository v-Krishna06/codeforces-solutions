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
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        long long cur = a[0];
        long long ans = a[0];
 
        for (int i = 1; i < n; i++) {
 
            if (abs(a[i]) % 2 == abs(a[i - 1]) % 2) {
                // Same parity
                cur = a[i];
            }
            else {
                // Different parity
                cur = max(a[i], cur + a[i]);
            }
 
            ans = max(ans, cur);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}