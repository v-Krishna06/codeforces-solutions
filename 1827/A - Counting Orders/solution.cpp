#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
 
        long long ans = 1;
 
        for (int i = n - 1, used = 0; i >= 0; i--, used++) {
            int greater = a.end() - upper_bound(a.begin(), a.end(), b[i]);
            int choices = greater - used;
 
            if (choices <= 0) {
                ans = 0;
                break;
            }
 
            ans = (ans * choices) % MOD;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}