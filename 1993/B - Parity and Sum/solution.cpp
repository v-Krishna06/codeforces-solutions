#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    int odd = 0, even = 0;
    long long mxOdd = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
            mxOdd = max(mxOdd, a[i]);
        }
    }
 
    if (odd == 0 || even == 0) {
        cout << 0 << '
';
        return;
    }
 
    sort(a.begin(), a.end());
 
    int ans = even;
 
    long long curr = mxOdd;
 
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (a[i] < curr) {
                curr += a[i];
            } else {
                ans++;
                break;
            }
        }
    }
 
    cout << ans << '
';
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}