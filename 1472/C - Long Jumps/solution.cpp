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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<long long> dp(n, 0);
 
        long long ans = 0;
 
        for (int i = n - 1; i >= 0; i--) {
 
            dp[i] = a[i];
 
            int next = i + a[i];
 
            if (next < n) {
                dp[i] += dp[next];
            }
 
            ans = max(ans, dp[i]);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}